#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJComment : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJComment";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJComment, cocos2d::CCNode)
    
private:
    [[deprecated("GJComment::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJComment* create();
public:
    
private:
    [[deprecated("GJComment::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJComment* create(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GJComment::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4b69ec
     * @note[short] MacOS (Intel): 0x568dc0
     * @note[short] Android
     */
    virtual bool init();
public:
    gd::string m_commentString;
    gd::string m_userName;
    int m_commentID;
    int m_userID;
    int m_likeCount;
    int m_levelID;
    bool m_isSpam;
    int m_accountID;
    gd::string m_uploadDate;
    bool m_commentDeleted;
    int m_percentage;
    int m_modBadge;
    cocos2d::ccColor3B m_color;
    bool m_hasLevelID;
    bool m_unkMultiplayerBool;
    GJUserScore* m_userScore;
};
