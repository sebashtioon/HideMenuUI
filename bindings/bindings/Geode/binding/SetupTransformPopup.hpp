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

class SetupTransformPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTransformPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTransformPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupTransformPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupTransformPopup* create(TransformTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupTransformPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(TransformTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
};
