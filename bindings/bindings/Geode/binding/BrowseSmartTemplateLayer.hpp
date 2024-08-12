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

class BrowseSmartTemplateLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartTemplateLayer, FLAlertLayer)
    
private:
    [[deprecated("BrowseSmartTemplateLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static BrowseSmartTemplateLayer* create(GJSmartTemplate* p0, SmartBrowseFilter p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::addObjectToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectToPage(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::addPrefabMenuItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPrefabMenuItem(SmartPrefabResult p0, int p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::baseSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn baseSetup();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::createDots not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createDots();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::createPrefab not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPrefab(gd::string p0, int p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJSmartTemplate* p0, SmartBrowseFilter p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onTemplateObject not implemented")]]
    /**
     * @note[short] Android
     */
    void onTemplateObject(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::updateDots not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDots();
public:

    /**
     * @note[short] MacOS (ARM): 0x44e984
     * @note[short] MacOS (Intel): 0x4f5220
     * @note[short] Windows: 0x42f860
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x44e9a8
     * @note[short] MacOS (Intel): 0x4f5260
     * @note[short] Windows: 0x42f880
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);
};
