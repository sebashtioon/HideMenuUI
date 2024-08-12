#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class LevelAreaInnerLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaInnerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaInnerLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("LevelAreaInnerLayer::create not implemented")]]
    /**
     * @note[short] iOS: 0x354118
     * @note[short] Android
     */
    static LevelAreaInnerLayer* create(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x21ba74
     * @note[short] MacOS (Intel): 0x275da0
     * @note[short] Windows: 0x2b3200
     * @note[short] iOS: 0x3541c8
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x21c738
     * @note[short] MacOS (Intel): 0x276ac0
     * @note[short] Windows: 0x2b5260
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21c790
     * @note[short] MacOS (Intel): 0x276b10
     * @note[short] Windows: 0x2b4f70
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelAreaInnerLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelAreaInnerLayer::onNextFloor not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFloor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelAreaInnerLayer::playStep1 not implemented")]]
    /**
     * @note[short] Android
     */
    bool playStep1();
public:

    /**
     * @note[short] Windows: 0x2b30f0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool p0);
    
private:
    [[deprecated("LevelAreaInnerLayer::showFloor1CompleteDialog not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCAction* showFloor1CompleteDialog();
public:
    
private:
    [[deprecated("LevelAreaInnerLayer::tryResumeTowerMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryResumeTowerMusic();
public:

    /**
     * @note[short] MacOS (ARM): 0x21d698
     * @note[short] MacOS (Intel): 0x277aa0
     * @note[short] Windows: 0x2b52c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21d4c8
     * @note[short] MacOS (Intel): 0x2778c0
     * @note[short] Windows: 0x2b4940
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
