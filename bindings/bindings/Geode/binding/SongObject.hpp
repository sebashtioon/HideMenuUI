#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SongObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
     SongObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SongObject* create(int audioID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int audioID);
    int m_audioID;
};
