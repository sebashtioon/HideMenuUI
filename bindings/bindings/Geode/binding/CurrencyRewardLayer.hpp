#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CurrencyRewardLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CurrencyRewardLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CurrencyRewardLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x6b865c
     * @note[short] MacOS (Intel): 0x7b1a90
     * @note[short] Windows: 0x9dd30
     * @note[short] Android
     */
    static CurrencyRewardLayer* create(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType p9, float p10, float time);

    /**
     * @note[short] MacOS (ARM): 0x6ba6d4
     * @note[short] MacOS (Intel): 0x7b3ca0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createObjects(CurrencySpriteType type, int count, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x6ba798
     * @note[short] MacOS (Intel): 0x7b3d40
     * @note[short] Windows: 0x9fc00
     * @note[short] Android
     */
    void createObjectsFull(CurrencySpriteType p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);

    /**
     * @note[short] MacOS (ARM): 0x6ba73c
     * @note[short] MacOS (Intel): 0x7b3cf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createUnlockObject(cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x6bba28
     * @note[short] MacOS (Intel): 0x7b51f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6bbcc8
     * @note[short] MacOS (Intel): 0x7b5640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementDiamondsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6bbe18
     * @note[short] MacOS (Intel): 0x7b54d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementMoonsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6bc0b8
     * @note[short] MacOS (Intel): 0x7b5920
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementSpecialCount1(int count);

    /**
     * @note[short] MacOS (ARM): 0x6bbf68
     * @note[short] MacOS (Intel): 0x7b57b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementSpecialCount2(int count);

    /**
     * @note[short] MacOS (ARM): 0x6bbb78
     * @note[short] MacOS (Intel): 0x7b5360
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementStarsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6b8764
     * @note[short] MacOS (Intel): 0x7b1b70
     * @note[short] Windows: 0x9df80
     * @note[short] Android
     */
    bool init(int p0, int p1, int p2, int p3, CurrencySpriteType p4, int p5, CurrencySpriteType p6, int p7, cocos2d::CCPoint p8, CurrencyRewardType p9, float p10, float p11);

    /**
     * @note[short] MacOS (ARM): 0x6bc208
     * @note[short] MacOS (Intel): 0x7b5a90
     * @note[short] Windows: 0xa12c0
     * @note[short] Android
     */
    void pulseSprite(cocos2d::CCSprite* p0);

    /**
     * @note[short] MacOS (ARM): 0x6bb3b8
     * @note[short] MacOS (Intel): 0x7b4aa0
     * @note[short] Windows: 0xa08f0
     * @note[short] Android
     */
    virtual void update(float p0);
    CurrencyRewardDelegate* m_delegate;
    cocos2d::CCArray* m_objects;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCLabelBMFont* m_moonsLabel;
    cocos2d::CCLabelBMFont* m_diamondsLabel;
    cocos2d::CCLabelBMFont* m_keysLabel;
    cocos2d::CCLabelBMFont* m_shardsLabel;
    cocos2d::CCSprite* m_orbsSprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSprite* m_moonsSprite;
    cocos2d::CCSprite* m_diamondsSprite;
    CurrencySprite* m_keysSprite;
    CurrencySprite* m_shardsSprite;
    cocos2d::CCSpriteBatchNode* m_currencyBatchNode;
    cocos2d::CCSpriteBatchNode* m_orbBatchNode;
    int m_orbs;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_keys;
    int m_shards;
    float m_elapsed;
    int m_unknown;
    float m_time;
    cocos2d::CCPoint m_orbsPosition;
    cocos2d::CCPoint m_starsPosition;
    cocos2d::CCPoint m_moonsPosition;
    cocos2d::CCPoint m_diamondsPosition;
    cocos2d::CCPoint m_keysPosition;
    cocos2d::CCPoint m_shardsPosition;
    bool m_particlesAdded;
    bool m_objectsAdded;
    cocos2d::CCNode* m_mainNode;
    int m_rewardCount;
    CurrencyRewardType m_rewardType;
};
