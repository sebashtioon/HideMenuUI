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

class KeyframeAnimTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeAnimTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeAnimTriggerObject, EffectGameObject)
    
private:
    [[deprecated("KeyframeAnimTriggerObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static KeyframeAnimTriggerObject* create();
public:
    
private:
    [[deprecated("KeyframeAnimTriggerObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x173fc8
     * @note[short] MacOS (Intel): 0x1b6710
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("KeyframeAnimTriggerObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x174cd8
     * @note[short] MacOS (Intel): 0x1b7780
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("KeyframeAnimTriggerObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x174018
     * @note[short] MacOS (Intel): 0x1b6760
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
