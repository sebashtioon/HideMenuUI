#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJPurchaseDelegate.hpp"
#include "DialogDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GJShopLayer : public cocos2d::CCLayer, public GJPurchaseDelegate, public DialogDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJShopLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJShopLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJShopLayer();

    /**
     * @note[short] MacOS (ARM): 0x2b1fb0
     * @note[short] MacOS (Intel): 0x3218f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJShopLayer* create(ShopType type);
    
private:
    [[deprecated("GJShopLayer::exitVideoAdItems not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b3eb4
     * @note[short] MacOS (Intel): 0x3238a0
     * @note[short] Android
     */
    void exitVideoAdItems();
public:

    /**
     * @note[short] MacOS (ARM): 0x2b2094
     * @note[short] MacOS (Intel): 0x321a00
     * @note[short] Windows: 0x297400
     * @note[short] Android
     */
    bool init(ShopType p0);

    /**
     * @note[short] MacOS (ARM): 0x2b39b0
     * @note[short] MacOS (Intel): 0x3233c0
     * @note[short] Windows: 0x29a840
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b3938
     * @note[short] MacOS (Intel): 0x323340
     * @note[short] Windows: 0x299680
     * @note[short] Android
     */
    void onCommunityCredits(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJShopLayer::onPlushies not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b3934
     * @note[short] MacOS (Intel): 0x323330
     * @note[short] Android
     */
    void onPlushies(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x2b3b6c
     * @note[short] MacOS (Intel): 0x323570
     * @note[short] Windows: 0x299850
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJShopLayer::onVideoAd not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b3964
     * @note[short] MacOS (Intel): 0x323370
     * @note[short] Android
     */
    void onVideoAd(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x2b1eac
     * @note[short] MacOS (Intel): 0x3217b0
     * @note[short] Windows: 0x297280
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(ShopType p0);

    /**
     * @note[short] MacOS (ARM): 0x2b4068
     * @note[short] MacOS (Intel): 0x323a60
     * @note[short] Windows: 0x2999d0
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x2b4bc0
     * @note[short] MacOS (Intel): 0x3246f0
     * @note[short] Windows: 0x29aa70
     * @note[short] Android
     */
    void showReactMessage();

    /**
     * @note[short] MacOS (ARM): 0x2b3fd8
     * @note[short] MacOS (Intel): 0x3239c0
     * @note[short] Windows: 0x299820
     * @note[short] Android
     */
    void updateCurrencyCounter();

    /**
     * @note[short] MacOS (ARM): 0x2b3cb0
     * @note[short] MacOS (Intel): 0x323680
     * @note[short] Windows: 0x299400
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2b5e94
     * @note[short] MacOS (Intel): 0x325d60
     * @note[short] Windows: 0x29c3c0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2b6290
     * @note[short] MacOS (Intel): 0x326190
     * @note[short] Windows: 0x6fd20
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2b62ac
     * @note[short] MacOS (Intel): 0x3261d0
     * @note[short] Windows: 0x41750
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2b4bb4
     * @note[short] MacOS (Intel): 0x3246c0
     * @note[short] Windows: 0x29aa60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2b4548
     * @note[short] MacOS (Intel): 0x323fc0
     * @note[short] Windows: 0x29a0a0
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x2b3f7c
     * @note[short] MacOS (Intel): 0x323970
     * @note[short] Windows: 0x2997c0
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x2b5cb4
     * @note[short] MacOS (Intel): 0x325ba0
     * @note[short] Windows: 0x29c0c0
     * @note[short] iOS: 0x158204
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
    bool m_closing;
    CCCounterLabel* m_currencyLabel;
    cocos2d::CCDictionary* m_shopItems;
    ShopType m_type;
    gd::string m_sheetName;
    cocos2d::CCNode* m_unkNode1;
    cocos2d::CCNode* m_unkNode2;
    bool m_videoPlaying;
    bool m_unkBool;
    AnimatedShopKeeper* m_shopKeeper;
    int m_zolgurothDialogIndex;
    int m_affordDialogIndex;
};
