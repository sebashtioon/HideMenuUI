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
#include "HSVWidgetDelegate.hpp"

class SetupEnterEffectPopup : public SetupTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupEnterEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEnterEffectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupEnterEffectPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupEnterEffectPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onEnterType not implemented")]]
    /**
     * @note[short] Android
     */
    void onEnterType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onHSV not implemented")]]
    /**
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onNextFreeEnterChannel not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeEnterChannel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onNextFreeEnterEffectID not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeEnterEffectID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::updateHSVButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHSVButton();
public:

    /**
     * @note[short] MacOS (ARM): 0x375ab4
     * @note[short] MacOS (Intel): 0x3fc2d0
     * @note[short] Windows: 0x3f5180
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x375ea4
     * @note[short] MacOS (Intel): 0x3fc6f0
     * @note[short] Windows: 0x3f5760
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupEnterEffectPopup::updateInputValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x376020
     * @note[short] MacOS (Intel): 0x3fc890
     * @note[short] Android
     */
    virtual void updateInputValue(int p0, float& p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::updateInputNode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x375fec
     * @note[short] MacOS (Intel): 0x3fc860
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x375c24
     * @note[short] MacOS (Intel): 0x3fc490
     * @note[short] Windows: 0x3f5350
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
    
private:
    [[deprecated("SetupEnterEffectPopup::triggerValueFromSliderValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x375f64
     * @note[short] MacOS (Intel): 0x3fc7f0
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::triggerSliderValueFromValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x375fb8
     * @note[short] MacOS (Intel): 0x3fc830
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x375ce8
     * @note[short] MacOS (Intel): 0x3fc560
     * @note[short] Windows: 0x3f5670
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
};
