#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSearchObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSearchObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSearchObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4b59c8
     * @note[short] MacOS (Intel): 0x567a60
     * @note[short] Windows: 0x16c030
     * @note[short] iOS: 0xb1b88
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x4b5e00
     * @note[short] MacOS (Intel): 0x567f10
     * @note[short] Windows: 0x16bf00
     * @note[short] iOS: 0xb1ee4
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery);

    /**
     * @note[short] MacOS (ARM): 0x4b5d94
     * @note[short] MacOS (Intel): 0x567ea0
     * @note[short] Windows: 0x16be20
     * @note[short] iOS: 0xb1dd4
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType);

    /**
     * @note[short] MacOS (ARM): 0x491f3c
     * @note[short] MacOS (Intel): 0x53fd90
     * @note[short] Windows: 0x16b720
     * @note[short] Android
     */
    static GJSearchObject* createFromKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x498c5c
     * @note[short] MacOS (Intel): 0x547b90
     * @note[short] Windows: 0x16c370
     * @note[short] Android
     */
    char const* getKey();
    
private:
    [[deprecated("GJSearchObject::getNextPageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getNextPageKey();
public:
    
private:
    [[deprecated("GJSearchObject::getNextPageObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4b651c
     * @note[short] MacOS (Intel): 0x5687d0
     * @note[short] Android
     */
    GJSearchObject* getNextPageObject();
public:

    /**
     * @note[short] MacOS (ARM): 0x4b6528
     * @note[short] MacOS (Intel): 0x5687f0
     * @note[short] Windows: 0x16c4c0
     * @note[short] Android
     */
    GJSearchObject* getPageObject(int page);
    
private:
    [[deprecated("GJSearchObject::getPrevPageObject not implemented")]]
    /**
     * @note[short] Android
     */
    GJSearchObject* getPrevPageObject();
public:

    /**
     * @note[short] Windows: 0x16c630
     * @note[short] Android
     */
    char const* getSearchKey(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);
    
private:
    [[deprecated("GJSearchObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);
public:

    /**
     * @note[short] MacOS (ARM): 0x4b684c
     * @note[short] MacOS (Intel): 0x568be0
     * @note[short] Windows: 0x16c910
     * @note[short] iOS: 0xb25b8
     * @note[short] Android
     */
    bool isLevelSearchObject();
    SearchType m_searchType;
    gd::string m_searchQuery;
    gd::string m_difficulty;
    gd::string m_length;
    int m_page;
    bool m_starFilter;
    bool m_noStarFilter;
    int m_total;
    bool m_uncompletedFilter;
    bool m_completedFilter;
    bool m_featuredFilter;
    bool m_originalFilter;
    bool m_twoPlayerFilter;
    bool m_coinsFilter;
    bool m_epicFilter;
    bool m_legendaryFilter;
    bool m_mythicFilter;
    GJDifficulty m_demonFilter;
    int m_folder;
    int m_songID;
    bool m_customSongFilter;
    bool m_songFilter;
    bool m_searchIsOverlay;
    int m_searchMode;
};
