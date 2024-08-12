#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "GJAccountDelegate.hpp"
#include "GJAccountBackupDelegate.hpp"
#include "GJAccountSyncDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountLayer : public GJDropDownLayer, public GJAccountDelegate, public GJAccountBackupDelegate, public GJAccountSyncDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x7bf70
     * @note[short] Android
     */
    static AccountLayer* create();
    
private:
    [[deprecated("AccountLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("AccountLayer::doBackup not implemented")]]
    /**
     * @note[short] Android
     */
    void doBackup();
public:
    
private:
    [[deprecated("AccountLayer::doSync not implemented")]]
    /**
     * @note[short] Android
     */
    void doSync();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void hideLoadingUI();

    /**
     * @note[short] Windows: 0x7c9e0
     * @note[short] Android
     */
    void onBackup(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x7cfb0
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x7c820
     * @note[short] Android
     */
    void onLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x7d0d0
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x7c860
     * @note[short] Android
     */
    void onRegister(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x7cd30
     * @note[short] Android
     */
    void onSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void toggleUI(bool enable);

    /**
     * @note[short] Windows: 0x7d130
     * @note[short] Android
     */
    void updatePage(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xb6d88
     * @note[short] MacOS (Intel): 0xcf0e0
     * @note[short] Windows: 0x7c0d0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0xb8e88
     * @note[short] MacOS (Intel): 0xd12e0
     * @note[short] Windows: 0x7de20
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0xb8444
     * @note[short] MacOS (Intel): 0xd0830
     * @note[short] Windows: 0x7d500
     * @note[short] Android
     */
    virtual TodoReturn backupAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0xb8604
     * @note[short] MacOS (Intel): 0xd09f0
     * @note[short] Windows: 0x7d6b0
     * @note[short] Android
     */
    virtual TodoReturn backupAccountFailed(BackupAccountError p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0xb8974
     * @note[short] MacOS (Intel): 0xd0da0
     * @note[short] Windows: 0x7d9c0
     * @note[short] Android
     */
    virtual TodoReturn syncAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0xb8adc
     * @note[short] MacOS (Intel): 0xd0f20
     * @note[short] Windows: 0x7db80
     * @note[short] Android
     */
    virtual TodoReturn syncAccountFailed(BackupAccountError p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0xb8430
     * @note[short] MacOS (Intel): 0xd0800
     * @note[short] Windows: 0x7d120
     * @note[short] Android
     */
    virtual TodoReturn accountStatusChanged();

    /**
     * @note[short] MacOS (ARM): 0xb8d58
     * @note[short] MacOS (Intel): 0xd11c0
     * @note[short] Windows: 0x7dd10
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    cocos2d::CCLabelBMFont* m_linkedAccountTitle;
    TextArea* m_textArea;
    CCMenuItemSpriteExtra* m_loginButton;
    CCMenuItemSpriteExtra* m_registerButton;
    CCMenuItemSpriteExtra* m_backupButton;
    CCMenuItemSpriteExtra* m_syncButton;
    CCMenuItemSpriteExtra* m_helpButton;
    CCMenuItemSpriteExtra* m_moreButton;
    LoadingCircle* m_loadingCircle;
    int m_accountHelpRelated;
    bool m_isLoggedIn;
};
