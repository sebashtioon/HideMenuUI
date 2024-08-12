#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class HardStreak : public cocos2d::CCDrawNode {
public:
    static constexpr auto CLASS_NAME = "HardStreak";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(HardStreak, cocos2d::CCDrawNode)

    /**
     * @note[short] Windows: 0x2a6750
     * @note[short] Android
     */
    static HardStreak* create();

    /**
     * @note[short] MacOS (ARM): 0x8d3d4
     * @note[short] MacOS (Intel): 0x9d260
     * @note[short] Windows: 0x2a7200
     * @note[short] Android
     */
    void addPoint(cocos2d::CCPoint p0);
    
private:
    [[deprecated("HardStreak::clearAboveXPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearAboveXPos(float p0);
public:
    
private:
    [[deprecated("HardStreak::clearBehindXPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearBehindXPos(float p0);
public:
    
private:
    [[deprecated("HardStreak::createDuplicate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createDuplicate();
public:
    
private:
    [[deprecated("HardStreak::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("HardStreak::normalizeAngle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn normalizeAngle(double p0);
public:
    
private:
    [[deprecated("HardStreak::quadCornerOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quadCornerOffset(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x8d3b0
     * @note[short] MacOS (Intel): 0x9d240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reset();
    
private:
    [[deprecated("HardStreak::resumeStroke not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8d368
     * @note[short] MacOS (Intel): 0x9d1e0
     * @note[short] Android
     */
    void resumeStroke();
public:
    
private:
    [[deprecated("HardStreak::scheduleAutoUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scheduleAutoUpdate();
public:

    /**
     * @note[short] MacOS (ARM): 0x8d374
     * @note[short] MacOS (Intel): 0x9d200
     * @note[short] Windows: 0x2a68c0
     * @note[short] Android
     */
    void stopStroke();

    /**
     * @note[short] MacOS (ARM): 0x8cc2c
     * @note[short] MacOS (Intel): 0x9c970
     * @note[short] Windows: 0x2a6900
     * @note[short] Android
     */
    void updateStroke(float p0);
    
private:
    [[deprecated("HardStreak::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8cac0
     * @note[short] MacOS (Intel): 0x9c7c0
     * @note[short] Android
     */
    virtual bool init();
public:
    cocos2d::CCArray* m_pointArray;
    cocos2d::CCPoint m_currentPoint;
    float m_waveSize;
    float m_pulseSize;
    bool m_isSolid;
    bool m_isFlipped;
    bool m_drawStreak;
};
