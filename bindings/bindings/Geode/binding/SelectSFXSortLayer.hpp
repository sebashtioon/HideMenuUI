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

class SelectSFXSortLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSFXSortLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSFXSortLayer, FLAlertLayer)
    
private:
    [[deprecated("SelectSFXSortLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SelectSFXSortLayer* create(AudioSortType p0);
public:
    
private:
    [[deprecated("SelectSFXSortLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(AudioSortType p0);
public:
    
private:
    [[deprecated("SelectSFXSortLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectSFXSortLayer::onSelect not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectSFXSortLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3bc0bc
     * @note[short] MacOS (Intel): 0x44ab10
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
