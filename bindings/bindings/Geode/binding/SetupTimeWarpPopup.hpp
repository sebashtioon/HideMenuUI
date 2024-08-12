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

class SetupTimeWarpPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimeWarpPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimeWarpPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupTimeWarpPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupTimeWarpPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupTimeWarpPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupTimeWarpPopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTimeWarpPopup::updateTimeWarp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeWarp();
public:
    
private:
    [[deprecated("SetupTimeWarpPopup::updateTimeWarpLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeWarpLabel();
public:
    
private:
    [[deprecated("SetupTimeWarpPopup::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x464ad8
     * @note[short] MacOS (Intel): 0x50dd50
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupTimeWarpPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x50dee0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
