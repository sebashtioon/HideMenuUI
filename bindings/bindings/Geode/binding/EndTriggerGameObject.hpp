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

class EndTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EndTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("EndTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EndTriggerGameObject* create();
public:
    
private:
    [[deprecated("EndTriggerGameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18e074
     * @note[short] MacOS (Intel): 0x1d5880
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("EndTriggerGameObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18e0c4
     * @note[short] MacOS (Intel): 0x1d58d0
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("EndTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18ec20
     * @note[short] MacOS (Intel): 0x1d6690
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("EndTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18e1a0
     * @note[short] MacOS (Intel): 0x1d59b0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
