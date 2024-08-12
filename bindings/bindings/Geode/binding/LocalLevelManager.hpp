#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GManager.hpp"

class LocalLevelManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "LocalLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LocalLevelManager, GManager)

    /**
     * @note[short] MacOS (ARM): 0x527e4c
     * @note[short] MacOS (Intel): 0x601110
     * @note[short] Windows: 0x30f5d0
     * @note[short] iOS: 0x1d1c58
     * @note[short] Android
     */
    static LocalLevelManager* sharedState();
	inline static LocalLevelManager* get() {
        return LocalLevelManager::sharedState();
    }

    /**
     * @note[short] Windows: 0x30fa40
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllLevelsInDict();
    
private:
    [[deprecated("LocalLevelManager::getAllLevelsWithName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllLevelsWithName(gd::string p0);
public:
    
private:
    [[deprecated("LocalLevelManager::getCreatedLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCreatedLevels(int p0);
public:
    
private:
    [[deprecated("LocalLevelManager::getCreatedLists not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCreatedLists(int p0);
public:
    
private:
    [[deprecated("LocalLevelManager::getLevelsInNameGroups not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x528540
     * @note[short] MacOS (Intel): 0x601940
     * @note[short] Android
     */
    cocos2d::CCDictionary* getLevelsInNameGroups();
public:

    /**
     * @note[short] Windows: 0x30f930
     * @note[short] Android
     */
    gd::string getMainLevelString(int p0);
    
private:
    [[deprecated("LocalLevelManager::markLevelsAsUnmodified not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markLevelsAsUnmodified();
public:
    
private:
    [[deprecated("LocalLevelManager::moveLevelToTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveLevelToTop(GJGameLevel* p0);
public:
    
private:
    [[deprecated("LocalLevelManager::reorderLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderLevels();
public:
    
private:
    [[deprecated("LocalLevelManager::tryLoadMainLevelString not implemented")]]
    /**
     * @note[short] iOS: 0x1d1db8
     * @note[short] Android
     */
    TodoReturn tryLoadMainLevelString(int p0);
public:

    /**
     * @note[short] Windows: 0x30ff30
     * @note[short] Android
     */
    TodoReturn updateLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x528ad0
     * @note[short] MacOS (Intel): 0x601f90
     * @note[short] Windows: 0x30fba0
     * @note[short] Android
     */
    TodoReturn updateLevelRevision();

    /**
     * @note[short] MacOS (ARM): 0x527fcc
     * @note[short] MacOS (Intel): 0x6012b0
     * @note[short] Windows: 0x30f670
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x52936c
     * @note[short] MacOS (Intel): 0x6028e0
     * @note[short] Windows: 0x310040
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x5293c4
     * @note[short] MacOS (Intel): 0x602940
     * @note[short] Windows: 0x3100a0
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x5292f0
     * @note[short] MacOS (Intel): 0x602850
     * @note[short] Windows: 0x30ffb0
     * @note[short] Android
     */
    virtual void firstLoad();
    cocos2d::CCArray* m_localLevels;
    cocos2d::CCArray* m_localLists;
    gd::map<int, gd::string> m_mainLevels;
};
