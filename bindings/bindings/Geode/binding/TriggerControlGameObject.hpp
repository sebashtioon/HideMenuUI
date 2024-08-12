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

class TriggerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TriggerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TriggerControlGameObject, EffectGameObject)
    
private:
    [[deprecated("TriggerControlGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TriggerControlGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("TriggerControlGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("TriggerControlGameObject::updateTriggerControlFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTriggerControlFrame();
public:
    
private:
    [[deprecated("TriggerControlGameObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19e0c0
     * @note[short] MacOS (Intel): 0x1e9410
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("TriggerControlGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19de64
     * @note[short] MacOS (Intel): 0x1e91c0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("TriggerControlGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19d6f0
     * @note[short] MacOS (Intel): 0x1e88d0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
