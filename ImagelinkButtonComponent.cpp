#include "ImagelinkButtonComponent.h" 

ImagelinkButtonComponent::ImagelinkButtonComponent(const juce::String& linkText,
    const juce::URL& linkURL, const juce::String& name) :
    url(linkURL), juce::ImageButton(name)
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

ImagelinkButtonComponent::~ImagelinkButtonComponent()
{
}
void ImagelinkButtonComponent::clicked()
{
    if (url.isWellFormed())
        url.launchInDefaultBrowser();
}