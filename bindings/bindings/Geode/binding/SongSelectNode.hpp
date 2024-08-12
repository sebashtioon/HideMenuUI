#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "CustomSongDelegate.hpp"

class SongSelectNode : public cocos2d::CCNode, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "SongSelectNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongSelectNode, cocos2d::CCNode)
    
private:
    [[deprecated("SongSelectNode::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c4458
     * @note[short] MacOS (Intel): 0x213480
     * @note[short] Android
     */
    static SongSelectNode* create(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);
public:

    /**
     * @note[short] MacOS (ARM): 0x1c4ecc
     * @note[short] MacOS (Intel): 0x213f00
     * @note[short] Windows: 0xc4cb0
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1c4e98
     * @note[short] MacOS (Intel): 0x213ec0
     * @note[short] Windows: 0xc4cf0
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1c4568
     * @note[short] MacOS (Intel): 0x2135a0
     * @note[short] Windows: 0xc42b0
     * @note[short] Android
     */
    bool init(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);
    
private:
    [[deprecated("SongSelectNode::onOpenCustomSong not implemented")]]
    /**
     * @note[short] Android
     */
    void onOpenCustomSong(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongSelectNode::onSongMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongSelectNode::onSongMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onSongMode(int p0);
public:
    
private:
    [[deprecated("SongSelectNode::selectSong not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectSong(int p0);
public:
    
private:
    [[deprecated("SongSelectNode::showCustomSongSelect not implemented")]]
    /**
     * @note[short] Android
     */
    void showCustomSongSelect();
public:

    /**
     * @note[short] MacOS (ARM): 0x1c4d80
     * @note[short] MacOS (Intel): 0x213dd0
     * @note[short] Windows: 0xc4bc0
     * @note[short] Android
     */
    void updateAudioLabel();
    
private:
    [[deprecated("SongSelectNode::updateWidgetVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateWidgetVisibility();
public:

    /**
     * @note[short] MacOS (ARM): 0x1c5254
     * @note[short] MacOS (Intel): 0x2142e0
     * @note[short] Windows: 0xc51e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1c533c
     * @note[short] MacOS (Intel): 0x2143c0
     * @note[short] Windows: 0xc5270
     * @note[short] Android
     */
    virtual void customSongLayerClosed();

    /**
     * @note[short] MacOS (ARM): 0x1c53a4
     * @note[short] MacOS (Intel): 0x214420
     * @note[short] Windows: 0xc52a0
     * @note[short] Android
     */
    virtual TodoReturn songIDChanged(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1c53c4
     * @note[short] MacOS (Intel): 0x214450
     * @note[short] Windows: 0xc52b0
     * @note[short] Android
     */
    virtual TodoReturn getActiveSongID();

    /**
     * @note[short] MacOS (ARM): 0x1c53d4
     * @note[short] MacOS (Intel): 0x214470
     * @note[short] Windows: 0xc52c0
     * @note[short] Android
     */
    virtual TodoReturn getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1c550c
     * @note[short] MacOS (Intel): 0x2145b0
     * @note[short] Windows: 0xc5380
     * @note[short] Android
     */
    virtual LevelSettingsObject* getLevelSettings();
    int m_selectedSongID;
};
