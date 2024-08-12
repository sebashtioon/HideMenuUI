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

class RandTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "RandTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RandTriggerGameObject, ChanceTriggerGameObject)
    
private:
    [[deprecated("RandTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RandTriggerGameObject* create();
public:
    
private:
    [[deprecated("RandTriggerGameObject::getRandomGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    int getRandomGroupID();
public:
    
private:
    [[deprecated("RandTriggerGameObject::getTotalChance not implemented")]]
    /**
     * @note[short] Android
     */
    int getTotalChance();
public:
    
private:
    [[deprecated("RandTriggerGameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17a52c
     * @note[short] MacOS (Intel): 0x1bdd90
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("RandTriggerGameObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17a7a8
     * @note[short] MacOS (Intel): 0x1be020
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("RandTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17a9f0
     * @note[short] MacOS (Intel): 0x1be280
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("RandTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17afd8
     * @note[short] MacOS (Intel): 0x1be8d0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
