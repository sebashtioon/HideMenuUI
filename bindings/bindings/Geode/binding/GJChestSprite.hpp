#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChestSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJChestSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChestSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x1c80d4
     * @note[short] MacOS (Intel): 0x217690
     * @note[short] Windows: 0x3ad250
     * @note[short] iOS: 0x1cf3c0
     * @note[short] Android
     */
    static GJChestSprite* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1ca814
     * @note[short] MacOS (Intel): 0x21a030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d17e4
     * @note[short] Android
     */
    bool init(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x1c92f8
     * @note[short] MacOS (Intel): 0x218b10
     * @note[short] Windows: 0x3ad450
     * @note[short] Android
     */
    void switchToState(ChestSpriteState p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1ca94c
     * @note[short] MacOS (Intel): 0x21a180
     * @note[short] Windows: 0x3ad3e0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x1ca878
     * @note[short] MacOS (Intel): 0x21a090
     * @note[short] Windows: 0x3ad320
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);
    int m_chestType;
    ChestSpriteState m_spriteState;
    bool m_dark;
};
