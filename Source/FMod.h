/*
  ==============================================================================

    FMod.h
    Created: 7 Jan 2020 6:13:23pm
    Author:  sierra

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
//==============================================================================
/*
*/
class FMod    : public Component
{
public:
    FMod(JuceSynthFrameworkAudioProcessor&);
    ~FMod();
    
    void paint (Graphics&) override;
    void resized() override;
    
    void setHarmDial (int _newHarm);
    void setModIndexDial (double _newModIndex);
    
    void setBGColour (juce::Colour colour);
    
private:
    Slider harmDial;
    Slider modIndexDial;
    
    // harmdialAttach
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> harmDialAttach;
    Label harmLabel;
    
    // modindexAttach
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> modIndexDialAttach;
    Label modIndexLabel;
    
    juce::Colour bgCol;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JuceSynthFrameworkAudioProcessor& processor;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FMod)
};
