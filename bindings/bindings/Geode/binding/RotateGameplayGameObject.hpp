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

class RotateGameplayGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RotateGameplayGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RotateGameplayGameObject, EffectGameObject)
    
private:
    [[deprecated("RotateGameplayGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RotateGameplayGameObject* create();
public:
    
private:
    [[deprecated("RotateGameplayGameObject::updateGameplayRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayRotation();
public:
    
private:
    [[deprecated("RotateGameplayGameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19fa90
     * @note[short] MacOS (Intel): 0x1eb3d0
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("RotateGameplayGameObject::updateStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1a11f4
     * @note[short] MacOS (Intel): 0x1ed0f0
     * @note[short] Android
     */
    virtual void updateStartValues();
public:
    
private:
    [[deprecated("RotateGameplayGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1a0f04
     * @note[short] MacOS (Intel): 0x1ecd70
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("RotateGameplayGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19fae0
     * @note[short] MacOS (Intel): 0x1eb420
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
