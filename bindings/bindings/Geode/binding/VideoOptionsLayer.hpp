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

class VideoOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "VideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(VideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x355140
     * @note[short] iOS: 0xeed80
     * @note[short] Android
     */
    static VideoOptionsLayer* create();
    
private:
    [[deprecated("VideoOptionsLayer::createToggleButton not implemented")]]
    /**
     * @note[short] iOS: 0xf21a8
     * @note[short] Android
     */
    void createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6, bool p7);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onAdvanced not implemented")]]
    /**
     * @note[short] iOS: 0xf2810
     * @note[short] Android
     */
    void onAdvanced(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onApply not implemented")]]
    /**
     * @note[short] iOS: 0xf24ac
     * @note[short] Android
     */
    void onApply(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onClose not implemented")]]
    /**
     * @note[short] iOS: 0xf2454
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onFullscreen not implemented")]]
    /**
     * @note[short] iOS: 0xf2404
     * @note[short] Android
     */
    void onFullscreen(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onBorderless not implemented")]]
    /**
     * @note[short] iOS: 0xf2414
     * @note[short] Android
     */
    void onBorderless(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onResolutionNext not implemented")]]
    /**
     * @note[short] iOS: 0xf2430
     * @note[short] Android
     */
    void onResolutionNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onResolutionPrev not implemented")]]
    /**
     * @note[short] iOS: 0xf2424
     * @note[short] Android
     */
    void onResolutionPrev(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onTextureQualityNext not implemented")]]
    /**
     * @note[short] iOS: 0xf2448
     * @note[short] Android
     */
    void onTextureQualityNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::onTextureQualityPrev not implemented")]]
    /**
     * @note[short] iOS: 0xf243c
     * @note[short] Android
     */
    void onTextureQualityPrev(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("VideoOptionsLayer::reloadMenu not implemented")]]
    /**
     * @note[short] Android
     */
    void reloadMenu();
public:
    
private:
    [[deprecated("VideoOptionsLayer::toggleResolution not implemented")]]
    /**
     * @note[short] iOS: 0xf28f0
     * @note[short] Android
     */
    void toggleResolution();
public:
    
private:
    [[deprecated("VideoOptionsLayer::updateResolution not implemented")]]
    /**
     * @note[short] iOS: 0xf2750
     * @note[short] Android
     */
    void updateResolution(int p0);
public:
    
private:
    [[deprecated("VideoOptionsLayer::updateTextureQuality not implemented")]]
    /**
     * @note[short] iOS: 0xf2688
     * @note[short] Android
     */
    void updateTextureQuality(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x6b23b4
     * @note[short] MacOS (Intel): 0x7ab1a0
     * @note[short] Windows: 0x355250
     * @note[short] iOS: 0xf154c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6b3cb4
     * @note[short] MacOS (Intel): 0x7acc20
     * @note[short] Windows: 0x356df0
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
