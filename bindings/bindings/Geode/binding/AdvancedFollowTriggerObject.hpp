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

class AdvancedFollowTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowTriggerObject, EffectGameObject)
    
private:
    [[deprecated("AdvancedFollowTriggerObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AdvancedFollowTriggerObject* create(char const* p0);
public:
    
private:
    [[deprecated("AdvancedFollowTriggerObject::getAdvancedFollowID not implemented")]]
    /**
     * @note[short] Android
     */
    int getAdvancedFollowID();
public:
    
private:
    [[deprecated("AdvancedFollowTriggerObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("AdvancedFollowTriggerObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x167078
     * @note[short] MacOS (Intel): 0x1a75e0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("AdvancedFollowTriggerObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x160060
     * @note[short] MacOS (Intel): 0x19e340
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
