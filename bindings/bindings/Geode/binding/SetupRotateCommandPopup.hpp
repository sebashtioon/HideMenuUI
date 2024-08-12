#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupRotateCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateCommandPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupRotateCommandPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupRotateCommandPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::onInfiniteDuration not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfiniteDuration(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::updateControlVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateControlVisibility();
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::updateInputNode not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x6b90
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x97bc
     * @note[short] MacOS (Intel): 0x6ba0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::triggerValueFromSliderValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x9790
     * @note[short] MacOS (Intel): 0x6b40
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::triggerSliderValueFromValue not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x6b80
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupRotateCommandPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x9a5c
     * @note[short] MacOS (Intel): 0x6ee0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
