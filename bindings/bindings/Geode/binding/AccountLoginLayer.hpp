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
#include "GJAccountLoginDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountLoginLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountLoginDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLoginLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLoginLayer, FLAlertLayer)
    
private:
    [[deprecated("AccountLoginLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AccountLoginLayer* create(gd::string p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::createTextBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextBackground(cocos2d::CCPoint p0, char const* p1, cocos2d::CCSize p2);
public:
    
private:
    [[deprecated("AccountLoginLayer::createTextInput not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, char const* p2, int p3);
public:
    
private:
    [[deprecated("AccountLoginLayer::createTextLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextLabel(cocos2d::CCPoint p0, char const* p1, cocos2d::CCSize p2);
public:
    
private:
    [[deprecated("AccountLoginLayer::disableNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableNodes();
public:
    
private:
    [[deprecated("AccountLoginLayer::hideLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingUI();
public:
    
private:
    [[deprecated("AccountLoginLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(gd::string p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountLoginLayer::onForgotPassword not implemented")]]
    /**
     * @note[short] Android
     */
    void onForgotPassword(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountLoginLayer::onForgotUser not implemented")]]
    /**
     * @note[short] Android
     */
    void onForgotUser(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x7b5d0
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AccountLoginLayer::resetLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetLabel(int p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::resetLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetLabels();
public:
    
private:
    [[deprecated("AccountLoginLayer::showLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    void showLoadingUI();
public:
    
private:
    [[deprecated("AccountLoginLayer::toggleUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUI(bool p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(AccountError p0);
public:
    
private:
    [[deprecated("AccountLoginLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x407e04
     * @note[short] MacOS (Intel): 0x4a46b0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x407cb4
     * @note[short] MacOS (Intel): 0x4a4570
     * @note[short] Windows: 0x7b9b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x407aa0
     * @note[short] MacOS (Intel): 0x4a43b0
     * @note[short] Windows: 0x7b560
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x407e3c
     * @note[short] MacOS (Intel): 0x4a46f0
     * @note[short] Windows: 0x7ba80
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x407330
     * @note[short] MacOS (Intel): 0x4a3c10
     * @note[short] Windows: 0x7b150
     * @note[short] Android
     */
    virtual TodoReturn loginAccountFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x40774c
     * @note[short] MacOS (Intel): 0x4a4080
     * @note[short] Windows: 0x7b3a0
     * @note[short] Android
     */
    virtual TodoReturn loginAccountFailed(AccountError p0);
    CCTextInputNode* m_usernameInput;
    CCTextInputNode* m_passwordInput;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    cocos2d::CCLabelBMFont* m_passwordLabel;
    GEODE_PAD(64);
};
