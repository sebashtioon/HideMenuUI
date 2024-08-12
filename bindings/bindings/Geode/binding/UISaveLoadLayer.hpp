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

class UISaveLoadLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UISaveLoadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISaveLoadLayer, SetupTriggerPopup)
    
private:
    [[deprecated("UISaveLoadLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UISaveLoadLayer* create(UIOptionsLayer* p0);
public:
    
private:
    [[deprecated("UISaveLoadLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(UIOptionsLayer* p0);
public:
    
private:
    [[deprecated("UISaveLoadLayer::onLoad not implemented")]]
    /**
     * @note[short] Android
     */
    void onLoad(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UISaveLoadLayer::onSave not implemented")]]
    /**
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);
public:
};
