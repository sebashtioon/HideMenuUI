#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongInfoObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SongInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongInfoObject, cocos2d::CCNode)
    
private:
    [[deprecated("SongInfoObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SongInfoObject* create(cocos2d::CCDictionary* p0);
public:

    /**
     * @note[short] Windows: 0x3245a0
     * @note[short] Android
     */
    static SongInfoObject* create(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, int priority, gd::string unk1, bool unk2, int unk3, int unk4);
    
private:
    [[deprecated("SongInfoObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SongInfoObject* create(int p0);
public:
    
private:
    [[deprecated("SongInfoObject::addTags not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addTags(gd::string p0);
public:
    
private:
    [[deprecated("SongInfoObject::containsTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn containsTag(int p0);
public:

    /**
     * @note[short] Windows: 0x324b70
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("SongInfoObject::getArtistNames not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getArtistNames(int p0);
public:
    
private:
    [[deprecated("SongInfoObject::getTagsString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTagsString(bool p0);
public:
    
private:
    [[deprecated("SongInfoObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, int priority, gd::string unk1, bool unk2, int unk3, int unk4);
public:

    /**
     * @note[short] MacOS (ARM): 0x4e7ef4
     * @note[short] MacOS (Intel): 0x5a01f0
     * @note[short] Windows: 0x324e80
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("SongInfoObject::canEncode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4e8088
     * @note[short] MacOS (Intel): 0x5a03b0
     * @note[short] Android
     */
    virtual bool canEncode();
public:
    int m_songID;
    gd::string m_songName;
    gd::string m_artistName;
    gd::string m_youtubeVideo;
    gd::string m_youtubeChannel;
    gd::string m_songUrl;
    int m_artistID;
    float m_fileSize;
    bool m_isUnkownSong;
    int m_priority;
};
