#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "CustomSongDelegate.hpp"

class CustomSongCell : public TableViewCell, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1e9d1c
     * @note[short] MacOS (Intel): 0x23f420
     * @note[short] Windows: 0xb2220
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* p0);
    
private:
    [[deprecated("CustomSongCell::onDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongCell::shouldReload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldReload();
public:
    
private:
    [[deprecated("CustomSongCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:
    
private:
    [[deprecated("CustomSongCell::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1f9818
     * @note[short] MacOS (Intel): 0x24f910
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CustomSongCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1f9998
     * @note[short] MacOS (Intel): 0x24fb20
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] MacOS (ARM): 0x1f98dc
     * @note[short] MacOS (Intel): 0x24fa00
     * @note[short] Windows: 0xb23e0
     * @note[short] Android
     */
    virtual TodoReturn songIDChanged(int p0);
    
private:
    [[deprecated("CustomSongCell::getActiveSongID not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1f9938
     * @note[short] MacOS (Intel): 0x24fa80
     * @note[short] Android
     */
    virtual TodoReturn getActiveSongID();
public:

    /**
     * @note[short] MacOS (ARM): 0x1f9970
     * @note[short] MacOS (Intel): 0x24fae0
     * @note[short] Windows: 0xb2440
     * @note[short] Android
     */
    virtual TodoReturn getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1f9988
     * @note[short] MacOS (Intel): 0x24fb00
     * @note[short] Windows: 0x81fb0
     * @note[short] Android
     */
    virtual LevelSettingsObject* getLevelSettings();
    SongInfoObject* m_songInfoObject;
    bool m_unkBool;
};
