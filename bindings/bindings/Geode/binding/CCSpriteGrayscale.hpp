#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteWithHue.hpp"

class CCSpriteGrayscale : public CCSpriteWithHue {
public:
    static constexpr auto CLASS_NAME = "CCSpriteGrayscale";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpriteGrayscale, CCSpriteWithHue)
    
private:
    [[deprecated("CCSpriteGrayscale::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x522d90
     * @note[short] MacOS (Intel): 0x5fb690
     * @note[short] Android
     */
    static CCSpriteGrayscale* create(gd::string const& file, cocos2d::CCRect const& rect);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x521c84
     * @note[short] MacOS (Intel): 0x5fb5d0
     * @note[short] Android
     */
    static CCSpriteGrayscale* create(gd::string const& file);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::createWithSpriteFrame not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x52307c
     * @note[short] MacOS (Intel): 0x5fb930
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);
public:

    /**
     * @note[short] MacOS (ARM): 0x523178
     * @note[short] MacOS (Intel): 0x5fba10
     * @note[short] Windows: 0x481a0
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithSpriteFrameName(gd::string const& frameName);
    
private:
    [[deprecated("CCSpriteGrayscale::createWithTexture not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x522f88
     * @note[short] MacOS (Intel): 0x5fb860
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool unk);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::createWithTexture not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x522e70
     * @note[short] MacOS (Intel): 0x5fb760
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::getShaderName not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x522ca0
     * @note[short] MacOS (Intel): 0x5fb5b0
     * @note[short] iOS: 0x1af7d8
     * @note[short] Android
     */
    virtual TodoReturn getShaderName();
public:
    
private:
    [[deprecated("CCSpriteGrayscale::shaderBody not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x522b78
     * @note[short] MacOS (Intel): 0x5fb3b0
     * @note[short] iOS: 0x1af704
     * @note[short] Android
     */
    virtual char* shaderBody();
public:
};
