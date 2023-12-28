#pragma once
#include <JuceHeader.h>

class ImagelinkButtonComponent : public juce::ImageButton
{
public:
    ImagelinkButtonComponent(const juce::String& linkText,
        const juce::URL& linkURL, const juce::String& name = juce::String());
    ~ImagelinkButtonComponent() override;

    //void paint (juce::Graphics&) override;
    //void resized() override;

    void clicked();

private:
    juce::URL url;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ImagelinkButtonComponent)
};
