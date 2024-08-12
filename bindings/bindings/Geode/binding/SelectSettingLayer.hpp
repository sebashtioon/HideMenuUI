#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class SelectSettingLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSettingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSettingLayer, FLAlertLayer)
    
private:
    [[deprecated("SelectSettingLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SelectSettingLayer* create(SelectSettingType p0, int p1);
public:
    
private:
    [[deprecated("SelectSettingLayer::frameForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn frameForItem(SelectSettingType p0, int p1);
public:
    
private:
    [[deprecated("SelectSettingLayer::frameForValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn frameForValue(SelectSettingType p0, int p1);
public:
    
private:
    [[deprecated("SelectSettingLayer::getSelectedFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSelectedFrame();
public:
    
private:
    [[deprecated("SelectSettingLayer::getSelectedValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSelectedValue();
public:
    
private:
    [[deprecated("SelectSettingLayer::idxToValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn idxToValue(SelectSettingType p0, int p1);
public:
    
private:
    [[deprecated("SelectSettingLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(SelectSettingType p0, int p1);
public:
    
private:
    [[deprecated("SelectSettingLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectSettingLayer::onSelect not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectSettingLayer::valueToIdx not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn valueToIdx(SelectSettingType p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x213ad8
     * @note[short] MacOS (Intel): 0x26d3e0
     * @note[short] Windows: 0x3038e0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    GEODE_PAD(4);
    int m_settingID;
};
