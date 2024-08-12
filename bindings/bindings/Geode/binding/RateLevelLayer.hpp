#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class RateLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "RateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateLevelLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x4bc2b0
     * @note[short] MacOS (Intel): 0x56f270
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RateLevelLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4bc3b4
     * @note[short] MacOS (Intel): 0x56f3b0
     * @note[short] Windows: 0x3a59b0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4bcb6c
     * @note[short] MacOS (Intel): 0x56fb50
     * @note[short] Windows: 0x3a6060
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bcbc8
     * @note[short] MacOS (Intel): 0x56fba0
     * @note[short] Windows: 0x3a6010
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bca50
     * @note[short] MacOS (Intel): 0x56fa70
     * @note[short] Windows: 0x3a5ec0
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bcc30
     * @note[short] MacOS (Intel): 0x56fbf0
     * @note[short] Windows: 0x3a60a0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_difficulties;
    int m_levelID;
    int m_levelRate;
    RateLevelDelegate* m_delegate;
};
