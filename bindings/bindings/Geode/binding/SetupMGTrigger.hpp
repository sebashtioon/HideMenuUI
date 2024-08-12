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

class SetupMGTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMGTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMGTrigger, SetupTriggerPopup)
    
private:
    [[deprecated("SetupMGTrigger::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupMGTrigger* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupMGTrigger::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupMGTrigger::onEasing not implemented")]]
    /**
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupMGTrigger::onEasingRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupMGTrigger::posFromSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn posFromSliderValue(float p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::sliderValueFromPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderValueFromPos(int p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::sliderYChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderYChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::toggleEasingRateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEasingRateVisibility();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateDurLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupMGTrigger::updateEasingLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEasingLabel();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateEasingRateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEasingRateLabel();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateMoveCommandEasing not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandEasing();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateMoveCommandEasingRate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandEasingRate();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateMoveCommandPosY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandPosY();
public:
    
private:
    [[deprecated("SetupMGTrigger::updateValueYLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateValueYLabel();
public:
    
private:
    [[deprecated("SetupMGTrigger::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4684f8
     * @note[short] MacOS (Intel): 0x511cc0
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupMGTrigger::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x468c68
     * @note[short] MacOS (Intel): 0x512520
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x468a48
     * @note[short] MacOS (Intel): 0x5122c0
     * @note[short] Windows: 0x3fd430
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    
private:
    [[deprecated("SetupMGTrigger::valuePopupClosed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x46879c
     * @note[short] MacOS (Intel): 0x511f80
     * @note[short] Android
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
public:
};
