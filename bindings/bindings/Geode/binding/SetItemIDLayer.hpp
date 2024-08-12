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

class SetItemIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetItemIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetItemIDLayer, SetupTriggerPopup)
    
private:
    [[deprecated("SetItemIDLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetItemIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetItemIDLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetItemIDLayer::updateEditorLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel();
public:

    /**
     * @note[short] MacOS (ARM): 0x8c864
     * @note[short] MacOS (Intel): 0x9c540
     * @note[short] Windows: 0x3d6ad0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8c770
     * @note[short] MacOS (Intel): 0x9c450
     * @note[short] Windows: 0x3d69e0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x8c668
     * @note[short] MacOS (Intel): 0x9c330
     * @note[short] Windows: 0x3d6840
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};
