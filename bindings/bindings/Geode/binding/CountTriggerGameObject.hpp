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

class CountTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CountTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CountTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("CountTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CountTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("CountTriggerGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("CountTriggerGameObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18a2e8
     * @note[short] MacOS (Intel): 0x1d0a40
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("CountTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18a520
     * @note[short] MacOS (Intel): 0x1d0cc0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("CountTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18a89c
     * @note[short] MacOS (Intel): 0x1d10f0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
