import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import sys
import os

vehicleId = sys.argv[1]
predict_At = sys.argv[2]
# vehicleId = 2087
# predict_At = 69

# Get the directory where this script is located
script_dir = os.path.dirname(os.path.abspath(__file__))
# Get the parent directory (Datafiles directory)
datafiles_dir = os.path.dirname(script_dir)
# Construct path to simulator_data.csv (should be in Datafiles directory, one level up from python_script/)
simulator_data_path = os.path.join(datafiles_dir, 'simulator_data.csv')

# Load the dataset with vehicle position data (Time, vehicleId, TowerID, RSSI, Distance, X, Y)
# Note: dataStorage.csv cannot be used as fallback because it lacks X,Y coordinate columns [5,6]
dataset = pd.read_csv(simulator_data_path)

pred_1 = [0,0];
vehicle_data = dataset.loc[dataset["vehicleId"].values  == int(vehicleId)]
# print(vehicle_data)
if len(vehicle_data) != 0:
    
    TimeStamp_Column = vehicle_data.iloc[ -150:, [0]].values # features set
    X_Y_Coord = vehicle_data.iloc[ -150:, [5,6]].values


    from sklearn.preprocessing import StandardScaler
    from sklearn.multioutput import MultiOutputRegressor
    from sklearn.svm import SVR


    svrRegressor = SVR(kernel = 'rbf')

    multiOutReg = MultiOutputRegressor(svrRegressor)
    multiOutReg.fit(TimeStamp_Column, X_Y_Coord)


    pred_1 = multiOutReg.predict([[predict_At]])

    # Write output to outputSVR.txt in the same directory as this script
    output_path = os.path.join(script_dir, 'outputSVR.txt')
    # ORIGINAL: with open('/home/shajib/Simulation/Myversion2/WorkFolder/simu5G/src/stack/phy/layer/outputSVR.txt', 'w+') as f:
    with open(output_path, 'w+') as f:
        f.write('%s %s \n ' % (pred_1[0][0] ,pred_1[0][1]))
else :
    # Write output to outputSVR.txt in the same directory as this script
    output_path = os.path.join(script_dir, 'outputSVR.txt')
    # ORIGINAL: with open('/home/shajib/Simulation/Myversion2/WorkFolder/simu5G/src/stack/phy/layer/outputSVR.txt', 'w+') as f:
    with open(output_path, 'w+') as f:
        f.write('%s %s \n ' % (0 ,0))

# print(pred_1)