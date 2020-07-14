/*
  ==============================================================================

    ControllerOSC.h
    Created: 12 Jan 2020 5:48:58pm
    Author:  sierra

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "../../Libraries/RapidLib/src/regression.h"

class ControllerOSC : public OSCReceiver,
public OSCReceiver::ListenerWithOSCAddress<OSCReceiver::MessageLoopCallback>
{
public:
    ControllerOSC();
    ~ControllerOSC();
    
    void oscMessageReceived (const OSCMessage &message) override;
    
    std::vector<double>& rollAndPitch(const float& _ex, const float& _zed);
    
    void controllerRecord (const std::vector<double>& XandZ);
    
    //void OSCtest();
    
//    void getData(bool& isRecording, bool& isRunning, float& theZed, float& theEx)
    
    //int getIsRecording(bool _isRecording);
    
    //void setBool(int _isRecording);
    
    bool& getIsTriangle();
    
    bool& getIsCross();
    
    float& getTheZed();
    float& getTheEx();
    
    
    
private:
    
    //Triangle on the controller records:
    bool isTriangle;
    // Cross on the controller runs:
    bool isCross;
    
    float theZed;
    float theEx;
    
    
    //double _attack;
    //double _release;
    //double _harmRatio;
    //double _modIndex;
    
    //These are in synthvoice.
    //regression rapidRegression;
    //std::vector <trainingExample> trainingSet;
    
    
};
