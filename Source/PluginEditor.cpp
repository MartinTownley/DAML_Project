/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
JuceSynthFrameworkAudioProcessorEditor::JuceSynthFrameworkAudioProcessorEditor (JuceSynthFrameworkAudioProcessor& p)
: AudioProcessorEditor (&p), processor (p), oscGUI(p), envGUI(p), fmodGUI(p), mlGUI(p)
{
    setSize(1000,300);
    
    // Add the oscillator gui
    addAndMakeVisible(&oscGUI);
    // Add the envelope GUI
    // Add Fmod GUI
    addAndMakeVisible(&fmodGUI);
    
    addAndMakeVisible(&envGUI);
    
    addAndMakeVisible(&mlGUI);
    
    
    
    

    
    //labels:
    //attack:
    addAndMakeVisible (&allLabels[0]);
    allLabels[0].setText("Attack", dontSendNotification);
    
//    allLabels[0].attachToComponent(&attackSlider, false);
//
//    //release:
//    addAndMakeVisible (&allLabels[1]);
//    allLabels[1].setText("Release", dontSendNotification);
//    allLabels[1].attachToComponent (&releaseSlider, false);
    
//    //harmRatio:
//    addAndMakeVisible (&allLabels[2]);
//    allLabels[2].setText("Harmonicity", dontSendNotification);
//    allLabels[2].attachToComponent (&harmDial, false);
//
//    //mod index:
//    addAndMakeVisible (&allLabels[3]);
//    allLabels[3].setText("Mod Index", dontSendNotification);
//    allLabels[3].attachToComponent (&modIndexDial, false);
    
    
    //mod index amp mod
    addAndMakeVisible(&allLabels[4]);
    allLabels[4].setText("Mod Index Amp Mod Wave Select", dontSendNotification);
    allLabels[4].attachToComponent (&oscGUI, false);
    //otherLookAndFeel.setColour(Slider::thumbColourId, Colours::purple);
    //attackSlider.setLookAndFeel(&otherLookAndFeel);
   
    
    
    
    // Mod index
   
    //otherLookAndFeel.createSliderTextBox(dial);
    
    envGUI.releaseSlider.setValue(200);
   
    
    
    
    
}
JuceSynthFrameworkAudioProcessorEditor::~JuceSynthFrameworkAudioProcessorEditor()
{
}

//==============================================================================
void JuceSynthFrameworkAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    
}

void JuceSynthFrameworkAudioProcessorEditor::resized()
{
    Rectangle<int> area = getLocalBounds();
    
    const int componentWidth = 200;
    const int componentHeight = 200;
    
    auto bounds = getLocalBounds();
    const int componentSize { 100 };
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
   
    //modChoice.setBounds (bounds.removeFromLeft(100).withSizeKeepingCentre(componentSize, componentSize / 3));
    
    //Rectangle<int> area = getLocalBounds(); //this is the dimensions of the whole UI
    
    //const int componentWidth = 200;
    //const int componentHeight = 200;
    
    envGUI.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));
    
    fmodGUI.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));
    
    oscGUI.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));
    
    mlGUI.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));
    
    
    
    
    
}



