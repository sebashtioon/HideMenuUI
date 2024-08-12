#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ScrollingLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ScrollingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ScrollingLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("ScrollingLayer::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6402a4
     * @note[short] MacOS (Intel): 0x72d870
     * @note[short] iOS: 0x1c33cc
     * @note[short] Android
     */
    static ScrollingLayer* create(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);
public:
    
private:
    [[deprecated("ScrollingLayer::getViewRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getViewRect();
public:
    
private:
    [[deprecated("ScrollingLayer::init not implemented")]]
    /**
     * @note[short] iOS: 0x1c3480
     * @note[short] Android
     */
    bool init(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);
public:
    
private:
    [[deprecated("ScrollingLayer::setStartOffset not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6406b0
     * @note[short] MacOS (Intel): 0x72dd10
     * @note[short] Android
     */
    void setStartOffset(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("ScrollingLayer::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x640530
     * @note[short] MacOS (Intel): 0x72db30
     * @note[short] Android
     */
    virtual void draw();
public:
    
private:
    [[deprecated("ScrollingLayer::visit not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6405d4
     * @note[short] MacOS (Intel): 0x72dc00
     * @note[short] Android
     */
    virtual void visit();
public:

    /**
     * @note[short] MacOS (ARM): 0x6406e8
     * @note[short] MacOS (Intel): 0x72dd50
     * @note[short] Windows: 0x6fb00
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x640844
     * @note[short] MacOS (Intel): 0x72def0
     * @note[short] Windows: 0x6fbf0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x640940
     * @note[short] MacOS (Intel): 0x72e010
     * @note[short] Windows: 0x6fd00
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("ScrollingLayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x640978
     * @note[short] MacOS (Intel): 0x72e050
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
};
