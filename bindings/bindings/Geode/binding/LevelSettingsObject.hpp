#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelSettingsObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSettingsObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0xc7908
     * @note[short] MacOS (Intel): 0xe1630
     * @note[short] Windows: 0x2d1e50
     * @note[short] Android
     */
    static LevelSettingsObject* create();

    /**
     * @note[short] MacOS (ARM): 0xcd150
     * @note[short] MacOS (Intel): 0xe7a00
     * @note[short] Windows: 0x2d2280
     * @note[short] Android
     */
    gd::string getSaveString();

    /**
     * @note[short] MacOS (ARM): 0xdd7ac
     * @note[short] MacOS (Intel): 0xfb9f0
     * @note[short] Windows: 0x2d3bb0
     * @note[short] Android
     */
    static LevelSettingsObject* objectFromDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0xc9300
     * @note[short] MacOS (Intel): 0xe35f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelSettingsObject* objectFromString(gd::string const& str);

    /**
     * @note[short] MacOS (ARM): 0xded64
     * @note[short] MacOS (Intel): 0xfd0b0
     * @note[short] Windows: 0x2d53d0
     * @note[short] Android
     */
    void setupColorsFromLegacyMode(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0xdd78c
     * @note[short] MacOS (Intel): 0xfb9d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool shouldUseYSection();

    /**
     * @note[short] MacOS (ARM): 0xdd638
     * @note[short] MacOS (Intel): 0xfb840
     * @note[short] Windows: 0x2d1f80
     * @note[short] Android
     */
    virtual bool init();
    GJEffectManager* m_effectManager;
    int m_startMode;
    Speed m_startSpeed;
    bool m_startMini;
    bool m_startDual;
    bool m_mirrorMode;
    bool m_rotateGameplay;
    bool m_twoPlayerMode;
    bool m_platformerMode;
    float m_songOffset;
    bool m_fadeIn;
    bool m_fadeOut;
    int m_backgroundIndex;
    int m_groundIndex;
    int m_fontIndex;
    int m_middleGroundIndex;
    bool m_startsWithStartPos;
    bool m_isFlipped;
    bool m_reverseGameplay;
    bool m_disableStartPos;
    int m_targetOrder;
    int m_targetChannel;
    GJGameLevel* m_level;
    gd::string m_guidelineString;
    bool m_unkBool;
    int m_colorPage;
    int m_groundLineIndex;
    bool m_propertykA23;
    bool m_propertykA24;
    bool m_noTimePenalty;
    int m_propertykA44;
    bool m_resetCamera;
    int m_spawnGroup;
    bool m_allowMultiRotation;
    bool m_enablePlayerSqueeze;
    bool m_fixGravityBug;
    bool m_fixNegativeScale;
    bool m_fixRobotJump;
    bool m_dynamicLevelHeight;
    bool m_sortGroups;
    bool m_fixRadiusCollision;
    bool m_enable22Changes;
    bool m_allowStaticRotate;
    bool m_reverseSync;
    bool m_propertykA45;
};
