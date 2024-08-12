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

class ShaderGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ShaderGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShaderGameObject, EffectGameObject)
    
private:
    [[deprecated("ShaderGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ShaderGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("ShaderGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("ShaderGameObject::customSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x15ba4c
     * @note[short] MacOS (Intel): 0x198980
     * @note[short] Android
     */
    virtual void customSetup();
public:
    
private:
    [[deprecated("ShaderGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x15f62c
     * @note[short] MacOS (Intel): 0x19d750
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("ShaderGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x15babc
     * @note[short] MacOS (Intel): 0x1989f0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
