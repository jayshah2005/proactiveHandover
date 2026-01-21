# Proactive Handover Implementation Documentation

This document describes the code structure and file responsibilities for the proactive handover implementation using GCN-LSTM prediction models.

## Overview

The proactive handover system uses a Graph Convolutional Network (GCN) combined with Long Short-Term Memory (LSTM) neural networks to predict future network conditions (tower load, RSSI, and distance) and make handover decisions accordingly. The system collects real-time network metrics, stores them, periodically runs Python-based predictions, and uses those predictions to make intelligent handover decisions.

## System Architecture

The proactive handover system consists of several key components:

1. **Data Collection Layer**: Collects network metrics (RSSI, distance, tower load, speed, etc.)
2. **Data Storage Layer**: Stores metrics in CSV files and text files
3. **Prediction Layer**: Python-based GCN-LSTM model for predictions
4. **Decision Layer**: C++ code that uses predictions to make handover decisions
5. **Execution Layer**: Handover manager that executes handovers via X2 interface

## File Responsibilities

### Simulation Configuration Files

#### `simulations/NR/ProactiveHO/ProactiveHO.ned`
- **Purpose**: Network definition file defining the simulation topology
- **Contents**: 
  - Defines network structure with gNodeBs, cars, UPF, router, server
  - Configures X2 connections between base stations
  - Sets up Veins manager for vehicular mobility

#### `simulations/NR/ProactiveHO/omnetpp.ini`
- **Purpose**: Main simulation configuration file
- **Key Settings**:
  - Network topology parameters (playground size, gNodeB positions)
  - Veins/SUMO integration settings
  - Handover enable/disable flags
  - X2 interface configuration
  - Application layer configuration (VoIP, etc.)
- **Note**: Line 64 references SUMO configuration files dynamically based on seed set

#### `simulations/NR/ProactiveHO/run`
- **Purpose**: Script to run the simulation
- **Usage**: Execute after sourcing `setenv` from Simu5G root directory

### Core Handover Decision Logic

#### `src/stack/phy/layer/LtePhyUe.cc`
- **Purpose**: Main file containing proactive handover decision logic
- **Key Functions**:
  - `handoverHandler()`: Core function that processes broadcast messages and makes handover decisions
    - Collects RSSI, tower load, distance, speed metrics
    - Stores data to CSV file
    - Calls Python prediction script periodically (every 10 simulation seconds)
    - Uses predictions to make handover decisions (line 539): `if ((rssi >= predictedRSSI) && (eachTowerLoad <= predictedTowerLoad) && (dist <= predictedDistance))`
  - `calculateEachTowerLoad()`: Calculates tower/base station load based on connected vehicles
  - `writeToCSV()`: Stores network metrics (Time, VehicleID, TowerID, RSSI, Distance, TowerLoad) to CSV file
  - `callingPython()`: Executes the Python prediction script and parses predictions (tower load, RSSI, distance)
  - `getDoubleValueFile()`: Reads values from text files (speed, distance, metrics)
  - `clearHalfFileData()`: Manages CSV file size by clearing half the data periodically
  - `performanceAnalysis_LtePhyUe()`: Analyzes and prints handover performance metrics

#### `src/stack/phy/layer/LtePhyUe.h`
- **Purpose**: Header file for LtePhyUe class
- **Key Members**:
  - Global prediction variables: `predictedTowerLoad`, `predictedRSSI`, `predictedDistance`
  - File path: `filePath_LtePhyUe` (contains absolute path - **NEEDS UPDATE**)
  - Metrics tracking structures

### Handover Execution

#### `src/stack/handoverManager/LteHandoverManager.cc`
- **Purpose**: Executes handover operations via X2 interface
- **Key Functions**:
  - `sendHandoverCommand()`: Sends handover command to target eNB
  - `receiveHandoverCommand()`: Receives handover command from source eNB
  - `forwardDataToTargetEnb()`: Forwards data packets during handover
  - `receiveDataFromSourceEnb()`: Receives tunneled packets from source eNB

#### `src/stack/handoverManager/LteHandoverManager.h`
- **Purpose**: Header file for handover manager class
- **Note**: Defines interface for X2-based handover communication

### Data Collection

#### `src/stack/phy/ChannelModel/LteRealisticChannelModel.cc`
- **Purpose**: Channel model that calculates signal quality metrics
- **Key Functions**:
  - `computeSpeed()`: Calculates vehicle speed
  - Writes speed to file: `./../../../Datafiles/speed.txt` (line 540) - **RELATIVE PATH**
  - Calculates distance between UE and eNB
  - Writes distance to file: `./../../../Datafiles/dist.txt` (line 568) - **RELATIVE PATH**

