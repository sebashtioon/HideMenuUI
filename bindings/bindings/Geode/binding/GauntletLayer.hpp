#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"

class GauntletLayer : public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletLayer();

    /**
     * @note[short] MacOS (ARM): 0x31d55c
     * @note[short] MacOS (Intel): 0x3955f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletLayer* create(GauntletType gauntletType);

    /**
     * @note[short] MacOS (ARM): 0x31d624
     * @note[short] MacOS (Intel): 0x3956d0
     * @note[short] Windows: 0x1e93d0
     * @note[short] Android
     */
    bool init(GauntletType p0);

    /**
     * @note[short] MacOS (ARM): 0x31dc80
     * @note[short] MacOS (Intel): 0x395d40
     * @note[short] Windows: 0x1eb5e0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31f034
     * @note[short] MacOS (Intel): 0x397270
     * @note[short] Windows: 0x1eaf60
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31d474
     * @note[short] MacOS (Intel): 0x3954e0
     * @note[short] Windows: 0x1e90b0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GauntletType p0);

    /**
     * @note[short] MacOS (ARM): 0x31dcc8
     * @note[short] MacOS (Intel): 0x395d90
     * @note[short] Windows: 0x1e9fd0
     * @note[short] Android
     */
    void setupGauntlet(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x31f078
     * @note[short] MacOS (Intel): 0x3972b0
     * @note[short] Windows: 0x1eafd0
     * @note[short] Android
     */
    void unlockActiveItem();

    /**
     * @note[short] MacOS (ARM): 0x31f6f8
     * @note[short] MacOS (Intel): 0x3978b0
     * @note[short] Windows: 0x1eb630
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x31ebdc
     * @note[short] MacOS (Intel): 0x396e80
     * @note[short] Windows: 0x1e9bc0
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x31ed74
     * @note[short] MacOS (Intel): 0x397010
     * @note[short] Windows: 0x1e9dd0
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);
    cocos2d::CCArray* m_levels;
    LoadingCircle* m_loadingCircle;
    GauntletType m_gauntletType;
    cocos2d::CCSprite* m_backgroundSprite;
    void* m_unkPtr;
    CCMenuItemSpriteExtra* m_activeItemButton;
    cocos2d::CCArray* m_activeObjects;
    TextArea* m_tryAgainText;
};
