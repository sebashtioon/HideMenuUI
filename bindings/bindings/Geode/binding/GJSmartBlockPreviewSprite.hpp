#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartBlockPreviewSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreviewSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreviewSprite, cocos2d::CCNode)
    
private:
    [[deprecated("GJSmartBlockPreviewSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJSmartBlockPreviewSprite* create();
public:
    
private:
    [[deprecated("GJSmartBlockPreviewSprite::init not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x433380
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJSmartBlockPreviewSprite::visit not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3a5ef8
     * @note[short] MacOS (Intel): 0x433390
     * @note[short] Android
     */
    virtual void visit();
public:
};
