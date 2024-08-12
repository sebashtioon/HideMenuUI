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
#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LevelLeaderboard : public FLAlertLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LevelLeaderboard";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelLeaderboard, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x35e5e4
     * @note[short] MacOS (Intel): 0x3ddef0
     * @note[short] Windows: 0x2e0520
     * @note[short] iOS: 0x25ed78
     * @note[short] Android
     */
    static LevelLeaderboard* create(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    
private:
    [[deprecated("LevelLeaderboard::deleteLocalScores not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteLocalScores();
public:
    
private:
    [[deprecated("LevelLeaderboard::getLocalScores not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLocalScores();
public:
    
private:
    [[deprecated("LevelLeaderboard::getSpriteButton not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x35f688
     * @note[short] MacOS (Intel): 0x3df150
     * @note[short] Android
     */
    TodoReturn getSpriteButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4, int p5);
public:

    /**
     * @note[short] MacOS (ARM): 0x35e720
     * @note[short] MacOS (Intel): 0x3de080
     * @note[short] Windows: 0x2e0660
     * @note[short] iOS: 0x25ee68
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    
private:
    [[deprecated("LevelLeaderboard::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:
    
private:
    [[deprecated("LevelLeaderboard::loadScores not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x35fb00
     * @note[short] MacOS (Intel): 0x3df5a0
     * @note[short] Android
     */
    void loadScores();
public:

    /**
     * @note[short] MacOS (ARM): 0x35f858
     * @note[short] MacOS (Intel): 0x3df310
     * @note[short] Windows: 0x2e22e0
     * @note[short] Android
     */
    void onChangeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2e2240
     * @note[short] Android
     */
    void onChangeType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35f980
     * @note[short] MacOS (Intel): 0x3df430
     * @note[short] Windows: 0x82fc0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35f8a8
     * @note[short] MacOS (Intel): 0x3df360
     * @note[short] Windows: 0x2e19d0
     * @note[short] Android
     */
    void onDeleteLocalScores(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35f9bc
     * @note[short] MacOS (Intel): 0x3df460
     * @note[short] Windows: 0x2e2360
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelLeaderboard::reloadLeaderboard not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadLeaderboard(LevelLeaderboardType p0, LevelLeaderboardMode p1);
public:
    
private:
    [[deprecated("LevelLeaderboard::setupLeaderboard not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x35fd04
     * @note[short] MacOS (Intel): 0x3df790
     * @note[short] Android
     */
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelLeaderboard::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x360434
     * @note[short] MacOS (Intel): 0x3dfeb0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("LevelLeaderboard::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3603b8
     * @note[short] MacOS (Intel): 0x3dfe40
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] MacOS (ARM): 0x360908
     * @note[short] MacOS (Intel): 0x3e03d0
     * @note[short] Windows: 0x84fb0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x360638
     * @note[short] MacOS (Intel): 0x3e00d0
     * @note[short] Windows: 0x2e26e0
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x360784
     * @note[short] MacOS (Intel): 0x3e0210
     * @note[short] Windows: 0x2e2780
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x360030
     * @note[short] MacOS (Intel): 0x3dfa90
     * @note[short] Windows: 0x2e1b10
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x360228
     * @note[short] MacOS (Intel): 0x3dfc90
     * @note[short] Windows: 0x2e2130
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x360234
     * @note[short] MacOS (Intel): 0x3dfcc0
     * @note[short] Windows: 0x2e2140
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();
    GJGameLevel* m_level;
    LevelLeaderboardType m_type;
    LevelLeaderboardMode m_mode;
    cocos2d::CCArray* m_scores;
    GJCommentListLayer* m_list;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_pointsBtn;
};
