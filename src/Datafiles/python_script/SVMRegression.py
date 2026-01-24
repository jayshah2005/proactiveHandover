import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import sys

vehicleId = sys.argv[1]
predict_At = sys.argv[2]
# vehicleId = 2087
# predict_At = 69


# get the dataset
dataset = pd.read_csv('/home/shajib/Simulation/Myversion2/WorkFolder/simu5G/src/stack/phy/layer/simulator_data.csv')

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

    with open('/home/shajib/Simulation/Myversion2/WorkFolder/simu5G/src/stack/phy/layer/outputSVR.txt', 'w+') as f:
        f.write('%s %s \n ' % (pred_1[0][0] ,pred_1[0][1]))
else :
    with open('/home/shajib/Simulation/Myversion2/WorkFolder/simu5G/src/stack/phy/layer/outputSVR.txt', 'w+') as f:
        f.write('%s %s \n ' % (0 ,0))

# print(pred_1)