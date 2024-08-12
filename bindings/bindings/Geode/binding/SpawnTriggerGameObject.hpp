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

class SpawnTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("SpawnTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SpawnTriggerGameObject* create();
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::addRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRemap(int p0, int p1);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::changeRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn changeRemap(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::removeRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeRemap(int p0, int p1);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::updateRemapKeys not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateRemapKeys(gd::vector<int> const& p0);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x186cf8
     * @note[short] MacOS (Intel): 0x1ccca0
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x186fc4
     * @note[short] MacOS (Intel): 0x1cd010
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x187550
     * @note[short] MacOS (Intel): 0x1cd500
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SpawnTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x187954
     * @note[short] MacOS (Intel): 0x1cd9a0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
