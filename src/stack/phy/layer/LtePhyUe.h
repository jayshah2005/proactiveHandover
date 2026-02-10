//
//                  Simu5G
//
// Authors: Giovanni Nardini, Giovanni Stea, Antonio Virdis (University of Pisa)
//
// This file is part of a software released under the license included in file
// "license.pdf". Please read LICENSE and README files before using it.
// The above files and the present reference are part of the software itself,
// and cannot be removed from it.
//

#ifndef _LTE_AIRPHYUE_H_
#define _LTE_AIRPHYUE_H_

#include "stack/phy/layer/LtePhyBase.h"
#include "stack/phy/das/DasFilter.h"
#include "stack/mac/layer/LteMacUe.h"
#include "stack/rlc/um/LteRlcUm.h"
#include "stack/pdcp_rrc/layer/LtePdcpRrc.h"

class DasFilter;

class LtePhyUe : public LtePhyBase
{
  protected:
    /** Master MacNodeId */
    MacNodeId masterId_;

    /** Statistic for serving cell */
    omnetpp::simsignal_t servingCell_;

    /** Self message to trigger handover procedure evaluation */
    omnetpp::cMessage *handoverStarter_;

    /** Self message to start the handover procedure */
    omnetpp::cMessage *handoverTrigger_;

    /** RSSI received from the current serving node */
    double currentMasterRssi_;

    /** ID of not-master node from wich highest RSSI was received */
    MacNodeId candidateMasterId_;

    /** Highest RSSI received from not-master node */
    double candidateMasterRssi_;

    /**
     * Hysteresis threshold to evaluate handover: it introduces a small polarization to
     * avoid multiple subsequent handovers
     */
    double hysteresisTh_;

    /**
     * Value used to divide currentMasterRssi_ and create an hysteresisTh_
     * Use zero to have hysteresisTh_ == 0.
     */
    // TODO: bring it to ned par!
    double hysteresisFactor_;

    /**
     * Time interval elapsing from the reception of first handover broadcast message
     * to the beginning of handover procedure.
     * It must be a small number greater than 0 to ensure that all broadcast messages
     * are received before evaluating handover.
     * Note that broadcast messages for handover are always received at the very same time
     * (at bdcUpdateInterval_ seconds intervals).
     */
    // TODO: bring it to ned par!
    double handoverDelta_;

    // time for completion of the handover procedure
    double handoverLatency_;
    double handoverDetachment_;
    double handoverAttachment_;

    // lower threshold of RSSI for detachment
    double minRssi_;

    /**
     * Handover switch
     */
    bool enableHandover_;

    /**
     * Pointer to the DAS Filter: used to call das function
     * when receiving broadcasts and to retrieve physical
     * antenna properties on packet reception
     */
    DasFilter* das_;

    /// Threshold for antenna association
    // TODO: bring it to ned par!
    double dasRssiThreshold_;

    /** set to false if a battery is not present in module or must have infinite capacity */
    bool useBattery_;
    double txAmount_;    // drawn current amount for tx operations (mA)
    double rxAmount_;    // drawn current amount for rx operations (mA)

    LteMacUe *mac_;
    LteRlcUm *rlcUm_;
    LtePdcpRrcBase *pdcp_;

    omnetpp::simtime_t lastFeedback_;

    // support to print averageCqi at the end of the simulation
    std::vector<short int> cqiDlSamples_;
    std::vector<short int> cqiUlSamples_;
    unsigned int cqiDlSum_;
    unsigned int cqiUlSum_;
    unsigned int cqiDlCount_;
    unsigned int cqiUlCount_;


    virtual void initialize(int stage) override;
    virtual void handleSelfMessage(omnetpp::cMessage *msg) override;
    virtual void handleAirFrame(omnetpp::cMessage* msg) override;
    virtual void finish() override;
    virtual void finish(cComponent *component, omnetpp::simsignal_t signalID) override {cIListener::finish(component, signalID);}

    virtual void handleUpperMessage(omnetpp::cMessage* msg) override;


    /**
     * Utility function to update the hysteresis threshold using hysteresisFactor_.
     */
    double updateHysteresisTh(double v);

    void handoverHandler(LteAirFrame* frame, UserControlInfo* lteInfo);

    void deleteOldBuffers(MacNodeId masterId);

    virtual void triggerHandover();
    virtual void doHandover();

  public:
    LtePhyUe();
    virtual ~LtePhyUe();
    DasFilter *getDasFilter();
    /**
     * Send Feedback, called by feedback generator in DL
     */
    virtual void sendFeedback(LteFeedbackDoubleVector fbDl, LteFeedbackDoubleVector fbUl, FeedbackRequest req);
    MacNodeId getMasterId() const
    {
        return masterId_;
    }
    omnetpp::simtime_t coherenceTime(double speed)
    {
        double fd = (speed / SPEED_OF_LIGHT) * carrierFrequency_;
        return 0.1 / fd;
    }

    void recordCqi(unsigned int sample, Direction dir);
    double getAverageCqi(Direction dir);
    double getVarianceCqi(Direction dir);
    void writeToCSV(const std::string& filename, double simtimeDbl, MacNodeId vehicleId, MacNodeId towerId, double rssi, double distance, double towerLoad);
    // CHANGE #1: Add new function to write vehicle position data for SVMRegression.py
    void writeVehiclePositionToCSV(const std::string& filename, double simtimeDbl, MacNodeId vehicleId, MacNodeId towerId, double rssi, double distance, double xCoord, double yCoord);
    void clearFileData(const std::string& filename);
    void clearHalfFileData(const std::string& filePath);
    double getDoubleValueFile(std::string filepath);
    double calculateEachTowerLoad(UserControlInfo* lteInfo, LteAirFrame* frame);
    void callingPython(const std::string& filename);
    void performanceAnalysis_LtePhyUe();
    void savePerformanceAnalysis();
    void printMetrics();
    void savePerformanceAnalysisToCSV();
    void saveSpeedMetricsToCSV();
    // SVMRegression.py integration functions
    void runSVR(unsigned short vehicleID, int simTime);
    std::pair<double, double> getParfromFileForSVR(const std::string& filepath);
    double calculatePredictedDistance(double predX, double predY, const inet::Coord& towerCoord);

    static const int NUM_TOWERS = 5;
    double bsLoad[NUM_TOWERS] = {0};
    double towerLoad_global = 0;
    double eachTowerLoad = 0;
    double dist = 0;
    double speedVehicleM = 0, speedVehicleKM = 0;
    MacNodeId stored_masterId = 0;
    std::string filePath_LtePhyUe = "/home/guest/Downloads/Predictive-Mobility-Modeling-Handover-Decision-Making/Project_GCN_LSTM_HO/simu5G/src/Datafiles/";
    // SVMRegression.py prediction variables
    double predictedDistSVR = 0.0;
    double predXCoordVehicle = 0.0;
    double predYCoordVehicle = 0.0;
    int lastSVRSimTime = -1;
    MacNodeId lastSVRVehicleId = 0;
};

#endif  /* _LTE_AIRPHYUE_H_ */
