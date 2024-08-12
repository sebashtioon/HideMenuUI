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

class SetupCameraGuidePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraGuidePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCameraGuidePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupCameraGuidePopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCameraGuidePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
};
