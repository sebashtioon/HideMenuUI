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

class RingObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RingObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x475b70
     * @note[short] Android
     */
    static RingObject* create(char const* p0);
    
private:
    [[deprecated("RingObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("RingObject::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("RingObject::setScale not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16df00
     * @note[short] MacOS (Intel): 0x1af530
     * @note[short] Android
     */
    virtual void setScale(float p0);
public:
    
private:
    [[deprecated("RingObject::setRotation not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x1af590
     * @note[short] Android
     */
    virtual void setRotation(float p0);
public:
    
private:
    [[deprecated("RingObject::resetObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16ded4
     * @note[short] MacOS (Intel): 0x1af510
     * @note[short] Android
     */
    virtual void resetObject();
public:
    
private:
    [[deprecated("RingObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16df74
     * @note[short] MacOS (Intel): 0x1af5c0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("RingObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16e080
     * @note[short] MacOS (Intel): 0x1af710
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("RingObject::setRScale not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16df30
     * @note[short] MacOS (Intel): 0x1af560
     * @note[short] Android
     */
    virtual void setRScale(float p0);
public:
    
private:
    [[deprecated("RingObject::triggerActivated not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16dd88
     * @note[short] MacOS (Intel): 0x1af3b0
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);
public:
    
private:
    [[deprecated("RingObject::shouldDrawEditorHitbox not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16df64
     * @note[short] MacOS (Intel): 0x1af5a0
     * @note[short] Android
     */
    virtual bool shouldDrawEditorHitbox();
public:
    
private:
    [[deprecated("RingObject::powerOnObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16dd94
     * @note[short] MacOS (Intel): 0x1af3c0
     * @note[short] Android
     */
    virtual TodoReturn powerOnObject(int p0);
public:
    bool m_claimTouch;
    bool m_isSpawnOnly;
};
