#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GhostTrailEffect : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GhostTrailEffect";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GhostTrailEffect, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x68b50
     * @note[short] iOS: 0x305740
     * @note[short] Android
     */
    static GhostTrailEffect* create();
    
private:
    [[deprecated("GhostTrailEffect::doBlendAdditive not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doBlendAdditive();
public:
    
private:
    [[deprecated("GhostTrailEffect::runWithTarget not implemented")]]
    /**
     * @note[short] iOS: 0x305810
     * @note[short] Android
     */
    void runWithTarget(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, bool p5);
public:
    
private:
    [[deprecated("GhostTrailEffect::stopTrail not implemented")]]
    /**
     * @note[short] iOS: 0x305cbc
     * @note[short] Android
     */
    void stopTrail();
public:

    /**
     * @note[short] Windows: 0x68c90
     * @note[short] Android
     */
    void trailSnapshot(float p0);

    /**
     * @note[short] MacOS (ARM): 0x52af9c
     * @note[short] MacOS (Intel): 0x604890
     * @note[short] Windows: 0x68c30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void draw();
    GEODE_PAD(48);
    cocos2d::ccColor3B m_color;
    GEODE_PAD(12);
};
