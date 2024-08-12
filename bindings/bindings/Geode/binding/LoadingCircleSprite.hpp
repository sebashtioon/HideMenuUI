#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircleSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "LoadingCircleSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircleSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x4284a4
     * @note[short] MacOS (Intel): 0x4c91e0
     * @note[short] Windows: 0x6a7b0
     * @note[short] Android
     */
    static LoadingCircleSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x4285fc
     * @note[short] MacOS (Intel): 0x4c9350
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void fadeInCircle(bool reverseOpacity);

    /**
     * @note[short] MacOS (ARM): 0x428680
     * @note[short] MacOS (Intel): 0x4c93c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideCircle();

    /**
     * @note[short] MacOS (ARM): 0x428590
     * @note[short] MacOS (Intel): 0x4c92e0
     * @note[short] Windows: 0x6a840
     * @note[short] iOS: 0x3a36e0
     * @note[short] Android
     */
    virtual bool init();
};
