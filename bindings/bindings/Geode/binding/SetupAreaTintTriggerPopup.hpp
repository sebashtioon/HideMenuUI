#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaMoveTriggerPopup.hpp"
#include "HSVWidgetDelegate.hpp"

class SetupAreaTintTriggerPopup : public SetupAreaMoveTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTintTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTintTriggerPopup, SetupAreaMoveTriggerPopup)
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAreaTintTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::onHSV not implemented")]]
    /**
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaTintTriggerPopup::updateHSVButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHSVButton();
public:

    /**
     * @note[short] MacOS (ARM): 0x43ec98
     * @note[short] MacOS (Intel): 0x4e2ad0
     * @note[short] Windows: 0x3e5440
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x43ef98
     * @note[short] MacOS (Intel): 0x4e2de0
     * @note[short] Windows: 0x3e5750
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43eba8
     * @note[short] MacOS (Intel): 0x4e29e0
     * @note[short] Windows: 0x3e5280
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x43eddc
     * @note[short] MacOS (Intel): 0x4e2c50
     * @note[short] Windows: 0x3e5660
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
};
