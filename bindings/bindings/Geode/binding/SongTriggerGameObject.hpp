#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SFXTriggerGameObject.hpp"

class SongTriggerGameObject : public SFXTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SongTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongTriggerGameObject, SFXTriggerGameObject)
    
private:
    [[deprecated("SongTriggerGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SongTriggerGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("SongTriggerGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("SongTriggerGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x185540
     * @note[short] MacOS (Intel): 0x1cb1c0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SongTriggerGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x184dc8
     * @note[short] MacOS (Intel): 0x1ca8d0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
