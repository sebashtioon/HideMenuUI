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
#include "SelectSFXSortDelegate.hpp"

class SFXBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public SelectSFXSortDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXBrowser, FLAlertLayer)
    
private:
    [[deprecated("SFXBrowser::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SFXBrowser* create(int p0);
public:
    
private:
    [[deprecated("SFXBrowser::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("SFXBrowser::onClearSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onCredits not implemented")]]
    /**
     * @note[short] Android
     */
    void onCredits(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onExitFolder not implemented")]]
    /**
     * @note[short] Android
     */
    void onExitFolder(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onSorting not implemented")]]
    /**
     * @note[short] Android
     */
    void onSorting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onToggleCompactMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleCompactMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onUpdateLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::setupList not implemented")]]
    /**
     * @note[short] Android
     */
    void setupList(SFXSearchResult* p0);
public:
    
private:
    [[deprecated("SFXBrowser::trySetupSFXBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn trySetupSFXBrowser();
public:
    
private:
    [[deprecated("SFXBrowser::updatePageLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
public:
    
private:
    [[deprecated("SFXBrowser::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3bb818
     * @note[short] MacOS (Intel): 0x44a270
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x3bb768
     * @note[short] MacOS (Intel): 0x44a1d0
     * @note[short] Windows: 0x454e90
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3bae64
     * @note[short] MacOS (Intel): 0x4497d0
     * @note[short] Windows: 0x453a00
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x3baf34
     * @note[short] MacOS (Intel): 0x4498d0
     * @note[short] Windows: 0x453aa0
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x3bb2a8
     * @note[short] MacOS (Intel): 0x449ca0
     * @note[short] Windows: 0x4545c0
     * @note[short] Android
     */
    virtual TodoReturn sortSelectClosed(SelectSFXSortLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x3bb52c
     * @note[short] MacOS (Intel): 0x449f60
     * @note[short] Windows: 0x4548a0
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);
    
private:
    [[deprecated("SFXBrowser::cellPerformedAction not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3bb5e8
     * @note[short] MacOS (Intel): 0x44a020
     * @note[short] Android
     */
    virtual void cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:
    
private:
    [[deprecated("SFXBrowser::getSelectedCellIdx not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3bb748
     * @note[short] MacOS (Intel): 0x44a190
     * @note[short] Android
     */
    virtual TodoReturn getSelectedCellIdx();
public:
    
private:
    [[deprecated("SFXBrowser::shouldSnapToSelected not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3bb758
     * @note[short] MacOS (Intel): 0x44a1b0
     * @note[short] Android
     */
    virtual TodoReturn shouldSnapToSelected();
public:
};
