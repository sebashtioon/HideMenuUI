#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJLevelList : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJLevelList";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLevelList, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x487c24
     * @note[short] MacOS (Intel): 0x5346e0
     * @note[short] Windows: 0x16de90
     * @note[short] Android
     */
    static GJLevelList* create();

    /**
     * @note[short] MacOS (ARM): 0x48b638
     * @note[short] MacOS (Intel): 0x538bb0
     * @note[short] Windows: 0x16d5a0
     * @note[short] Android
     */
    static GJLevelList* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Windows: 0x16e610
     * @note[short] Android
     */
    void addLevelToList(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4b7fc4
     * @note[short] MacOS (Intel): 0x56a800
     * @note[short] Windows: 0x16ef90
     * @note[short] Android
     */
    TodoReturn completedLevels();
    
private:
    [[deprecated("GJLevelList::createWithCoder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4b8464
     * @note[short] MacOS (Intel): 0x56ac60
     * @note[short] Windows: 0x16f3c0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GJLevelList::duplicateListLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn duplicateListLevels(GJLevelList* p0);
public:
    
private:
    [[deprecated("GJLevelList::frameForListDifficulty not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4b89d4
     * @note[short] MacOS (Intel): 0x56b220
     * @note[short] Android
     */
    TodoReturn frameForListDifficulty(int p0, DifficultyIconType p1);
public:

    /**
     * @note[short] Windows: 0x16e890
     * @note[short] Android
     */
    cocos2d::CCArray* getListLevelsArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x4b6ecc
     * @note[short] MacOS (Intel): 0x5692c0
     * @note[short] Windows: 0x16e2b0
     * @note[short] Android
     */
    gd::string getUnpackedDescription();
    
private:
    [[deprecated("GJLevelList::handleStatsConflict not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4b6d14
     * @note[short] MacOS (Intel): 0x569100
     * @note[short] Android
     */
    void handleStatsConflict(GJLevelList* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4b6d2c
     * @note[short] MacOS (Intel): 0x569120
     * @note[short] Windows: 0x16e0a0
     * @note[short] Android
     */
    bool hasMatchingLevels(GJLevelList* p0);
    
private:
    [[deprecated("GJLevelList::orderForLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn orderForLevel(int p0);
public:
    
private:
    [[deprecated("GJLevelList::parseListLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parseListLevels(gd::string p0);
public:
    
private:
    [[deprecated("GJLevelList::removeLevelFromList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeLevelFromList(int p0);
public:

    /**
     * @note[short] Windows: 0x16e7a0
     * @note[short] Android
     */
    void reorderLevel(int levelID, int newPosition);
    
private:
    [[deprecated("GJLevelList::reorderLevelStep not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderLevelStep(int p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x4b8028
     * @note[short] MacOS (Intel): 0x56a850
     * @note[short] Windows: 0x16eff0
     * @note[short] Android
     */
    void showListInfo();
    
private:
    [[deprecated("GJLevelList::totalLevels not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4b7fb4
     * @note[short] MacOS (Intel): 0x56a7e0
     * @note[short] Android
     */
    TodoReturn totalLevels();
public:
    
private:
    [[deprecated("GJLevelList::updateLevelsString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsString();
public:

    /**
     * @note[short] MacOS (ARM): 0x4b8794
     * @note[short] MacOS (Intel): 0x56afa0
     * @note[short] Windows: 0x16f6e0
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("GJLevelList::canEncode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4b89cc
     * @note[short] MacOS (Intel): 0x56b210
     * @note[short] Android
     */
    virtual bool canEncode();
public:
    
private:
    [[deprecated("GJLevelList::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4b6c9c
     * @note[short] MacOS (Intel): 0x569080
     * @note[short] Android
     */
    virtual bool init();
public:
    gd::vector<int> m_levels;
    int m_listID;
    int m_listVersion;
    int m_downloads;
    int m_likes;
    int m_difficulty;
    int m_accountID;
    int m_folder;
    int m_listRevision;
    int m_listOrder;
    int m_original;
    int m_diamonds;
    int m_levelsToClaim;
    bool m_isEditable;
    bool m_unlisted;
    bool m_friendsOnly;
    bool m_uploaded;
    bool m_favorite;
    bool m_featured;
    bool m_k100;
    gd::string m_creatorName;
    gd::string m_listName;
    gd::string m_unkString;
    gd::string m_levelsString;
    gd::string m_listDesc;
    int m_uploadDate;
    int m_updateDate;
    cocos2d::CCDictionary* m_k97;
    GJLevelType m_listType;
    int m_M_ID;
};
