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

class SFXTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SFXTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXTriggerGameObject, EffectGameObject)
    
private:
    [[deprecated("SFXTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SFXTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("SFXTriggerGameObject::getSFXRefID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXRefID();
public:
    
private:
    [[deprecated("SFXTriggerGameObject::getUniqueSFXID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getUniqueSFXID();
public:
    
private:
    [[deprecated("SFXTriggerGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("SFXTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x183ed4
     * @note[short] MacOS (Intel): 0x1c9be0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SFXTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17ffe4
     * @note[short] MacOS (Intel): 0x1c4b10
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
