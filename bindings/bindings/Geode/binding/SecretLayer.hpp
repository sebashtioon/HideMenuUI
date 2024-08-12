#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class SecretLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SecretLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("SecretLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SecretLayer* create();
public:
    
private:
    [[deprecated("SecretLayer::getBasicMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBasicMessage();
public:
    
private:
    [[deprecated("SecretLayer::getMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMessage();
public:
    
private:
    [[deprecated("SecretLayer::getThreadMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getThreadMessage();
public:
    
private:
    [[deprecated("SecretLayer::nodeWithTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nodeWithTag(int p0);
public:

    /**
     * @note[short] Windows: 0x3bc630
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3b85c0
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SecretLayer::playCoinEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("SecretLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();
public:
    
private:
    [[deprecated("SecretLayer::selectAThread not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectAThread();
public:
    
private:
    [[deprecated("SecretLayer::updateMessageLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMessageLabel(gd::string p0);
public:
    
private:
    [[deprecated("SecretLayer::updateSearchLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);
public:
    
private:
    [[deprecated("SecretLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x52bc04
     * @note[short] MacOS (Intel): 0x6056d0
     * @note[short] Android
     */
    virtual bool init();
public:

    /**
     * @note[short] MacOS (ARM): 0x52f41c
     * @note[short] MacOS (Intel): 0x6094b0
     * @note[short] Windows: 0x3bc6d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x52e828
     * @note[short] MacOS (Intel): 0x608630
     * @note[short] Windows: 0x3b9fd0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x52e908
     * @note[short] MacOS (Intel): 0x608700
     * @note[short] Windows: 0x3ba120
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
    
private:
    [[deprecated("SecretLayer::textChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x52ea18
     * @note[short] MacOS (Intel): 0x6087d0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
