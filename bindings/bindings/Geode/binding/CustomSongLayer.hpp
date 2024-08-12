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
#include "GJDropDownLayerDelegate.hpp"
#include "MusicBrowserDelegate.hpp"

class CustomSongLayer : public FLAlertLayer, public TextInputDelegate, public GJDropDownLayerDelegate, public MusicBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongLayer, FLAlertLayer)
    
private:
    [[deprecated("CustomSongLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CustomSongLayer* create(CustomSongDelegate* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CustomSongDelegate* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onCreateLines not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreateLines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onMusicBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onMusicBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onNCSBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onNCSBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onNewgroundsBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onNewgroundsBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onOptions not implemented")]]
    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onSongBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::showNewgroundsMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void showNewgroundsMessage();
public:

    /**
     * @note[short] MacOS (ARM): 0x1c20a0
     * @note[short] MacOS (Intel): 0x210f40
     * @note[short] Windows: 0xc1aa0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("CustomSongLayer::show not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c2184
     * @note[short] MacOS (Intel): 0x211020
     * @note[short] Android
     */
    virtual void show();
public:
    
private:
    [[deprecated("CustomSongLayer::textChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c1b70
     * @note[short] MacOS (Intel): 0x2109d0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputOpened not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c1af0
     * @note[short] MacOS (Intel): 0x210970
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputClosed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c1a70
     * @note[short] MacOS (Intel): 0x210910
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputShouldOffset not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c1b90
     * @note[short] MacOS (Intel): 0x2109f0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputReturn not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c1c60
     * @note[short] MacOS (Intel): 0x210ab0
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1c1f10
     * @note[short] MacOS (Intel): 0x210de0
     * @note[short] Windows: 0xc1830
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x1c1fd8
     * @note[short] MacOS (Intel): 0x210e90
     * @note[short] Windows: 0xc1900
     * @note[short] Android
     */
    virtual void musicBrowserClosed(MusicBrowser* p0);
};
