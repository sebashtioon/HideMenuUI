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

class KeybindingsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "KeybindingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindingsLayer, FLAlertLayer)
    
private:
    [[deprecated("KeybindingsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static KeybindingsLayer* create();
public:
    
private:
    [[deprecated("KeybindingsLayer::addKeyPair not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addKeyPair(char const* p0, char const* p1);
public:
    
private:
    [[deprecated("KeybindingsLayer::countForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countForPage(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::incrementCountForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementCountForPage(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::infoKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn infoKey(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::layerForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn layerForPage(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::layerKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn layerKey(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::nextPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nextPosition(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::objectKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectKey(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::objectsForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectsForPage(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::onToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("KeybindingsLayer::pageKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pageKey(int p0);
public:
    
private:
    [[deprecated("KeybindingsLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x538ce8
     * @note[short] MacOS (Intel): 0x615040
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("KeybindingsLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x53a5f0
     * @note[short] MacOS (Intel): 0x616950
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
