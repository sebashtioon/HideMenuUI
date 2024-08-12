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

class UIOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIOptionsLayer, SetupTriggerPopup)
    
private:
    [[deprecated("UIOptionsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UIOptionsLayer* create(bool p0);
public:
    
private:
    [[deprecated("UIOptionsLayer::getNode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNode(int p0);
public:
    
private:
    [[deprecated("UIOptionsLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(bool p0);
public:
    
private:
    [[deprecated("UIOptionsLayer::onReset not implemented")]]
    /**
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UIOptionsLayer::onSaveLoad not implemented")]]
    /**
     * @note[short] Android
     */
    void onSaveLoad(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UIOptionsLayer::toggleUIGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUIGroup(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2512c4
     * @note[short] MacOS (Intel): 0x2b0a90
     * @note[short] Windows: 0x2919d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x25147c
     * @note[short] MacOS (Intel): 0x2b0c60
     * @note[short] Windows: 0x291b20
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x25168c
     * @note[short] MacOS (Intel): 0x2b0e00
     * @note[short] Windows: 0x291c50
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("UIOptionsLayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2517e0
     * @note[short] MacOS (Intel): 0x2b0f40
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UIOptionsLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2517fc
     * @note[short] MacOS (Intel): 0x2b0f80
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("UIOptionsLayer::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x250ca4
     * @note[short] MacOS (Intel): 0x2b0310
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UIOptionsLayer::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x250df4
     * @note[short] MacOS (Intel): 0x2b04a0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("UIOptionsLayer::getValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x251058
     * @note[short] MacOS (Intel): 0x2b07b0
     * @note[short] Android
     */
    virtual TodoReturn getValue(int p0);
public:
};
