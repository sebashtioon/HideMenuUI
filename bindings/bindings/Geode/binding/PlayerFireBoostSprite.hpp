#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerFireBoostSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "PlayerFireBoostSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerFireBoostSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x380cd0
     * @note[short] iOS: 0x229214
     * @note[short] Android
     */
    static PlayerFireBoostSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x396058
     * @note[short] MacOS (Intel): 0x4211c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void animateFireIn();

    /**
     * @note[short] MacOS (ARM): 0x3960d8
     * @note[short] MacOS (Intel): 0x421230
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void animateFireOut();

    /**
     * @note[short] MacOS (ARM): 0x395d88
     * @note[short] MacOS (Intel): 0x420f00
     * @note[short] Windows: 0x380dd0
     * @note[short] Android
     */
    void loopFireAnimation();
    
private:
    [[deprecated("PlayerFireBoostSprite::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x39aa50
     * @note[short] MacOS (Intel): 0x4262a0
     * @note[short] Android
     */
    virtual bool init();
public:
    float m_size;
};
