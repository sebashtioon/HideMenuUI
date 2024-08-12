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
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "UserInfoDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "LeaderboardManagerDelegate.hpp"

class ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "ProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6ca568
     * @note[short] MacOS (Intel): 0x7c4d90
     * @note[short] Windows: 0x39b1d0
     * @note[short] iOS: 0x1a24a4
     * @note[short] Android
     */
    static ProfilePage* create(int accountID, bool ownProfile);
    
private:
    [[deprecated("ProfilePage::blockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void blockUser();
public:

    /**
     * @note[short] MacOS (ARM): 0x6ca6d8
     * @note[short] MacOS (Intel): 0x7c4fa0
     * @note[short] Windows: 0x39b3b0
     * @note[short] iOS: 0x1a2528
     * @note[short] Android
     */
    bool init(int accountID, bool ownProfile);

    /**
     * @note[short] Windows: 0x3a22f0
     * @note[short] Android
     */
    bool isCorrect(char const* key);
    
private:
    [[deprecated("ProfilePage::isOnWatchlist not implemented")]]
    /**
     * @note[short] Android
     */
    bool isOnWatchlist(int p0);
public:

    /**
     * @note[short] Windows: 0x3a2420
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6cb934
     * @note[short] MacOS (Intel): 0x7c6330
     * @note[short] Windows: 0x39c890
     * @note[short] iOS: 0x1a36b4
     * @note[short] Android
     */
    void loadPageFromUserInfo(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x6cfae8
     * @note[short] MacOS (Intel): 0x7cab80
     * @note[short] Windows: 0x3a07e0
     * @note[short] Android
     */
    void onBlockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6cb174
     * @note[short] MacOS (Intel): 0x7c5af0
     * @note[short] Windows: 0x3a15b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6d03dc
     * @note[short] MacOS (Intel): 0x7cb4a0
     * @note[short] Windows: 0x3a0230
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ced20
     * @note[short] MacOS (Intel): 0x7c9c10
     * @note[short] Windows: 0x3a01a0
     * @note[short] Android
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6cf394
     * @note[short] MacOS (Intel): 0x7ca3a0
     * @note[short] Windows: 0x39f870
     * @note[short] Android
     */
    void onCopyName(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6cb3e4
     * @note[short] MacOS (Intel): 0x7c5d70
     * @note[short] Windows: 0x3a0a30
     * @note[short] Android
     */
    void onFollow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6cf7a4
     * @note[short] MacOS (Intel): 0x7ca7e0
     * @note[short] Windows: 0x3a03f0
     * @note[short] Android
     */
    void onFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6d02a4
     * @note[short] MacOS (Intel): 0x7cb360
     * @note[short] Windows: 0x3a20c0
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6d0218
     * @note[short] MacOS (Intel): 0x7cb2d0
     * @note[short] Windows: 0x3a2090
     * @note[short] Android
     */
    void onMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6cfe88
     * @note[short] MacOS (Intel): 0x7caf30
     * @note[short] Windows: 0x39fe90
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6d004c
     * @note[short] MacOS (Intel): 0x7cb100
     * @note[short] Windows: 0x3a0040
     * @note[short] Android
     */
    void onMyLists(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3a2b20
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3a2b30
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6d0330
     * @note[short] MacOS (Intel): 0x7cb3f0
     * @note[short] Windows: 0x3a20f0
     * @note[short] Android
     */
    void onRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6cf69c
     * @note[short] MacOS (Intel): 0x7ca6d0
     * @note[short] Windows: 0x3a01e0
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6d03bc
     * @note[short] MacOS (Intel): 0x7cb480
     * @note[short] Windows: 0x3a1ee0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6cdfe0
     * @note[short] MacOS (Intel): 0x7c8e70
     * @note[short] Windows: 0x39f6a0
     * @note[short] Android
     */
    void onStatInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6cead4
     * @note[short] MacOS (Intel): 0x7c99d0
     * @note[short] Windows: 0x3a1d40
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ce874
     * @note[short] MacOS (Intel): 0x7c9770
     * @note[short] Windows: 0x3a1bb0
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6cb634
     * @note[short] MacOS (Intel): 0x7c5ff0
     * @note[short] Windows: 0x39c360
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ce61c
     * @note[short] MacOS (Intel): 0x7c9510
     * @note[short] Windows: 0x3a1a20
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ProfilePage::setupComments not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6cb1ec
     * @note[short] MacOS (Intel): 0x7c5b70
     * @note[short] Android
     */
    void setupComments();
public:

    /**
     * @note[short] MacOS (ARM): 0x6cb804
     * @note[short] MacOS (Intel): 0x7c61f0
     * @note[short] Windows: 0x3a2710
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x3a1640
     * @note[short] Android
     */
    void showNoAccountError();
    
private:
    [[deprecated("ProfilePage::toggleMainPageVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleMainPageVisibility(bool p0);
public:
    
private:
    [[deprecated("ProfilePage::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:

    /**
     * @note[short] Windows: 0x3a2ab0
     * @note[short] Android
     */
    void updatePageArrows();
    
private:
    [[deprecated("ProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6d2954
     * @note[short] MacOS (Intel): 0x7cdb20
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x6d14b4
     * @note[short] MacOS (Intel): 0x7cc5e0
     * @note[short] Windows: 0x3a1630
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6d16e4
     * @note[short] MacOS (Intel): 0x7cc860
     * @note[short] Windows: 0x3a18c0
     * @note[short] iOS: 0x1a7a68
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x6d0f28
     * @note[short] MacOS (Intel): 0x7cc090
     * @note[short] Windows: 0x3a1000
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x6d15a8
     * @note[short] MacOS (Intel): 0x7cc6f0
     * @note[short] Windows: 0x3a1780
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x6d163c
     * @note[short] MacOS (Intel): 0x7cc7c0
     * @note[short] Windows: 0x3a1870
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x6d19e0
     * @note[short] MacOS (Intel): 0x7ccb50
     * @note[short] Windows: 0x3a2120
     * @note[short] iOS: 0x1a7ba0
     * @note[short] Android
     */
    virtual void getUserInfoFinished(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x6d1ce8
     * @note[short] MacOS (Intel): 0x7ccea0
     * @note[short] Windows: 0x3a2210
     * @note[short] Android
     */
    virtual void getUserInfoFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6d1dc0
     * @note[short] MacOS (Intel): 0x7ccf60
     * @note[short] Windows: 0x3a2270
     * @note[short] Android
     */
    virtual void userInfoChanged(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x6d1fd4
     * @note[short] MacOS (Intel): 0x7cd170
     * @note[short] Windows: 0x3a2860
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6d20e0
     * @note[short] MacOS (Intel): 0x7cd260
     * @note[short] Windows: 0x3a28e0
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x6d21b4
     * @note[short] MacOS (Intel): 0x7cd330
     * @note[short] Windows: 0x3a2940
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6d267c
     * @note[short] MacOS (Intel): 0x7cd830
     * @note[short] Windows: 0x3a2b40
     * @note[short] Android
     */
    virtual void commentUploadFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6d271c
     * @note[short] MacOS (Intel): 0x7cd8c0
     * @note[short] Windows: 0x3a2b90
     * @note[short] Android
     */
    virtual void commentUploadFailed(int p0, CommentError p1);

    /**
     * @note[short] MacOS (ARM): 0x6d27f0
     * @note[short] MacOS (Intel): 0x7cd990
     * @note[short] Windows: 0x3a2cb0
     * @note[short] Android
     */
    virtual void commentDeleteFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x6d10e0
     * @note[short] MacOS (Intel): 0x7cc270
     * @note[short] Windows: 0x3a12f0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x6d1168
     * @note[short] MacOS (Intel): 0x7cc2f0
     * @note[short] Windows: 0x3a1340
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x6d1354
     * @note[short] MacOS (Intel): 0x7cc4c0
     * @note[short] Windows: 0x3a1500
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);
    GJUserScore* m_score;
    int m_accountID;
    bool m_ownProfile;
    gd::string m_profileKey;
    cocos2d::CCLabelBMFont* m_somethingWentWrong;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_followBtn;
    void* m_unk;
    cocos2d::CCArray* m_buttons;
    cocos2d::CCArray* m_arrayWithUsernameLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    LoadingCircle* m_circle;
    void* m_popupDelegate;
    CCMenuItemSpriteExtra* m_refreshBtn;
};
