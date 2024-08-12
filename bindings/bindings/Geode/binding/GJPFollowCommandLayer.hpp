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

class GJPFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJPFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPFollowCommandLayer, SetupTriggerPopup)
    
private:
    [[deprecated("GJPFollowCommandLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJPFollowCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::onUpdateGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::sliderXModChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderXModChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::sliderYModChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderYModChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateDurLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateMaxSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMaxSpeed();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateMaxSpeedLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMaxSpeedLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateOffsetLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateOffsetLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updatePlayerOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerOffset();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateTargetGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetGroupID();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateXMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateXMod();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateXModLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateXModLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateYMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateYMod();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::updateYModLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateYModLabel();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2f4998
     * @note[short] MacOS (Intel): 0x367ea0
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("GJPFollowCommandLayer::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2f5504
     * @note[short] MacOS (Intel): 0x368c30
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x2f4f38
     * @note[short] MacOS (Intel): 0x3684c0
     * @note[short] Windows: 0x27a1a0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
