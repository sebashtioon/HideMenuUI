#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AudioEffectsLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "AudioEffectsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AudioEffectsLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("AudioEffectsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AudioEffectsLayer* create(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x83720
     * @note[short] Android
     */
    void audioStep(float p0);
    
private:
    [[deprecated("AudioEffectsLayer::getBGSquare not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBGSquare();
public:
    
private:
    [[deprecated("AudioEffectsLayer::goingDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn goingDown();
public:
    
private:
    [[deprecated("AudioEffectsLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(gd::string p0);
public:
    
private:
    [[deprecated("AudioEffectsLayer::resetAudioVars not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x41ab8c
     * @note[short] MacOS (Intel): 0x4b98c0
     * @note[short] Android
     */
    void resetAudioVars();
public:
    
private:
    [[deprecated("AudioEffectsLayer::triggerEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerEffect(float p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void draw();
    
private:
    [[deprecated("AudioEffectsLayer::updateTweenAction not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x41ae04
     * @note[short] MacOS (Intel): 0x4b9b30
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);
public:
};
