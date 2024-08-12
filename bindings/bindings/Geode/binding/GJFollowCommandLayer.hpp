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

class GJFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJFollowCommandLayer, SetupTriggerPopup)
    
private:
    [[deprecated("GJFollowCommandLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJFollowCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0x25e810
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("GJFollowCommandLayer::onUpdateGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::onUpdateGroupID2 not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateGroupID2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::sliderXModChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderXModChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::sliderYModChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderYModChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateDurLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateTargetGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetGroupID();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateTargetGroupID2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetGroupID2();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateTextInputLabel2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel2();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateXMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateXMod();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateXModLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateXModLabel();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateYMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateYMod();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::updateYModLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateYModLabel();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x270af8
     * @note[short] MacOS (Intel): 0x2d37d0
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("GJFollowCommandLayer::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2714c8
     * @note[short] MacOS (Intel): 0x2d43a0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x271070
     * @note[short] MacOS (Intel): 0x2d3de0
     * @note[short] Windows: 0x260230
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
