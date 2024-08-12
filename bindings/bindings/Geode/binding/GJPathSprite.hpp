#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteCOpacity.hpp"

class GJPathSprite : public CCSpriteCOpacity {
public:
    static constexpr auto CLASS_NAME = "GJPathSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathSprite, CCSpriteCOpacity)

    /**
     * @note[short] MacOS (ARM): 0x2914a0
     * @note[short] MacOS (Intel): 0x2fd4e0
     * @note[short] Windows: 0x276c30
     * @note[short] Android
     */
    static GJPathSprite* create(int p0);
    
private:
    [[deprecated("GJPathSprite::addRankLabel not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x295688
     * @note[short] MacOS (Intel): 0x301b70
     * @note[short] Android
     */
    void addRankLabel(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x29512c
     * @note[short] MacOS (Intel): 0x301650
     * @note[short] Windows: 0x277240
     * @note[short] Android
     */
    void addShardSprite();

    /**
     * @note[short] MacOS (ARM): 0x2942e4
     * @note[short] MacOS (Intel): 0x300640
     * @note[short] Windows: 0x276f80
     * @note[short] Android
     */
    void changeToLockedArt();
    
private:
    [[deprecated("GJPathSprite::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x295578
     * @note[short] MacOS (Intel): 0x301a60
     * @note[short] Android
     */
    bool init(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x29154c
     * @note[short] MacOS (Intel): 0x2fd580
     * @note[short] Windows: 0x276e00
     * @note[short] Android
     */
    void updateState();
    int m_pathNumber;
};
