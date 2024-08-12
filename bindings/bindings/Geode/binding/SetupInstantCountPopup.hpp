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

class SetupInstantCountPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCountPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCountPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupInstantCountPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupInstantCountPopup* create(CountTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CountTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onCountType not implemented")]]
    /**
     * @note[short] Android
     */
    void onCountType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onEnableGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onTargetCountArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onTargetID2Arrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetID2Arrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onTargetIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateCountTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCountTextInputLabel();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateItemID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItemID();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateItemIDInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItemIDInputLabel();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateTargetCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetCount();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::updateTargetIDInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetIDInputLabel();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x51bab0
     * @note[short] MacOS (Intel): 0x5f3870
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupInstantCountPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x51bff8
     * @note[short] MacOS (Intel): 0x5f3ea0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x51bd74
     * @note[short] MacOS (Intel): 0x5f3bb0
     * @note[short] Windows: 0x3f8340
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
