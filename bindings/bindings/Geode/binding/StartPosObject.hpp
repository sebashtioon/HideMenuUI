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

class StartPosObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "StartPosObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosObject, EffectGameObject)
    
private:
    [[deprecated("StartPosObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static StartPosObject* create();
public:
    
private:
    [[deprecated("StartPosObject::loadSettingsFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadSettingsFromString(gd::string p0);
public:
    
private:
    [[deprecated("StartPosObject::setSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void setSettings(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("StartPosObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x175b94
     * @note[short] MacOS (Intel): 0x1b88a0
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("StartPosObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x175cd0
     * @note[short] MacOS (Intel): 0x1b89f0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("StartPosObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x175cd4
     * @note[short] MacOS (Intel): 0x1b8a00
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    LevelSettingsObject* m_startSettings;
};
