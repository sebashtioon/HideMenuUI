#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AudioAssetsBrowser {
public:
    static constexpr auto CLASS_NAME = "AudioAssetsBrowser";
    
private:
    [[deprecated("AudioAssetsBrowser::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AudioAssetsBrowser* create(gd::vector<int>& p0, gd::vector<int>& p1);
public:
    
private:
    [[deprecated("AudioAssetsBrowser::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(gd::vector<int>& p0, gd::vector<int>& p1);
public:
    
private:
    [[deprecated("AudioAssetsBrowser::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AudioAssetsBrowser::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AudioAssetsBrowser::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AudioAssetsBrowser::setupList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupList();
public:
    
private:
    [[deprecated("AudioAssetsBrowser::trySetupAudioBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn trySetupAudioBrowser();
public:
    
private:
    [[deprecated("AudioAssetsBrowser::updatePageLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
public:
    
private:
    [[deprecated("AudioAssetsBrowser::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c7140
     * @note[short] MacOS (Intel): 0x7c14e0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("AudioAssetsBrowser::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c70c4
     * @note[short] MacOS (Intel): 0x7c1470
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("AudioAssetsBrowser::musicActionFinished not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c7070
     * @note[short] MacOS (Intel): 0x7c1390
     * @note[short] Android
     */
    virtual TodoReturn musicActionFinished(GJMusicAction p0);
public:
    
private:
    [[deprecated("AudioAssetsBrowser::musicActionFailed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c707c
     * @note[short] MacOS (Intel): 0x7c13c0
     * @note[short] Android
     */
    virtual TodoReturn musicActionFailed(GJMusicAction p0);
public:
    
private:
    [[deprecated("AudioAssetsBrowser::cellPerformedAction not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c7090
     * @note[short] MacOS (Intel): 0x7c1400
     * @note[short] Android
     */
    virtual void cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:
    
private:
    [[deprecated("AudioAssetsBrowser::getSelectedCellIdx not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c70a0
     * @note[short] MacOS (Intel): 0x7c1420
     * @note[short] Android
     */
    virtual TodoReturn getSelectedCellIdx();
public:
    
private:
    [[deprecated("AudioAssetsBrowser::getCellDelegateType not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6c70b0
     * @note[short] MacOS (Intel): 0x7c1440
     * @note[short] Android
     */
    virtual TodoReturn getCellDelegateType();
public:
};
