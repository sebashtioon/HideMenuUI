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
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UserListDelegate.hpp"

class FriendsProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, FLAlertLayer)
    
private:
    [[deprecated("FriendsProfilePage::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x580834
     * @note[short] MacOS (Intel): 0x6644e0
     * @note[short] iOS: 0x1e2744
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x58095c
     * @note[short] MacOS (Intel): 0x664670
     * @note[short] Windows: 0x13b830
     * @note[short] iOS: 0x1e2824
     * @note[short] Android
     */
    bool init(UserListType type);
    
private:
    [[deprecated("FriendsProfilePage::onBlocked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x58107c
     * @note[short] MacOS (Intel): 0x664e20
     * @note[short] Android
     */
    void onBlocked(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x580fc4
     * @note[short] MacOS (Intel): 0x664d60
     * @note[short] Windows: 0x13c6b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("FriendsProfilePage::onUpdate not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x581108
     * @note[short] MacOS (Intel): 0x664eb0
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x58116c
     * @note[short] MacOS (Intel): 0x664f20
     * @note[short] Windows: 0x13bf40
     * @note[short] Android
     */
    void setupUsersBrowser(cocos2d::CCArray* users, UserListType type);
    
private:
    [[deprecated("FriendsProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x581780
     * @note[short] MacOS (Intel): 0x665540
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x581774
     * @note[short] MacOS (Intel): 0x665510
     * @note[short] Windows: 0x13c770
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5813f0
     * @note[short] MacOS (Intel): 0x665190
     * @note[short] Windows: 0x13c2a0
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS (ARM): 0x581514
     * @note[short] MacOS (Intel): 0x6652d0
     * @note[short] Windows: 0x13c3f0
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);
    
private:
    [[deprecated("FriendsProfilePage::userListChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x581644
     * @note[short] MacOS (Intel): 0x6653e0
     * @note[short] Android
     */
    virtual void userListChanged(cocos2d::CCArray* p0, UserListType p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x581660
     * @note[short] MacOS (Intel): 0x665420
     * @note[short] Windows: 0x13c460
     * @note[short] Android
     */
    virtual void forceReloadList(UserListType p0);
    UserListType m_type;
    cocos2d::CCLabelBMFont* m_noInternet;
    cocos2d::CCLabelBMFont* m_totalFriends;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_circle;
    void* m_unk532;
    cocos2d::CCArray* m_users;
    CCMenuItemSpriteExtra* m_refreshBtn;
};
