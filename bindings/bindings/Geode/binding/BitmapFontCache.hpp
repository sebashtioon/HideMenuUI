#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BitmapFontCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "BitmapFontCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BitmapFontCache, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BitmapFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1cad50
     * @note[short] MacOS (Intel): 0x21a640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x303f5c
     * @note[short] Android
     */
    static BitmapFontCache* sharedFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1caed8
     * @note[short] MacOS (Intel): 0x21a7e0
     * @note[short] Windows: 0x3a530
     * @note[short] iOS: 0x304048
     * @note[short] Android
     */
    FontObject* fontWithConfigFile(char const* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1cadc8
     * @note[short] MacOS (Intel): 0x21a6c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] MacOS (ARM): 0x1cadf4
     * @note[short] MacOS (Intel): 0x21a6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x303fc8
     * @note[short] Android
     */
    static void purgeSharedFontCache();
    cocos2d::CCDictionary* m_cache;
};
