import pandas as pd
import torch
import torch.nn.functional as F
from torch_geometric.data import Data
from torch_geometric.nn import GCNConv
from torch import nn
from torch.optim import Adam
from sklearn.preprocessing import StandardScaler

# Step 1: Load the dataset from CSV file
df = pd.read_csv('/home/mmayon/Research/OMNETPP/Project_GCN_LSTM_HO/simu5G/src/Datafiles/dataStorage.csv', sep=",")  # Adjust file path
print(df.head())

# Step 2: Normalize features for TowerLoad (Node feature) and create edge weights (RSSI and Distance)
scaler = StandardScaler()
features = scaler.fit_transform(df[['TowerLoad', 'RSSI', 'Distance']].values)  # Normalizing all three columns
edge_weights = []

# Create a mapping from VehicleID to index
vehicle_to_index = {vehicle_id: idx for idx, vehicle_id in enumerate(df['VehicleID'].unique())}

# Create a mapping from TowerID to index
tower_to_index = {tower_id: idx + len(vehicle_to_index) for idx, tower_id in enumerate(df['TowerID'].unique())}

# Node features only include TowerLoad for tower nodes
node_features = []

# Create features for tower nodes (TowerLoad only)
for tower in df['TowerID'].unique():
    tower_data = df[df['TowerID'] == tower]
    avg_load = tower_data['TowerLoad'].mean()  # Take the mean of TowerLoad
    node_features.append([avg_load])

# Create dummy features for vehicle nodes (no weight for vehicle nodes)
for vehicle in df['VehicleID'].unique():
    node_features.append([0.0])  # Vehicle nodes have no feature (set to 0)

# Convert node features to tensor
node_features = torch.tensor(node_features, dtype=torch.float)

# Create edges and edge weights (RSSI and Distance)
edge_index = []

for _, row in df.iterrows():
    vehicle_index = vehicle_to_index[row['VehicleID']]  # Use VehicleID to get index
    tower_index = tower_to_index[row['TowerID']]  # Use TowerID to get index
    edge_index.append([vehicle_index, tower_index])

    # Create edge weights based on RSSI and Distance
    edge_weight = torch.tensor([row['RSSI'], row['Distance']], dtype=torch.float)
    edge_weights.append(edge_weight)

# Convert edge index and weights to tensors
edge_index = torch.tensor(edge_index, dtype=torch.long).t().contiguous()
edge_weights = torch.stack(edge_weights, dim=0)

# Check if edge_index is empty
if edge_index.size(1) == 0:
    print("Edge index is empty. Check vehicle and tower node IDs.")
else:
    print("Edge index shape:", edge_index.shape)

# Create PyG data object
data = Data(x=node_features, edge_index=edge_index, edge_attr=edge_weights)
print(data)

# Step 3: Define the GCN and modified LSTM Model
class GCN(nn.Module):
    def __init__(self):
        super(GCN, self).__init__()
        self.conv1 = GCNConv(1, 16)  # Input features: 1 (TowerLoad)
        self.conv2 = GCNConv(16, 32)

    def forward(self, data):
        x, edge_index = data.x, data.edge_index
        x = self.conv1(x, edge_index)
        x = F.relu(x)
        x = self.conv2(x, edge_index)
        return x

class LSTM(nn.Module):
    def __init__(self):
        super(LSTM, self).__init__()
        self.lstm = nn.LSTM(32, 16, batch_first=True)  # Input size from GCN output
        # Separate output layers for each variable
        self.fc_tower_load = nn.Linear(16, 1)
        self.fc_rssi = nn.Linear(16, 1)
        self.fc_distance = nn.Linear(16, 1)

    def forward(self, x):
        x, _ = self.lstm(x)
        # Predict each target separately using the last output of LSTM
        tower_load_pred = self.fc_tower_load(x[:, -1, :])
        rssi_pred = self.fc_rssi(x[:, -1, :])
        distance_pred = self.fc_distance(x[:, -1, :])
        return tower_load_pred, rssi_pred, distance_pred

# Step 4: Prepare data for training
def create_sequences(data, seq_length=3):
    sequences = []
    labels = {'tower_load': [], 'rssi': [], 'distance': []}
    for i in range(len(data) - seq_length):
        seq = data[i:i + seq_length]
        label = data[i + seq_length]
        sequences.append(seq)
        labels['tower_load'].append(label[0])  # Tower load
        labels['rssi'].append(label[1])       # RSSI
        labels['distance'].append(label[2])   # Distance
    return torch.stack(sequences), labels

# Prepare sequences and labels
sequences, labels = create_sequences(torch.tensor(features, dtype=torch.float))
labels = {k: torch.tensor(v, dtype=torch.float).unsqueeze(1) for k, v in labels.items()}

# Step 5: Training the Model
# Instantiate the models
gcn = GCN()
lstm = LSTM()

optimizer = Adam(list(gcn.parameters()) + list(lstm.parameters()), lr=0.0001)  # Lower learning rate
loss_fn = nn.MSELoss()

for epoch in range(100):  # Example number of epochs
    gcn.train()
    optimizer.zero_grad()
    
    # Get GCN output
    gcn_output = gcn(data)
    
    # Reshape GCN output for LSTM input
    lstm_input = gcn_output.unsqueeze(0).repeat(sequences.size(0), 1, 1)
    tower_load_pred, rssi_pred, distance_pred = lstm(lstm_input)

    # Calculate separate losses for each target
    loss_tower_load = loss_fn(tower_load_pred, labels['tower_load'])
    loss_rssi = loss_fn(rssi_pred, labels['rssi'])
    loss_distance = loss_fn(distance_pred, labels['distance'])
    
    # Total loss
    total_loss = loss_tower_load + loss_rssi + loss_distance
    total_loss.backward()
    optimizer.step()
    
    if epoch % 10 == 0:
        print(f'Epoch {epoch}, Loss - Tower Load: {loss_tower_load.item()}, RSSI: {loss_rssi.item()}, Distance: {loss_distance.item()}')

# Step 6: Making Predictions and Scaling Back
gcn.eval()
with torch.no_grad():
    gcn_output = gcn(data)
    lstm_input = gcn_output.unsqueeze(0).repeat(sequences.size(0), 1, 1)
    tower_load_pred, rssi_pred, distance_pred = lstm(lstm_input)

# Retrieve the last prediction for each target
final_predictions = torch.tensor([tower_load_pred[-1].item(), rssi_pred[-1].item(), distance_pred[-1].item()])
final_predictions = scaler.inverse_transform(final_predictions.unsqueeze(0))

# Display final predictions in original scale
print("Final Predicted Tower Load:", final_predictions[0][0])
print("Final Predicted RSSI:", final_predictions[0][1])
print("Final Predicted Distance:", final_predictions[0][2])