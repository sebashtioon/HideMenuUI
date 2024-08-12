#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSprite();

    /**
     * @note[short] MacOS (ARM): 0x31ef10
     * @note[short] MacOS (Intel): 0x3971a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletSprite* create(GauntletType gauntletType, bool locked);

    /**
     * @note[short] MacOS (ARM): 0x31f930
     * @note[short] MacOS (Intel): 0x397aa0
     * @note[short] Windows: 0x1eb6c0
     * @note[short] Android
     */
    void addLockedSprite();
    
private:
    [[deprecated("GauntletSprite::addNormalSprite not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31f834
     * @note[short] MacOS (Intel): 0x3979d0
     * @note[short] Android
     */
    void addNormalSprite();
public:
    
private:
    [[deprecated("GauntletSprite::colorForType not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31fc4c
     * @note[short] MacOS (Intel): 0x397da0
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForType(GauntletType p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x31f78c
     * @note[short] MacOS (Intel): 0x397950
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GauntletType gauntletType, bool locked);
    
private:
    [[deprecated("GauntletSprite::luminanceForType not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31fc2c
     * @note[short] MacOS (Intel): 0x397d70
     * @note[short] Android
     */
    float luminanceForType(GauntletType p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x31f6b8
     * @note[short] MacOS (Intel): 0x397880
     * @note[short] Windows: 0x1eb9f0
     * @note[short] Android
     */
    void toggleLockedSprite(bool p0);
    GauntletType m_gauntletType;
};
