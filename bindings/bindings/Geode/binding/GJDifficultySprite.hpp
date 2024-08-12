#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDifficultySprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJDifficultySprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDifficultySprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x253070
     * @note[short] MacOS (Intel): 0x2b2920
     * @note[short] Windows: 0x292c60
     * @note[short] iOS: 0x2f62c8
     * @note[short] Android
     */
    static GJDifficultySprite* create(int p0, GJDifficultyName p1);

    /**
     * @note[short] MacOS (ARM): 0x253214
     * @note[short] MacOS (Intel): 0x2b2a70
     * @note[short] Windows: 0x292d40
     * @note[short] iOS: 0x2f63f4
     * @note[short] Android
     */
    static gd::string getDifficultyFrame(int p0, GJDifficultyName p1);
    
private:
    [[deprecated("GJDifficultySprite::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x25317c
     * @note[short] MacOS (Intel): 0x2b2a00
     * @note[short] iOS: 0x2f6370
     * @note[short] Android
     */
    bool init(int p0, GJDifficultyName p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x253350
     * @note[short] MacOS (Intel): 0x2b2ba0
     * @note[short] Windows: 0x292e20
     * @note[short] iOS: 0x2f64b4
     * @note[short] Android
     */
    void updateDifficultyFrame(int p0, GJDifficultyName p1);

    /**
     * @note[short] MacOS (ARM): 0x2534c8
     * @note[short] MacOS (Intel): 0x2b2d20
     * @note[short] Windows: 0x292f40
     * @note[short] iOS: 0x2f662c
     * @note[short] Android
     */
    void updateFeatureState(GJFeatureState p0);
    
private:
    [[deprecated("GJDifficultySprite::updateFeatureStateFromLevel not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x253490
     * @note[short] MacOS (Intel): 0x2b2cd0
     * @note[short] iOS: 0x2f65f4
     * @note[short] Android
     */
    void updateFeatureStateFromLevel(GJGameLevel* p0);
public:
    GJFeatureState m_featureState;
};
