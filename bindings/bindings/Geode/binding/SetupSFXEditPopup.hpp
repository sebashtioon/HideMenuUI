#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"

class SetupSFXEditPopup : public SetupAudioTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSFXEditPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXEditPopup, SetupAudioTriggerPopup)
    
private:
    [[deprecated("SetupSFXEditPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupSFXEditPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, bool p2);
public:
    
private:
    [[deprecated("SetupSFXEditPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, bool p2);
public:
};
