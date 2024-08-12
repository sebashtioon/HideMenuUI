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

class SetupPlayerControlPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPlayerControlPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPlayerControlPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupPlayerControlPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupPlayerControlPopup* create(PlayerControlGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupPlayerControlPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(PlayerControlGameObject* p0, cocos2d::CCArray* p1);
public:
};
