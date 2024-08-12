#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupKeyframePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupKeyframePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupKeyframePopup* create(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);
public:
    
private:
    [[deprecated("SetupKeyframePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);
public:
    
private:
    [[deprecated("SetupKeyframePopup::onTimeMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onTimeMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupKeyframePopup::refreshPreviewArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshPreviewArt();
public:
    
private:
    [[deprecated("SetupKeyframePopup::updateTimeModeButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeModeButtons();
public:
    
private:
    [[deprecated("SetupKeyframePopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1aeb7c
     * @note[short] MacOS (Intel): 0x1fc400
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupKeyframePopup::onCustomButton not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1ae7cc
     * @note[short] MacOS (Intel): 0x1fc050
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupKeyframePopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1ae500
     * @note[short] MacOS (Intel): 0x1fbd90
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupKeyframePopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1ae728
     * @note[short] MacOS (Intel): 0x1fbfc0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
