#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCBlockLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCBlockLayer();
    
private:
    [[deprecated("CCBlockLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCBlockLayer* create();
public:
    
private:
    [[deprecated("CCBlockLayer::decrementForcePrio not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x475db4
     * @note[short] MacOS (Intel): 0x520c30
     * @note[short] Android
     */
    void decrementForcePrio();
public:
    
private:
    [[deprecated("CCBlockLayer::incrementForcePrio not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x475ba0
     * @note[short] MacOS (Intel): 0x520990
     * @note[short] Android
     */
    void incrementForcePrio();
public:

    /**
     * @note[short] MacOS (ARM): 0x475acc
     * @note[short] MacOS (Intel): 0x5208d0
     * @note[short] Windows: 0x41660
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x475d50
     * @note[short] MacOS (Intel): 0x520b80
     * @note[short] Windows: 0x41870
     * @note[short] Android
     */
    virtual void draw();
    
private:
    [[deprecated("CCBlockLayer::ccTouchBegan not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x475d8c
     * @note[short] MacOS (Intel): 0x520bb0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x475c34
     * @note[short] MacOS (Intel): 0x520a40
     * @note[short] Windows: 0x41750
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x475c6c
     * @note[short] MacOS (Intel): 0x520a80
     * @note[short] Windows: 0x417a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x475bfc
     * @note[short] MacOS (Intel): 0x520a10
     * @note[short] Windows: 0x41720
     * @note[short] Android
     */
    virtual TodoReturn enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x475c88
     * @note[short] MacOS (Intel): 0x520ab0
     * @note[short] Windows: 0x417c0
     * @note[short] Android
     */
    virtual TodoReturn exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x475cd4
     * @note[short] MacOS (Intel): 0x520af0
     * @note[short] Windows: 0x41800
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x475ce0
     * @note[short] MacOS (Intel): 0x520b00
     * @note[short] Windows: 0x41810
     * @note[short] Android
     */
    virtual TodoReturn hideLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x475cf0
     * @note[short] MacOS (Intel): 0x520b20
     * @note[short] Windows: 0x41820
     * @note[short] Android
     */
    virtual TodoReturn layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x475d00
     * @note[short] MacOS (Intel): 0x520b40
     * @note[short] Windows: 0x41830
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void enableUI();
    void* m_unknown;
};
