#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJAccountManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJAccountManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJAccountManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJAccountManager* get();

    /**
     * @note[short] MacOS (ARM): 0xba1b0
     * @note[short] MacOS (Intel): 0xd2800
     * @note[short] Windows: 0x1f1220
     * @note[short] iOS: 0x3a7cd4
     * @note[short] Android
     */
    static GJAccountManager* sharedState();
    
private:
    [[deprecated("GJAccountManager::addDLToActive not implemented")]]
    /**
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* p1);
public:
    
private:
    [[deprecated("GJAccountManager::addDLToActive not implemented")]]
    /**
     * @note[short] Android
     */
    void addDLToActive(char const* tag);
public:

    /**
     * @note[short] Windows: 0x1f2bc0
     * @note[short] Android
     */
    bool backupAccount(gd::string p0);
    
private:
    [[deprecated("GJAccountManager::dataLoaded not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0xbf188
     * @note[short] MacOS (Intel): 0xd7f90
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJAccountManager::encodeDataTo not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0xbf130
     * @note[short] MacOS (Intel): 0xd7f30
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJAccountManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("GJAccountManager::getAccountBackupURL not implemented")]]
    /**
     * @note[short] Android
     */
    void getAccountBackupURL();
public:
    
private:
    [[deprecated("GJAccountManager::getAccountSyncURL not implemented")]]
    /**
     * @note[short] Android
     */
    void getAccountSyncURL();
public:
    
private:
    [[deprecated("GJAccountManager::getDLObject not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* p0);
public:

    /**
     * @note[short] Windows: 0x1f4ff0
     * @note[short] Android
     */
    gd::string getShaPassword(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0xba5d4
     * @note[short] MacOS (Intel): 0xd2c80
     * @note[short] Windows: 0x1f1590
     * @note[short] Android
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("GJAccountManager::handleItDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GJAccountManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("GJAccountManager::isDLActive not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDLActive(char const* tag);
public:
    
private:
    [[deprecated("GJAccountManager::linkToAccount not implemented")]]
    /**
     * @note[short] Android
     */
    void linkToAccount(gd::string p0, gd::string p1, int p2, int p3);
public:
    
private:
    [[deprecated("GJAccountManager::loginAccount not implemented")]]
    /**
     * @note[short] Android
     */
    void loginAccount(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] Windows: 0x1f30f0
     * @note[short] Android
     */
    void onBackupAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x1f28f0
     * @note[short] Android
     */
    void onGetAccountBackupURLCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x1f3840
     * @note[short] Android
     */
    void onGetAccountSyncURLCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x1f21b0
     * @note[short] Android
     */
    void onLoginAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x1f1490
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Windows: 0x1f1bc0
     * @note[short] Android
     */
    void onRegisterAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0xbbb7c
     * @note[short] MacOS (Intel): 0xd44b0
     * @note[short] Windows: 0x1f3d80
     * @note[short] Android
     */
    void onSyncAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x1f4e90
     * @note[short] Android
     */
    void onUpdateAccountSettingsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x1f1340
     * @note[short] Android
     */
    void ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("GJAccountManager::registerAccount not implemented")]]
    /**
     * @note[short] Android
     */
    void registerAccount(gd::string p0, gd::string p1, gd::string p2);
public:
    
private:
    [[deprecated("GJAccountManager::removeDLFromActive not implemented")]]
    /**
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);
public:
    
private:
    [[deprecated("GJAccountManager::syncAccount not implemented")]]
    /**
     * @note[short] Android
     */
    bool syncAccount(gd::string p0);
public:
    
private:
    [[deprecated("GJAccountManager::unlinkFromAccount not implemented")]]
    /**
     * @note[short] Android
     */
    void unlinkFromAccount();
public:
    
private:
    [[deprecated("GJAccountManager::updateAccountSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void updateAccountSettings(int p0, int p1, int p2, gd::string p3, gd::string p4, gd::string p5);
public:

    /**
     * @note[short] MacOS (ARM): 0xbcec8
     * @note[short] MacOS (Intel): 0xd5a90
     * @note[short] Windows: 0x1f17e0
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCDictionary* m_activeDownloads;
    gd::string m_username;
    int m_accountID;
    int m_unkInt1;
    int m_unkInt2;
    gd::string m_GJP2;
    GJAccountRegisterDelegate* m_accountRegisterDelegate;
    GJAccountLoginDelegate* m_accountLoginDelegate;
    GJAccountDelegate* m_accountDelegate;
    GJAccountBackupDelegate* m_backupDelegate;
    GJAccountSyncDelegate* m_syncDelegate;
    GJAccountSettingsDelegate* m_accountSettingsDelegate;
    int m_gameManagerSize;
    int m_localLevelsSize;
    gd::string m_password;
};
