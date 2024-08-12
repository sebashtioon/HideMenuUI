#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GManager, cocos2d::CCNode)
    
private:
    [[deprecated("GManager::getCompressedSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCompressedSaveString();
public:
    
private:
    [[deprecated("GManager::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();
public:
    
private:
    [[deprecated("GManager::load not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn load();
public:

    /**
     * @note[short] Windows: 0x69610
     * @note[short] Android
     */
    void loadDataFromFile(gd::string const& p0);
    
private:
    [[deprecated("GManager::loadFromCompressedString not implemented")]]
    /**
     * @note[short] Android
     */
    void loadFromCompressedString(gd::string& p0);
public:
    
private:
    [[deprecated("GManager::loadFromString not implemented")]]
    /**
     * @note[short] Android
     */
    void loadFromString(gd::string& p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4181c4
     * @note[short] MacOS (Intel): 0x4b61b0
     * @note[short] Windows: 0x69520
     * @note[short] Android
     */
    void save();
    
private:
    [[deprecated("GManager::saveData not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveData(DS_Dictionary* p0, gd::string p1);
public:
    
private:
    [[deprecated("GManager::saveGMTo not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4182bc
     * @note[short] MacOS (Intel): 0x4b62b0
     * @note[short] Android
     */
    void saveGMTo(gd::string p0);
public:
    
private:
    [[deprecated("GManager::tryLoadData not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryLoadData(DS_Dictionary* p0, gd::string const& p1);
public:
	inline GManager() {}

    /**
     * @note[short] MacOS (ARM): 0x417f4c
     * @note[short] MacOS (Intel): 0x4b5f20
     * @note[short] Windows: 0x69340
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x417f5c
     * @note[short] MacOS (Intel): 0x4b5f40
     * @note[short] Windows: 0x69350
     * @note[short] Android
     */
    virtual void setup();
    
private:
    [[deprecated("GManager::encodeDataTo not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4184f4
     * @note[short] MacOS (Intel): 0x4b64d0
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GManager::dataLoaded not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x418b10
     * @note[short] MacOS (Intel): 0x4b6b50
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GManager::firstLoad not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x418b14
     * @note[short] MacOS (Intel): 0x4b6b60
     * @note[short] Android
     */
    virtual void firstLoad();
public:
    gd::string m_fileName;
    bool m_setup;
    bool m_saved;
    bool m_quickSave;
};
