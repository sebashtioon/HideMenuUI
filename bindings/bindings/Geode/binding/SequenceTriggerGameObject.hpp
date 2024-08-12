#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceTriggerGameObject.hpp"

class SequenceTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SequenceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SequenceTriggerGameObject, ChanceTriggerGameObject)
    
private:
    [[deprecated("SequenceTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SequenceTriggerGameObject* create();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::addCount not implemented")]]
    /**
     * @note[short] Android
     */
    void addCount(int p0, int p1);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::addTarget not implemented")]]
    /**
     * @note[short] Android
     */
    void addTarget(int p0, int p1);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::deleteTarget not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteTarget(int p0);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::reorderTarget not implemented")]]
    /**
     * @note[short] Android
     */
    int reorderTarget(int p0, bool p1);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::updateSequenceTotalCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSequenceTotalCount();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17b844
     * @note[short] MacOS (Intel): 0x1bf2e0
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::resetObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17b894
     * @note[short] MacOS (Intel): 0x1bf330
     * @note[short] Android
     */
    virtual void resetObject();
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17ba0c
     * @note[short] MacOS (Intel): 0x1bf5f0
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17be98
     * @note[short] MacOS (Intel): 0x1bfb70
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SequenceTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17c314
     * @note[short] MacOS (Intel): 0x1c0060
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
