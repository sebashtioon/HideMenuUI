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

class SpawnParticleGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnParticleGameObject, EffectGameObject)
    
private:
    [[deprecated("SpawnParticleGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SpawnParticleGameObject* create();
public:
    
private:
    [[deprecated("SpawnParticleGameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19e1ac
     * @note[short] MacOS (Intel): 0x1e9500
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SpawnParticleGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19f6e4
     * @note[short] MacOS (Intel): 0x1eafb0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SpawnParticleGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19e1fc
     * @note[short] MacOS (Intel): 0x1e9550
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
