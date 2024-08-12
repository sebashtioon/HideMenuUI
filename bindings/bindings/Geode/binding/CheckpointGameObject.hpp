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

class CheckpointGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CheckpointGameObject, EffectGameObject)
    
private:
    [[deprecated("CheckpointGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CheckpointGameObject* create();
public:
    
private:
    [[deprecated("CheckpointGameObject::resetCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCheckpoint();
public:
    
private:
    [[deprecated("CheckpointGameObject::updateCheckpointSpriteVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointSpriteVisibility();
public:
    
private:
    [[deprecated("CheckpointGameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1889c0
     * @note[short] MacOS (Intel): 0x1cee10
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CheckpointGameObject::setupCustomSprites not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x188e00
     * @note[short] MacOS (Intel): 0x1cf260
     * @note[short] Android
     */
    virtual void setupCustomSprites(gd::string p0);
public:
    
private:
    [[deprecated("CheckpointGameObject::resetObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18a13c
     * @note[short] MacOS (Intel): 0x1d0870
     * @note[short] Android
     */
    virtual void resetObject();
public:

    /**
     * @note[short] MacOS (ARM): 0x188a1c
     * @note[short] MacOS (Intel): 0x1cee70
     * @note[short] Windows: 0x48d630
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
    
private:
    [[deprecated("CheckpointGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18a010
     * @note[short] MacOS (Intel): 0x1d0730
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("CheckpointGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18971c
     * @note[short] MacOS (Intel): 0x1cfc50
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x188a34
     * @note[short] MacOS (Intel): 0x1cee90
     * @note[short] Windows: 0x48d650
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);
    
private:
    [[deprecated("CheckpointGameObject::restoreObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18a194
     * @note[short] MacOS (Intel): 0x1d08e0
     * @note[short] Android
     */
    virtual void restoreObject();
public:
    
private:
    [[deprecated("CheckpointGameObject::updateSyncedAnimation not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x189380
     * @note[short] MacOS (Intel): 0x1cf840
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float p0, int p1);
public:
};
