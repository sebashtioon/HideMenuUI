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

class SetupCheckpointPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCheckpointPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCheckpointPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupCheckpointPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupCheckpointPopup* create(CheckpointGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupCheckpointPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CheckpointGameObject* p0, cocos2d::CCArray* p1);
public:
};
