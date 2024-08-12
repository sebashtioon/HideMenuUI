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

class SetupPlatformerEndPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPlatformerEndPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPlatformerEndPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupPlatformerEndPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupPlatformerEndPopup* create(EndTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupPlatformerEndPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EndTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
};
