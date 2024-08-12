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

class SetupRandTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupRandTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupRandTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::onTargetID2Arrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetID2Arrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::onTargetIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateChance not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChance();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateChanceLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChanceLabel(bool p0);
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateTargetID2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID2();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::updateTextInputLabel2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel2();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5187fc
     * @note[short] MacOS (Intel): 0x5efe20
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupRandTriggerPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x518d24
     * @note[short] MacOS (Intel): 0x5f0400
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x518a84
     * @note[short] MacOS (Intel): 0x5f0110
     * @note[short] Windows: 0x4154e0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
