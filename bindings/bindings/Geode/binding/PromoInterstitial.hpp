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

class PromoInterstitial : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PromoInterstitial";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PromoInterstitial, FLAlertLayer)
    
private:
    [[deprecated("PromoInterstitial::create not implemented")]]
    /**
     * @note[short] Android
     */
    static PromoInterstitial* create(bool p0);
public:
    
private:
    [[deprecated("PromoInterstitial::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(bool p0);
public:
    
private:
    [[deprecated("PromoInterstitial::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PromoInterstitial::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PromoInterstitial::setup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setup();
public:
    
private:
    [[deprecated("PromoInterstitial::ccTouchBegan not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x26eae4
     * @note[short] MacOS (Intel): 0x2d1540
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("PromoInterstitial::ccTouchMoved not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x26ed54
     * @note[short] MacOS (Intel): 0x2d1760
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("PromoInterstitial::ccTouchEnded not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x26ec34
     * @note[short] MacOS (Intel): 0x2d1640
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("PromoInterstitial::ccTouchCancelled not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x26ece4
     * @note[short] MacOS (Intel): 0x2d16e0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("PromoInterstitial::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x26e960
     * @note[short] MacOS (Intel): 0x2d13a0
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("PromoInterstitial::show not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x26e934
     * @note[short] MacOS (Intel): 0x2d1370
     * @note[short] Android
     */
    virtual void show();
public:
};
