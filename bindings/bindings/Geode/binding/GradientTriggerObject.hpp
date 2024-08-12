#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class GradientTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GradientTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GradientTriggerObject, EffectGameObject)
    
private:
    [[deprecated("GradientTriggerObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GradientTriggerObject* create();
public:
    
private:
    [[deprecated("GradientTriggerObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x15a214
     * @note[short] MacOS (Intel): 0x196bd0
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GradientTriggerObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x15b624
     * @note[short] MacOS (Intel): 0x198500
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("GradientTriggerObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x15a268
     * @note[short] MacOS (Intel): 0x196c30
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
