#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMapPack : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapPack";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapPack, cocos2d::CCNode)
    
private:
    [[deprecated("GJMapPack::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJMapPack* create();
public:
    
private:
    [[deprecated("GJMapPack::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJMapPack* create(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GJMapPack::completedMaps not implemented")]]
    /**
     * @note[short] Android
     */
    int completedMaps();
public:

    /**
     * @note[short] MacOS (ARM): 0x4b4f88
     * @note[short] MacOS (Intel): 0x566ef0
     * @note[short] Windows: 0x168810
     * @note[short] iOS: 0xb1614
     * @note[short] Android
     */
    bool hasCompletedMapPack();
    
private:
    [[deprecated("GJMapPack::parsePackColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parsePackColors(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GJMapPack::parsePackLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parsePackLevels(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int totalMaps();
    
private:
    [[deprecated("GJMapPack::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4b4e64
     * @note[short] MacOS (Intel): 0x566dc0
     * @note[short] Android
     */
    virtual bool init();
public:
    cocos2d::CCArray* m_levels;
    int m_packID;
    GJDifficulty m_difficulty;
    int m_stars;
    int m_coins;
    gd::string m_packName;
    gd::string m_levelStrings;
    cocos2d::ccColor3B m_textColour;
    cocos2d::ccColor3B m_barColour;
    int m_MId;
    bool m_isGauntlet;
};
