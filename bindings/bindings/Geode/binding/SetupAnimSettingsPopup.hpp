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

class SetupAnimSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimSettingsPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAnimSettingsPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAnimSettingsPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAnimSettingsPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAnimSettingsPopup::updateAnimSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAnimSettings();
public:
    
private:
    [[deprecated("SetupAnimSettingsPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8b480
     * @note[short] MacOS (Intel): 0x9ae50
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
