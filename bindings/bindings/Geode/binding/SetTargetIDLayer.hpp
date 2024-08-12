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

class SetTargetIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetTargetIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTargetIDLayer, SetupTriggerPopup)
    
private:
    [[deprecated("SetTargetIDLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetTargetIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2, gd::string p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("SetTargetIDLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2, gd::string p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("SetTargetIDLayer::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x2b65b0
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetTargetIDLayer::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x256504
     * @note[short] MacOS (Intel): 0x2b65c0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
};
