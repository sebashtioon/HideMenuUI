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
#include "TextInputDelegate.hpp"

class MoreVideoOptionsLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreVideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreVideoOptionsLayer, FLAlertLayer)
    
private:
    [[deprecated("MoreVideoOptionsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static MoreVideoOptionsLayer* create();
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::addToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void addToggle(char const* p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::countForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countForPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::incrementCountForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementCountForPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::infoKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn infoKey(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::layerForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn layerForPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::layerKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn layerKey(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::nextPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nextPosition(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::objectKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectKey(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::objectsForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectsForPage(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onApplyFPS not implemented")]]
    /**
     * @note[short] Android
     */
    void onApplyFPS(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::onToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::pageKey not implemented")]]
    /**
     * @note[short] Android
     */
    void pageKey(int p0);
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::updateFPSButtons not implemented")]]
    /**
     * @note[short] Android
     */
    void updateFPSButtons();
public:
    
private:
    [[deprecated("MoreVideoOptionsLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6b3ff8
     * @note[short] MacOS (Intel): 0x7ad0a0
     * @note[short] Android
     */
    virtual bool init();
public:

    /**
     * @note[short] MacOS (ARM): 0x6b6004
     * @note[short] MacOS (Intel): 0x7af160
     * @note[short] Windows: 0x359960
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
