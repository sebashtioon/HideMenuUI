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

class SetupPickupTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPickupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPickupTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupPickupTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupPickupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupPickupTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupPickupTriggerPopup::updateState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateState();
public:
    
private:
    [[deprecated("SetupPickupTriggerPopup::onPlusButton not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x50a20
     * @note[short] MacOS (Intel): 0x5a2f0
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupPickupTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x50a58
     * @note[short] MacOS (Intel): 0x5a330
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
