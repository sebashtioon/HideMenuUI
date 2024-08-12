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
#include "MusicDownloadDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "SliderDelegate.hpp"

class MusicBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public FLAlertLayerProtocol, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MusicBrowser, FLAlertLayer)
    
private:
    [[deprecated("MusicBrowser::create not implemented")]]
    /**
     * @note[short] Android
     */
    static MusicBrowser* create(int p0, GJSongType p1);
public:
    
private:
    [[deprecated("MusicBrowser::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0, GJSongType p1);
public:
    
private:
    [[deprecated("MusicBrowser::onArtistFilters not implemented")]]
    /**
     * @note[short] Android
     */
    void onArtistFilters(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onClearSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onPlaybackControl not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlaybackControl(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onTagFilters not implemented")]]
    /**
     * @note[short] Android
     */
    void onTagFilters(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::onUpdateLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MusicBrowser::setupList not implemented")]]
    /**
     * @note[short] Android
     */
    void setupList(MusicSearchResult* p0);
public:
    
private:
    [[deprecated("MusicBrowser::setupSongControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSongControls();
public:
    
private:
    [[deprecated("MusicBrowser::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("MusicBrowser::trySetupMusicBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn trySetupMusicBrowser();
public:
    
private:
    [[deprecated("MusicBrowser::updatePageLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
public:

    /**
     * @note[short] MacOS (ARM): 0x53d678
     * @note[short] MacOS (Intel): 0x61a210
     * @note[short] Windows: 0x318ad0
     * @note[short] Android
     */
    virtual void update(float p0);
    
private:
    [[deprecated("MusicBrowser::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x53e660
     * @note[short] MacOS (Intel): 0x61b300
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x53e544
     * @note[short] MacOS (Intel): 0x61b1d0
     * @note[short] Windows: 0x31a1b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x53df48
     * @note[short] MacOS (Intel): 0x61ab70
     * @note[short] Windows: 0x3193d0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x53e018
     * @note[short] MacOS (Intel): 0x61ac70
     * @note[short] Windows: 0x319440
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x53d7f4
     * @note[short] MacOS (Intel): 0x61a390
     * @note[short] Windows: 0x319110
     * @note[short] Android
     */
    virtual TodoReturn sliderEnded(Slider* p0);

    /**
     * @note[short] MacOS (ARM): 0x53e2ac
     * @note[short] MacOS (Intel): 0x61af20
     * @note[short] Windows: 0x319f20
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);
    
private:
    [[deprecated("MusicBrowser::cellPerformedAction not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x53e244
     * @note[short] MacOS (Intel): 0x61aea0
     * @note[short] Android
     */
    virtual void cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:
    
private:
    [[deprecated("MusicBrowser::getSelectedCellIdx not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x53e29c
     * @note[short] MacOS (Intel): 0x61af00
     * @note[short] Android
     */
    virtual TodoReturn getSelectedCellIdx();
public:

    /**
     * @note[short] MacOS (ARM): 0x53e47c
     * @note[short] MacOS (Intel): 0x61b130
     * @note[short] Windows: 0x31a0c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
