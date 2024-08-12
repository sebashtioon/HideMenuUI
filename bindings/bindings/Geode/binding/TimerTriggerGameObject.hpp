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

class TimerTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TimerTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TimerTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("TimerTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TimerTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("TimerTriggerGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("TimerTriggerGameObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1938cc
     * @note[short] MacOS (Intel): 0x1dc950
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("TimerTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x195154
     * @note[short] MacOS (Intel): 0x1de820
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("TimerTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1939d4
     * @note[short] MacOS (Intel): 0x1dca60
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
