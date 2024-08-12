#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUserScore : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUserScore";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUserScore, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4b5174
     * @note[short] MacOS (Intel): 0x567170
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJUserScore* create();

    /**
     * @note[short] MacOS (ARM): 0x48ce74
     * @note[short] MacOS (Intel): 0x53a5f0
     * @note[short] Windows: 0x1688d0
     * @note[short] Android
     */
    static GJUserScore* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Windows: 0x13d890
     * @note[short] Android
     */
     GJUserScore();

    /**
     * @note[short] MacOS (ARM): 0x4b52d0
     * @note[short] MacOS (Intel): 0x567360
     * @note[short] Windows: 0x16a2c0
     * @note[short] Android
     */
    bool isCurrentUser();
    
private:
    [[deprecated("GJUserScore::mergeWithScore not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn mergeWithScore(GJUserScore* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4b525c
     * @note[short] MacOS (Intel): 0x5672d0
     * @note[short] Windows: 0x16a270
     * @note[short] Android
     */
    virtual bool init();
    gd::string m_userName;
    gd::string m_userUDID;
    int m_scoreType;
    int m_userID;
    int m_accountID;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_demons;
    int m_playerRank;
    int m_creatorPoints;
    int m_secretCoins;
    int m_userCoins;
    int m_iconID;
    int m_color1;
    int m_color2;
    int m_color3;
    int m_special;
    IconType m_iconType;
    int m_messageState;
    int m_friendStatus;
    int m_commentHistoryStatus;
    gd::string m_youtubeURL;
    gd::string m_twitterURL;
    gd::string m_twitchURL;
    int m_playerCube;
    int m_playerShip;
    int m_playerBall;
    int m_playerUfo;
    int m_playerWave;
    int m_playerRobot;
    int m_playerSpider;
    int m_playerSwing;
    int m_playerJetpack;
    int m_playerStreak;
    bool m_glowEnabled;
    int m_playerExplosion;
    int m_modBadge;
    int m_globalRank;
    int m_friendReqStatus;
    int m_newMsgCount;
    int m_friendReqCount;
    int m_newFriendCount;
    bool m_newFriendRequest;
    gd::string m_unkString;
    int m_unkInt;
    int m_unkInt2;
    void* m_unkSizeT;
    gd::string m_demonInfo;
    gd::string m_starsInfo;
    gd::string m_platformerInfo;
};
