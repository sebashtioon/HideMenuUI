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
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateStarsLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x22ba18
     * @note[short] MacOS (Intel): 0x2877a0
     * @note[short] Windows: 0x3a6230
     * @note[short] iOS: 0x83aa8
     * @note[short] Android
     */
    static RateStarsLayer* create(int p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x22c17c
     * @note[short] MacOS (Intel): 0x287f80
     * @note[short] Windows: 0x3a6a60
     * @note[short] iOS: 0x840c0
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x22bb60
     * @note[short] MacOS (Intel): 0x287930
     * @note[short] Windows: 0x3a6380
     * @note[short] iOS: 0x83b34
     * @note[short] Android
     */
    bool init(int p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x22c428
     * @note[short] MacOS (Intel): 0x288220
     * @note[short] Windows: 0x3a7140
     * @note[short] iOS: 0x84304
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22c410
     * @note[short] MacOS (Intel): 0x2881f0
     * @note[short] Windows: 0x3a6a30
     * @note[short] iOS: 0x842ec
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22c484
     * @note[short] MacOS (Intel): 0x288270
     * @note[short] Windows: 0x3a6d90
     * @note[short] iOS: 0x84360
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
    
private:
    [[deprecated("RateStarsLayer::onToggleCoins not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x22c3b8
     * @note[short] MacOS (Intel): 0x2881a0
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x22c244
     * @note[short] MacOS (Intel): 0x288050
     * @note[short] Windows: 0x3a6ba0
     * @note[short] iOS: 0x84188
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x22c93c
     * @note[short] MacOS (Intel): 0x2886f0
     * @note[short] Windows: 0x3a7180
     * @note[short] iOS: 0x8461c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x22c5b0
     * @note[short] MacOS (Intel): 0x2883b0
     * @note[short] Windows: 0x3a6f80
     * @note[short] iOS: 0x84480
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x22c6f0
     * @note[short] MacOS (Intel): 0x2884a0
     * @note[short] Windows: 0x3a7000
     * @note[short] iOS: 0x8450c
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x22c850
     * @note[short] MacOS (Intel): 0x288610
     * @note[short] Windows: 0x3a70c0
     * @note[short] iOS: 0x845a0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
    bool m_uploadFinished;
    bool m_moderator;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_buttons;
    int m_levelID;
    int m_starsRate;
    bool m_coinsToggled;
    cocos2d::CCSprite* m_coinSprite;
    UploadActionPopup* m_popup;
    GJDifficultySprite* m_difficultySprite;
    int m_featureState;
    RateLevelDelegate* m_delegate;
};
