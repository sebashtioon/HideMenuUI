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

class SetupRotatePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotatePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotatePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupRotatePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupRotatePopup* create(EnhancedGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRotatePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EnhancedGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRotatePopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4ec7f4
     * @note[short] MacOS (Intel): 0x5a59e0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRotatePopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4ec878
     * @note[short] MacOS (Intel): 0x5a5a70
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
