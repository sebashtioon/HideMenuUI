#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "MusicSearchResult.hpp"

class SFXSearchResult : public MusicSearchResult {
public:
    static constexpr auto CLASS_NAME = "SFXSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXSearchResult, MusicSearchResult)
    
private:
    [[deprecated("SFXSearchResult::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SFXSearchResult* create(int p0);
public:
    
private:
    [[deprecated("SFXSearchResult::getActiveFolder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveFolder();
public:
    
private:
    [[deprecated("SFXSearchResult::getSelectedPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSelectedPage(int p0, int p1);
public:
    
private:
    [[deprecated("SFXSearchResult::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("SFXSearchResult::setActiveFolder not implemented")]]
    /**
     * @note[short] Android
     */
    void setActiveFolder(SFXFolderObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4ea504
     * @note[short] MacOS (Intel): 0x5a2ef0
     * @note[short] Windows: 0x3264f0
     * @note[short] Android
     */
    virtual TodoReturn updateObjects(AudioSortType p0);
};
