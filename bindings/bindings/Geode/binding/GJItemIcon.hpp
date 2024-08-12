#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJItemIcon : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJItemIcon";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJItemIcon, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJItemIcon();

    /**
     * @note[short] MacOS (ARM): 0x2fe438
     * @note[short] MacOS (Intel): 0x3727b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJItemIcon* create(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);

    /**
     * @note[short] MacOS (ARM): 0x2fbbf4
     * @note[short] MacOS (Intel): 0x36fcd0
     * @note[short] Windows: 0x2694c0
     * @note[short] iOS: 0x316ab8
     * @note[short] Android
     */
    void changeToLockedState(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2fb6d0
     * @note[short] MacOS (Intel): 0x36f580
     * @note[short] Windows: 0x268880
     * @note[short] Android
     */
    static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x2fe41c
     * @note[short] MacOS (Intel): 0x372780
     * @note[short] Windows: 0x268750
     * @note[short] Android
     */
    static GJItemIcon* createStoreItem(UnlockType p0, int p1, bool p2, cocos2d::ccColor3B p3);

    /**
     * @note[short] MacOS (ARM): 0x2fec04
     * @note[short] MacOS (Intel): 0x372fc0
     * @note[short] Windows: 0x2691d0
     * @note[short] Android
     */
    void darkenStoreItem(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x2fbbcc
     * @note[short] MacOS (Intel): 0x36fc60
     * @note[short] Windows: 0x269150
     * @note[short] Android
     */
    void darkenStoreItem(ShopType p0);

    /**
     * @note[short] MacOS (ARM): 0x2fe540
     * @note[short] MacOS (Intel): 0x3728c0
     * @note[short] Windows: 0x2689a0
     * @note[short] iOS: 0x3186d4
     * @note[short] Android
     */
    bool init(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);

    /**
     * @note[short] MacOS (ARM): 0x2fb6f0
     * @note[short] MacOS (Intel): 0x36f5b0
     * @note[short] Windows: 0x2695a0
     * @note[short] Android
     */
    float scaleForType(UnlockType p0);

    /**
     * @note[short] Windows: 0x269400
     * @note[short] iOS: 0x316b94
     * @note[short] Android
     */
    void toggleEnabledState(bool p0);
    
private:
    [[deprecated("GJItemIcon::unlockedColorForType not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2feb9c
     * @note[short] MacOS (Intel): 0x372f60
     * @note[short] Android
     */
    static cocos2d::ccColor3B unlockedColorForType(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2fea70
     * @note[short] MacOS (Intel): 0x372e20
     * @note[short] Windows: 0x2690b0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
    SimplePlayer* m_player;
    int m_iconRequestID;
    cocos2d::CCSize m_playerSize;
    bool m_isIcon;
    int m_unlockID;
    UnlockType m_unlockType;
};
