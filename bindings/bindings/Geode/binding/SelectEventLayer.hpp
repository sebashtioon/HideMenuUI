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

class SelectEventLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SelectEventLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectEventLayer, SetupTriggerPopup)
    
private:
    [[deprecated("SelectEventLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SelectEventLayer* create(SetupEventLinkPopup* p0, gd::set<int>& p1);
public:
    
private:
    [[deprecated("SelectEventLayer::addToggle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToggle(int p0, gd::string p1);
public:
    
private:
    [[deprecated("SelectEventLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(SetupEventLinkPopup* p0, gd::set<int>& p1);
public:
    
private:
    [[deprecated("SelectEventLayer::nextPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nextPosition();
public:
    
private:
    [[deprecated("SelectEventLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectEventLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4cd08c
     * @note[short] MacOS (Intel): 0x581790
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SelectEventLayer::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4ccfcc
     * @note[short] MacOS (Intel): 0x5816c0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectEventLayer::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4ccd88
     * @note[short] MacOS (Intel): 0x581490
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
