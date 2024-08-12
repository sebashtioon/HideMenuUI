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

class SetupCameraOffsetTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraOffsetTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraOffsetTrigger, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCameraOffsetTrigger::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupCameraOffsetTrigger* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onEasing not implemented")]]
    /**
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onEasingRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onTargetMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::posFromSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn posFromSliderValue(float p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderValueFromPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderValueFromPos(int p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderXChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderXChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::sliderYChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderYChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::toggleEasingRateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEasingRateVisibility();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateDurLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateEasingLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEasingLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateEasingRateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEasingRateLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandEasing not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandEasing();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandEasingRate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandEasingRate();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandPosX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandPosX();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateMoveCommandPosY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandPosY();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateValueXLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateValueXLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::updateValueYLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateValueYLabel();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x58bb44
     * @note[short] MacOS (Intel): 0x6706c0
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupCameraOffsetTrigger::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x58c53c
     * @note[short] MacOS (Intel): 0x6711f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x58c2b4
     * @note[short] MacOS (Intel): 0x670ec0
     * @note[short] Windows: 0x3ec2f0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x58bf40
     * @note[short] MacOS (Intel): 0x670a90
     * @note[short] Windows: 0x3eb9f0
     * @note[short] Android
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};
