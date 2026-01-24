import os
import numpy as np
import math
import fileinput
import os
# This line added to hide all warnings and Info msg
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'
import tensorflow as tf
# print('sequence')
for sequences in fileinput.input(files = '/home/shajib/Simulation/Myversion2/WorkFolder/simu5G/src/stack/phy/layer/inputLSTM.txt'):
    sequence = sequences.replace('\t', '  ')
    sequence = sequence.split()
    # print(sequence)

# print('new list float')
sequence = np.array(sequence, dtype=np.float32)
# print(sequence)
len_sequence = len(sequence)

def splitSequence(sequence, n_steps):
    
    X, y = list(), list()
    for i in range(len(sequence)):
        
        # find the last index of sequence
        last_index = i + n_steps
        
        # check if last_index greater than len(sequence)-1, then break
        if last_index > len(sequence)-1:
            break
            
        # input and output of the sequence
        seq_x, seq_y = sequence[i:last_index], sequence[last_index]
        
        X.append(seq_x)
        y.append(seq_y)
      
    return np.array(X), np.array(y)

n_steps = 5
X, y = splitSequence(sequence, n_steps)

# print('X Y')
# print(X[:10])
# print(y[:10])

from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import LSTM, Bidirectional, Dense

n_features = 1
X = X.reshape((X.shape[0], X.shape[1], n_features))
# print('X[:5][:5]')
# print(X[:5][:5])

model = Sequential()
model.add(Bidirectional(LSTM(20, activation='relu'), input_shape=(n_steps, n_features)))
model.add(Dense(1))

model.compile(optimizer='adam', loss='mse')

history = model.fit(X, y, epochs=25, verbose=0)

avg_new_sequence = 0
# print('new_sequence')
for new_sequences in fileinput.input(files = '/home/shajib/Simulation/Myversion2/WorkFolder/simu5G/src/stack/phy/layer/inputLSTMTestData.txt'):
    new_sequence = new_sequences.replace('\t', '  ')
    new_sequence = new_sequence.split()
    new_sequence =  np.array(new_sequence)
    len_new_sequence = len(new_sequence)

new_sequence = np.asarray(new_sequence, dtype = np.float64, order ='C')
avg_new_sequence = sum(new_sequence) / len(new_sequence)
# print('avg_new_sequence')
# print(avg_new_sequence)
new_sequence = np.arange(avg_new_sequence, avg_new_sequence+25, 5)
# print('new_sequence')
# print(new_sequence)

x_input = new_sequence.reshape((1, n_steps, n_features))
# print('x_input')
# print(x_input)

prediction = model.predict(x_input)
print('predicted lstm value')
print(str(str(prediction)[1:-1])[1:-1])

prediction = str(str(prediction)[1:-1])[1:-1]

with open('/home/shajib/Simulation/Myversion2/WorkFolder/simu5G/src/stack/phy/layer/outputLSTM.txt', 'w+') as f:
    f.write('%s\n' %prediction)


# import matplotlib.pyplot as plt
# plt.figure(figsize =(10, 6))
# plt.plot(history.history['loss'])
# plt.title('Model Loss')
# plt.ylabel('Loss')
# plt.xlabel('Epoch')
# plt.legend(['Train'], loc='upper left')
# plt.show()
