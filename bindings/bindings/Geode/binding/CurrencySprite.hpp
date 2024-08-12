#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class CurrencySprite : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CurrencySprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CurrencySprite, CCSpritePlus)

    /**
     * @note[short] Windows: 0x9dbf0
     * @note[short] Android
     */
     CurrencySprite();

    /**
     * @note[short] MacOS (ARM): 0x6ba5e0
     * @note[short] MacOS (Intel): 0x7b3ba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CurrencySprite* create(CurrencySpriteType type, bool burst);

    /**
     * @note[short] MacOS (ARM): 0x6bb2d8
     * @note[short] MacOS (Intel): 0x7b49b0
     * @note[short] Windows: 0xa2ae0
     * @note[short] Android
     */
    static CurrencySprite* createWithSprite(cocos2d::CCSprite* p0);

    /**
     * @note[short] MacOS (ARM): 0x6bc3d0
     * @note[short] MacOS (Intel): 0x7b5c70
     * @note[short] Windows: 0xa1390
     * @note[short] Android
     */
    bool init(CurrencySpriteType p0, bool p1);
    
private:
    [[deprecated("CurrencySprite::initWithSprite not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6bcc84
     * @note[short] MacOS (Intel): 0x7b6560
     * @note[short] Android
     */
    bool initWithSprite(cocos2d::CCSprite* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x6bce3c
     * @note[short] MacOS (Intel): 0x7b6710
     * @note[short] Windows: 0xa2d00
     * @note[short] Android
     */
    static CurrencySpriteType rewardToSpriteType(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6ba4a8
     * @note[short] MacOS (Intel): 0x7b3ac0
     * @note[short] Windows: 0xa2da0
     * @note[short] Android
     */
    static gd::string spriteTypeToStat(CurrencySpriteType p0);
    float m_unkFloat1;
    float m_unkFloat2;
    float m_unkFloat3;
    float m_remaining;
    int m_count;
    cocos2d::CCParticleSystemQuad* m_particleSystem;
    CurrencySpriteType m_spriteType;
    cocos2d::CCPoint m_position;
    cocos2d::CCSprite* m_burstSprite;
};
