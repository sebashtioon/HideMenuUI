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

class SongInfoLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongInfoLayer, FLAlertLayer)
    
private:
    [[deprecated("SongInfoLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SongInfoLayer* create(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5, int p6, gd::string p7, int p8);
public:
    
private:
    [[deprecated("SongInfoLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SongInfoLayer* create(int p0);
public:

    /**
     * @note[short] Windows: 0x466b00
     * @note[short] Android
     */
    bool init(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5, int p6, gd::string p7, int p8);
    
private:
    [[deprecated("SongInfoLayer::onBPM not implemented")]]
    /**
     * @note[short] Android
     */
    void onBPM(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onDownload not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onFB not implemented")]]
    /**
     * @note[short] Android
     */
    void onFB(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onMenuMusic not implemented")]]
    /**
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onNG not implemented")]]
    /**
     * @note[short] Android
     */
    void onNG(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onPracticeMusic not implemented")]]
    /**
     * @note[short] Android
     */
    void onPracticeMusic(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::onYT not implemented")]]
    /**
     * @note[short] Android
     */
    void onYT(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongInfoLayer::showCustomMusicUnlockInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void showCustomMusicUnlockInfo();
public:
    
private:
    [[deprecated("SongInfoLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x532a10
     * @note[short] MacOS (Intel): 0x60d190
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
