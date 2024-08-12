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
#include "OnlineListDelegate.hpp"

class TopArtistsLayer : public FLAlertLayer, public OnlineListDelegate {
public:
    static constexpr auto CLASS_NAME = "TopArtistsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TopArtistsLayer, FLAlertLayer)
    
private:
    [[deprecated("TopArtistsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TopArtistsLayer* create();
public:
    
private:
    [[deprecated("TopArtistsLayer::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:
    
private:
    [[deprecated("TopArtistsLayer::loadPage not implemented")]]
    /**
     * @note[short] Android
     */
    void loadPage(int p0);
public:
    
private:
    [[deprecated("TopArtistsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TopArtistsLayer::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TopArtistsLayer::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TopArtistsLayer::setupLeaderboard not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("TopArtistsLayer::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:

    /**
     * @note[short] MacOS (ARM): 0x2a16c0
     * @note[short] MacOS (Intel): 0x30fa80
     * @note[short] Windows: 0x49df70
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("TopArtistsLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2a1fe0
     * @note[short] MacOS (Intel): 0x310410
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("TopArtistsLayer::doPause not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doPause();
public:
    
private:
    [[deprecated("TopArtistsLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2a1f64
     * @note[short] MacOS (Intel): 0x3103a0
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] MacOS (ARM): 0x2a2a5c
     * @note[short] MacOS (Intel): 0x310ee0
     * @note[short] Windows: 0x84fb0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x2a2020
     * @note[short] MacOS (Intel): 0x310460
     * @note[short] Windows: 0x49e710
     * @note[short] Android
     */
    virtual void loadListFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x2a20e4
     * @note[short] MacOS (Intel): 0x310520
     * @note[short] Windows: 0x49e770
     * @note[short] Android
     */
    virtual void loadListFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x2a210c
     * @note[short] MacOS (Intel): 0x310560
     * @note[short] Windows: 0x49e8d0
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);
};
