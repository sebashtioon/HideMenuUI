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

class SetupAdvFollowRetargetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowRetargetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowRetargetPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAdvFollowRetargetPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAdvFollowRetargetPopup* create(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAdvFollowRetargetPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAdvFollowRetargetPopup::updateDefaultTriggerValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x29d528
     * @note[short] MacOS (Intel): 0x30b0d0
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupAdvFollowRetargetPopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x29d6c8
     * @note[short] MacOS (Intel): 0x30b210
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
};
