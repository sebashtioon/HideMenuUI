#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activateStreak
		#define GEODE_STATICS_activateStreak
		GEODE_AS_STATIC_FUNCTION(activateStreak) 
	#endif

	#ifndef GEODE_STATICS_addAllParticles
		#define GEODE_STATICS_addAllParticles
		GEODE_AS_STATIC_FUNCTION(addAllParticles) 
	#endif

	#ifndef GEODE_STATICS_addToTouchedRings
		#define GEODE_STATICS_addToTouchedRings
		GEODE_AS_STATIC_FUNCTION(addToTouchedRings) 
	#endif

	#ifndef GEODE_STATICS_addToYVelocity
		#define GEODE_STATICS_addToYVelocity
		GEODE_AS_STATIC_FUNCTION(addToYVelocity) 
	#endif

	#ifndef GEODE_STATICS_animatePlatformerJump
		#define GEODE_STATICS_animatePlatformerJump
		GEODE_AS_STATIC_FUNCTION(animatePlatformerJump) 
	#endif

	#ifndef GEODE_STATICS_boostPlayer
		#define GEODE_STATICS_boostPlayer
		GEODE_AS_STATIC_FUNCTION(boostPlayer) 
	#endif

	#ifndef GEODE_STATICS_bumpPlayer
		#define GEODE_STATICS_bumpPlayer
		GEODE_AS_STATIC_FUNCTION(bumpPlayer) 
	#endif

	#ifndef GEODE_STATICS_buttonDown
		#define GEODE_STATICS_buttonDown
		GEODE_AS_STATIC_FUNCTION(buttonDown) 
	#endif

	#ifndef GEODE_STATICS_canStickToGround
		#define GEODE_STATICS_canStickToGround
		GEODE_AS_STATIC_FUNCTION(canStickToGround) 
	#endif

	#ifndef GEODE_STATICS_checkSnapJumpToObject
		#define GEODE_STATICS_checkSnapJumpToObject
		GEODE_AS_STATIC_FUNCTION(checkSnapJumpToObject) 
	#endif

	#ifndef GEODE_STATICS_collidedWithObject
		#define GEODE_STATICS_collidedWithObject
		GEODE_AS_STATIC_FUNCTION(collidedWithObject) 
	#endif

	#ifndef GEODE_STATICS_collidedWithObjectInternal
		#define GEODE_STATICS_collidedWithObjectInternal
		GEODE_AS_STATIC_FUNCTION(collidedWithObjectInternal) 
	#endif

	#ifndef GEODE_STATICS_collidedWithSlope
		#define GEODE_STATICS_collidedWithSlope
		GEODE_AS_STATIC_FUNCTION(collidedWithSlope) 
	#endif

	#ifndef GEODE_STATICS_collidedWithSlopeInternal
		#define GEODE_STATICS_collidedWithSlopeInternal
		GEODE_AS_STATIC_FUNCTION(collidedWithSlopeInternal) 
	#endif

	#ifndef GEODE_STATICS_convertToClosestRotation
		#define GEODE_STATICS_convertToClosestRotation
		GEODE_AS_STATIC_FUNCTION(convertToClosestRotation) 
	#endif

	#ifndef GEODE_STATICS_copyAttributes
		#define GEODE_STATICS_copyAttributes
		GEODE_AS_STATIC_FUNCTION(copyAttributes) 
	#endif

	#ifndef GEODE_STATICS_createFadeOutDartStreak
		#define GEODE_STATICS_createFadeOutDartStreak
		GEODE_AS_STATIC_FUNCTION(createFadeOutDartStreak) 
	#endif

	#ifndef GEODE_STATICS_createRobot
		#define GEODE_STATICS_createRobot
		GEODE_AS_STATIC_FUNCTION(createRobot) 
	#endif

	#ifndef GEODE_STATICS_createSpider
		#define GEODE_STATICS_createSpider
		GEODE_AS_STATIC_FUNCTION(createSpider) 
	#endif

	#ifndef GEODE_STATICS_deactivateParticle
		#define GEODE_STATICS_deactivateParticle
		GEODE_AS_STATIC_FUNCTION(deactivateParticle) 
	#endif

	#ifndef GEODE_STATICS_deactivateStreak
		#define GEODE_STATICS_deactivateStreak
		GEODE_AS_STATIC_FUNCTION(deactivateStreak) 
	#endif

	#ifndef GEODE_STATICS_destroyFromHitHead
		#define GEODE_STATICS_destroyFromHitHead
		GEODE_AS_STATIC_FUNCTION(destroyFromHitHead) 
	#endif

	#ifndef GEODE_STATICS_didHitHead
		#define GEODE_STATICS_didHitHead
		GEODE_AS_STATIC_FUNCTION(didHitHead) 
	#endif

	#ifndef GEODE_STATICS_disablePlayerControls
		#define GEODE_STATICS_disablePlayerControls
		GEODE_AS_STATIC_FUNCTION(disablePlayerControls) 
	#endif

	#ifndef GEODE_STATICS_disableSwingFire
		#define GEODE_STATICS_disableSwingFire
		GEODE_AS_STATIC_FUNCTION(disableSwingFire) 
	#endif

	#ifndef GEODE_STATICS_doReversePlayer
		#define GEODE_STATICS_doReversePlayer
		GEODE_AS_STATIC_FUNCTION(doReversePlayer) 
	#endif

	#ifndef GEODE_STATICS_enablePlayerControls
		#define GEODE_STATICS_enablePlayerControls
		GEODE_AS_STATIC_FUNCTION(enablePlayerControls) 
	#endif

	#ifndef GEODE_STATICS_exitPlatformerAnimateJump
		#define GEODE_STATICS_exitPlatformerAnimateJump
		GEODE_AS_STATIC_FUNCTION(exitPlatformerAnimateJump) 
	#endif

	#ifndef GEODE_STATICS_fadeOutStreak2
		#define GEODE_STATICS_fadeOutStreak2
		GEODE_AS_STATIC_FUNCTION(fadeOutStreak2) 
	#endif

	#ifndef GEODE_STATICS_flashPlayer
		#define GEODE_STATICS_flashPlayer
		GEODE_AS_STATIC_FUNCTION(flashPlayer) 
	#endif

	#ifndef GEODE_STATICS_flipGravity
		#define GEODE_STATICS_flipGravity
		GEODE_AS_STATIC_FUNCTION(flipGravity) 
	#endif

	#ifndef GEODE_STATICS_flipMod
		#define GEODE_STATICS_flipMod
		GEODE_AS_STATIC_FUNCTION(flipMod) 
	#endif

	#ifndef GEODE_STATICS_getActiveMode
		#define GEODE_STATICS_getActiveMode
		GEODE_AS_STATIC_FUNCTION(getActiveMode) 
	#endif

	#ifndef GEODE_STATICS_getCurrentXVelocity
		#define GEODE_STATICS_getCurrentXVelocity
		GEODE_AS_STATIC_FUNCTION(getCurrentXVelocity) 
	#endif

	#ifndef GEODE_STATICS_getModifiedSlopeYVel
		#define GEODE_STATICS_getModifiedSlopeYVel
		GEODE_AS_STATIC_FUNCTION(getModifiedSlopeYVel) 
	#endif

	#ifndef GEODE_STATICS_getOldPosition
		#define GEODE_STATICS_getOldPosition
		GEODE_AS_STATIC_FUNCTION(getOldPosition) 
	#endif

	#ifndef GEODE_STATICS_getSecondColor
		#define GEODE_STATICS_getSecondColor
		GEODE_AS_STATIC_FUNCTION(getSecondColor) 
	#endif

	#ifndef GEODE_STATICS_getYVelocity
		#define GEODE_STATICS_getYVelocity
		GEODE_AS_STATIC_FUNCTION(getYVelocity) 
	#endif

	#ifndef GEODE_STATICS_gravityDown
		#define GEODE_STATICS_gravityDown
		GEODE_AS_STATIC_FUNCTION(gravityDown) 
	#endif

	#ifndef GEODE_STATICS_gravityUp
		#define GEODE_STATICS_gravityUp
		GEODE_AS_STATIC_FUNCTION(gravityUp) 
	#endif

	#ifndef GEODE_STATICS_handlePlayerCommand
		#define GEODE_STATICS_handlePlayerCommand
		GEODE_AS_STATIC_FUNCTION(handlePlayerCommand) 
	#endif

	#ifndef GEODE_STATICS_handleRotatedCollisionInternal
		#define GEODE_STATICS_handleRotatedCollisionInternal
		GEODE_AS_STATIC_FUNCTION(handleRotatedCollisionInternal) 
	#endif

	#ifndef GEODE_STATICS_handleRotatedSlopeCollision
		#define GEODE_STATICS_handleRotatedSlopeCollision
		GEODE_AS_STATIC_FUNCTION(handleRotatedSlopeCollision) 
	#endif

	#ifndef GEODE_STATICS_hardFlipGravity
		#define GEODE_STATICS_hardFlipGravity
		GEODE_AS_STATIC_FUNCTION(hardFlipGravity) 
	#endif

	#ifndef GEODE_STATICS_hitGround
		#define GEODE_STATICS_hitGround
		GEODE_AS_STATIC_FUNCTION(hitGround) 
	#endif

	#ifndef GEODE_STATICS_hitGroundNoJump
		#define GEODE_STATICS_hitGroundNoJump
		GEODE_AS_STATIC_FUNCTION(hitGroundNoJump) 
	#endif

	#ifndef GEODE_STATICS_incrementJumps
		#define GEODE_STATICS_incrementJumps
		GEODE_AS_STATIC_FUNCTION(incrementJumps) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isBoostValid
		#define GEODE_STATICS_isBoostValid
		GEODE_AS_STATIC_FUNCTION(isBoostValid) 
	#endif

	#ifndef GEODE_STATICS_isFlying
		#define GEODE_STATICS_isFlying
		GEODE_AS_STATIC_FUNCTION(isFlying) 
	#endif

	#ifndef GEODE_STATICS_isInBasicMode
		#define GEODE_STATICS_isInBasicMode
		GEODE_AS_STATIC_FUNCTION(isInBasicMode) 
	#endif

	#ifndef GEODE_STATICS_isInNormalMode
		#define GEODE_STATICS_isInNormalMode
		GEODE_AS_STATIC_FUNCTION(isInNormalMode) 
	#endif

	#ifndef GEODE_STATICS_isSafeFlip
		#define GEODE_STATICS_isSafeFlip
		GEODE_AS_STATIC_FUNCTION(isSafeFlip) 
	#endif

	#ifndef GEODE_STATICS_isSafeHeadTest
		#define GEODE_STATICS_isSafeHeadTest
		GEODE_AS_STATIC_FUNCTION(isSafeHeadTest) 
	#endif

	#ifndef GEODE_STATICS_isSafeMode
		#define GEODE_STATICS_isSafeMode
		GEODE_AS_STATIC_FUNCTION(isSafeMode) 
	#endif

	#ifndef GEODE_STATICS_isSafeSpiderFlip
		#define GEODE_STATICS_isSafeSpiderFlip
		GEODE_AS_STATIC_FUNCTION(isSafeSpiderFlip) 
	#endif

	#ifndef GEODE_STATICS_levelFlipFinished
		#define GEODE_STATICS_levelFlipFinished
		GEODE_AS_STATIC_FUNCTION(levelFlipFinished) 
	#endif

	#ifndef GEODE_STATICS_levelFlipping
		#define GEODE_STATICS_levelFlipping
		GEODE_AS_STATIC_FUNCTION(levelFlipping) 
	#endif

	#ifndef GEODE_STATICS_levelWillFlip
		#define GEODE_STATICS_levelWillFlip
		GEODE_AS_STATIC_FUNCTION(levelWillFlip) 
	#endif

	#ifndef GEODE_STATICS_loadFromCheckpoint
		#define GEODE_STATICS_loadFromCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_lockPlayer
		#define GEODE_STATICS_lockPlayer
		GEODE_AS_STATIC_FUNCTION(lockPlayer) 
	#endif

	#ifndef GEODE_STATICS_logValues
		#define GEODE_STATICS_logValues
		GEODE_AS_STATIC_FUNCTION(logValues) 
	#endif

	#ifndef GEODE_STATICS_modeDidChange
		#define GEODE_STATICS_modeDidChange
		GEODE_AS_STATIC_FUNCTION(modeDidChange) 
	#endif

	#ifndef GEODE_STATICS_performSlideCheck
		#define GEODE_STATICS_performSlideCheck
		GEODE_AS_STATIC_FUNCTION(performSlideCheck) 
	#endif

	#ifndef GEODE_STATICS_placeStreakPoint
		#define GEODE_STATICS_placeStreakPoint
		GEODE_AS_STATIC_FUNCTION(placeStreakPoint) 
	#endif

	#ifndef GEODE_STATICS_playBumpEffect
		#define GEODE_STATICS_playBumpEffect
		GEODE_AS_STATIC_FUNCTION(playBumpEffect) 
	#endif

	#ifndef GEODE_STATICS_playBurstEffect
		#define GEODE_STATICS_playBurstEffect
		GEODE_AS_STATIC_FUNCTION(playBurstEffect) 
	#endif

	#ifndef GEODE_STATICS_playCompleteEffect
		#define GEODE_STATICS_playCompleteEffect
		GEODE_AS_STATIC_FUNCTION(playCompleteEffect) 
	#endif

	#ifndef GEODE_STATICS_playDeathEffect
		#define GEODE_STATICS_playDeathEffect
		GEODE_AS_STATIC_FUNCTION(playDeathEffect) 
	#endif

	#ifndef GEODE_STATICS_playDynamicSpiderRun
		#define GEODE_STATICS_playDynamicSpiderRun
		GEODE_AS_STATIC_FUNCTION(playDynamicSpiderRun) 
	#endif

	#ifndef GEODE_STATICS_playerDestroyed
		#define GEODE_STATICS_playerDestroyed
		GEODE_AS_STATIC_FUNCTION(playerDestroyed) 
	#endif

	#ifndef GEODE_STATICS_playerIsFalling
		#define GEODE_STATICS_playerIsFalling
		GEODE_AS_STATIC_FUNCTION(playerIsFalling) 
	#endif

	#ifndef GEODE_STATICS_playerIsFallingBugged
		#define GEODE_STATICS_playerIsFallingBugged
		GEODE_AS_STATIC_FUNCTION(playerIsFallingBugged) 
	#endif

	#ifndef GEODE_STATICS_playerIsMovingUp
		#define GEODE_STATICS_playerIsMovingUp
		GEODE_AS_STATIC_FUNCTION(playerIsMovingUp) 
	#endif

	#ifndef GEODE_STATICS_playerTeleported
		#define GEODE_STATICS_playerTeleported
		GEODE_AS_STATIC_FUNCTION(playerTeleported) 
	#endif

	#ifndef GEODE_STATICS_playingEndEffect
		#define GEODE_STATICS_playingEndEffect
		GEODE_AS_STATIC_FUNCTION(playingEndEffect) 
	#endif

	#ifndef GEODE_STATICS_playSpawnEffect
		#define GEODE_STATICS_playSpawnEffect
		GEODE_AS_STATIC_FUNCTION(playSpawnEffect) 
	#endif

	#ifndef GEODE_STATICS_playSpiderDashEffect
		#define GEODE_STATICS_playSpiderDashEffect
		GEODE_AS_STATIC_FUNCTION(playSpiderDashEffect) 
	#endif

	#ifndef GEODE_STATICS_postCollision
		#define GEODE_STATICS_postCollision
		GEODE_AS_STATIC_FUNCTION(postCollision) 
	#endif

	#ifndef GEODE_STATICS_preCollision
		#define GEODE_STATICS_preCollision
		GEODE_AS_STATIC_FUNCTION(preCollision) 
	#endif

	#ifndef GEODE_STATICS_preSlopeCollision
		#define GEODE_STATICS_preSlopeCollision
		GEODE_AS_STATIC_FUNCTION(preSlopeCollision) 
	#endif

	#ifndef GEODE_STATICS_propellPlayer
		#define GEODE_STATICS_propellPlayer
		GEODE_AS_STATIC_FUNCTION(propellPlayer) 
	#endif

	#ifndef GEODE_STATICS_pushButton
		#define GEODE_STATICS_pushButton
		GEODE_AS_STATIC_FUNCTION(pushButton) 
	#endif

	#ifndef GEODE_STATICS_pushDown
		#define GEODE_STATICS_pushDown
		GEODE_AS_STATIC_FUNCTION(pushDown) 
	#endif

	#ifndef GEODE_STATICS_pushPlayer
		#define GEODE_STATICS_pushPlayer
		GEODE_AS_STATIC_FUNCTION(pushPlayer) 
	#endif

	#ifndef GEODE_STATICS_redirectDash
		#define GEODE_STATICS_redirectDash
		GEODE_AS_STATIC_FUNCTION(redirectDash) 
	#endif

	#ifndef GEODE_STATICS_redirectPlayerForce
		#define GEODE_STATICS_redirectPlayerForce
		GEODE_AS_STATIC_FUNCTION(redirectPlayerForce) 
	#endif

	#ifndef GEODE_STATICS_releaseAllButtons
		#define GEODE_STATICS_releaseAllButtons
		GEODE_AS_STATIC_FUNCTION(releaseAllButtons) 
	#endif

	#ifndef GEODE_STATICS_releaseButton
		#define GEODE_STATICS_releaseButton
		GEODE_AS_STATIC_FUNCTION(releaseButton) 
	#endif

	#ifndef GEODE_STATICS_removeAllParticles
		#define GEODE_STATICS_removeAllParticles
		GEODE_AS_STATIC_FUNCTION(removeAllParticles) 
	#endif

	#ifndef GEODE_STATICS_removePendingCheckpoint
		#define GEODE_STATICS_removePendingCheckpoint
		GEODE_AS_STATIC_FUNCTION(removePendingCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_removePlacedCheckpoint
		#define GEODE_STATICS_removePlacedCheckpoint
		GEODE_AS_STATIC_FUNCTION(removePlacedCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_resetAllParticles
		#define GEODE_STATICS_resetAllParticles
		GEODE_AS_STATIC_FUNCTION(resetAllParticles) 
	#endif

	#ifndef GEODE_STATICS_resetCollisionLog
		#define GEODE_STATICS_resetCollisionLog
		GEODE_AS_STATIC_FUNCTION(resetCollisionLog) 
	#endif

	#ifndef GEODE_STATICS_resetCollisionValues
		#define GEODE_STATICS_resetCollisionValues
		GEODE_AS_STATIC_FUNCTION(resetCollisionValues) 
	#endif

	#ifndef GEODE_STATICS_resetPlayerIcon
		#define GEODE_STATICS_resetPlayerIcon
		GEODE_AS_STATIC_FUNCTION(resetPlayerIcon) 
	#endif

	#ifndef GEODE_STATICS_resetStateVariables
		#define GEODE_STATICS_resetStateVariables
		GEODE_AS_STATIC_FUNCTION(resetStateVariables) 
	#endif

	#ifndef GEODE_STATICS_resetStreak
		#define GEODE_STATICS_resetStreak
		GEODE_AS_STATIC_FUNCTION(resetStreak) 
	#endif

	#ifndef GEODE_STATICS_resetTouchedRings
		#define GEODE_STATICS_resetTouchedRings
		GEODE_AS_STATIC_FUNCTION(resetTouchedRings) 
	#endif

	#ifndef GEODE_STATICS_reverseMod
		#define GEODE_STATICS_reverseMod
		GEODE_AS_STATIC_FUNCTION(reverseMod) 
	#endif

	#ifndef GEODE_STATICS_reversePlayer
		#define GEODE_STATICS_reversePlayer
		GEODE_AS_STATIC_FUNCTION(reversePlayer) 
	#endif

	#ifndef GEODE_STATICS_ringJump
		#define GEODE_STATICS_ringJump
		GEODE_AS_STATIC_FUNCTION(ringJump) 
	#endif

	#ifndef GEODE_STATICS_rotateGameplay
		#define GEODE_STATICS_rotateGameplay
		GEODE_AS_STATIC_FUNCTION(rotateGameplay) 
	#endif

	#ifndef GEODE_STATICS_rotateGameplayObject
		#define GEODE_STATICS_rotateGameplayObject
		GEODE_AS_STATIC_FUNCTION(rotateGameplayObject) 
	#endif

	#ifndef GEODE_STATICS_rotatePreSlopeObjects
		#define GEODE_STATICS_rotatePreSlopeObjects
		GEODE_AS_STATIC_FUNCTION(rotatePreSlopeObjects) 
	#endif

	#ifndef GEODE_STATICS_runBallRotation
		#define GEODE_STATICS_runBallRotation
		GEODE_AS_STATIC_FUNCTION(runBallRotation) 
	#endif

	#ifndef GEODE_STATICS_runBallRotation2
		#define GEODE_STATICS_runBallRotation2
		GEODE_AS_STATIC_FUNCTION(runBallRotation2) 
	#endif

	#ifndef GEODE_STATICS_runNormalRotation
		#define GEODE_STATICS_runNormalRotation
		GEODE_AS_STATIC_FUNCTION(runNormalRotation) 
	#endif

	#ifndef GEODE_STATICS_runRotateAction
		#define GEODE_STATICS_runRotateAction
		GEODE_AS_STATIC_FUNCTION(runRotateAction) 
	#endif

	#ifndef GEODE_STATICS_saveToCheckpoint
		#define GEODE_STATICS_saveToCheckpoint
		GEODE_AS_STATIC_FUNCTION(saveToCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_setSecondColor
		#define GEODE_STATICS_setSecondColor
		GEODE_AS_STATIC_FUNCTION(setSecondColor) 
	#endif

	#ifndef GEODE_STATICS_setupStreak
		#define GEODE_STATICS_setupStreak
		GEODE_AS_STATIC_FUNCTION(setupStreak) 
	#endif

	#ifndef GEODE_STATICS_setYVelocity
		#define GEODE_STATICS_setYVelocity
		GEODE_AS_STATIC_FUNCTION(setYVelocity) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle
		#define GEODE_STATICS_spawnCircle
		GEODE_AS_STATIC_FUNCTION(spawnCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle2
		#define GEODE_STATICS_spawnCircle2
		GEODE_AS_STATIC_FUNCTION(spawnCircle2) 
	#endif

	#ifndef GEODE_STATICS_spawnDualCircle
		#define GEODE_STATICS_spawnDualCircle
		GEODE_AS_STATIC_FUNCTION(spawnDualCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnFromPlayer
		#define GEODE_STATICS_spawnFromPlayer
		GEODE_AS_STATIC_FUNCTION(spawnFromPlayer) 
	#endif

	#ifndef GEODE_STATICS_spawnPortalCircle
		#define GEODE_STATICS_spawnPortalCircle
		GEODE_AS_STATIC_FUNCTION(spawnPortalCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnScaleCircle
		#define GEODE_STATICS_spawnScaleCircle
		GEODE_AS_STATIC_FUNCTION(spawnScaleCircle) 
	#endif

	#ifndef GEODE_STATICS_specialGroundHit
		#define GEODE_STATICS_specialGroundHit
		GEODE_AS_STATIC_FUNCTION(specialGroundHit) 
	#endif

	#ifndef GEODE_STATICS_speedDown
		#define GEODE_STATICS_speedDown
		GEODE_AS_STATIC_FUNCTION(speedDown) 
	#endif

	#ifndef GEODE_STATICS_speedUp
		#define GEODE_STATICS_speedUp
		GEODE_AS_STATIC_FUNCTION(speedUp) 
	#endif

	#ifndef GEODE_STATICS_spiderTestJump
		#define GEODE_STATICS_spiderTestJump
		GEODE_AS_STATIC_FUNCTION(spiderTestJump) 
	#endif

	#ifndef GEODE_STATICS_spiderTestJumpInternal
		#define GEODE_STATICS_spiderTestJumpInternal
		GEODE_AS_STATIC_FUNCTION(spiderTestJumpInternal) 
	#endif

	#ifndef GEODE_STATICS_spiderTestJumpX
		#define GEODE_STATICS_spiderTestJumpX
		GEODE_AS_STATIC_FUNCTION(spiderTestJumpX) 
	#endif

	#ifndef GEODE_STATICS_spiderTestJumpY
		#define GEODE_STATICS_spiderTestJumpY
		GEODE_AS_STATIC_FUNCTION(spiderTestJumpY) 
	#endif

	#ifndef GEODE_STATICS_startDashing
		#define GEODE_STATICS_startDashing
		GEODE_AS_STATIC_FUNCTION(startDashing) 
	#endif

	#ifndef GEODE_STATICS_stopBurstEffect
		#define GEODE_STATICS_stopBurstEffect
		GEODE_AS_STATIC_FUNCTION(stopBurstEffect) 
	#endif

	#ifndef GEODE_STATICS_stopDashing
		#define GEODE_STATICS_stopDashing
		GEODE_AS_STATIC_FUNCTION(stopDashing) 
	#endif

	#ifndef GEODE_STATICS_stopParticles
		#define GEODE_STATICS_stopParticles
		GEODE_AS_STATIC_FUNCTION(stopParticles) 
	#endif

	#ifndef GEODE_STATICS_stopPlatformerJumpAnimation
		#define GEODE_STATICS_stopPlatformerJumpAnimation
		GEODE_AS_STATIC_FUNCTION(stopPlatformerJumpAnimation) 
	#endif

	#ifndef GEODE_STATICS_stopRotation
		#define GEODE_STATICS_stopRotation
		GEODE_AS_STATIC_FUNCTION(stopRotation) 
	#endif

	#ifndef GEODE_STATICS_stopStreak2
		#define GEODE_STATICS_stopStreak2
		GEODE_AS_STATIC_FUNCTION(stopStreak2) 
	#endif

	#ifndef GEODE_STATICS_storeCollision
		#define GEODE_STATICS_storeCollision
		GEODE_AS_STATIC_FUNCTION(storeCollision) 
	#endif

	#ifndef GEODE_STATICS_switchedDirTo
		#define GEODE_STATICS_switchedDirTo
		GEODE_AS_STATIC_FUNCTION(switchedDirTo) 
	#endif

	#ifndef GEODE_STATICS_switchedToMode
		#define GEODE_STATICS_switchedToMode
		GEODE_AS_STATIC_FUNCTION(switchedToMode) 
	#endif

	#ifndef GEODE_STATICS_testForMoving
		#define GEODE_STATICS_testForMoving
		GEODE_AS_STATIC_FUNCTION(testForMoving) 
	#endif

	#ifndef GEODE_STATICS_toggleBirdMode
		#define GEODE_STATICS_toggleBirdMode
		GEODE_AS_STATIC_FUNCTION(toggleBirdMode) 
	#endif

	#ifndef GEODE_STATICS_toggleDartMode
		#define GEODE_STATICS_toggleDartMode
		GEODE_AS_STATIC_FUNCTION(toggleDartMode) 
	#endif

	#ifndef GEODE_STATICS_toggleFlyMode
		#define GEODE_STATICS_toggleFlyMode
		GEODE_AS_STATIC_FUNCTION(toggleFlyMode) 
	#endif

	#ifndef GEODE_STATICS_toggleGhostEffect
		#define GEODE_STATICS_toggleGhostEffect
		GEODE_AS_STATIC_FUNCTION(toggleGhostEffect) 
	#endif

	#ifndef GEODE_STATICS_togglePlayerScale
		#define GEODE_STATICS_togglePlayerScale
		GEODE_AS_STATIC_FUNCTION(togglePlayerScale) 
	#endif

	#ifndef GEODE_STATICS_toggleRobotMode
		#define GEODE_STATICS_toggleRobotMode
		GEODE_AS_STATIC_FUNCTION(toggleRobotMode) 
	#endif

	#ifndef GEODE_STATICS_toggleRollMode
		#define GEODE_STATICS_toggleRollMode
		GEODE_AS_STATIC_FUNCTION(toggleRollMode) 
	#endif

	#ifndef GEODE_STATICS_toggleSpiderMode
		#define GEODE_STATICS_toggleSpiderMode
		GEODE_AS_STATIC_FUNCTION(toggleSpiderMode) 
	#endif

	#ifndef GEODE_STATICS_toggleSwingMode
		#define GEODE_STATICS_toggleSwingMode
		GEODE_AS_STATIC_FUNCTION(toggleSwingMode) 
	#endif

	#ifndef GEODE_STATICS_toggleVisibility
		#define GEODE_STATICS_toggleVisibility
		GEODE_AS_STATIC_FUNCTION(toggleVisibility) 
	#endif

	#ifndef GEODE_STATICS_touchedObject
		#define GEODE_STATICS_touchedObject
		GEODE_AS_STATIC_FUNCTION(touchedObject) 
	#endif

	#ifndef GEODE_STATICS_tryPlaceCheckpoint
		#define GEODE_STATICS_tryPlaceCheckpoint
		GEODE_AS_STATIC_FUNCTION(tryPlaceCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_unrotateGameplayObject
		#define GEODE_STATICS_unrotateGameplayObject
		GEODE_AS_STATIC_FUNCTION(unrotateGameplayObject) 
	#endif

	#ifndef GEODE_STATICS_unrotatePreSlopeObjects
		#define GEODE_STATICS_unrotatePreSlopeObjects
		GEODE_AS_STATIC_FUNCTION(unrotatePreSlopeObjects) 
	#endif

	#ifndef GEODE_STATICS_updateCheckpointMode
		#define GEODE_STATICS_updateCheckpointMode
		GEODE_AS_STATIC_FUNCTION(updateCheckpointMode) 
	#endif

	#ifndef GEODE_STATICS_updateCheckpointTest
		#define GEODE_STATICS_updateCheckpointTest
		GEODE_AS_STATIC_FUNCTION(updateCheckpointTest) 
	#endif

	#ifndef GEODE_STATICS_updateCollide
		#define GEODE_STATICS_updateCollide
		GEODE_AS_STATIC_FUNCTION(updateCollide) 
	#endif

	#ifndef GEODE_STATICS_updateCollideBottom
		#define GEODE_STATICS_updateCollideBottom
		GEODE_AS_STATIC_FUNCTION(updateCollideBottom) 
	#endif

	#ifndef GEODE_STATICS_updateCollideLeft
		#define GEODE_STATICS_updateCollideLeft
		GEODE_AS_STATIC_FUNCTION(updateCollideLeft) 
	#endif

	#ifndef GEODE_STATICS_updateCollideRight
		#define GEODE_STATICS_updateCollideRight
		GEODE_AS_STATIC_FUNCTION(updateCollideRight) 
	#endif

	#ifndef GEODE_STATICS_updateCollideTop
		#define GEODE_STATICS_updateCollideTop
		GEODE_AS_STATIC_FUNCTION(updateCollideTop) 
	#endif

	#ifndef GEODE_STATICS_updateDashAnimation
		#define GEODE_STATICS_updateDashAnimation
		GEODE_AS_STATIC_FUNCTION(updateDashAnimation) 
	#endif

	#ifndef GEODE_STATICS_updateDashArt
		#define GEODE_STATICS_updateDashArt
		GEODE_AS_STATIC_FUNCTION(updateDashArt) 
	#endif

	#ifndef GEODE_STATICS_updateGlowColor
		#define GEODE_STATICS_updateGlowColor
		GEODE_AS_STATIC_FUNCTION(updateGlowColor) 
	#endif

	#ifndef GEODE_STATICS_updateInternalActions
		#define GEODE_STATICS_updateInternalActions
		GEODE_AS_STATIC_FUNCTION(updateInternalActions) 
	#endif

	#ifndef GEODE_STATICS_updateJump
		#define GEODE_STATICS_updateJump
		GEODE_AS_STATIC_FUNCTION(updateJump) 
	#endif

	#ifndef GEODE_STATICS_updateJumpVariables
		#define GEODE_STATICS_updateJumpVariables
		GEODE_AS_STATIC_FUNCTION(updateJumpVariables) 
	#endif

	#ifndef GEODE_STATICS_updateLastGroundObject
		#define GEODE_STATICS_updateLastGroundObject
		GEODE_AS_STATIC_FUNCTION(updateLastGroundObject) 
	#endif

	#ifndef GEODE_STATICS_updateMove
		#define GEODE_STATICS_updateMove
		GEODE_AS_STATIC_FUNCTION(updateMove) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerArt
		#define GEODE_STATICS_updatePlayerArt
		GEODE_AS_STATIC_FUNCTION(updatePlayerArt) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerBirdFrame
		#define GEODE_STATICS_updatePlayerBirdFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerBirdFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerDartFrame
		#define GEODE_STATICS_updatePlayerDartFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerDartFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerForce
		#define GEODE_STATICS_updatePlayerForce
		GEODE_AS_STATIC_FUNCTION(updatePlayerForce) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerFrame
		#define GEODE_STATICS_updatePlayerFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerGlow
		#define GEODE_STATICS_updatePlayerGlow
		GEODE_AS_STATIC_FUNCTION(updatePlayerGlow) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerJetpackFrame
		#define GEODE_STATICS_updatePlayerJetpackFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerJetpackFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerRollFrame
		#define GEODE_STATICS_updatePlayerRollFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerRollFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerScale
		#define GEODE_STATICS_updatePlayerScale
		GEODE_AS_STATIC_FUNCTION(updatePlayerScale) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerShipFrame
		#define GEODE_STATICS_updatePlayerShipFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerShipFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerSpriteExtra
		#define GEODE_STATICS_updatePlayerSpriteExtra
		GEODE_AS_STATIC_FUNCTION(updatePlayerSpriteExtra) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerSwingFrame
		#define GEODE_STATICS_updatePlayerSwingFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerSwingFrame) 
	#endif

	#ifndef GEODE_STATICS_updateRobotAnimationSpeed
		#define GEODE_STATICS_updateRobotAnimationSpeed
		GEODE_AS_STATIC_FUNCTION(updateRobotAnimationSpeed) 
	#endif

	#ifndef GEODE_STATICS_updateRotation
		#define GEODE_STATICS_updateRotation
		GEODE_AS_STATIC_FUNCTION(updateRotation) 
	#endif

	#ifndef GEODE_STATICS_updateShipRotation
		#define GEODE_STATICS_updateShipRotation
		GEODE_AS_STATIC_FUNCTION(updateShipRotation) 
	#endif

	#ifndef GEODE_STATICS_updateShipSpriteExtra
		#define GEODE_STATICS_updateShipSpriteExtra
		GEODE_AS_STATIC_FUNCTION(updateShipSpriteExtra) 
	#endif

	#ifndef GEODE_STATICS_updateSlopeRotation
		#define GEODE_STATICS_updateSlopeRotation
		GEODE_AS_STATIC_FUNCTION(updateSlopeRotation) 
	#endif

	#ifndef GEODE_STATICS_updateSlopeYVelocity
		#define GEODE_STATICS_updateSlopeYVelocity
		GEODE_AS_STATIC_FUNCTION(updateSlopeYVelocity) 
	#endif

	#ifndef GEODE_STATICS_updateSpecial
		#define GEODE_STATICS_updateSpecial
		GEODE_AS_STATIC_FUNCTION(updateSpecial) 
	#endif

	#ifndef GEODE_STATICS_updateStateVariables
		#define GEODE_STATICS_updateStateVariables
		GEODE_AS_STATIC_FUNCTION(updateStateVariables) 
	#endif

	#ifndef GEODE_STATICS_updateStaticForce
		#define GEODE_STATICS_updateStaticForce
		GEODE_AS_STATIC_FUNCTION(updateStaticForce) 
	#endif

	#ifndef GEODE_STATICS_updateStreakBlend
		#define GEODE_STATICS_updateStreakBlend
		GEODE_AS_STATIC_FUNCTION(updateStreakBlend) 
	#endif

	#ifndef GEODE_STATICS_updateStreaks
		#define GEODE_STATICS_updateStreaks
		GEODE_AS_STATIC_FUNCTION(updateStreaks) 
	#endif

	#ifndef GEODE_STATICS_updateSwingFire
		#define GEODE_STATICS_updateSwingFire
		GEODE_AS_STATIC_FUNCTION(updateSwingFire) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMod
		#define GEODE_STATICS_updateTimeMod
		GEODE_AS_STATIC_FUNCTION(updateTimeMod) 
	#endif

	#ifndef GEODE_STATICS_usingWallLimitedMode
		#define GEODE_STATICS_usingWallLimitedMode
		GEODE_AS_STATIC_FUNCTION(usingWallLimitedMode) 
	#endif

	#ifndef GEODE_STATICS_yStartDown
		#define GEODE_STATICS_yStartDown
		GEODE_AS_STATIC_FUNCTION(yStartDown) 
	#endif

	#ifndef GEODE_STATICS_yStartUp
		#define GEODE_STATICS_yStartUp
		GEODE_AS_STATIC_FUNCTION(yStartUp) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_getRealPosition
		#define GEODE_STATICS_getRealPosition
		GEODE_AS_STATIC_FUNCTION(getRealPosition) 
	#endif

	#ifndef GEODE_STATICS_getOrientedBox
		#define GEODE_STATICS_getOrientedBox
		GEODE_AS_STATIC_FUNCTION(getOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_getObjectRotation
		#define GEODE_STATICS_getObjectRotation
		GEODE_AS_STATIC_FUNCTION(getObjectRotation) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateStreak
		#define GEODE_CONCEPT_CHECK_activateStreak
		GEODE_CONCEPT_FUNCTION_CHECK(activateStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAllParticles
		#define GEODE_CONCEPT_CHECK_addAllParticles
		GEODE_CONCEPT_FUNCTION_CHECK(addAllParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToTouchedRings
		#define GEODE_CONCEPT_CHECK_addToTouchedRings
		GEODE_CONCEPT_FUNCTION_CHECK(addToTouchedRings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToYVelocity
		#define GEODE_CONCEPT_CHECK_addToYVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(addToYVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animatePlatformerJump
		#define GEODE_CONCEPT_CHECK_animatePlatformerJump
		GEODE_CONCEPT_FUNCTION_CHECK(animatePlatformerJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_boostPlayer
		#define GEODE_CONCEPT_CHECK_boostPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(boostPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bumpPlayer
		#define GEODE_CONCEPT_CHECK_bumpPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(bumpPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buttonDown
		#define GEODE_CONCEPT_CHECK_buttonDown
		GEODE_CONCEPT_FUNCTION_CHECK(buttonDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canStickToGround
		#define GEODE_CONCEPT_CHECK_canStickToGround
		GEODE_CONCEPT_FUNCTION_CHECK(canStickToGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSnapJumpToObject
		#define GEODE_CONCEPT_CHECK_checkSnapJumpToObject
		GEODE_CONCEPT_FUNCTION_CHECK(checkSnapJumpToObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collidedWithObject
		#define GEODE_CONCEPT_CHECK_collidedWithObject
		GEODE_CONCEPT_FUNCTION_CHECK(collidedWithObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collidedWithObjectInternal
		#define GEODE_CONCEPT_CHECK_collidedWithObjectInternal
		GEODE_CONCEPT_FUNCTION_CHECK(collidedWithObjectInternal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collidedWithSlope
		#define GEODE_CONCEPT_CHECK_collidedWithSlope
		GEODE_CONCEPT_FUNCTION_CHECK(collidedWithSlope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collidedWithSlopeInternal
		#define GEODE_CONCEPT_CHECK_collidedWithSlopeInternal
		GEODE_CONCEPT_FUNCTION_CHECK(collidedWithSlopeInternal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToClosestRotation
		#define GEODE_CONCEPT_CHECK_convertToClosestRotation
		GEODE_CONCEPT_FUNCTION_CHECK(convertToClosestRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyAttributes
		#define GEODE_CONCEPT_CHECK_copyAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(copyAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFadeOutDartStreak
		#define GEODE_CONCEPT_CHECK_createFadeOutDartStreak
		GEODE_CONCEPT_FUNCTION_CHECK(createFadeOutDartStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRobot
		#define GEODE_CONCEPT_CHECK_createRobot
		GEODE_CONCEPT_FUNCTION_CHECK(createRobot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSpider
		#define GEODE_CONCEPT_CHECK_createSpider
		GEODE_CONCEPT_FUNCTION_CHECK(createSpider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateParticle
		#define GEODE_CONCEPT_CHECK_deactivateParticle
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateStreak
		#define GEODE_CONCEPT_CHECK_deactivateStreak
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyFromHitHead
		#define GEODE_CONCEPT_CHECK_destroyFromHitHead
		GEODE_CONCEPT_FUNCTION_CHECK(destroyFromHitHead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didHitHead
		#define GEODE_CONCEPT_CHECK_didHitHead
		GEODE_CONCEPT_FUNCTION_CHECK(didHitHead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableCustomGlowColor
		#define GEODE_CONCEPT_CHECK_disableCustomGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(disableCustomGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disablePlayerControls
		#define GEODE_CONCEPT_CHECK_disablePlayerControls
		GEODE_CONCEPT_FUNCTION_CHECK(disablePlayerControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableSwingFire
		#define GEODE_CONCEPT_CHECK_disableSwingFire
		GEODE_CONCEPT_FUNCTION_CHECK(disableSwingFire) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doReversePlayer
		#define GEODE_CONCEPT_CHECK_doReversePlayer
		GEODE_CONCEPT_FUNCTION_CHECK(doReversePlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableCustomGlowColor
		#define GEODE_CONCEPT_CHECK_enableCustomGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(enableCustomGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enablePlayerControls
		#define GEODE_CONCEPT_CHECK_enablePlayerControls
		GEODE_CONCEPT_FUNCTION_CHECK(enablePlayerControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitPlatformerAnimateJump
		#define GEODE_CONCEPT_CHECK_exitPlatformerAnimateJump
		GEODE_CONCEPT_FUNCTION_CHECK(exitPlatformerAnimateJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOutStreak2
		#define GEODE_CONCEPT_CHECK_fadeOutStreak2
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOutStreak2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flashPlayer
		#define GEODE_CONCEPT_CHECK_flashPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(flashPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipGravity
		#define GEODE_CONCEPT_CHECK_flipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(flipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipMod
		#define GEODE_CONCEPT_CHECK_flipMod
		GEODE_CONCEPT_FUNCTION_CHECK(flipMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameEventTriggered
		#define GEODE_CONCEPT_CHECK_gameEventTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(gameEventTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveMode
		#define GEODE_CONCEPT_CHECK_getActiveMode
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentXVelocity
		#define GEODE_CONCEPT_CHECK_getCurrentXVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentXVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getModifiedSlopeYVel
		#define GEODE_CONCEPT_CHECK_getModifiedSlopeYVel
		GEODE_CONCEPT_FUNCTION_CHECK(getModifiedSlopeYVel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOldPosition
		#define GEODE_CONCEPT_CHECK_getOldPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getOldPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondColor
		#define GEODE_CONCEPT_CHECK_getSecondColor
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getYVelocity
		#define GEODE_CONCEPT_CHECK_getYVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(getYVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gravityDown
		#define GEODE_CONCEPT_CHECK_gravityDown
		GEODE_CONCEPT_FUNCTION_CHECK(gravityDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gravityUp
		#define GEODE_CONCEPT_CHECK_gravityUp
		GEODE_CONCEPT_FUNCTION_CHECK(gravityUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handlePlayerCommand
		#define GEODE_CONCEPT_CHECK_handlePlayerCommand
		GEODE_CONCEPT_FUNCTION_CHECK(handlePlayerCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleRotatedCollisionInternal
		#define GEODE_CONCEPT_CHECK_handleRotatedCollisionInternal
		GEODE_CONCEPT_FUNCTION_CHECK(handleRotatedCollisionInternal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleRotatedObjectCollision
		#define GEODE_CONCEPT_CHECK_handleRotatedObjectCollision
		GEODE_CONCEPT_FUNCTION_CHECK(handleRotatedObjectCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleRotatedSlopeCollision
		#define GEODE_CONCEPT_CHECK_handleRotatedSlopeCollision
		GEODE_CONCEPT_FUNCTION_CHECK(handleRotatedSlopeCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hardFlipGravity
		#define GEODE_CONCEPT_CHECK_hardFlipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(hardFlipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hitGround
		#define GEODE_CONCEPT_CHECK_hitGround
		GEODE_CONCEPT_FUNCTION_CHECK(hitGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hitGroundNoJump
		#define GEODE_CONCEPT_CHECK_hitGroundNoJump
		GEODE_CONCEPT_FUNCTION_CHECK(hitGroundNoJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementJumps
		#define GEODE_CONCEPT_CHECK_incrementJumps
		GEODE_CONCEPT_FUNCTION_CHECK(incrementJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBoostValid
		#define GEODE_CONCEPT_CHECK_isBoostValid
		GEODE_CONCEPT_FUNCTION_CHECK(isBoostValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlying
		#define GEODE_CONCEPT_CHECK_isFlying
		GEODE_CONCEPT_FUNCTION_CHECK(isFlying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isInBasicMode
		#define GEODE_CONCEPT_CHECK_isInBasicMode
		GEODE_CONCEPT_FUNCTION_CHECK(isInBasicMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isInNormalMode
		#define GEODE_CONCEPT_CHECK_isInNormalMode
		GEODE_CONCEPT_FUNCTION_CHECK(isInNormalMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSafeFlip
		#define GEODE_CONCEPT_CHECK_isSafeFlip
		GEODE_CONCEPT_FUNCTION_CHECK(isSafeFlip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSafeHeadTest
		#define GEODE_CONCEPT_CHECK_isSafeHeadTest
		GEODE_CONCEPT_FUNCTION_CHECK(isSafeHeadTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSafeMode
		#define GEODE_CONCEPT_CHECK_isSafeMode
		GEODE_CONCEPT_FUNCTION_CHECK(isSafeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSafeSpiderFlip
		#define GEODE_CONCEPT_CHECK_isSafeSpiderFlip
		GEODE_CONCEPT_FUNCTION_CHECK(isSafeSpiderFlip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelFlipFinished
		#define GEODE_CONCEPT_CHECK_levelFlipFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelFlipFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelFlipping
		#define GEODE_CONCEPT_CHECK_levelFlipping
		GEODE_CONCEPT_FUNCTION_CHECK(levelFlipping) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelWillFlip
		#define GEODE_CONCEPT_CHECK_levelWillFlip
		GEODE_CONCEPT_FUNCTION_CHECK(levelWillFlip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromCheckpoint
		#define GEODE_CONCEPT_CHECK_loadFromCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lockPlayer
		#define GEODE_CONCEPT_CHECK_lockPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(lockPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logValues
		#define GEODE_CONCEPT_CHECK_logValues
		GEODE_CONCEPT_FUNCTION_CHECK(logValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_modeDidChange
		#define GEODE_CONCEPT_CHECK_modeDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(modeDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performSlideCheck
		#define GEODE_CONCEPT_CHECK_performSlideCheck
		GEODE_CONCEPT_FUNCTION_CHECK(performSlideCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_placeStreakPoint
		#define GEODE_CONCEPT_CHECK_placeStreakPoint
		GEODE_CONCEPT_FUNCTION_CHECK(placeStreakPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playBumpEffect
		#define GEODE_CONCEPT_CHECK_playBumpEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playBumpEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playBurstEffect
		#define GEODE_CONCEPT_CHECK_playBurstEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playBurstEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playCompleteEffect
		#define GEODE_CONCEPT_CHECK_playCompleteEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playCompleteEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playDeathEffect
		#define GEODE_CONCEPT_CHECK_playDeathEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playDeathEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playDynamicSpiderRun
		#define GEODE_CONCEPT_CHECK_playDynamicSpiderRun
		GEODE_CONCEPT_FUNCTION_CHECK(playDynamicSpiderRun) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerDestroyed
		#define GEODE_CONCEPT_CHECK_playerDestroyed
		GEODE_CONCEPT_FUNCTION_CHECK(playerDestroyed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerIsFalling
		#define GEODE_CONCEPT_CHECK_playerIsFalling
		GEODE_CONCEPT_FUNCTION_CHECK(playerIsFalling) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerIsFallingBugged
		#define GEODE_CONCEPT_CHECK_playerIsFallingBugged
		GEODE_CONCEPT_FUNCTION_CHECK(playerIsFallingBugged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerIsMovingUp
		#define GEODE_CONCEPT_CHECK_playerIsMovingUp
		GEODE_CONCEPT_FUNCTION_CHECK(playerIsMovingUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTeleported
		#define GEODE_CONCEPT_CHECK_playerTeleported
		GEODE_CONCEPT_FUNCTION_CHECK(playerTeleported) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playingEndEffect
		#define GEODE_CONCEPT_CHECK_playingEndEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playingEndEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSpawnEffect
		#define GEODE_CONCEPT_CHECK_playSpawnEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playSpawnEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSpiderDashEffect
		#define GEODE_CONCEPT_CHECK_playSpiderDashEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playSpiderDashEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postCollision
		#define GEODE_CONCEPT_CHECK_postCollision
		GEODE_CONCEPT_FUNCTION_CHECK(postCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preCollision
		#define GEODE_CONCEPT_CHECK_preCollision
		GEODE_CONCEPT_FUNCTION_CHECK(preCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preSlopeCollision
		#define GEODE_CONCEPT_CHECK_preSlopeCollision
		GEODE_CONCEPT_FUNCTION_CHECK(preSlopeCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_propellPlayer
		#define GEODE_CONCEPT_CHECK_propellPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(propellPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pushButton
		#define GEODE_CONCEPT_CHECK_pushButton
		GEODE_CONCEPT_FUNCTION_CHECK(pushButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pushDown
		#define GEODE_CONCEPT_CHECK_pushDown
		GEODE_CONCEPT_FUNCTION_CHECK(pushDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pushPlayer
		#define GEODE_CONCEPT_CHECK_pushPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(pushPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_redirectDash
		#define GEODE_CONCEPT_CHECK_redirectDash
		GEODE_CONCEPT_FUNCTION_CHECK(redirectDash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_redirectPlayerForce
		#define GEODE_CONCEPT_CHECK_redirectPlayerForce
		GEODE_CONCEPT_FUNCTION_CHECK(redirectPlayerForce) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseAllButtons
		#define GEODE_CONCEPT_CHECK_releaseAllButtons
		GEODE_CONCEPT_FUNCTION_CHECK(releaseAllButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseButton
		#define GEODE_CONCEPT_CHECK_releaseButton
		GEODE_CONCEPT_FUNCTION_CHECK(releaseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllParticles
		#define GEODE_CONCEPT_CHECK_removeAllParticles
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePendingCheckpoint
		#define GEODE_CONCEPT_CHECK_removePendingCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(removePendingCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePlacedCheckpoint
		#define GEODE_CONCEPT_CHECK_removePlacedCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(removePlacedCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAllParticles
		#define GEODE_CONCEPT_CHECK_resetAllParticles
		GEODE_CONCEPT_FUNCTION_CHECK(resetAllParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCollisionLog
		#define GEODE_CONCEPT_CHECK_resetCollisionLog
		GEODE_CONCEPT_FUNCTION_CHECK(resetCollisionLog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCollisionValues
		#define GEODE_CONCEPT_CHECK_resetCollisionValues
		GEODE_CONCEPT_FUNCTION_CHECK(resetCollisionValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetPlayerIcon
		#define GEODE_CONCEPT_CHECK_resetPlayerIcon
		GEODE_CONCEPT_FUNCTION_CHECK(resetPlayerIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStateVariables
		#define GEODE_CONCEPT_CHECK_resetStateVariables
		GEODE_CONCEPT_FUNCTION_CHECK(resetStateVariables) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStreak
		#define GEODE_CONCEPT_CHECK_resetStreak
		GEODE_CONCEPT_FUNCTION_CHECK(resetStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTouchedRings
		#define GEODE_CONCEPT_CHECK_resetTouchedRings
		GEODE_CONCEPT_FUNCTION_CHECK(resetTouchedRings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverseMod
		#define GEODE_CONCEPT_CHECK_reverseMod
		GEODE_CONCEPT_FUNCTION_CHECK(reverseMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reversePlayer
		#define GEODE_CONCEPT_CHECK_reversePlayer
		GEODE_CONCEPT_FUNCTION_CHECK(reversePlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ringJump
		#define GEODE_CONCEPT_CHECK_ringJump
		GEODE_CONCEPT_FUNCTION_CHECK(ringJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateGameplay
		#define GEODE_CONCEPT_CHECK_rotateGameplay
		GEODE_CONCEPT_FUNCTION_CHECK(rotateGameplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateGameplayObject
		#define GEODE_CONCEPT_CHECK_rotateGameplayObject
		GEODE_CONCEPT_FUNCTION_CHECK(rotateGameplayObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateGameplayOnly
		#define GEODE_CONCEPT_CHECK_rotateGameplayOnly
		GEODE_CONCEPT_FUNCTION_CHECK(rotateGameplayOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotatePreSlopeObjects
		#define GEODE_CONCEPT_CHECK_rotatePreSlopeObjects
		GEODE_CONCEPT_FUNCTION_CHECK(rotatePreSlopeObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runBallRotation
		#define GEODE_CONCEPT_CHECK_runBallRotation
		GEODE_CONCEPT_FUNCTION_CHECK(runBallRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runBallRotation2
		#define GEODE_CONCEPT_CHECK_runBallRotation2
		GEODE_CONCEPT_FUNCTION_CHECK(runBallRotation2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runNormalRotation
		#define GEODE_CONCEPT_CHECK_runNormalRotation
		GEODE_CONCEPT_FUNCTION_CHECK(runNormalRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runRotateAction
		#define GEODE_CONCEPT_CHECK_runRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(runRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToCheckpoint
		#define GEODE_CONCEPT_CHECK_saveToCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(saveToCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSecondColor
		#define GEODE_CONCEPT_CHECK_setSecondColor
		GEODE_CONCEPT_FUNCTION_CHECK(setSecondColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupStreak
		#define GEODE_CONCEPT_CHECK_setupStreak
		GEODE_CONCEPT_FUNCTION_CHECK(setupStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setYVelocity
		#define GEODE_CONCEPT_CHECK_setYVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(setYVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnCircle
		#define GEODE_CONCEPT_CHECK_spawnCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnCircle2
		#define GEODE_CONCEPT_CHECK_spawnCircle2
		GEODE_CONCEPT_FUNCTION_CHECK(spawnCircle2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnDualCircle
		#define GEODE_CONCEPT_CHECK_spawnDualCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnDualCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnFromPlayer
		#define GEODE_CONCEPT_CHECK_spawnFromPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(spawnFromPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnPortalCircle
		#define GEODE_CONCEPT_CHECK_spawnPortalCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnPortalCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnScaleCircle
		#define GEODE_CONCEPT_CHECK_spawnScaleCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnScaleCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_specialGroundHit
		#define GEODE_CONCEPT_CHECK_specialGroundHit
		GEODE_CONCEPT_FUNCTION_CHECK(specialGroundHit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_speedDown
		#define GEODE_CONCEPT_CHECK_speedDown
		GEODE_CONCEPT_FUNCTION_CHECK(speedDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_speedUp
		#define GEODE_CONCEPT_CHECK_speedUp
		GEODE_CONCEPT_FUNCTION_CHECK(speedUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spiderTestJump
		#define GEODE_CONCEPT_CHECK_spiderTestJump
		GEODE_CONCEPT_FUNCTION_CHECK(spiderTestJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spiderTestJumpInternal
		#define GEODE_CONCEPT_CHECK_spiderTestJumpInternal
		GEODE_CONCEPT_FUNCTION_CHECK(spiderTestJumpInternal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spiderTestJumpX
		#define GEODE_CONCEPT_CHECK_spiderTestJumpX
		GEODE_CONCEPT_FUNCTION_CHECK(spiderTestJumpX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spiderTestJumpY
		#define GEODE_CONCEPT_CHECK_spiderTestJumpY
		GEODE_CONCEPT_FUNCTION_CHECK(spiderTestJumpY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startDashing
		#define GEODE_CONCEPT_CHECK_startDashing
		GEODE_CONCEPT_FUNCTION_CHECK(startDashing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopBurstEffect
		#define GEODE_CONCEPT_CHECK_stopBurstEffect
		GEODE_CONCEPT_FUNCTION_CHECK(stopBurstEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopDashing
		#define GEODE_CONCEPT_CHECK_stopDashing
		GEODE_CONCEPT_FUNCTION_CHECK(stopDashing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopParticles
		#define GEODE_CONCEPT_CHECK_stopParticles
		GEODE_CONCEPT_FUNCTION_CHECK(stopParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopPlatformerJumpAnimation
		#define GEODE_CONCEPT_CHECK_stopPlatformerJumpAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(stopPlatformerJumpAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopRotation
		#define GEODE_CONCEPT_CHECK_stopRotation
		GEODE_CONCEPT_FUNCTION_CHECK(stopRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopStreak2
		#define GEODE_CONCEPT_CHECK_stopStreak2
		GEODE_CONCEPT_FUNCTION_CHECK(stopStreak2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeCollision
		#define GEODE_CONCEPT_CHECK_storeCollision
		GEODE_CONCEPT_FUNCTION_CHECK(storeCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchedDirTo
		#define GEODE_CONCEPT_CHECK_switchedDirTo
		GEODE_CONCEPT_FUNCTION_CHECK(switchedDirTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchedToMode
		#define GEODE_CONCEPT_CHECK_switchedToMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchedToMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_testForMoving
		#define GEODE_CONCEPT_CHECK_testForMoving
		GEODE_CONCEPT_FUNCTION_CHECK(testForMoving) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleBirdMode
		#define GEODE_CONCEPT_CHECK_toggleBirdMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleBirdMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDartMode
		#define GEODE_CONCEPT_CHECK_toggleDartMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDartMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFlyMode
		#define GEODE_CONCEPT_CHECK_toggleFlyMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFlyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGhostEffect
		#define GEODE_CONCEPT_CHECK_toggleGhostEffect
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGhostEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlatformerMode
		#define GEODE_CONCEPT_CHECK_togglePlatformerMode
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlatformerMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlayerScale
		#define GEODE_CONCEPT_CHECK_togglePlayerScale
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlayerScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleRobotMode
		#define GEODE_CONCEPT_CHECK_toggleRobotMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleRobotMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleRollMode
		#define GEODE_CONCEPT_CHECK_toggleRollMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleRollMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSpiderMode
		#define GEODE_CONCEPT_CHECK_toggleSpiderMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSpiderMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSwingMode
		#define GEODE_CONCEPT_CHECK_toggleSwingMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSwingMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleVisibility
		#define GEODE_CONCEPT_CHECK_toggleVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchedObject
		#define GEODE_CONCEPT_CHECK_touchedObject
		GEODE_CONCEPT_FUNCTION_CHECK(touchedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryPlaceCheckpoint
		#define GEODE_CONCEPT_CHECK_tryPlaceCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(tryPlaceCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unrotateGameplayObject
		#define GEODE_CONCEPT_CHECK_unrotateGameplayObject
		GEODE_CONCEPT_FUNCTION_CHECK(unrotateGameplayObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unrotatePreSlopeObjects
		#define GEODE_CONCEPT_CHECK_unrotatePreSlopeObjects
		GEODE_CONCEPT_FUNCTION_CHECK(unrotatePreSlopeObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCheckpointMode
		#define GEODE_CONCEPT_CHECK_updateCheckpointMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateCheckpointMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCheckpointTest
		#define GEODE_CONCEPT_CHECK_updateCheckpointTest
		GEODE_CONCEPT_FUNCTION_CHECK(updateCheckpointTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollide
		#define GEODE_CONCEPT_CHECK_updateCollide
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollideBottom
		#define GEODE_CONCEPT_CHECK_updateCollideBottom
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollideBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollideLeft
		#define GEODE_CONCEPT_CHECK_updateCollideLeft
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollideLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollideRight
		#define GEODE_CONCEPT_CHECK_updateCollideRight
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollideRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollideTop
		#define GEODE_CONCEPT_CHECK_updateCollideTop
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollideTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDashAnimation
		#define GEODE_CONCEPT_CHECK_updateDashAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(updateDashAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDashArt
		#define GEODE_CONCEPT_CHECK_updateDashArt
		GEODE_CONCEPT_FUNCTION_CHECK(updateDashArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEffects
		#define GEODE_CONCEPT_CHECK_updateEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGlowColor
		#define GEODE_CONCEPT_CHECK_updateGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInternalActions
		#define GEODE_CONCEPT_CHECK_updateInternalActions
		GEODE_CONCEPT_FUNCTION_CHECK(updateInternalActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateJump
		#define GEODE_CONCEPT_CHECK_updateJump
		GEODE_CONCEPT_FUNCTION_CHECK(updateJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateJumpVariables
		#define GEODE_CONCEPT_CHECK_updateJumpVariables
		GEODE_CONCEPT_FUNCTION_CHECK(updateJumpVariables) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLastGroundObject
		#define GEODE_CONCEPT_CHECK_updateLastGroundObject
		GEODE_CONCEPT_FUNCTION_CHECK(updateLastGroundObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMove
		#define GEODE_CONCEPT_CHECK_updateMove
		GEODE_CONCEPT_FUNCTION_CHECK(updateMove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerArt
		#define GEODE_CONCEPT_CHECK_updatePlayerArt
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerBirdFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerBirdFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerBirdFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerDartFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerDartFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerDartFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerForce
		#define GEODE_CONCEPT_CHECK_updatePlayerForce
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerForce) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerGlow
		#define GEODE_CONCEPT_CHECK_updatePlayerGlow
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerJetpackFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerJetpackFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerJetpackFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerRobotFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerRobotFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerRobotFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerRollFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerRollFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerRollFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerScale
		#define GEODE_CONCEPT_CHECK_updatePlayerScale
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerShipFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerShipFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerShipFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerSpiderFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerSpiderFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerSpiderFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerSpriteExtra
		#define GEODE_CONCEPT_CHECK_updatePlayerSpriteExtra
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerSpriteExtra) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerSwingFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerSwingFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerSwingFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRobotAnimationSpeed
		#define GEODE_CONCEPT_CHECK_updateRobotAnimationSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(updateRobotAnimationSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRotation
		#define GEODE_CONCEPT_CHECK_updateRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShipRotation
		#define GEODE_CONCEPT_CHECK_updateShipRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateShipRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShipSpriteExtra
		#define GEODE_CONCEPT_CHECK_updateShipSpriteExtra
		GEODE_CONCEPT_FUNCTION_CHECK(updateShipSpriteExtra) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSlopeRotation
		#define GEODE_CONCEPT_CHECK_updateSlopeRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateSlopeRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSlopeYVelocity
		#define GEODE_CONCEPT_CHECK_updateSlopeYVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(updateSlopeYVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecial
		#define GEODE_CONCEPT_CHECK_updateSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStateVariables
		#define GEODE_CONCEPT_CHECK_updateStateVariables
		GEODE_CONCEPT_FUNCTION_CHECK(updateStateVariables) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStaticForce
		#define GEODE_CONCEPT_CHECK_updateStaticForce
		GEODE_CONCEPT_FUNCTION_CHECK(updateStaticForce) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStreakBlend
		#define GEODE_CONCEPT_CHECK_updateStreakBlend
		GEODE_CONCEPT_FUNCTION_CHECK(updateStreakBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStreaks
		#define GEODE_CONCEPT_CHECK_updateStreaks
		GEODE_CONCEPT_FUNCTION_CHECK(updateStreaks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSwingFire
		#define GEODE_CONCEPT_CHECK_updateSwingFire
		GEODE_CONCEPT_FUNCTION_CHECK(updateSwingFire) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeMod
		#define GEODE_CONCEPT_CHECK_updateTimeMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_usingWallLimitedMode
		#define GEODE_CONCEPT_CHECK_usingWallLimitedMode
		GEODE_CONCEPT_FUNCTION_CHECK(usingWallLimitedMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_yStartDown
		#define GEODE_CONCEPT_CHECK_yStartDown
		GEODE_CONCEPT_FUNCTION_CHECK(yStartDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_yStartUp
		#define GEODE_CONCEPT_CHECK_yStartUp
		GEODE_CONCEPT_FUNCTION_CHECK(yStartUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleX
		#define GEODE_CONCEPT_CHECK_setScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleY
		#define GEODE_CONCEPT_CHECK_setScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScale
		#define GEODE_CONCEPT_CHECK_setScale
		GEODE_CONCEPT_FUNCTION_CHECK(setScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipX
		#define GEODE_CONCEPT_CHECK_setFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipY
		#define GEODE_CONCEPT_CHECK_setFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRealPosition
		#define GEODE_CONCEPT_CHECK_getRealPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getRealPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrientedBox
		#define GEODE_CONCEPT_CHECK_getOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(getOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRotation
		#define GEODE_CONCEPT_CHECK_getObjectRotation
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinished
		#define GEODE_CONCEPT_CHECK_animationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayerObject> : ModifyBase<ModifyDerive<Der, PlayerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerObject>>;
		using ModifyBase<ModifyDerive<Der, PlayerObject>>::ModifyBase;
		using Base = PlayerObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3648d0, Default, PlayerObject, create, int, int, GJBaseGameLayer*, cocos2d::CCLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37e0a0, Thiscall, PlayerObject, activateStreak, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3667d0, Thiscall, PlayerObject, addAllParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, addToTouchedRings, , RingObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, addToYVelocity, , double, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36adb0, Thiscall, PlayerObject, animatePlatformerJump, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37def0, Thiscall, PlayerObject, boostPlayer, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37d6b0, Thiscall, PlayerObject, bumpPlayer, float, int, bool, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, buttonDown, , PlayerButton)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, canStickToGround, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, checkSnapJumpToObject, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36fa40, Thiscall, PlayerObject, collidedWithObject, float, GameObject*, cocos2d::CCRect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, collidedWithObject, , float, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36fb00, Thiscall, PlayerObject, collidedWithObjectInternal, float, GameObject*, cocos2d::CCRect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, collidedWithSlope, , float, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36d8a0, Thiscall, PlayerObject, collidedWithSlopeInternal, float, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, convertToClosestRotation, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37e4b0, Thiscall, PlayerObject, copyAttributes, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376690, Thiscall, PlayerObject, createFadeOutDartStreak, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366050, Thiscall, PlayerObject, createRobot, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366410, Thiscall, PlayerObject, createSpider, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, deactivateParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, deactivateStreak, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, destroyFromHitHead, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, didHitHead, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, disableCustomGlowColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, disablePlayerControls, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378f10, Thiscall, PlayerObject, disableSwingFire, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376540, Thiscall, PlayerObject, doReversePlayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, enableCustomGlowColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, enablePlayerControls, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, exitPlatformerAnimateJump, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37e1a0, Thiscall, PlayerObject, fadeOutStreak2, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, flashPlayer, , float, float, cocos2d::ccColor3B, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3781e0, Thiscall, PlayerObject, flipGravity, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, flipMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, gameEventTriggered, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, getActiveMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, getCurrentXVelocity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, getModifiedSlopeYVel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, getOldPosition, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, getSecondColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, getYVelocity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, gravityDown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, gravityUp, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, handlePlayerCommand, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36d1d0, Thiscall, PlayerObject, handleRotatedCollisionInternal, float, GameObject*, cocos2d::CCRect, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, handleRotatedObjectCollision, float, GameObject*, cocos2d::CCRect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, handleRotatedSlopeCollision, , float, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, hardFlipGravity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379f40, Thiscall, PlayerObject, hitGround, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, hitGroundNoJump, , GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36acd0, Thiscall, PlayerObject, incrementJumps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x364970, Thiscall, PlayerObject, init, int, int, GJBaseGameLayer*, cocos2d::CCLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, isBoostValid, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, isFlying, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, isInBasicMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, isInNormalMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, isSafeFlip, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, isSafeHeadTest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, isSafeMode, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, isSafeSpiderFlip, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3698a0, Thiscall, PlayerObject, levelFlipFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379500, Thiscall, PlayerObject, levelFlipping, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, levelWillFlip, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37f9d0, Thiscall, PlayerObject, loadFromCheckpoint, PlayerCheckpoint*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37d2e0, Thiscall, PlayerObject, lockPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, logValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, modeDidChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, performSlideCheck, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37e690, Thiscall, PlayerObject, placeStreakPoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37da60, Thiscall, PlayerObject, playBumpEffect, int, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, playBurstEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3621d0, Thiscall, PlayerObject, playCompleteEffect, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35d0c0, Thiscall, PlayerObject, playDeathEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37f4e0, Thiscall, PlayerObject, playDynamicSpiderRun, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x375d70, Thiscall, PlayerObject, playerDestroyed, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, playerIsFalling, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, playerIsFallingBugged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, playerIsMovingUp, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, playerTeleported, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, playingEndEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3754b0, Thiscall, PlayerObject, playSpawnEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x373200, Thiscall, PlayerObject, playSpiderDashEffect, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b6b0, Thiscall, PlayerObject, postCollision, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, preCollision, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36d370, Thiscall, PlayerObject, preSlopeCollision, float, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37d860, Thiscall, PlayerObject, propellPlayer, float, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x375f70, Thiscall, PlayerObject, pushButton, PlayerButton)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, pushDown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, pushPlayer, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, redirectDash, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, redirectPlayerForce, , float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37d110, Thiscall, PlayerObject, releaseAllButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376200, Thiscall, PlayerObject, releaseButton, PlayerButton)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, removeAllParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3801a0, Thiscall, PlayerObject, removePendingCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, removePlacedCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, resetAllParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, resetCollisionLog, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, resetCollisionValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3792f0, Thiscall, PlayerObject, resetPlayerIcon, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, resetStateVariables, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x369730, Thiscall, PlayerObject, resetStreak, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376310, Thiscall, PlayerObject, resetTouchedRings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, reverseMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376460, Thiscall, PlayerObject, reversePlayer, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376c30, Thiscall, PlayerObject, ringJump, RingObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, rotateGameplay, , int, int, bool, float, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36f480, Thiscall, PlayerObject, rotateGameplayObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, rotateGameplayOnly, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, rotatePreSlopeObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b350, Thiscall, PlayerObject, runBallRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b5b0, Thiscall, PlayerObject, runBallRotation2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, runNormalRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, runNormalRotation, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b480, Thiscall, PlayerObject, runRotateAction, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, saveToCheckpoint, , PlayerCheckpoint*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b3b0, Thiscall, PlayerObject, setSecondColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366920, Thiscall, PlayerObject, setupStreak, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366e70, Thiscall, PlayerObject, setYVelocity, double, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, spawnCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, spawnCircle2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, spawnDualCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, spawnFromPlayer, , PlayerObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x375790, Thiscall, PlayerObject, spawnPortalCircle, cocos2d::ccColor3B, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, spawnScaleCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, specialGroundHit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, speedDown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, speedUp, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3723d0, Thiscall, PlayerObject, spiderTestJump, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x372480, Thiscall, PlayerObject, spiderTestJumpInternal, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, spiderTestJumpX, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, spiderTestJumpY, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3739a0, Thiscall, PlayerObject, startDashing, DashRingObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, stopBurstEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3746b0, Thiscall, PlayerObject, stopDashing, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3699b0, Thiscall, PlayerObject, stopParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b190, Thiscall, PlayerObject, stopPlatformerJumpAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, stopRotation, , bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, stopStreak2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, storeCollision, , PlayerCollisionDirection, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x375e60, Thiscall, PlayerObject, switchedDirTo, PlayerButton)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379e40, Thiscall, PlayerObject, switchedToMode, GameObjectType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, testForMoving, , float, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378830, Thiscall, PlayerObject, toggleBirdMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378fa0, Thiscall, PlayerObject, toggleDartMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378500, Thiscall, PlayerObject, toggleFlyMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37ce40, Thiscall, PlayerObject, toggleGhostEffect, GhostType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, togglePlatformerMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37e710, Thiscall, PlayerObject, togglePlayerScale, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379700, Thiscall, PlayerObject, toggleRobotMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379580, Thiscall, PlayerObject, toggleRollMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379a80, Thiscall, PlayerObject, toggleSpiderMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378b30, Thiscall, PlayerObject, toggleSwingMode, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x369590, Thiscall, PlayerObject, toggleVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, touchedObject, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, tryPlaceCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36f770, Thiscall, PlayerObject, unrotateGameplayObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, unrotatePreSlopeObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateCheckpointMode, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateCheckpointTest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x372080, Thiscall, PlayerObject, updateCollide, PlayerCollisionDirection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateCollideBottom, , float, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateCollideLeft, , float, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateCollideRight, , float, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateCollideTop, , float, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateDashAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3741f0, Thiscall, PlayerObject, updateDashArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, updateEffects, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b440, Thiscall, PlayerObject, updateGlowColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x380e60, Thiscall, PlayerObject, updateInternalActions, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x369a50, Thiscall, PlayerObject, updateJump, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateJumpVariables, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateLastGroundObject, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x368220, Thiscall, PlayerObject, updateMove, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376890, Thiscall, PlayerObject, updatePlayerArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c2f0, Thiscall, PlayerObject, updatePlayerBirdFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c9f0, Thiscall, PlayerObject, updatePlayerDartFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updatePlayerForce, , cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37bc60, Thiscall, PlayerObject, updatePlayerFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37e2b0, Thiscall, PlayerObject, updatePlayerGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c0c0, Thiscall, PlayerObject, updatePlayerJetpackFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, updatePlayerRobotFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c590, Thiscall, PlayerObject, updatePlayerRollFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37e230, Thiscall, PlayerObject, updatePlayerScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37be90, Thiscall, PlayerObject, updatePlayerShipFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerObject, updatePlayerSpiderFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updatePlayerSpriteExtra, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c7c0, Thiscall, PlayerObject, updatePlayerSwingFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37f0f0, Thiscall, PlayerObject, updateRobotAnimationSpeed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b230, Thiscall, PlayerObject, updateRotation, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36f0b0, Thiscall, PlayerObject, updateRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36ecd0, Thiscall, PlayerObject, updateShipRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateShipSpriteExtra, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateSlopeRotation, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateSlopeYVelocity, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateSpecial, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateStateVariables, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateStaticForce, , float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateStreakBlend, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, updateStreaks, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378de0, Thiscall, PlayerObject, updateSwingFire, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37ed60, Thiscall, PlayerObject, updateTimeMod, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, usingWallLimitedMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, yStartDown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, yStartUp, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366ee0, Thiscall, PlayerObject, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x380860, Thiscall, PlayerObject, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x380870, Thiscall, PlayerObject, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x380880, Thiscall, PlayerObject, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a650, Thiscall, PlayerObject, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x380890, Thiscall, PlayerObject, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x380790, Thiscall, PlayerObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37bb00, Thiscall, PlayerObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b320, Thiscall, PlayerObject, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3807a0, Thiscall, PlayerObject, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, setFlipY, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, getRealPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, getOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(PlayerObject, getObjectRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3808b0, Thiscall, PlayerObject, animationFinished, char const*)
		}
	};
}
