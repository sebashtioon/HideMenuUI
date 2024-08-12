#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "LoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("LoadingLayer::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x32be04
     * @note[short] MacOS (Intel): 0x3a57b0
     * @note[short] iOS: 0x1df9ac
     * @note[short] Android
     */
    static LoadingLayer* create(bool p0);
public:

    /**
     * @note[short] Windows: 0x30ee90
     * @note[short] iOS: 0x1e0130
     * @note[short] Android
     */
    const char* getLoadingString();

    /**
     * @note[short] MacOS (ARM): 0x32bec4
     * @note[short] MacOS (Intel): 0x3a5890
     * @note[short] Windows: 0x30db60
     * @note[short] iOS: 0x1dfa60
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x32c720
     * @note[short] MacOS (Intel): 0x3a60d0
     * @note[short] Windows: 0x30e400
     * @note[short] iOS: 0x1e020c
     * @note[short] Android
     */
    void loadAssets();
    
private:
    [[deprecated("LoadingLayer::loadingFinished not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x32ce30
     * @note[short] MacOS (Intel): 0x3a6870
     * @note[short] Android
     */
    void loadingFinished();
public:

    /**
     * @note[short] MacOS (ARM): 0x32bd2c
     * @note[short] MacOS (Intel): 0x3a56b0
     * @note[short] Windows: 0x30da50
     * @note[short] iOS: 0x1df968
     * @note[short] Android
     */
    cocos2d::CCScene* scene(bool p0);

    /**
     * @note[short] Windows: 0x30e380
     * @note[short] iOS: 0x1e01a0
     * @note[short] Android
     */
    void updateProgress(int p0);
    bool m_unknown;
    bool m_unknown2;
    int m_loadStep;
    cocos2d::CCLabelBMFont* m_caption;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_sliderBar;
    float m_sliderGrooveXPos;
    float m_sliderGrooveHeight;
    bool m_fromRefresh;
};
