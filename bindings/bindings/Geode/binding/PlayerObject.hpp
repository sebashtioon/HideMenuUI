#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] MacOS (ARM): 0x37c5c0
     * @note[short] MacOS (Intel): 0x403500
     * @note[short] Windows: 0x3648d0
     * @note[short] iOS: 0x227d30
     * @note[short] Android
     */
    static PlayerObject* create(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    /**
     * @note[short] MacOS (ARM): 0x38447c
     * @note[short] MacOS (Intel): 0x40c550
     * @note[short] Windows: 0x37e0a0
     * @note[short] Android
     */
    void activateStreak();

    /**
     * @note[short] Windows: 0x3667d0
     * @note[short] Android
     */
    TodoReturn addAllParticles();
    
private:
    [[deprecated("PlayerObject::addToTouchedRings not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x393d24
     * @note[short] MacOS (Intel): 0x41ecf0
     * @note[short] Android
     */
    TodoReturn addToTouchedRings(RingObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::addToYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToYVelocity(double p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x384c3c
     * @note[short] MacOS (Intel): 0x40cdb0
     * @note[short] Windows: 0x36adb0
     * @note[short] Android
     */
    void animatePlatformerJump(float p0);

    /**
     * @note[short] MacOS (ARM): 0x386edc
     * @note[short] MacOS (Intel): 0x40f770
     * @note[short] Windows: 0x37def0
     * @note[short] Android
     */
    void boostPlayer(float p0);

    /**
     * @note[short] MacOS (ARM): 0x398b20
     * @note[short] MacOS (Intel): 0x423f30
     * @note[short] Windows: 0x37d6b0
     * @note[short] Android
     */
    void bumpPlayer(float p0, int p1, bool p2, GameObject* p3);
    
private:
    [[deprecated("PlayerObject::buttonDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn buttonDown(PlayerButton p0);
public:
    
private:
    [[deprecated("PlayerObject::canStickToGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canStickToGround();
public:
    
private:
    [[deprecated("PlayerObject::checkSnapJumpToObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkSnapJumpToObject(GameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x38714c
     * @note[short] MacOS (Intel): 0x40fa20
     * @note[short] Windows: 0x36fa40
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
    
private:
    [[deprecated("PlayerObject::collidedWithObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x38c4ec
     * @note[short] MacOS (Intel): 0x416340
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x388d80
     * @note[short] MacOS (Intel): 0x411b50
     * @note[short] Windows: 0x36fb00
     * @note[short] Android
     */
    void collidedWithObjectInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
    
private:
    [[deprecated("PlayerObject::collidedWithSlope not implemented")]]
    /**
     * @note[short] Android
     */
    void collidedWithSlope(float dt, GameObject* object, bool forced);
public:

    /**
     * @note[short] Windows: 0x36d8a0
     * @note[short] Android
     */
    void collidedWithSlopeInternal(float dt, GameObject* object, bool forced);
    
private:
    [[deprecated("PlayerObject::convertToClosestRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertToClosestRotation(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3994b4
     * @note[short] MacOS (Intel): 0x4249f0
     * @note[short] Windows: 0x37e4b0
     * @note[short] Android
     */
    void copyAttributes(PlayerObject* p0);

    /**
     * @note[short] Windows: 0x376690
     * @note[short] Android
     */
    void createFadeOutDartStreak();

    /**
     * @note[short] Windows: 0x366050
     * @note[short] Android
     */
    void createRobot(int p0);

    /**
     * @note[short] Windows: 0x366410
     * @note[short] Android
     */
    void createSpider(int p0);
    
private:
    [[deprecated("PlayerObject::deactivateParticle not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3828c8
     * @note[short] MacOS (Intel): 0x40a870
     * @note[short] Android
     */
    void deactivateParticle();
public:
    
private:
    [[deprecated("PlayerObject::deactivateStreak not implemented")]]
    /**
     * @note[short] Android
     */
    void deactivateStreak(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::destroyFromHitHead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn destroyFromHitHead();
public:
    
private:
    [[deprecated("PlayerObject::didHitHead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didHitHead();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void disableCustomGlowColor();
    
private:
    [[deprecated("PlayerObject::disablePlayerControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disablePlayerControls();
public:

    /**
     * @note[short] MacOS (ARM): 0x3924d4
     * @note[short] MacOS (Intel): 0x41d060
     * @note[short] Windows: 0x378f10
     * @note[short] iOS: 0x238034
     * @note[short] Android
     */
    void disableSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x383584
     * @note[short] MacOS (Intel): 0x40b5e0
     * @note[short] Windows: 0x376540
     * @note[short] Android
     */
    void doReversePlayer(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void enableCustomGlowColor(cocos2d::_ccColor3B const& color);
    
private:
    [[deprecated("PlayerObject::enablePlayerControls not implemented")]]
    /**
     * @note[short] Android
     */
    void enablePlayerControls();
public:
    
private:
    [[deprecated("PlayerObject::exitPlatformerAnimateJump not implemented")]]
    /**
     * @note[short] Android
     */
    void exitPlatformerAnimateJump();
public:

    /**
     * @note[short] MacOS (ARM): 0x392438
     * @note[short] MacOS (Intel): 0x41cfd0
     * @note[short] Windows: 0x37e1a0
     * @note[short] iOS: 0x237f98
     * @note[short] Android
     */
    void fadeOutStreak2(float p0);
    
private:
    [[deprecated("PlayerObject::flashPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    void flashPlayer(float p0, float p1, cocos2d::ccColor3B mainColor, cocos2d::ccColor3B secondColor);
public:

    /**
     * @note[short] MacOS (ARM): 0x3848b4
     * @note[short] MacOS (Intel): 0x40c9c0
     * @note[short] Windows: 0x3781e0
     * @note[short] Android
     */
    void flipGravity(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::flipMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipMod();
public:

    /**
     * @note[short] MacOS (ARM): 0x384c24
     * @note[short] MacOS (Intel): 0x40cd80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void gameEventTriggered(int p0, int p1);
    
private:
    [[deprecated("PlayerObject::getActiveMode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x394684
     * @note[short] MacOS (Intel): 0x41f680
     * @note[short] Android
     */
    bool getActiveMode();
public:
    
private:
    [[deprecated("PlayerObject::getCurrentXVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCurrentXVelocity();
public:
    
private:
    [[deprecated("PlayerObject::getModifiedSlopeYVel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getModifiedSlopeYVel();
public:
    
private:
    [[deprecated("PlayerObject::getOldPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOldPosition(float p0);
public:
    
private:
    [[deprecated("PlayerObject::getSecondColor not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B getSecondColor();
public:
    
private:
    [[deprecated("PlayerObject::getYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getYVelocity();
public:
    
private:
    [[deprecated("PlayerObject::gravityDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityDown();
public:
    
private:
    [[deprecated("PlayerObject::gravityUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityUp();
public:
    
private:
    [[deprecated("PlayerObject::handlePlayerCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handlePlayerCommand(int p0);
public:

    /**
     * @note[short] Windows: 0x36d1d0
     * @note[short] Android
     */
    TodoReturn handleRotatedCollisionInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3, bool p4, bool p5);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    TodoReturn handleRotatedObjectCollision(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
    
private:
    [[deprecated("PlayerObject::handleRotatedSlopeCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleRotatedSlopeCollision(float p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::hardFlipGravity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hardFlipGravity();
public:

    /**
     * @note[short] MacOS (ARM): 0x38b4b4
     * @note[short] MacOS (Intel): 0x415160
     * @note[short] Windows: 0x379f40
     * @note[short] Android
     */
    void hitGround(GameObject* p0, bool p1);
    
private:
    [[deprecated("PlayerObject::hitGroundNoJump not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hitGroundNoJump(GameObject* p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x38487c
     * @note[short] MacOS (Intel): 0x40c980
     * @note[short] Windows: 0x36acd0
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS (ARM): 0x37c678
     * @note[short] MacOS (Intel): 0x403590
     * @note[short] Windows: 0x364970
     * @note[short] iOS: 0x227dd4
     * @note[short] Android
     */
    bool init(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);
    
private:
    [[deprecated("PlayerObject::isBoostValid not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBoostValid(float p0);
public:
    
private:
    [[deprecated("PlayerObject::isFlying not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x38285c
     * @note[short] MacOS (Intel): 0x40a810
     * @note[short] Android
     */
    bool isFlying();
public:
    
private:
    [[deprecated("PlayerObject::isInBasicMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isInBasicMode();
public:
    
private:
    [[deprecated("PlayerObject::isInNormalMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isInNormalMode();
public:
    
private:
    [[deprecated("PlayerObject::isSafeFlip not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x38b488
     * @note[short] MacOS (Intel): 0x415120
     * @note[short] Android
     */
    bool isSafeFlip(float p0);
public:
    
private:
    [[deprecated("PlayerObject::isSafeHeadTest not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeHeadTest();
public:
    
private:
    [[deprecated("PlayerObject::isSafeMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeMode(float p0);
public:
    
private:
    [[deprecated("PlayerObject::isSafeSpiderFlip not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeSpiderFlip(float p0);
public:

    /**
     * @note[short] Windows: 0x3698a0
     * @note[short] Android
     */
    TodoReturn levelFlipFinished();

    /**
     * @note[short] Windows: 0x379500
     * @note[short] Android
     */
    bool levelFlipping();
    
private:
    [[deprecated("PlayerObject::levelWillFlip not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn levelWillFlip();
public:

    /**
     * @note[short] MacOS (ARM): 0x399e74
     * @note[short] MacOS (Intel): 0x425520
     * @note[short] Windows: 0x37f9d0
     * @note[short] Android
     */
    void loadFromCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] MacOS (ARM): 0x3986a8
     * @note[short] MacOS (Intel): 0x423ad0
     * @note[short] Windows: 0x37d2e0
     * @note[short] Android
     */
    void lockPlayer();
    
private:
    [[deprecated("PlayerObject::logValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logValues();
public:
    
private:
    [[deprecated("PlayerObject::modeDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x395100
     * @note[short] MacOS (Intel): 0x4201b0
     * @note[short] Android
     */
    void modeDidChange();
public:
    
private:
    [[deprecated("PlayerObject::performSlideCheck not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performSlideCheck();
public:

    /**
     * @note[short] MacOS (ARM): 0x384544
     * @note[short] MacOS (Intel): 0x40c630
     * @note[short] Windows: 0x37e690
     * @note[short] Android
     */
    void placeStreakPoint();

    /**
     * @note[short] Windows: 0x37da60
     * @note[short] Android
     */
    TodoReturn playBumpEffect(int p0, GameObject* p1);
    
private:
    [[deprecated("PlayerObject::playBurstEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playBurstEffect();
public:

    /**
     * @note[short] MacOS (ARM): 0x1bfebc
     * @note[short] MacOS (Intel): 0x20eb00
     * @note[short] Windows: 0x3621d0
     * @note[short] iOS: 0x63758
     * @note[short] Android
     */
    void playCompleteEffect(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1b7ef4
     * @note[short] MacOS (Intel): 0x206990
     * @note[short] Windows: 0x35d0c0
     * @note[short] iOS: 0x5de28
     * @note[short] Android
     */
    void playDeathEffect();

    /**
     * @note[short] Windows: 0x37f4e0
     * @note[short] Android
     */
    void playDynamicSpiderRun();

    /**
     * @note[short] MacOS (ARM): 0x392264
     * @note[short] MacOS (Intel): 0x41cdd0
     * @note[short] Windows: 0x375d70
     * @note[short] iOS: 0x237eb8
     * @note[short] Android
     */
    void playerDestroyed(bool p0);
    
private:
    [[deprecated("PlayerObject::playerIsFalling not implemented")]]
    /**
     * @note[short] Android
     */
    bool playerIsFalling(float p0);
public:
    
private:
    [[deprecated("PlayerObject::playerIsFallingBugged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIsFallingBugged();
public:
    
private:
    [[deprecated("PlayerObject::playerIsMovingUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIsMovingUp();
public:
    
private:
    [[deprecated("PlayerObject::playerTeleported not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTeleported();
public:
    
private:
    [[deprecated("PlayerObject::playingEndEffect not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x398a84
     * @note[short] MacOS (Intel): 0x423eb0
     * @note[short] Android
     */
    TodoReturn playingEndEffect();
public:

    /**
     * @note[short] MacOS (ARM): 0x391bb4
     * @note[short] MacOS (Intel): 0x41c710
     * @note[short] Windows: 0x3754b0
     * @note[short] Android
     */
    void playSpawnEffect();

    /**
     * @note[short] MacOS (ARM): 0x38d940
     * @note[short] MacOS (Intel): 0x417a50
     * @note[short] Windows: 0x373200
     * @note[short] Android
     */
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);

    /**
     * @note[short] MacOS (ARM): 0x385734
     * @note[short] MacOS (Intel): 0x40d9d0
     * @note[short] Windows: 0x36b6b0
     * @note[short] Android
     */
    void postCollision(float p0);
    
private:
    [[deprecated("PlayerObject::preCollision not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3855d8
     * @note[short] MacOS (Intel): 0x40d7d0
     * @note[short] Android
     */
    void preCollision();
public:

    /**
     * @note[short] Windows: 0x36d370
     * @note[short] Android
     */
    bool preSlopeCollision(float p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x398e28
     * @note[short] MacOS (Intel): 0x424240
     * @note[short] Windows: 0x37d860
     * @note[short] Android
     */
    void propellPlayer(float p0, bool p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x27f4b0
     * @note[short] MacOS (Intel): 0x41d330
     * @note[short] Windows: 0x375f70
     * @note[short] Android
     */
    void pushButton(PlayerButton p0);
    
private:
    [[deprecated("PlayerObject::pushDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pushDown();
public:
    
private:
    [[deprecated("PlayerObject::pushPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    void pushPlayer(float p0);
public:
    
private:
    [[deprecated("PlayerObject::redirectDash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn redirectDash(float p0);
public:
    
private:
    [[deprecated("PlayerObject::redirectPlayerForce not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn redirectPlayerForce(float p0, float p1, float p2, float p3);
public:

    /**
     * @note[short] MacOS (ARM): 0x398664
     * @note[short] MacOS (Intel): 0x423a90
     * @note[short] Windows: 0x37d110
     * @note[short] Android
     */
    void releaseAllButtons();

    /**
     * @note[short] MacOS (ARM): 0x393880
     * @note[short] MacOS (Intel): 0x41e7b0
     * @note[short] Windows: 0x376200
     * @note[short] Android
     */
    void releaseButton(PlayerButton p0);
    
private:
    [[deprecated("PlayerObject::removeAllParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeAllParticles();
public:

    /**
     * @note[short] Windows: 0x3801a0
     * @note[short] Android
     */
    void removePendingCheckpoint();
    
private:
    [[deprecated("PlayerObject::removePlacedCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePlacedCheckpoint();
public:
    
private:
    [[deprecated("PlayerObject::resetAllParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAllParticles();
public:
    
private:
    [[deprecated("PlayerObject::resetCollisionLog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionLog(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::resetCollisionValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionValues();
public:

    /**
     * @note[short] MacOS (ARM): 0x394f20
     * @note[short] MacOS (Intel): 0x41ffb0
     * @note[short] Windows: 0x3792f0
     * @note[short] Android
     */
    void resetPlayerIcon();
    
private:
    [[deprecated("PlayerObject::resetStateVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetStateVariables();
public:

    /**
     * @note[short] Windows: 0x369730
     * @note[short] Android
     */
    void resetStreak();

    /**
     * @note[short] Windows: 0x376310
     * @note[short] Android
     */
    TodoReturn resetTouchedRings();
    
private:
    [[deprecated("PlayerObject::reverseMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverseMod();
public:

    /**
     * @note[short] MacOS (ARM): 0x393d7c
     * @note[short] MacOS (Intel): 0x41ed50
     * @note[short] Windows: 0x376460
     * @note[short] Android
     */
    void reversePlayer(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x392b20
     * @note[short] MacOS (Intel): 0x41d7c0
     * @note[short] Windows: 0x376c30
     * @note[short] Android
     */
    void ringJump(RingObject* p0, bool p1);
    
private:
    [[deprecated("PlayerObject::rotateGameplay not implemented")]]
    /**
     * @note[short] Android
     */
    void rotateGameplay(int p0, int p1, bool p2, float p3, float p4, bool p5, bool p6);
public:

    /**
     * @note[short] Windows: 0x36f480
     * @note[short] Android
     */
    TodoReturn rotateGameplayObject(GameObject* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void rotateGameplayOnly(bool param);
    
private:
    [[deprecated("PlayerObject::rotatePreSlopeObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotatePreSlopeObjects();
public:

    /**
     * @note[short] Windows: 0x36b350
     * @note[short] Android
     */
    void runBallRotation(float p0);

    /**
     * @note[short] Windows: 0x36b5b0
     * @note[short] Android
     */
    void runBallRotation2();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void runNormalRotation();

    /**
     * @note[short] MacOS (ARM): 0x408ef0
     * @note[short] MacOS (Intel): 0x408ef0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void runNormalRotation(bool p0, float p1);

    /**
     * @note[short] Windows: 0x36b480
     * @note[short] Android
     */
    void runRotateAction(bool p0, int p1);
    
private:
    [[deprecated("PlayerObject::saveToCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveToCheckpoint(PlayerCheckpoint* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x37fac8
     * @note[short] MacOS (Intel): 0x407090
     * @note[short] Windows: 0x37b3b0
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x37e59c
     * @note[short] MacOS (Intel): 0x405810
     * @note[short] Windows: 0x366920
     * @note[short] Android
     */
    void setupStreak();

    /**
     * @note[short] Windows: 0x366e70
     * @note[short] Android
     */
    void setYVelocity(double p0, int p1);
    
private:
    [[deprecated("PlayerObject::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("PlayerObject::spawnCircle2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle2();
public:
    
private:
    [[deprecated("PlayerObject::spawnDualCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnDualCircle();
public:
    
private:
    [[deprecated("PlayerObject::spawnFromPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnFromPlayer(PlayerObject* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x375790
     * @note[short] Android
     */
    TodoReturn spawnPortalCircle(cocos2d::ccColor3B p0, float p1);
    
private:
    [[deprecated("PlayerObject::spawnScaleCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnScaleCircle();
public:
    
private:
    [[deprecated("PlayerObject::specialGroundHit not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn specialGroundHit();
public:
    
private:
    [[deprecated("PlayerObject::speedDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn speedDown();
public:
    
private:
    [[deprecated("PlayerObject::speedUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn speedUp();
public:

    /**
     * @note[short] MacOS (ARM): 0x38476c
     * @note[short] MacOS (Intel): 0x40c870
     * @note[short] Windows: 0x3723d0
     * @note[short] Android
     */
    void spiderTestJump(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x38cd24
     * @note[short] MacOS (Intel): 0x416c70
     * @note[short] Windows: 0x372480
     * @note[short] Android
     */
    void spiderTestJumpInternal(bool p0);
    
private:
    [[deprecated("PlayerObject::spiderTestJumpX not implemented")]]
    /**
     * @note[short] Android
     */
    void spiderTestJumpX(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpY not implemented")]]
    /**
     * @note[short] Android
     */
    void spiderTestJumpY(bool p0);
public:

    /**
     * @note[short] Windows: 0x3739a0
     * @note[short] Android
     */
    void startDashing(DashRingObject* p0);
    
private:
    [[deprecated("PlayerObject::stopBurstEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopBurstEffect();
public:

    /**
     * @note[short] MacOS (ARM): 0x382b40
     * @note[short] MacOS (Intel): 0x40ab10
     * @note[short] Windows: 0x3746b0
     * @note[short] iOS: 0x22cf40
     * @note[short] Android
     */
    void stopDashing();

    /**
     * @note[short] Windows: 0x3699b0
     * @note[short] iOS: 0x22e478
     * @note[short] Android
     */
    void stopParticles();

    /**
     * @note[short] MacOS (ARM): 0x3850f0
     * @note[short] MacOS (Intel): 0x40d290
     * @note[short] Windows: 0x36b190
     * @note[short] Android
     */
    void stopPlatformerJumpAnimation();
    
private:
    [[deprecated("PlayerObject::stopRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopRotation(bool p0, int p1);
public:
    
private:
    [[deprecated("PlayerObject::stopStreak2 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x39934c
     * @note[short] MacOS (Intel): 0x424840
     * @note[short] Android
     */
    void stopStreak2();
public:
    
private:
    [[deprecated("PlayerObject::storeCollision not implemented")]]
    /**
     * @note[short] Android
     */
    void storeCollision(PlayerCollisionDirection p0, int p1);
public:

    /**
     * @note[short] Windows: 0x375e60
     * @note[short] Android
     */
    TodoReturn switchedDirTo(PlayerButton p0);

    /**
     * @note[short] MacOS (ARM): 0x391544
     * @note[short] MacOS (Intel): 0x41bfc0
     * @note[short] Windows: 0x379e40
     * @note[short] Android
     */
    void switchedToMode(GameObjectType p0);
    
private:
    [[deprecated("PlayerObject::testForMoving not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testForMoving(float p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x395124
     * @note[short] MacOS (Intel): 0x4201d0
     * @note[short] Windows: 0x378830
     * @note[short] Android
     */
    void toggleBirdMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x396120
     * @note[short] MacOS (Intel): 0x421270
     * @note[short] Windows: 0x378fa0
     * @note[short] Android
     */
    void toggleDartMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3946ec
     * @note[short] MacOS (Intel): 0x41f6e0
     * @note[short] Windows: 0x378500
     * @note[short] Android
     */
    void toggleFlyMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x391a70
     * @note[short] MacOS (Intel): 0x41c590
     * @note[short] Windows: 0x37ce40
     * @note[short] iOS: 0x23783c
     * @note[short] Android
     */
    void toggleGhostEffect(GhostType p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void togglePlatformerMode(bool val);

    /**
     * @note[short] MacOS (ARM): 0x3916bc
     * @note[short] MacOS (Intel): 0x41c110
     * @note[short] Windows: 0x37e710
     * @note[short] Android
     */
    void togglePlayerScale(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x396af0
     * @note[short] MacOS (Intel): 0x421cf0
     * @note[short] Windows: 0x379700
     * @note[short] Android
     */
    void toggleRobotMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x396724
     * @note[short] MacOS (Intel): 0x421930
     * @note[short] Windows: 0x379580
     * @note[short] Android
     */
    void toggleRollMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x396f64
     * @note[short] MacOS (Intel): 0x4221b0
     * @note[short] Windows: 0x379a80
     * @note[short] Android
     */
    void toggleSpiderMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x395760
     * @note[short] MacOS (Intel): 0x420890
     * @note[short] Windows: 0x378b30
     * @note[short] Android
     */
    void toggleSwingMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x369590
     * @note[short] Android
     */
    void toggleVisibility(bool p0);
    
private:
    [[deprecated("PlayerObject::touchedObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn touchedObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::tryPlaceCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    void tryPlaceCheckpoint();
public:

    /**
     * @note[short] Windows: 0x36f770
     * @note[short] Android
     */
    TodoReturn unrotateGameplayObject(GameObject* p0);
    
private:
    [[deprecated("PlayerObject::unrotatePreSlopeObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unrotatePreSlopeObjects();
public:
    
private:
    [[deprecated("PlayerObject::updateCheckpointMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointMode(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::updateCheckpointTest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointTest();
public:

    /**
     * @note[short] MacOS (ARM): 0x38bb70
     * @note[short] MacOS (Intel): 0x415900
     * @note[short] Windows: 0x372080
     * @note[short] Android
     */
    void updateCollide(PlayerCollisionDirection p0, GameObject* p1);
    
private:
    [[deprecated("PlayerObject::updateCollideBottom not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCollideBottom(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideLeft not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCollideLeft(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideRight not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCollideRight(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideTop not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCollideTop(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateDashAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    void updateDashAnimation();
public:

    /**
     * @note[short] Windows: 0x3741f0
     * @note[short] Android
     */
    void updateDashArt();

    /**
     * @note[short] MacOS (ARM): 0x383d54
     * @note[short] MacOS (Intel): 0x40bd80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateEffects(float param);

    /**
     * @note[short] MacOS (ARM): 0x397f58
     * @note[short] MacOS (Intel): 0x423390
     * @note[short] Windows: 0x37b440
     * @note[short] Android
     */
    void updateGlowColor();

    /**
     * @note[short] Windows: 0x380e60
     * @note[short] Android
     */
    TodoReturn updateInternalActions(float p0);

    /**
     * @note[short] MacOS (ARM): 0x37fb30
     * @note[short] MacOS (Intel): 0x407100
     * @note[short] Windows: 0x369a50
     * @note[short] Android
     */
    void updateJump(float p0);
    
private:
    [[deprecated("PlayerObject::updateJumpVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateJumpVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateLastGroundObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLastGroundObject(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x368220
     * @note[short] Android
     */
    TodoReturn updateMove(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3940fc
     * @note[short] MacOS (Intel): 0x41f0a0
     * @note[short] Windows: 0x376890
     * @note[short] Android
     */
    void updatePlayerArt();

    /**
     * @note[short] MacOS (ARM): 0x3954e0
     * @note[short] MacOS (Intel): 0x4205f0
     * @note[short] Windows: 0x37c2f0
     * @note[short] Android
     */
    void updatePlayerBirdFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3964f0
     * @note[short] MacOS (Intel): 0x4216e0
     * @note[short] Windows: 0x37c9f0
     * @note[short] Android
     */
    void updatePlayerDartFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updatePlayerForce not implemented")]]
    /**
     * @note[short] Android
     */
    void updatePlayerForce(cocos2d::CCPoint p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x395e20
     * @note[short] MacOS (Intel): 0x420f90
     * @note[short] Windows: 0x37bc60
     * @note[short] Android
     */
    void updatePlayerFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x393f3c
     * @note[short] MacOS (Intel): 0x41ef10
     * @note[short] Windows: 0x37e2b0
     * @note[short] Android
     */
    void updatePlayerGlow();

    /**
     * @note[short] MacOS (ARM): 0x394cf4
     * @note[short] MacOS (Intel): 0x41fd80
     * @note[short] Windows: 0x37c0c0
     * @note[short] Android
     */
    void updatePlayerJetpackFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x398634
     * @note[short] MacOS (Intel): 0x423a50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePlayerRobotFrame(int id);

    /**
     * @note[short] MacOS (ARM): 0x3968c4
     * @note[short] MacOS (Intel): 0x421ac0
     * @note[short] Windows: 0x37c590
     * @note[short] Android
     */
    void updatePlayerRollFrame(int p0);

    /**
     * @note[short] Windows: 0x37e230
     * @note[short] Android
     */
    void updatePlayerScale();

    /**
     * @note[short] MacOS (ARM): 0x394ac8
     * @note[short] MacOS (Intel): 0x41fb40
     * @note[short] Windows: 0x37be90
     * @note[short] Android
     */
    void updatePlayerShipFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x39864c
     * @note[short] MacOS (Intel): 0x423a70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePlayerSpiderFrame(int id);
    
private:
    [[deprecated("PlayerObject::updatePlayerSpriteExtra not implemented")]]
    /**
     * @note[short] Android
     */
    void updatePlayerSpriteExtra(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x395b5c
     * @note[short] MacOS (Intel): 0x420cd0
     * @note[short] Windows: 0x37c7c0
     * @note[short] Android
     */
    void updatePlayerSwingFrame(int p0);

    /**
     * @note[short] Windows: 0x37f0f0
     * @note[short] Android
     */
    void updateRobotAnimationSpeed();

    /**
     * @note[short] MacOS (ARM): 0x383a84
     * @note[short] MacOS (Intel): 0x40bab0
     * @note[short] Windows: 0x36b230
     * @note[short] Android
     */
    void updateRotation(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x38c360
     * @note[short] MacOS (Intel): 0x416180
     * @note[short] Windows: 0x36f0b0
     * @note[short] Android
     */
    void updateRotation(float p0);

    /**
     * @note[short] Windows: 0x36ecd0
     * @note[short] Android
     */
    void updateShipRotation(float p0);
    
private:
    [[deprecated("PlayerObject::updateShipSpriteExtra not implemented")]]
    /**
     * @note[short] Android
     */
    void updateShipSpriteExtra(gd::string p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSlopeRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSlopeYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeYVelocity(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSpecial(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateStateVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStateVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateStaticForce not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStaticForce(float p0, float p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::updateStreakBlend not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x37eb80
     * @note[short] MacOS (Intel): 0x405e50
     * @note[short] Android
     */
    void updateStreakBlend(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::updateStreaks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStreaks(float p0);
public:

    /**
     * @note[short] Windows: 0x378de0
     * @note[short] Android
     */
    void updateSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x37e3e4
     * @note[short] MacOS (Intel): 0x405680
     * @note[short] Windows: 0x37ed60
     * @note[short] Android
     */
    void updateTimeMod(float p0, bool p1);
    
private:
    [[deprecated("PlayerObject::usingWallLimitedMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usingWallLimitedMode();
public:
    
private:
    [[deprecated("PlayerObject::yStartDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn yStartDown();
public:
    
private:
    [[deprecated("PlayerObject::yStartUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn yStartUp();
public:

    /**
     * @note[short] MacOS (ARM): 0x37ec58
     * @note[short] MacOS (Intel): 0x405f60
     * @note[short] Windows: 0x366ee0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x39a4ec
     * @note[short] MacOS (Intel): 0x425cd0
     * @note[short] Windows: 0x380860
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x39a4f0
     * @note[short] MacOS (Intel): 0x425ce0
     * @note[short] Windows: 0x380870
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x39a4f4
     * @note[short] MacOS (Intel): 0x425cf0
     * @note[short] Windows: 0x380880
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3973cc
     * @note[short] MacOS (Intel): 0x422650
     * @note[short] Windows: 0x37a650
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x39a4f8
     * @note[short] MacOS (Intel): 0x425d00
     * @note[short] Windows: 0x380890
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x39a47c
     * @note[short] MacOS (Intel): 0x425c40
     * @note[short] Windows: 0x380790
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x398408
     * @note[short] MacOS (Intel): 0x423850
     * @note[short] Windows: 0x37bb00
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x397e20
     * @note[short] MacOS (Intel): 0x423230
     * @note[short] Windows: 0x37b320
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x39a480
     * @note[short] MacOS (Intel): 0x425c50
     * @note[short] Windows: 0x3807a0
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);
    
private:
    [[deprecated("PlayerObject::setFlipY not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x425cc0
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::resetObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x390ae4
     * @note[short] MacOS (Intel): 0x41b180
     * @note[short] Android
     */
    virtual void resetObject();
public:
    
private:
    [[deprecated("PlayerObject::getRealPosition not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x398604
     * @note[short] MacOS (Intel): 0x423a20
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();
public:
    
private:
    [[deprecated("PlayerObject::getOrientedBox not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3997ac
     * @note[short] MacOS (Intel): 0x424d80
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();
public:
    
private:
    [[deprecated("PlayerObject::getObjectRotation not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3997d8
     * @note[short] MacOS (Intel): 0x424da0
     * @note[short] Android
     */
    virtual float getObjectRotation();
public:

    /**
     * @note[short] MacOS (ARM): 0x39a5d0
     * @note[short] MacOS (Intel): 0x425df0
     * @note[short] Windows: 0x3808b0
     * @note[short] Android
     */
    virtual void animationFinished(char const* p0);
    cocos2d::CCNode* m_mainLayer;
    bool m_wasTeleported;
    bool m_fixGravityBug;
    bool m_reverseSync;
    double m_yVelocityBeforeSlope;
    double m_dashX;
    double m_dashY;
    double m_dashAngle;
    double m_dashStartTime;
    DashRingObject* m_dashRing;
    double m_slopeStartTime;
    bool m_justPlacedStreak;
    GameObject* m_maybeLastGroundObject;
    cocos2d::CCDictionary* m_collisionLogTop;
    cocos2d::CCDictionary* m_collisionLogBottom;
    cocos2d::CCDictionary* m_collisionLogLeft;
    cocos2d::CCDictionary* m_collisionLogRight;
    int m_lastCollisionBottom;
    int m_lastCollisionTop;
    int m_lastCollisionLeft;
    int m_lastCollisionRight;
    int m_unk50C;
    int m_unk510;
    GameObject* m_currentSlope2;
    GameObject* m_preLastGroundObject;
    float m_slopeAngle;
    bool m_slopeSlidingMaybeRotated;
    bool m_quickCheckpointMode;
    GameObject* m_collidedObject;
    GameObject* m_lastGroundObject;
    GameObject* m_collidingWithLeft;
    GameObject* m_collidingWithRight;
    int m_maybeSavedPlayerFrame;
    double m_scaleXRelated2;
    double m_groundYVelocity;
    double m_yVelocityRelated;
    double m_scaleXRelated3;
    double m_scaleXRelated4;
    double m_scaleXRelated5;
    bool m_isCollidingWithSlope;
    cocos2d::CCSprite* m_dashFireSprite;
    bool m_isBallRotating;
    bool m_unk669;
    GameObject* m_currentSlope3;
    GameObject* m_currentSlope;
    double unk_584;
    int m_collidingWithSlopeId;
    bool m_slopeFlipGravityRelated;
    cocos2d::CCArray* m_particleSystems;
    float m_slopeAngleRadians;
    gd::unordered_map<int, GJPointDouble> m_rotateObjectsRelated;
    gd::unordered_map<int, GameObject*> m_maybeRotatedObjectsMap;
    float m_rotationSpeed;
    float m_rotateSpeed;
    bool m_isRotating;
    bool m_isBallRotating2;
    bool m_hasGlow;
    bool m_isHidden;
    GhostType m_ghostType;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_birdVehicle;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_dashSpritesContainer;
    cocos2d::CCMotionStreak* m_regularTrail;
    cocos2d::CCMotionStreak* m_shipStreak;
    HardStreak* m_waveTrail;
    double m_speedMultiplier;
    double m_yStart;
    double m_gravity;
    float m_trailingParticleLife;
    float m_unk648;
    double m_gameModeChangedTime;
    bool m_padRingRelated;
    bool m_maybeReducedEffects;
    bool m_maybeIsFalling;
    bool m_shouldTryPlacingCheckpoint;
    bool m_playEffects;
    bool m_maybeCanRunIntoBlocks;
    bool m_hasGroundParticles;
    bool m_hasShipParticles;
    bool m_isOnGround3;
    bool m_checkpointTimeout;
    double m_lastCheckpointTime;
    double m_lastJumpTime;
    double m_lastFlipTime;
    double m_flashTime;
    float m_flashRelated;
    float m_flashRelated1;
    cocos2d::ccColor3B m_colorRelated2;
    cocos2d::ccColor3B m_flashRelated3;
    double m_lastSpiderFlipTime;
    bool m_unkBool5;
    bool m_maybeIsVehicleGlowing;
    bool m_gv0096;
    bool m_gv0100;
    double m_accelerationOrSpeed;
    double m_snapDistance;
    bool m_ringJumpRelated;
    gd::unordered_set<int> m_ringRelatedSet;
    GameObject* m_objectSnappedTo;
    CheckpointObject* m_pendingCheckpoint;
    int m_onFlyCheckpointTries;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    bool m_maybeSpriteRelated;
    cocos2d::CCParticleSystemQuad* m_playerGroundParticles;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_vehicleGroundParticles;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_dashParticles;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    bool m_useLandParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles1;
    float m_landParticlesAngle;
    float m_landParticleRelatedY;
    int m_playerStreak;
    float m_streakRelated1;
    bool m_streakRelated2;
    bool m_streakRelated3;
    ShipStreak m_shipStreakType;
    double m_slopeRotation;
    double m_currentSlopeYVelocity;
    double m_unk3d0;
    double m_blackOrbRelated;
    bool m_unk3e0;
    bool m_unk3e1;
    bool m_isAccelerating;
    bool m_isCurrentSlopeTop;
    double m_collidedTopMinY;
    double m_collidedBottomMaxY;
    double m_collidedLeftMaxX;
    double m_collidedRightMinX;
    bool m_streakRelated4;
    bool m_canPlaceCheckpoint;
    cocos2d::ccColor3B m_colorRelated;
    cocos2d::ccColor3B m_secondColorRelated;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_maybeIsColliding;
    bool m_jumpBuffered;
    bool m_stateRingJump;
    bool m_wasJumpBuffered;
    bool m_wasRobotJump;
    unsigned char m_stateJumpBuffered;
    bool m_stateRingJump2;
    bool m_touchedRing;
    bool m_touchedCustomRing;
    bool m_touchedGravityPortal;
    bool m_maybeTouchedBreakableBlock;
    geode::SeedValueRSV m_jumpRelatedAC2;
    bool m_touchedPad;
    double m_yVelocity;
    double m_fallSpeed;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    float m_slopeVelocity;
    bool m_maybeUpsideDownSlope;
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    int m_reverseRelated;
    double m_maybeReverseSpeed;
    double m_maybeReverseAcceleration;
    float m_xVelocityRelated2;
    bool m_isDashing;
    int m_unk9e8;
    int m_groundObjectMaterial;
    float m_vehicleSize;
    float m_playerSpeed;
    cocos2d::CCPoint m_shipRotation;
    cocos2d::CCPoint m_lastPortalPos;
    float m_unkUnused3;
    bool m_isOnGround2;
    double m_lastLandTime;
    float m_platformerVelocityRelated;
    bool m_maybeIsBoosted;
    double m_scaleXRelatedTime;
    bool m_decreaseBoostSlide;
    bool m_unkA29;
    bool m_isLocked;
    bool m_controlsDisabled;
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    gd::unordered_set<int> m_touchedRings;
    GameObject* m_lastActivatedPortal;
    bool m_hasEverJumped;
    bool m_ringOrStreakRelated;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    bool m_isSecondPlayer;
    bool m_unkA99;
    double m_totalTime;
    bool m_isBeingSpawnedByDualPortal;
    float m_unkAAC;
    float m_unkAngle1;
    float m_yVelocityRelated3;
    bool m_gamevar0060;
    bool m_swapColors;
    bool m_gamevar0062;
    int m_followRelated;
    gd::vector<float> m_playerFollowFloats;
    float m_unk838;
    int m_stateOnGround;
    unsigned char m_stateUnk;
    unsigned char m_stateNoStickX;
    unsigned char m_stateNoStickY;
    unsigned char m_stateUnk2;
    int m_stateBoostX;
    int m_stateBoostY;
    int m_maybeStateForce2;
    int m_stateScale;
    double m_platformerXVelocity;
    bool m_holdingRight;
    bool m_holdingLeft;
    bool m_leftPressedFirst;
    double m_scaleXRelated;
    bool m_maybeHasStopped;
    float m_xVelocityRelated;
    bool m_maybeGoingCorrectSlopeDirection;
    bool m_isSliding;
    double m_maybeSlopeForce;
    bool m_isOnIce;
    double m_physDeltaRelated;
    bool m_isOnGround4;
    int m_maybeSlidingTime;
    double m_maybeSlidingStartTime;
    double m_changedDirectionsTime;
    double m_slopeEndTime;
    bool m_isMoving;
    bool m_platformerMovingLeft;
    bool m_platformerMovingRight;
    bool m_isSlidingRight;
    double m_maybeChangedDirectionAngle;
    double m_unkUnused2;
    bool m_isPlatformer;
    int m_stateNoAutoJump;
    int m_stateDartSlide;
    int m_stateHitHead;
    int m_stateFlipGravity;
    float m_gravityMod;
    int m_stateForce;
    cocos2d::CCPoint m_stateForceVector;
    bool m_affectedByForces;
    gd::map<int, bool> m_jumpPadRelated;
    float m_somethingPlayerSpeedTime;
    float m_playerSpeedAC;
    bool m_fixRobotJump;
    gd::map<int, bool> m_holdingButtons;
    bool m_inputsLocked;
    gd::string m_currentRobotAnimation;
    bool m_gv0123;
    int m_iconRequestID;
    cocos2d::CCSpriteBatchNode* m_robotBatchNode;
    cocos2d::CCSpriteBatchNode* m_spiderBatchNode;
    cocos2d::CCArray* m_unk958;
    PlayerFireBoostSprite* m_robotFire;
    int m_unkUnused;
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    bool m_isOutOfBounds;
    float m_fallStartY;
    bool m_disablePlayerSqueeze;
    bool m_robotHasRun3;
    bool m_robotHasRun2;
    bool m_item20;
    bool m_ignoreDamage;
    bool m_enable22Changes;
};
