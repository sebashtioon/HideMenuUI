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

class EventLinkTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EventLinkTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EventLinkTrigger, EffectGameObject)
    
private:
    [[deprecated("EventLinkTrigger::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EventLinkTrigger* create();
public:
    
private:
    [[deprecated("EventLinkTrigger::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1857dc
     * @note[short] MacOS (Intel): 0x1cb4a0
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("EventLinkTrigger::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x18582c
     * @note[short] MacOS (Intel): 0x1cb4f0
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("EventLinkTrigger::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x186458
     * @note[short] MacOS (Intel): 0x1cc3b0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("EventLinkTrigger::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x185900
     * @note[short] MacOS (Intel): 0x1cb5d0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