#### `src/stack/mac/layer/LteMacUe.cc`
- **Purpose**: MAC layer for UE
- **Key Function**:
  - Writes node count to file (line 214): `/home/guest/Downloads/.../nodeCount.txt` - **ABSOLUTE PATH - NEEDS UPDATE**

#### `src/apps/voip/VoIPReceiver.cc`
- **Purpose**: VoIP application receiver
- **Key Function**:
  - Calculates Packet Loss Rate (PLR) metrics
  - Writes PLR metrics to files (lines 292, 296):
    - `/home/guest/Downloads/.../plrHO.txt` - **ABSOLUTE PATH - NEEDS UPDATE**
    - `/home/guest/Downloads/.../eachPlrHO.txt` - **ABSOLUTE PATH - NEEDS UPDATE**

#### `src/stack/phy/layer/NRPhyUe.cc`
- **Purpose**: NR (5G) PHY layer for UE
- **Key Functions**:
  - Handover timing metrics
  - Writes timing metrics to files (lines 361, 367):
    - `/home/guest/Downloads/.../timeHO.txt` - **ABSOLUTE PATH - NEEDS UPDATE**
    - `/home/guest/Downloads/.../eachTimeHO.txt` - **ABSOLUTE PATH - NEEDS UPDATE**

### Prediction Model

#### `src/Datafiles/python_script/gcn_lstm.py`
- **Purpose**: Python script implementing GCN-LSTM prediction model
- **Functionality**:
  - Loads data from CSV file: `/home/guest/Downloads/.../dataStorage.csv` (line 11) - **ABSOLUTE PATH - NEEDS UPDATE**
  - Implements GCN for graph-based learning (tower-vehicle relationships)
  - Implements LSTM for temporal sequence learning
  - Trains model on historical data
  - Makes predictions for: Tower Load, RSSI, Distance
  - Outputs predictions to stdout (parsed by `callingPython()` in LtePhyUe.cc)

## Data Flow

1. **During Simulation**:
   - Channel model calculates speed/distance → writes to `speed.txt` and `dist.txt`
   - LtePhyUe collects RSSI, tower load → stores in `dataStorage.csv`
   - VoIP receiver calculates PLR → writes to `plrHO.txt`, `eachPlrHO.txt`
   - NRPhyUe tracks handover timing → writes to `timeHO.txt`, `eachTimeHO.txt`
   - MAC layer writes node count → `nodeCount.txt`

2. **Periodic Prediction (every 10 simulation seconds)**:
   - LtePhyUe calls Python script (`callingPython()`)
   - Python script loads `dataStorage.csv`
   - GCN-LSTM model processes data and makes predictions
   - Predictions printed to stdout
   - LtePhyUe parses predictions and stores in global variables

3. **Handover Decision**:
   - When broadcast message received, `handoverHandler()` is called
   - System checks: `(rssi >= predictedRSSI) && (eachTowerLoad <= predictedTowerLoad) && (dist <= predictedDistance)`
   - If conditions met, handover is triggered
   - Handover executed via LteHandoverManager and X2 interface

## Absolute File Paths Requiring Updates

The following files contain absolute paths that must be updated when moving the code to another computer:

### 1. `src/stack/phy/layer/LtePhyUe.h` (Line 174)
```cpp
std::string filePath_LtePhyUe = "/home/guest/Downloads/Predictive-Mobility-Modeling-Handover-Decision-Making/Project_GCN_LSTM_HO/simu5G/src/Datafiles/";
```
**Change to**: Path relative to your project root or use environment variable

### 2. `src/stack/mac/layer/LteMacUe.cc` (Line 214)
```cpp
std::ofstream nodeCountFile("/home/guest/Downloads/Predictive-Mobility-Modeling-Handover-Decision-Making/Project_GCN_LSTM_HO/simu5G/src/Datafiles/nodeCount.txt");
```
**Change to**: Use `filePath_LtePhyUe + "nodeCount.txt"` or relative path

### 3. `src/apps/voip/VoIPReceiver.cc` (Lines 292, 296)
```cpp
std::ofstream plrHOFile("/home/guest/Downloads/Predictive-Mobility-Modeling-Handover-Decision-Making/Project_GCN_LSTM_HO/simu5G/src/Datafiles/plrHO.txt");
std::ofstream eachPlrHOFile("/home/guest/Downloads/Predictive-Mobility-Modeling-Handover-Decision-Making/Project_GCN_LSTM_HO/simu5G/src/Datafiles/eachPlrHO.txt");
```
**Change to**: Use relative paths or shared path variable

### 4. `src/stack/phy/layer/NRPhyUe.cc` (Lines 361, 367)
```cpp
std::ofstream timeHOFile("/home/guest/Downloads/Predictive-Mobility-Modeling-Handover-Decision-Making/Project_GCN_LSTM_HO/simu5G/src/Datafiles/timeHO.txt");
std::ofstream eachTimeHOFile("/home/guest/Downloads/Predictive-Mobility-Modeling-Handover-Decision-Making/Project_GCN_LSTM_HO/simu5G/src/Datafiles/eachTimeHO.txt");
```
**Change to**: Use relative paths or shared path variable

