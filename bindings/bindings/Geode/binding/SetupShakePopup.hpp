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

class SetupShakePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShakePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShakePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupShakePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupShakePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupShakePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupShakePopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupShakePopup::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupShakePopup::updateDurLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupShakePopup::updateInterval not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInterval();
public:
    
private:
    [[deprecated("SetupShakePopup::updateIntervalLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateIntervalLabel(bool p0);
public:
    
private:
    [[deprecated("SetupShakePopup::updateShake not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateShake();
public:
    
private:
    [[deprecated("SetupShakePopup::updateShakeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateShakeLabel(bool p0);
public:
    
private:
    [[deprecated("SetupShakePopup::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x58d65c
     * @note[short] MacOS (Intel): 0x672480
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupShakePopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x58dcb8
     * @note[short] MacOS (Intel): 0x672b60
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x58d998
     * @note[short] MacOS (Intel): 0x6727e0
     * @note[short] Windows: 0x42a580
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
