#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class SpecialAnimGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "SpecialAnimGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpecialAnimGameObject, EnhancedGameObject)
    
private:
    [[deprecated("SpecialAnimGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SpecialAnimGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::resetObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16d79c
     * @note[short] MacOS (Intel): 0x1aecf0
     * @note[short] Android
     */
    virtual void resetObject();
public:
    
private:
    [[deprecated("SpecialAnimGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16d7a8
     * @note[short] MacOS (Intel): 0x1aed10
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16d808
     * @note[short] MacOS (Intel): 0x1aed70
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::updateMainColor not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16d77c
     * @note[short] MacOS (Intel): 0x1aecb0
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::updateSecondaryColor not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x16d78c
     * @note[short] MacOS (Intel): 0x1aecd0
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("SpecialAnimGameObject::updateSyncedAnimation not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2012e8
     * @note[short] MacOS (Intel): 0x259570
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float p0, int p1);
public:
};
