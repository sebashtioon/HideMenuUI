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

class SetupObjectControlPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectControlPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectControlPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupObjectControlPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupObjectControlPopup* create(ObjectControlGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupObjectControlPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(ObjectControlGameObject* p0, cocos2d::CCArray* p1);
public:
};
