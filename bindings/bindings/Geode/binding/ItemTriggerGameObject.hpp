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

class ItemTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ItemTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("ItemTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ItemTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("ItemTriggerGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("ItemTriggerGameObject::customSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x195664
     * @note[short] MacOS (Intel): 0x1ded80
     * @note[short] Android
     */
    virtual void customSetup();
public:
    
private:
    [[deprecated("ItemTriggerGameObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19569c
     * @note[short] MacOS (Intel): 0x1dedc0
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("ItemTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1991d8
     * @note[short] MacOS (Intel): 0x1e3ab0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("ItemTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1957ec
     * @note[short] MacOS (Intel): 0x1def10
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
