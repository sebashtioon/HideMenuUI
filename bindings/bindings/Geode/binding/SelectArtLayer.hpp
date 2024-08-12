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

class SelectArtLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectArtLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectArtLayer, FLAlertLayer)
    
private:
    [[deprecated("SelectArtLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SelectArtLayer* create(SelectArtType p0, int p1);
public:
    
private:
    [[deprecated("SelectArtLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(SelectArtType p0, int p1);
public:
    
private:
    [[deprecated("SelectArtLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectArtLayer::onSelectCustom not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectCustom(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectArtLayer::selectArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectArt(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SelectArtLayer::updateSelectedCustom not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSelectedCustom(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x212e68
     * @note[short] MacOS (Intel): 0x26c700
     * @note[short] Windows: 0x302a90
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
