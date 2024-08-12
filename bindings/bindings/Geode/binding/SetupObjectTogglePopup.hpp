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

class SetupObjectTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectTogglePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupObjectTogglePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupObjectTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
public:
    
private:
    [[deprecated("SetupObjectTogglePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
public:
    
private:
    [[deprecated("SetupObjectTogglePopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x30392c
     * @note[short] MacOS (Intel): 0x3782a0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupObjectTogglePopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3038b4
     * @note[short] MacOS (Intel): 0x378220
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
};
