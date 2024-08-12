#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGroundLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGroundLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x51c2d0
     * @note[short] MacOS (Intel): 0x5f4210
     * @note[short] Windows: 0x26bfe0
     * @note[short] iOS: 0x32198
     * @note[short] Android
     */
    static GJGroundLayer* create(int p0, int p1);

    /**
     * @note[short] Windows: 0x26c890
     * @note[short] iOS: 0x3267c
     * @note[short] Android
     */
    void createLine(int p0);
    
private:
    [[deprecated("GJGroundLayer::deactivateGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateGround();
public:
    
private:
    [[deprecated("GJGroundLayer::fadeInFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeInFinished();
public:
    
private:
    [[deprecated("GJGroundLayer::getGroundY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroundY();
public:
    
private:
    [[deprecated("GJGroundLayer::hideShadows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideShadows();
public:

    /**
     * @note[short] MacOS (ARM): 0x51c3b4
     * @note[short] MacOS (Intel): 0x5f4320
     * @note[short] Windows: 0x26c060
     * @note[short] iOS: 0x3221c
     * @note[short] Android
     */
    bool init(int p0, int p1);

    /**
     * @note[short] Windows: 0x26c5d0
     * @note[short] Android
     */
    void loadGroundSprites(int p0, bool p1);
    
private:
    [[deprecated("GJGroundLayer::positionGround not implemented")]]
    /**
     * @note[short] iOS: 0x32fcc
     * @note[short] Android
     */
    void positionGround(float p0);
public:

    /**
     * @note[short] Windows: 0x26ca80
     * @note[short] Android
     */
    TodoReturn scaleGround(float p0);
    
private:
    [[deprecated("GJGroundLayer::toggleVisible01 not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleVisible01(bool p0);
public:
    
private:
    [[deprecated("GJGroundLayer::toggleVisible02 not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleVisible02(bool p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateGround01Color not implemented")]]
    /**
     * @note[short] Android
     */
    void updateGround01Color(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateGround02Color not implemented")]]
    /**
     * @note[short] Android
     */
    void updateGround02Color(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateGroundPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroundPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateGroundWidth not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroundWidth(bool p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateLineBlend not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x51d17c
     * @note[short] MacOS (Intel): 0x5f5130
     * @note[short] Android
     */
    void updateLineBlend(bool p0);
public:

    /**
     * @note[short] Windows: 0x26ccc0
     * @note[short] Android
     */
    TodoReturn updateShadows();

    /**
     * @note[short] Windows: 0x26cd60
     * @note[short] Android
     */
    TodoReturn updateShadowXPos(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x51d1b8
     * @note[short] MacOS (Intel): 0x5f5180
     * @note[short] Windows: 0x26cc30
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS (ARM): 0x51d1c4
     * @note[short] MacOS (Intel): 0x5f5190
     * @note[short] Windows: 0x26cc40
     * @note[short] Android
     */
    virtual TodoReturn fadeInGround(float p0);

    /**
     * @note[short] MacOS (ARM): 0x51d398
     * @note[short] MacOS (Intel): 0x5f5330
     * @note[short] Windows: 0x26ce30
     * @note[short] Android
     */
    virtual TodoReturn fadeOutGround(float p0);
};
