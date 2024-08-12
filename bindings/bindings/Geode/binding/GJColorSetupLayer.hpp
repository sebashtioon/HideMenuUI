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
#include "ColorSelectDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJColorSetupLayer : public FLAlertLayer, public ColorSelectDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJColorSetupLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJColorSetupLayer, FLAlertLayer)
    
private:
    [[deprecated("GJColorSetupLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJColorSetupLayer* create(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("GJColorSetupLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("GJColorSetupLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJColorSetupLayer::onColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJColorSetupLayer::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJColorSetupLayer::showPage not implemented")]]
    /**
     * @note[short] Android
     */
    void showPage(int p0);
public:
    
private:
    [[deprecated("GJColorSetupLayer::updateSpriteColor not implemented")]]
    /**
     * @note[short] iOS: 0x19a2e8
     * @note[short] Android
     */
    void updateSpriteColor(ColorChannelSprite* p0, cocos2d::CCLabelBMFont* p1, int p2);
public:
    
private:
    [[deprecated("GJColorSetupLayer::updateSpriteColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpriteColors();
public:

    /**
     * @note[short] MacOS (ARM): 0x1b7dc8
     * @note[short] MacOS (Intel): 0x206870
     * @note[short] Windows: 0x2453e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1b7dbc
     * @note[short] MacOS (Intel): 0x206840
     * @note[short] Windows: 0x245310
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);
};
