#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DemonFilterDelegate.hpp"

class LevelSearchLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DemonFilterDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSearchLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("LevelSearchLayer::create not implemented")]]
    /**
     * @note[short] iOS: 0x579d4
     * @note[short] Android
     */
    static LevelSearchLayer* create(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x5544e0
     * @note[short] MacOS (Intel): 0x634710
     * @note[short] Windows: 0x2ebb10
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);

    /**
     * @note[short] MacOS (ARM): 0x559410
     * @note[short] MacOS (Intel): 0x6396b0
     * @note[short] Windows: 0x2f1800
     * @note[short] Android
     */
    bool checkDiff(int p0);

    /**
     * @note[short] MacOS (ARM): 0x559508
     * @note[short] MacOS (Intel): 0x6397a0
     * @note[short] Windows: 0x2f1dc0
     * @note[short] Android
     */
    bool checkTime(int p0);
    
private:
    [[deprecated("LevelSearchLayer::clearFilters not implemented")]]
    /**
     * @note[short] Android
     */
    void clearFilters();
public:
    
private:
    [[deprecated("LevelSearchLayer::confirmClearFilters not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x556cc4
     * @note[short] MacOS (Intel): 0x636f50
     * @note[short] Android
     */
    void confirmClearFilters(cocos2d::CCObject* p0);
public:
	inline char const* getDiffKey(int diff) {
		return cocos2d::CCString::createWithFormat("D%i", diff)->getCString();
	}

    /**
     * @note[short] Windows: 0x147f60
     * @note[short] Android
     */
    gd::string getLevelLenKey();
    
private:
    [[deprecated("LevelSearchLayer::getSearchDiffKey not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5591f0
     * @note[short] MacOS (Intel): 0x639490
     * @note[short] Android
     */
    gd::string getSearchDiffKey();
public:

    /**
     * @note[short] MacOS (ARM): 0x558e54
     * @note[short] MacOS (Intel): 0x639090
     * @note[short] Windows: 0x2ef7b0
     * @note[short] Android
     */
    GJSearchObject* getSearchObject(SearchType p0, gd::string p1);
	inline char const* getTimeKey(int time) {
		return cocos2d::CCString::createWithFormat("T%i", time)->getCString();
	}

    /**
     * @note[short] MacOS (ARM): 0x5546b0
     * @note[short] MacOS (Intel): 0x634960
     * @note[short] Windows: 0x2ebc60
     * @note[short] iOS: 0x57aa0
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("LevelSearchLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x5574e8
     * @note[short] MacOS (Intel): 0x6377c0
     * @note[short] Windows: 0x2f1520
     * @note[short] Android
     */
    void onClearFreeSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0fe0
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0f20
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0e60
     * @note[short] Android
     */
    void onLatestStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0ce0
     * @note[short] Android
     */
    void onMagic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x556da4
     * @note[short] MacOS (Intel): 0x637030
     * @note[short] Windows: 0x2edfa0
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x557634
     * @note[short] MacOS (Intel): 0x6378d0
     * @note[short] Windows: 0x2f09e0
     * @note[short] Android
     */
    void onMostDownloaded(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0aa0
     * @note[short] Android
     */
    void onMostLikes(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0da0
     * @note[short] Android
     */
    void onMostRecent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x557178
     * @note[short] MacOS (Intel): 0x637460
     * @note[short] Windows: 0x2f10a0
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x556dc0
     * @note[short] MacOS (Intel): 0x637050
     * @note[short] Windows: 0x2edf50
     * @note[short] Android
     */
    void onSearchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x557358
     * @note[short] MacOS (Intel): 0x637630
     * @note[short] Windows: 0x2f12e0
     * @note[short] Android
     */
    void onSearchUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x557ee4
     * @note[short] MacOS (Intel): 0x638190
     * @note[short] Windows: 0x2edbb0
     * @note[short] Android
     */
    void onSpecialDemon(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onStarAward not implemented")]]
    /**
     * @note[short] Android
     */
    void onStarAward(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2f0b60
     * @note[short] Android
     */
    void onSuggested(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0c20
     * @note[short] Android
     */
    void onTrending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x557a00
     * @note[short] MacOS (Intel): 0x637cc0
     * @note[short] Windows: 0x2f18e0
     * @note[short] Android
     */
    void toggleDifficulty(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x5581b0
     * @note[short] MacOS (Intel): 0x638420
     * @note[short] Windows: 0x2f1c40
     * @note[short] Android
     */
    void toggleDifficultyNum(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x5580c0
     * @note[short] MacOS (Intel): 0x638350
     * @note[short] Windows: 0x2f15d0
     * @note[short] Android
     */
    void toggleStar(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelSearchLayer::toggleTime not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleTime(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x558334
     * @note[short] MacOS (Intel): 0x638590
     * @note[short] Windows: 0x2f2050
     * @note[short] Android
     */
    void toggleTimeNum(int p0, bool p1);

    /**
     * @note[short] Windows: 0x2ef440
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x559628
     * @note[short] MacOS (Intel): 0x6398b0
     * @note[short] Windows: 0x2f21e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x558b40
     * @note[short] MacOS (Intel): 0x638e00
     * @note[short] Windows: 0x2ef220
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x558c20
     * @note[short] MacOS (Intel): 0x638ed0
     * @note[short] Windows: 0x2ef370
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
    
private:
    [[deprecated("LevelSearchLayer::textChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x558d30
     * @note[short] MacOS (Intel): 0x638fa0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x558aa8
     * @note[short] MacOS (Intel): 0x638d90
     * @note[short] Windows: 0x2ef1e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x5585f0
     * @note[short] MacOS (Intel): 0x638880
     * @note[short] Windows: 0x2edd10
     * @note[short] Android
     */
    virtual void demonFilterSelectClosed(int p0);
    int m_type;
    CCTextInputNode* m_searchInput;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCArray* m_difficultySprites;
    cocos2d::CCArray* m_lengthSprites;
    cocos2d::CCDictionary* m_difficultyDict;
    cocos2d::CCSprite* m_lastDifficultySprite;
    CCMenuItemSpriteExtra* m_demonTypeButton;
};
