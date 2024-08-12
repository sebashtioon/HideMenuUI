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
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "InfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6c0924
     * @note[short] MacOS (Intel): 0x7ba500
     * @note[short] Windows: 0x2a82d0
     * @note[short] iOS: 0x35e1e0
     * @note[short] Android
     */
    static InfoLayer* create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);

    /**
     * @note[short] MacOS (ARM): 0x6c3034
     * @note[short] MacOS (Intel): 0x7bd0d0
     * @note[short] Windows: 0x2aa850
     * @note[short] Android
     */
    TodoReturn confirmReport(cocos2d::CCObject* p0);
    
private:
    [[deprecated("InfoLayer::getAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    int getAccountID();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getID();
    
private:
    [[deprecated("InfoLayer::getRealID not implemented")]]
    /**
     * @note[short] Android
     */
    int getRealID();
public:

    /**
     * @note[short] Windows: 0x2aa3b0
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4);

    /**
     * @note[short] MacOS (ARM): 0x6c0a74
     * @note[short] MacOS (Intel): 0x7ba6b0
     * @note[short] Windows: 0x2a8470
     * @note[short] iOS: 0x35e2e4
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);
    
private:
    [[deprecated("InfoLayer::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x6c3704
     * @note[short] MacOS (Intel): 0x7bd7a0
     * @note[short] Windows: 0x2abd50
     * @note[short] Android
     */
    void loadPage(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x6c3314
     * @note[short] MacOS (Intel): 0x7bd3a0
     * @note[short] Windows: 0x2abb90
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c2c44
     * @note[short] MacOS (Intel): 0x7bcc90
     * @note[short] Windows: 0x2aaff0
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2aac70
     * @note[short] Android
     */
    void onCopyLevelID(cocos2d::CCObject* sender);
    
private:
    [[deprecated("InfoLayer::onGetComments not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c36f8
     * @note[short] MacOS (Intel): 0x7bd790
     * @note[short] Android
     */
    void onGetComments(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x6c3bd0
     * @note[short] MacOS (Intel): 0x7bdcf0
     * @note[short] Windows: 0x2ab5b0
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c28bc
     * @note[short] MacOS (Intel): 0x7bc900
     * @note[short] Windows: 0x2aaed0
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c3398
     * @note[short] MacOS (Intel): 0x7bd440
     * @note[short] Windows: 0x2ac8c0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c2b14
     * @note[short] MacOS (Intel): 0x7bcb50
     * @note[short] Windows: 0x2aaf30
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c3388
     * @note[short] MacOS (Intel): 0x7bd420
     * @note[short] Windows: 0x2ac8d0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("InfoLayer::onRefreshComments not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c41e4
     * @note[short] MacOS (Intel): 0x7be330
     * @note[short] Android
     */
    void onRefreshComments(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("InfoLayer::onSimilar not implemented")]]
    /**
     * @note[short] Android
     */
    void onSimilar(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2acc50
     * @note[short] Android
     */
    TodoReturn reloadWindow();

    /**
     * @note[short] MacOS (ARM): 0x6c3a5c
     * @note[short] MacOS (Intel): 0x7bdb50
     * @note[short] Windows: 0x2ac2c0
     * @note[short] iOS: 0x360b8c
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x6c2918
     * @note[short] MacOS (Intel): 0x7bc950
     * @note[short] Windows: 0x2aa4f0
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x6c348c
     * @note[short] MacOS (Intel): 0x7bd540
     * @note[short] Windows: 0x2ace70
     * @note[short] Android
     */
    void toggleCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c356c
     * @note[short] MacOS (Intel): 0x7bd620
     * @note[short] Windows: 0x2acb00
     * @note[short] Android
     */
    void toggleExtendedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c359c
     * @note[short] MacOS (Intel): 0x7bd650
     * @note[short] Windows: 0x2acb60
     * @note[short] Android
     */
    void toggleSmallCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2acf30
     * @note[short] Android
     */
    TodoReturn updateCommentModeButtons();
    
private:
    [[deprecated("InfoLayer::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("InfoLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c4794
     * @note[short] MacOS (Intel): 0x7be910
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x6c46a8
     * @note[short] MacOS (Intel): 0x7be800
     * @note[short] Windows: 0x2abc10
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6c5538
     * @note[short] MacOS (Intel): 0x7bf760
     * @note[short] Windows: 0x2ad030
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x6c48d4
     * @note[short] MacOS (Intel): 0x7bea70
     * @note[short] Windows: 0x2ac4e0
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6c49b8
     * @note[short] MacOS (Intel): 0x7beb40
     * @note[short] Windows: 0x2ac550
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x6c4a64
     * @note[short] MacOS (Intel): 0x7bebe0
     * @note[short] Windows: 0x2ac5a0
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6c5158
     * @note[short] MacOS (Intel): 0x7bf310
     * @note[short] Windows: 0x2ac8e0
     * @note[short] Android
     */
    virtual void commentUploadFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6c5270
     * @note[short] MacOS (Intel): 0x7bf460
     * @note[short] Windows: 0x2ac9b0
     * @note[short] Android
     */
    virtual void commentUploadFailed(int p0, CommentError p1);

    /**
     * @note[short] MacOS (ARM): 0x6c4fd0
     * @note[short] MacOS (Intel): 0x7bf170
     * @note[short] Windows: 0x2ac790
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x6c4474
     * @note[short] MacOS (Intel): 0x7be5c0
     * @note[short] Windows: 0x2aadb0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    GJGameLevel* m_level;
    GJUserScore* m_score;
    GJLevelList* m_levelList;
    gd::string m_commentKey;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_noComments;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_reportBtn;
    CCMenuItemSpriteExtra* m_commentsBtn;
    CCMenuItemSpriteExtra* m_refreshCommentsBtn;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_canUpdateUserScore;
    CommentKeyType m_mode;
};