### 5. `src/Datafiles/python_script/gcn_lstm.py` (Line 11)
```python
df = pd.read_csv('/home/guest/Downloads/Predictive-Mobility-Modeling-Handover-Decision-Making/Project_GCN_LSTM_HO/simu5G/src/Datafiles/dataStorage.csv', sep=",")
```
**Change to**: Use relative path from script location or environment variable

### 6. `src/stack/phy/ChannelModel/LteRealisticChannelModel.cc` (Lines 540, 568)
```cpp
std::ofstream speedFile("./../../../Datafiles/speed.txt");
std::ofstream distFile("./../../../Datafiles/dist.txt");
```
**Note**: These use relative paths (`./../../../Datafiles/`), which may need adjustment depending on build structure

### 7. `src/stack/phy/layer/LtePhyUe.cc` (Lines 1151, 1153) - *Non-critical*
```cpp
char oldname[] = "/home/mmayon/Research/OMNETPP/omnetpp60/Results_CMD/outputCMD.txt";
std::string strNewFile = "/home/mmayon/Research/OMNETPP/omnetpp60/Results_CMD/" + str + ".txt";
```
**Note**: These paths appear to be unrelated to proactive handover functionality and may be leftover code from another project. Consider removing or updating if needed.

## Recommended Path Update Strategy

1. **Create a configuration header file** (e.g., `src/common/paths.h`) with a path definition:
   ```cpp
   #ifndef PATHS_H
   #define PATHS_H
   #define DATAFILES_PATH "src/Datafiles/"
   #endif
   ```

2. **Use relative paths** from project root or use environment variables

3. **For Python script**, use relative paths:
   ```python
   import os
   script_dir = os.path.dirname(os.path.abspath(__file__))
   data_file = os.path.join(script_dir, '..', 'dataStorage.csv')
   ```

4. **Consider using OMNeT++ parameters** to pass paths through configuration files

## Data Files Generated During Simulation

The following files are created in `src/Datafiles/` during simulation:

- `dataStorage.csv`: Main data storage (Time, VehicleID, TowerID, RSSI, Distance, TowerLoad)
- `speed.txt`: Current vehicle speed (meters/second)
- `dist.txt`: Distance between UE and eNB (meters)
- `nodeCount.txt`: Total number of nodes/vehicles
- `plrHO.txt`: Average packet loss rate
- `eachPlrHO.txt`: Individual packet loss rate measurements
- `timeHO.txt`: Cumulative handover time
- `eachTimeHO.txt`: Individual handover time measurements

## Dependencies

- **Python 3** with packages:
  - pandas
  - torch (PyTorch)
  - torch_geometric
  - sklearn

- **OMNeT++** simulation framework
- **INET** framework
- **Simu5G** framework
- **Veins** (for vehicular mobility simulation)
- **SUMO** (traffic simulation)

## Running the Simulation

1. Ensure all dependencies are installed
2. Source the environment: `. setenv` (from project root)
3. Navigate to simulation directory: `cd simulations/NR/ProactiveHO`
4. Ensure SUMO is running (if using vehicular mobility)
5. Run simulation: `./run` or `simu5g -u Cmdenv -c VoIP-UL omnetpp.ini`

## Notes

- The Python script runs every 10 simulation seconds (see line 513 in LtePhyUe.cc)
- The CSV file is periodically cleared (half the data) to manage file size
- Handover decisions use predicted values: RSSI must be >= predicted, tower load <= predicted, distance <= predicted
- The system tracks metrics by speed categories for performance analysis
- All absolute paths should be replaced with relative paths or configuration parameters for portability
- The original development path structure included `/Project_GCN_LSTM_HO/simu5G/` in the path, suggesting the code may have been developed in a nested directory structure

## Summary of Absolute Paths Found

Total number of absolute paths requiring updates: **7 locations** (6 critical for proactive handover, 1 non-critical)

1. `LtePhyUe.h` - Base path definition (CRITICAL)
2. `LteMacUe.cc` - Node count file (CRITICAL)
3. `VoIPReceiver.cc` - PLR metrics (2 paths) (CRITICAL)
4. `NRPhyUe.cc` - Handover timing metrics (2 paths) (CRITICAL)
5. `gcn_lstm.py` - Data file path (CRITICAL)
6. `LteRealisticChannelModel.cc` - Speed/distance files (RELATIVE - may need adjustment)
7. `LtePhyUe.cc` - Output files (NON-CRITICAL - appears unrelated to proactive handover)