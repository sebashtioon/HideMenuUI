#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsLayer, GJOptionsLayer)
    
private:
    [[deprecated("GameOptionsLayer::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x24db08
     * @note[short] MacOS (Intel): 0x2ac900
     * @note[short] Android
     */
    static GameOptionsLayer* create(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameOptionsLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x24dcb8
     * @note[short] MacOS (Intel): 0x2ac900
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x24e468
     * @note[short] MacOS (Intel): 0x2ad370
     * @note[short] Windows: 0x28e010
     * @note[short] Android
     */
    void onPracticeMusicSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24e3dc
     * @note[short] MacOS (Intel): 0x2ad2e0
     * @note[short] Windows: 0x28e0f0
     * @note[short] Android
     */
    void onUIOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24e3fc
     * @note[short] MacOS (Intel): 0x2ad300
     * @note[short] Windows: 0x28e110
     * @note[short] Android
     */
    void onUIPOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24e4dc
     * @note[short] MacOS (Intel): 0x2ad3f0
     * @note[short] Windows: 0x28d7b0
     * @note[short] Android
     */
    void showPracticeMusicSyncUnlockInfo();

    /**
     * @note[short] MacOS (ARM): 0x24dd10
     * @note[short] MacOS (Intel): 0x2acbc0
     * @note[short] Windows: 0x28cd60
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x24eaf0
     * @note[short] MacOS (Intel): 0x2ada80
     * @note[short] Windows: 0x28e260
     * @note[short] Android
     */
    virtual void didToggle(int p0);
    GJBaseGameLayer* m_baseGameLayer;
    int m_practiceDialogIndex;
};
