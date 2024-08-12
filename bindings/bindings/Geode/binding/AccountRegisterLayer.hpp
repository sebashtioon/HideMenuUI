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
#include "GJAccountRegisterDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountRegisterLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountRegisterDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountRegisterLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountRegisterLayer, FLAlertLayer)
    
private:
    [[deprecated("AccountRegisterLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AccountRegisterLayer* create();
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextBackground(cocos2d::CCPoint p0, cocos2d::CCSize p1);
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextInput not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, gd::string p2, int p3);
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextLabel(cocos2d::CCPoint p0, gd::string p1, cocos2d::CCSize p2);
public:
    
private:
    [[deprecated("AccountRegisterLayer::disableNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableNodes();
public:
    
private:
    [[deprecated("AccountRegisterLayer::hideLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingUI();
public:
    
private:
    [[deprecated("AccountRegisterLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountRegisterLayer::onSubmit not implemented")]]
    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountRegisterLayer::resetLabel not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x404a94
     * @note[short] MacOS (Intel): 0x4a0f20
     * @note[short] Android
     */
    void resetLabel(int p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::resetLabels not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x404964
     * @note[short] MacOS (Intel): 0x4a0e00
     * @note[short] Android
     */
    void resetLabels();
public:
    
private:
    [[deprecated("AccountRegisterLayer::showLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    void showLoadingUI();
public:
    
private:
    [[deprecated("AccountRegisterLayer::toggleUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUI(bool p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(AccountError p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validEmail not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validEmail(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validPassword not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validPassword(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validUser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validUser(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x40293c
     * @note[short] MacOS (Intel): 0x49e910
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("AccountRegisterLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4051d4
     * @note[short] MacOS (Intel): 0x4a1690
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x404fd0
     * @note[short] MacOS (Intel): 0x4a14c0
     * @note[short] Windows: 0x79600
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x404b8c
     * @note[short] MacOS (Intel): 0x4a1010
     * @note[short] Windows: 0x78c10
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
     * @note[short] MacOS (ARM): 0x40520c
     * @note[short] MacOS (Intel): 0x4a16d0
     * @note[short] Windows: 0x79760
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
     * @note[short] MacOS (ARM): 0x405ab4
     * @note[short] MacOS (Intel): 0x4a21d0
     * @note[short] Windows: 0x79fd0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x405b84
     * @note[short] MacOS (Intel): 0x4a2290
     * @note[short] Windows: 0x7a030
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x405c3c
     * @note[short] MacOS (Intel): 0x4a2340
     * @note[short] Windows: 0x7a080
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x4043e8
     * @note[short] MacOS (Intel): 0x4a0870
     * @note[short] Windows: 0x786a0
     * @note[short] Android
     */
    virtual TodoReturn registerAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0x404580
     * @note[short] MacOS (Intel): 0x4a0a10
     * @note[short] Windows: 0x788c0
     * @note[short] Android
     */
    virtual TodoReturn registerAccountFailed(AccountError p0);
};
