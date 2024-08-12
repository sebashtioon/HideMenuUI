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
#include "TextInputDelegate.hpp"

class MoreSearchLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreSearchLayer, FLAlertLayer)
	inline MoreSearchLayer() {}

    /**
     * @note[short] MacOS (ARM): 0x5586e4
     * @note[short] MacOS (Intel): 0x638980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5aaf8
     * @note[short] Android
     */
    static MoreSearchLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x55b558
     * @note[short] MacOS (Intel): 0x63bb40
     * @note[short] Windows: 0x2f6180
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b4e4
     * @note[short] MacOS (Intel): 0x63bad0
     * @note[short] Windows: 0x2f62a0
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55adcc
     * @note[short] MacOS (Intel): 0x63b400
     * @note[short] Windows: 0x2f6c50
     * @note[short] Android
     */
    void createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] MacOS (ARM): 0x55ace8
     * @note[short] MacOS (Intel): 0x63b320
     * @note[short] Windows: 0x2f6eb0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b104
     * @note[short] MacOS (Intel): 0x63b6e0
     * @note[short] Windows: 0x2f55e0
     * @note[short] Android
     */
    void onCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b084
     * @note[short] MacOS (Intel): 0x63b660
     * @note[short] Windows: 0x2f4580
     * @note[short] Android
     */
    void onCompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b2d4
     * @note[short] MacOS (Intel): 0x63b8c0
     * @note[short] Windows: 0x2f49b0
     * @note[short] Android
     */
    void onEpic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b294
     * @note[short] MacOS (Intel): 0x63b880
     * @note[short] Windows: 0x2f47a0
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreSearchLayer::onFollowed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x55b6a0
     * @note[short] MacOS (Intel): 0x63bc60
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onFriends not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x55b6e0
     * @note[short] MacOS (Intel): 0x63bca0
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x55b5c8
     * @note[short] MacOS (Intel): 0x63bbb0
     * @note[short] Windows: 0x2f6b00
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b314
     * @note[short] MacOS (Intel): 0x63b900
     * @note[short] Windows: 0x2f4bb0
     * @note[short] Android
     */
    void onLegendary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b354
     * @note[short] MacOS (Intel): 0x63b940
     * @note[short] Windows: 0x2f4dd0
     * @note[short] Android
     */
    void onMythic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b254
     * @note[short] MacOS (Intel): 0x63b840
     * @note[short] Windows: 0x2f53e0
     * @note[short] Android
     */
    void onNoStar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b0c4
     * @note[short] MacOS (Intel): 0x63b6a0
     * @note[short] Windows: 0x2f4fd0
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b184
     * @note[short] MacOS (Intel): 0x63b760
     * @note[short] Windows: 0x2f57e0
     * @note[short] Android
     */
    void onSongFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b394
     * @note[short] MacOS (Intel): 0x63b980
     * @note[short] Windows: 0x2f6500
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b144
     * @note[short] MacOS (Intel): 0x63b720
     * @note[short] Windows: 0x2f51e0
     * @note[short] Android
     */
    void onTwoPlayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b044
     * @note[short] MacOS (Intel): 0x63b620
     * @note[short] Windows: 0x2f4350
     * @note[short] Android
     */
    void onUncompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55b824
     * @note[short] MacOS (Intel): 0x63be20
     * @note[short] Windows: 0x2f63c0
     * @note[short] Android
     */
    void selectSong(int songID);

    /**
     * @note[short] MacOS (ARM): 0x55b720
     * @note[short] MacOS (Intel): 0x63bce0
     * @note[short] Windows: 0x2f69c0
     * @note[short] Android
     */
    void toggleSongNodes(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x55b86c
     * @note[short] MacOS (Intel): 0x63be70
     * @note[short] Windows: 0x2f5ec0
     * @note[short] Android
     */
    void updateAudioLabel();

    /**
     * @note[short] MacOS (ARM): 0x559b2c
     * @note[short] MacOS (Intel): 0x639f30
     * @note[short] Windows: 0x2f2540
     * @note[short] iOS: 0x5b884
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x55bb44
     * @note[short] MacOS (Intel): 0x63c100
     * @note[short] Windows: 0x2f72b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x55b9bc
     * @note[short] MacOS (Intel): 0x63bf90
     * @note[short] Windows: 0x79fd0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x55ba8c
     * @note[short] MacOS (Intel): 0x63c050
     * @note[short] Windows: 0x7a030
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
    cocos2d::CCLabelBMFont* m_audioTrackName;
    CCMenuItemSpriteExtra* m_songLeftBtn;
    CCMenuItemSpriteExtra* m_songRightBtn;
    CCMenuItemSpriteExtra* m_normalBtn;
    CCMenuItemSpriteExtra* m_customBtn;
    CCTextInputNode* m_enterSongID;
    cocos2d::CCArray* m_commonSongNodes;
    cocos2d::CCArray* m_normalSongNodes;
    cocos2d::CCArray* m_customSongNodes;
};
