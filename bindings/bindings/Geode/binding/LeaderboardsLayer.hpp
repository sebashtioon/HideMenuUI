#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LeaderboardsLayer : public cocos2d::CCLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LeaderboardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LeaderboardsLayer, cocos2d::CCLayer)
	inline LeaderboardsLayer() {
		m_list = nullptr;
		m_userScores = nullptr;
		m_state = LeaderboardState::Default;
		m_topBtn = nullptr;
		m_globalBtn = nullptr;
		m_creatorsBtn = nullptr;
		m_friendsBtn = nullptr;
		m_circle = nullptr;
		m_noInternet = nullptr;
		m_tabs = nullptr;
	}

    /**
     * @note[short] MacOS (ARM): 0x46fc3c
     * @note[short] MacOS (Intel): 0x51a6d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b96ac
     * @note[short] Android
     */
    static LeaderboardsLayer* create(LeaderboardState state);

    /**
     * @note[short] MacOS (ARM): 0x46fd08
     * @note[short] MacOS (Intel): 0x51a7d0
     * @note[short] Windows: 0x2aed30
     * @note[short] iOS: 0x3b976c
     * @note[short] Android
     */
    bool init(LeaderboardState p0);
    
private:
    [[deprecated("LeaderboardsLayer::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onCreators not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreators(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onGlobal not implemented")]]
    /**
     * @note[short] Android
     */
    void onGlobal(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onTop not implemented")]]
    /**
     * @note[short] Android
     */
    void onTop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onWeek not implemented")]]
    /**
     * @note[short] Android
     */
    void onWeek(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2afce0
     * @note[short] Android
     */
    void refreshTabs();
    
private:
    [[deprecated("LeaderboardsLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(LeaderboardState p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4708ec
     * @note[short] MacOS (Intel): 0x51b440
     * @note[short] Windows: 0x2afe10
     * @note[short] Android
     */
    void selectLeaderboard(LeaderboardState p0);

    /**
     * @note[short] Windows: 0x2afb80
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* p0);
    
private:
    [[deprecated("LeaderboardsLayer::setupTabs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupTabs();
public:

    /**
     * @note[short] Windows: 0x2b0060
     * @note[short] Android
     */
    void toggleTabButtons();

    /**
     * @note[short] MacOS (ARM): 0x471864
     * @note[short] MacOS (Intel): 0x51c490
     * @note[short] Windows: 0x2b0fb0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x47180c
     * @note[short] MacOS (Intel): 0x51c430
     * @note[short] Windows: 0x2b0f00
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x470e7c
     * @note[short] MacOS (Intel): 0x51ba00
     * @note[short] Windows: 0x2b0250
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x470eb4
     * @note[short] MacOS (Intel): 0x51ba60
     * @note[short] Windows: 0x2b0270
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x470f5c
     * @note[short] MacOS (Intel): 0x51bb00
     * @note[short] Windows: 0x2b0280
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x4715ac
     * @note[short] MacOS (Intel): 0x51c1b0
     * @note[short] Windows: 0x2b0310
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* p0);
    GJListLayer* m_list;
    cocos2d::CCArray* m_userScores;
    LeaderboardState m_state;
    CCMenuItemToggler* m_topBtn;
    CCMenuItemToggler* m_globalBtn;
    CCMenuItemToggler* m_creatorsBtn;
    CCMenuItemToggler* m_friendsBtn;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    cocos2d::CCArray* m_tabs;
};
