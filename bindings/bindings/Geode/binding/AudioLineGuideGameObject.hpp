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

class AudioLineGuideGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "AudioLineGuideGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioLineGuideGameObject, EffectGameObject)
    
private:
    [[deprecated("AudioLineGuideGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AudioLineGuideGameObject* create();
public:
    
private:
    [[deprecated("AudioLineGuideGameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x199d18
     * @note[short] MacOS (Intel): 0x1e4460
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("AudioLineGuideGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x19a800
     * @note[short] MacOS (Intel): 0x1e51c0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("AudioLineGuideGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x199d68
     * @note[short] MacOS (Intel): 0x1e44b0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
