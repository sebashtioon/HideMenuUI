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
#include "FLAlertLayerProtocol.hpp"

class GJPathsLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJPathsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x290e38
     * @note[short] MacOS (Intel): 0x2fce10
     * @note[short] Windows: 0x272940
     * @note[short] Android
     */
    static GJPathsLayer* create();
    
private:
    [[deprecated("GJPathsLayer::darkenButtons not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2916b0
     * @note[short] MacOS (Intel): 0x2fd6d0
     * @note[short] Android
     */
    void darkenButtons(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x290c88
     * @note[short] MacOS (Intel): 0x2fcc70
     * @note[short] Windows: 0x2726d0
     * @note[short] Android
     */
    static gd::string nameForPath(int p0);

    /**
     * @note[short] MacOS (ARM): 0x291438
     * @note[short] MacOS (Intel): 0x2fd480
     * @note[short] Windows: 0x273190
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2915d0
     * @note[short] MacOS (Intel): 0x2fd600
     * @note[short] Windows: 0x272fc0
     * @note[short] Android
     */
    void onPath(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x290f38
     * @note[short] MacOS (Intel): 0x2fcf60
     * @note[short] Windows: 0x272a40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x291660
     * @note[short] MacOS (Intel): 0x2fd680
     * @note[short] Windows: 0x272f70
     * @note[short] Android
     */
    virtual void onExit();
    
private:
    [[deprecated("GJPathsLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2919f4
     * @note[short] MacOS (Intel): 0x2fdaa0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x291924
     * @note[short] MacOS (Intel): 0x2fd9d0
     * @note[short] Windows: 0x2731f0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("GJPathsLayer::show not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x291a2c
     * @note[short] MacOS (Intel): 0x2fdae0
     * @note[short] Android
     */
    virtual void show();
public:
    cocos2d::CCSprite* m_closeSprite;
    bool m_running;
};
