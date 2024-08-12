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

class SetupMoveCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMoveCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMoveCommandPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupMoveCommandPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupMoveCommandPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0x26e780
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupMoveCommandPopup::updateControlVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateControlVisibility();
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::updateInputValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x537db4
     * @note[short] MacOS (Intel): 0x613e50
     * @note[short] Android
     */
    virtual void updateInputValue(int p0, float& p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::updateInputNode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x537d88
     * @note[short] MacOS (Intel): 0x613e10
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x537de8
     * @note[short] MacOS (Intel): 0x613e90
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::triggerValueFromSliderValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x537cd0
     * @note[short] MacOS (Intel): 0x613d30
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::triggerSliderValueFromValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x537d14
     * @note[short] MacOS (Intel): 0x613d80
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupMoveCommandPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x537fb8
     * @note[short] MacOS (Intel): 0x614090
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
