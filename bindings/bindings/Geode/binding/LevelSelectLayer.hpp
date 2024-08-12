#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"
#include "DynamicScrollDelegate.hpp"

class LevelSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x3ade50
     * @note[short] MacOS (Intel): 0x43b830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40a26c
     * @note[short] Android
     */
    static LevelSelectLayer* create(int page);

    /**
     * @note[short] MacOS (ARM): 0x3b0928
     * @note[short] MacOS (Intel): 0x43e410
     * @note[short] Windows: 0x2f8ee0
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);
    
private:
    [[deprecated("LevelSelectLayer::getColorValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3b0680
     * @note[short] MacOS (Intel): 0x43e170
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue(int p0, int p1, float p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x3adf18
     * @note[short] MacOS (Intel): 0x43b920
     * @note[short] Windows: 0x2f7d60
     * @note[short] iOS: 0x40a328
     * @note[short] Android
     */
    bool init(int page);

    /**
     * @note[short] MacOS (ARM): 0x3aebd4
     * @note[short] MacOS (Intel): 0x43c720
     * @note[short] Windows: 0x2f9380
     * @note[short] iOS: 0x40ad2c
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3aeb1c
     * @note[short] MacOS (Intel): 0x43c670
     * @note[short] Windows: 0x2f8b00
     * @note[short] iOS: 0x40ac74
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3aec1c
     * @note[short] MacOS (Intel): 0x43c770
     * @note[short] Windows: 0x2f9500
     * @note[short] iOS: 0x40ad74
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3aeba4
     * @note[short] MacOS (Intel): 0x43c6f0
     * @note[short] Windows: 0x2f9280
     * @note[short] iOS: 0x40acfc
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSelectLayer::onPlay not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3b0b24
     * @note[short] MacOS (Intel): 0x43e6e0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x3aeb74
     * @note[short] MacOS (Intel): 0x43c6c0
     * @note[short] Windows: 0x2f9300
     * @note[short] iOS: 0x40accc
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3add68
     * @note[short] MacOS (Intel): 0x43b710
     * @note[short] Windows: 0x2f7c30
     * @note[short] iOS: 0x40a220
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);
    
private:
    [[deprecated("LevelSelectLayer::tryShowAd not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3aec38
     * @note[short] MacOS (Intel): 0x43c790
     * @note[short] Android
     */
    void tryShowAd();
public:

    /**
     * @note[short] MacOS (ARM): 0x3b09b8
     * @note[short] MacOS (Intel): 0x43e490
     * @note[short] Windows: 0x2f93d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3b0a4c
     * @note[short] MacOS (Intel): 0x43e530
     * @note[short] Windows: 0x2f9420
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x3aec58
     * @note[short] MacOS (Intel): 0x43c7b0
     * @note[short] Windows: 0x2f8b50
     * @note[short] Android
     */
    virtual void updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x3b052c
     * @note[short] MacOS (Intel): 0x43e000
     * @note[short] Windows: 0x2f8bc0
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
    float m_width;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    BoomScrollLayer* m_scrollLayer;
    int m_unknown;
    int m_scrolls;
    bool m_masterDetectiveUnlocked;
};
