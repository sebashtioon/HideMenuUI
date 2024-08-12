#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x64a8e4
     * @note[short] MacOS (Intel): 0x738f50
     * @note[short] Windows: 0x7d50
     * @note[short] iOS: 0xb9340
     * @note[short] Android
     */
    static AchievementManager* sharedState();

    /**
     * @note[short] Windows: 0x39390
     * @note[short] Android
     */
    TodoReturn achievementForUnlock(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x7ea0
     * @note[short] Android
     */
    void addAchievement(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, int p5);

    /**
     * @note[short] Windows: 0x83c0
     * @note[short] Android
     */
    void addManualAchievements();
    
private:
    [[deprecated("AchievementManager::areAchievementsEarned not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn areAchievementsEarned(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("AchievementManager::checkAchFromUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkAchFromUnlock(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::dataLoaded not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x697460
     * @note[short] MacOS (Intel): 0x7908f0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("AchievementManager::encodeDataTo not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6974cc
     * @note[short] MacOS (Intel): 0x790960
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("AchievementManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("AchievementManager::getAchievementRewardDict not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAchievementRewardDict();
public:
    
private:
    [[deprecated("AchievementManager::getAchievementsWithID not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAchievementsWithID(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::getAllAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllAchievements();
public:

    /**
     * @note[short] Windows: 0x38d20
     * @note[short] Android
     */
    cocos2d::CCArray* getAllAchievementsSorted(bool p0);
    
private:
    [[deprecated("AchievementManager::isAchievementAvailable not implemented")]]
    /**
     * @note[short] Android
     */
    bool isAchievementAvailable(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x697604
     * @note[short] MacOS (Intel): 0x790ad0
     * @note[short] Windows: 0x38c40
     * @note[short] iOS: 0xe9c90
     * @note[short] Android
     */
    bool isAchievementEarned(char const* ach);
    
private:
    [[deprecated("AchievementManager::limitForAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn limitForAchievement(gd::string p0);
public:
    
private:
    [[deprecated("AchievementManager::notifyAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn notifyAchievement(char const* p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("AchievementManager::notifyAchievementWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn notifyAchievementWithID(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::percentageForCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn percentageForCount(int p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x697620
     * @note[short] MacOS (Intel): 0x790af0
     * @note[short] Windows: 0x38c60
     * @note[short] Android
     */
    int percentForAchievement(char const* p0);
    
private:
    [[deprecated("AchievementManager::reportAchievementWithID not implemented")]]
    /**
     * @note[short] Android
     */
    void reportAchievementWithID(char const* p0, int p1, bool p2);
public:
    
private:
    [[deprecated("AchievementManager::reportPlatformAchievementWithID not implemented")]]
    /**
     * @note[short] Android
     */
    void reportPlatformAchievementWithID(char const* p0, int p1);
public:
    
private:
    [[deprecated("AchievementManager::resetAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    void resetAchievement(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::resetAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAchievements();
public:
    
private:
    [[deprecated("AchievementManager::setup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setup();
public:
    
private:
    [[deprecated("AchievementManager::storeAchievementUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    void storeAchievementUnlocks();
public:

    /**
     * @note[short] MacOS (ARM): 0x64a9d4
     * @note[short] MacOS (Intel): 0x739060
     * @note[short] Windows: 0x7e10
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCArray* m_allAchievements;
    cocos2d::CCDictionary* m_platformAchievements;
    cocos2d::CCDictionary* m_achievementUnlocks;
    void* m_unkPtrUnused;
    cocos2d::CCDictionary* m_reportedAchievements;
    bool m_dontNotify;
    cocos2d::CCArray* m_allAchievementsSorted;
    int m_order;
    cocos2d::CCDictionary* m_unAchieved;
};
