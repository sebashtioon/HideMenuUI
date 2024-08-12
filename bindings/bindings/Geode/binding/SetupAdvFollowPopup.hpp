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
#include "SelectPremadeDelegate.hpp"

class SetupAdvFollowPopup : public SetupTriggerPopup, public SelectPremadeDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAdvFollowPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAdvFollowPopup* create(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::onMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::onPremade not implemented")]]
    /**
     * @note[short] Android
     */
    void onPremade(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::updateMode not implemented")]]
    /**
     * @note[short] Android
     */
    void updateMode(int p0);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x3090f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::updateDefaultTriggerValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x29aff8
     * @note[short] MacOS (Intel): 0x308690
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x29b198
     * @note[short] MacOS (Intel): 0x3087d0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupAdvFollowPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x29b418
     * @note[short] MacOS (Intel): 0x308a40
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x29b620
     * @note[short] MacOS (Intel): 0x308c70
     * @note[short] Windows: 0x3dac30
     * @note[short] Android
     */
    virtual void selectPremadeClosed(SelectPremadeLayer* p0, int p1);
};
