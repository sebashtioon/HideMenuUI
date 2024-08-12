#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class EndLevelLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "EndLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndLevelLayer, GJDropDownLayer)
    
private:
    [[deprecated("EndLevelLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EndLevelLayer* create();
public:

    /**
     * @note[short] Windows: 0x131d20
     * @note[short] Android
     */
    TodoReturn coinEnterFinished(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0x131ce0
     * @note[short] Android
     */
    TodoReturn coinEnterFinishedO(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x1323d0
     * @note[short] Android
     */
    TodoReturn currencyEnterFinished();

    /**
     * @note[short] Windows: 0x132860
     * @note[short] Android
     */
    TodoReturn diamondEnterFinished();

    /**
     * @note[short] Windows: 0x130820
     * @note[short] Android
     */
    TodoReturn getCoinString();

    /**
     * @note[short] Windows: 0x132c80
     * @note[short] Android
     */
    const char* getEndText();

    /**
     * @note[short] Windows: 0x1311d0
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] Windows: 0x1310d0
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EndLevelLayer::onEveryplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x42aef0
     * @note[short] MacOS (Intel): 0x4cbff0
     * @note[short] Windows: 0x1312a0
     * @note[short] Android
     */
    void onHideLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x130720
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x130f50
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x130f40
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x131380
     * @note[short] Android
     */
    void onRestartCheckpoint(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x131aa0
     * @note[short] Android
     */
    void playCoinEffect(float p0);

    /**
     * @note[short] Windows: 0x132050
     * @note[short] Android
     */
    void playCurrencyEffect(float p0);

    /**
     * @note[short] Windows: 0x1324e0
     * @note[short] Android
     */
    void playDiamondEffect(float p0);

    /**
     * @note[short] Windows: 0x132970
     * @note[short] Android
     */
    void playEndEffect();

    /**
     * @note[short] Windows: 0x1315a0
     * @note[short] Android
     */
    void playStarEffect(float p0);

    /**
     * @note[short] Windows: 0x131940
     * @note[short] Android
     */
    TodoReturn starEnterFinished();
    
private:
    [[deprecated("EndLevelLayer::tryShowBanner not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowBanner(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x42bd68
     * @note[short] MacOS (Intel): 0x4ccf00
     * @note[short] Windows: 0x131590
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x42c500
     * @note[short] MacOS (Intel): 0x4cd6b0
     * @note[short] Windows: 0x132c30
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x428e80
     * @note[short] MacOS (Intel): 0x4c9d40
     * @note[short] Windows: 0x12edf0
     * @note[short] iOS: 0x305f20
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x42afd8
     * @note[short] MacOS (Intel): 0x4cc0e0
     * @note[short] Windows: 0x130b60
     * @note[short] iOS: 0x307dd0
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    PlayLayer* m_playLayer;
    bool m_unknown1;
    bool m_unknown2;
    bool m_unknown3;
    bool m_unknown4;
    bool m_unknown5;
    int m_unknown6;
    cocos2d::CCArray* m_coinsToAnimate;
};
