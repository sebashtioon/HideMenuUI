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

class SelectPremadeLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectPremadeLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectPremadeLayer, FLAlertLayer)
    
private:
    [[deprecated("SelectPremadeLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SelectPremadeLayer* create();
public:
    
private:
    [[deprecated("SelectPremadeLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectPremadeLayer::onSelectPremade not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectPremade(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectPremadeLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x29ba84
     * @note[short] MacOS (Intel): 0x309190
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SelectPremadeLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x29bfcc
     * @note[short] MacOS (Intel): 0x3096a0
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
