#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerCheckpoint : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PlayerCheckpoint";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerCheckpoint, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3979a0
     * @note[short] iOS: 0x122a24
     * @note[short] Android
     */
    static PlayerCheckpoint* create();
    
private:
    [[deprecated("PlayerCheckpoint::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0xab20c
     * @note[short] MacOS (Intel): 0xbfbc0
     * @note[short] Android
     */
    virtual bool init();
public:
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_lastPosition;
    int m_unkInt1;
    bool m_isUpsideDown;
    bool m_unk7b3;
    bool m_isShip;
    bool m_isBall;
    bool m_isBird;
    bool m_isSwing;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isOnGround;
    GEODE_PAD(2);
    int m_hasGhostTrail;
    uint8_t m_unkBytes1[4];
    float m_speed;
    bool m_isHidden;
    bool m_isGoingLeft;
    uint8_t m_unkBytes2[34];
    bool m_hideAttemptCount;
    uint8_t m_unkBytes3[7];
    bool m_unkBool;
    float m_unkFloat1;
    int m_possiblyFlags;
    int m_timeOrPercentRelated;
    uint8_t m_unkBytes4[4];
    gd::vector<float> m_yPositionVector;
    uint8_t m_unkBytes5[8];
};
