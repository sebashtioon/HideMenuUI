#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCAnimatedSprite.hpp"

class AnimatedShopKeeper : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "AnimatedShopKeeper";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedShopKeeper, CCAnimatedSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AnimatedShopKeeper();

    /**
     * @note[short] MacOS (ARM): 0x2b3750
     * @note[short] MacOS (Intel): 0x323160
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AnimatedShopKeeper* create(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2b7188
     * @note[short] MacOS (Intel): 0x327320
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2b6030
     * @note[short] MacOS (Intel): 0x325f10
     * @note[short] Windows: 0x29d5f0
     * @note[short] Android
     */
    void playReactAnimation();

    /**
     * @note[short] MacOS (ARM): 0x2b38b0
     * @note[short] MacOS (Intel): 0x3232d0
     * @note[short] Windows: 0x29d880
     * @note[short] Android
     */
    void startAnimating();

    /**
     * @note[short] MacOS (ARM): 0x2b7254
     * @note[short] MacOS (Intel): 0x3273d0
     * @note[short] Windows: 0x29d910
     * @note[short] Android
     */
    virtual void animationFinished(char const* p0);
    ShopType m_type;
    int m_idleInt1;
    int m_idleInt2;
    bool m_looking;
    bool m_reacting;
    int m_reactCount;
    int m_gruntIndex;
};
