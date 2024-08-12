#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameStatsManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_accountIDForIcon
		#define GEODE_STATICS_accountIDForIcon
		GEODE_AS_STATIC_FUNCTION(accountIDForIcon) 
	#endif

	#ifndef GEODE_STATICS_addSimpleSpecialChestReward
		#define GEODE_STATICS_addSimpleSpecialChestReward
		GEODE_AS_STATIC_FUNCTION(addSimpleSpecialChestReward) 
	#endif

	#ifndef GEODE_STATICS_addSpecialRewardDescription
		#define GEODE_STATICS_addSpecialRewardDescription
		GEODE_AS_STATIC_FUNCTION(addSpecialRewardDescription) 
	#endif

	#ifndef GEODE_STATICS_addStoreItem
		#define GEODE_STATICS_addStoreItem
		GEODE_AS_STATIC_FUNCTION(addStoreItem) 
	#endif

	#ifndef GEODE_STATICS_areChallengesLoaded
		#define GEODE_STATICS_areChallengesLoaded
		GEODE_AS_STATIC_FUNCTION(areChallengesLoaded) 
	#endif

	#ifndef GEODE_STATICS_areRewardsLoaded
		#define GEODE_STATICS_areRewardsLoaded
		GEODE_AS_STATIC_FUNCTION(areRewardsLoaded) 
	#endif

	#ifndef GEODE_STATICS_awardCurrencyForLevel
		#define GEODE_STATICS_awardCurrencyForLevel
		GEODE_AS_STATIC_FUNCTION(awardCurrencyForLevel) 
	#endif

	#ifndef GEODE_STATICS_awardDiamondsForLevel
		#define GEODE_STATICS_awardDiamondsForLevel
		GEODE_AS_STATIC_FUNCTION(awardDiamondsForLevel) 
	#endif

	#ifndef GEODE_STATICS_awardSecretKey
		#define GEODE_STATICS_awardSecretKey
		GEODE_AS_STATIC_FUNCTION(awardSecretKey) 
	#endif

	#ifndef GEODE_STATICS_checkAchievement
		#define GEODE_STATICS_checkAchievement
		GEODE_AS_STATIC_FUNCTION(checkAchievement) 
	#endif

	#ifndef GEODE_STATICS_checkCoinAchievement
		#define GEODE_STATICS_checkCoinAchievement
		GEODE_AS_STATIC_FUNCTION(checkCoinAchievement) 
	#endif

	#ifndef GEODE_STATICS_checkCoinsForLevel
		#define GEODE_STATICS_checkCoinsForLevel
		GEODE_AS_STATIC_FUNCTION(checkCoinsForLevel) 
	#endif

	#ifndef GEODE_STATICS_claimListReward
		#define GEODE_STATICS_claimListReward
		GEODE_AS_STATIC_FUNCTION(claimListReward) 
	#endif

	#ifndef GEODE_STATICS_collectReward
		#define GEODE_STATICS_collectReward
		GEODE_AS_STATIC_FUNCTION(collectReward) 
	#endif

	#ifndef GEODE_STATICS_collectVideoReward
		#define GEODE_STATICS_collectVideoReward
		GEODE_AS_STATIC_FUNCTION(collectVideoReward) 
	#endif

	#ifndef GEODE_STATICS_completedChallenge
		#define GEODE_STATICS_completedChallenge
		GEODE_AS_STATIC_FUNCTION(completedChallenge) 
	#endif

	#ifndef GEODE_STATICS_completedDailyLevel
		#define GEODE_STATICS_completedDailyLevel
		GEODE_AS_STATIC_FUNCTION(completedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_completedDemonLevel
		#define GEODE_STATICS_completedDemonLevel
		GEODE_AS_STATIC_FUNCTION(completedDemonLevel) 
	#endif

	#ifndef GEODE_STATICS_completedLevel
		#define GEODE_STATICS_completedLevel
		GEODE_AS_STATIC_FUNCTION(completedLevel) 
	#endif

	#ifndef GEODE_STATICS_completedMapPack
		#define GEODE_STATICS_completedMapPack
		GEODE_AS_STATIC_FUNCTION(completedMapPack) 
	#endif

	#ifndef GEODE_STATICS_completedStarLevel
		#define GEODE_STATICS_completedStarLevel
		GEODE_AS_STATIC_FUNCTION(completedStarLevel) 
	#endif

	#ifndef GEODE_STATICS_countSecretChests
		#define GEODE_STATICS_countSecretChests
		GEODE_AS_STATIC_FUNCTION(countSecretChests) 
	#endif

	#ifndef GEODE_STATICS_countUnlockedSecretChests
		#define GEODE_STATICS_countUnlockedSecretChests
		GEODE_AS_STATIC_FUNCTION(countUnlockedSecretChests) 
	#endif

	#ifndef GEODE_STATICS_createSecretChestItems
		#define GEODE_STATICS_createSecretChestItems
		GEODE_AS_STATIC_FUNCTION(createSecretChestItems) 
	#endif

	#ifndef GEODE_STATICS_createSecretChestRewards
		#define GEODE_STATICS_createSecretChestRewards
		GEODE_AS_STATIC_FUNCTION(createSecretChestRewards) 
	#endif

	#ifndef GEODE_STATICS_createSpecialChestItems
		#define GEODE_STATICS_createSpecialChestItems
		GEODE_AS_STATIC_FUNCTION(createSpecialChestItems) 
	#endif

	#ifndef GEODE_STATICS_createStoreItems
		#define GEODE_STATICS_createStoreItems
		GEODE_AS_STATIC_FUNCTION(createStoreItems) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_generateItemUnlockableData
		#define GEODE_STATICS_generateItemUnlockableData
		GEODE_AS_STATIC_FUNCTION(generateItemUnlockableData) 
	#endif

	#ifndef GEODE_STATICS_getAwardedCurrencyForLevel
		#define GEODE_STATICS_getAwardedCurrencyForLevel
		GEODE_AS_STATIC_FUNCTION(getAwardedCurrencyForLevel) 
	#endif

	#ifndef GEODE_STATICS_getAwardedDiamondsForLevel
		#define GEODE_STATICS_getAwardedDiamondsForLevel
		GEODE_AS_STATIC_FUNCTION(getAwardedDiamondsForLevel) 
	#endif

	#ifndef GEODE_STATICS_getBaseCurrency
		#define GEODE_STATICS_getBaseCurrency
		GEODE_AS_STATIC_FUNCTION(getBaseCurrency) 
	#endif

	#ifndef GEODE_STATICS_getBaseCurrencyForLevel
		#define GEODE_STATICS_getBaseCurrencyForLevel
		GEODE_AS_STATIC_FUNCTION(getBaseCurrencyForLevel) 
	#endif

	#ifndef GEODE_STATICS_getBaseDiamonds
		#define GEODE_STATICS_getBaseDiamonds
		GEODE_AS_STATIC_FUNCTION(getBaseDiamonds) 
	#endif

	#ifndef GEODE_STATICS_getBonusDiamonds
		#define GEODE_STATICS_getBonusDiamonds
		GEODE_AS_STATIC_FUNCTION(getBonusDiamonds) 
	#endif

	#ifndef GEODE_STATICS_getChallenge
		#define GEODE_STATICS_getChallenge
		GEODE_AS_STATIC_FUNCTION(getChallenge) 
	#endif

	#ifndef GEODE_STATICS_getChallengeKey
		#define GEODE_STATICS_getChallengeKey
		GEODE_AS_STATIC_FUNCTION(getChallengeKey) 
	#endif

	#ifndef GEODE_STATICS_getCollectedCoinsForLevel
		#define GEODE_STATICS_getCollectedCoinsForLevel
		GEODE_AS_STATIC_FUNCTION(getCollectedCoinsForLevel) 
	#endif

	#ifndef GEODE_STATICS_getCompletedMapPacks
		#define GEODE_STATICS_getCompletedMapPacks
		GEODE_AS_STATIC_FUNCTION(getCompletedMapPacks) 
	#endif

	#ifndef GEODE_STATICS_getCurrencyKey
		#define GEODE_STATICS_getCurrencyKey
		GEODE_AS_STATIC_FUNCTION(getCurrencyKey) 
	#endif

	#ifndef GEODE_STATICS_getDailyLevelKey
		#define GEODE_STATICS_getDailyLevelKey
		GEODE_AS_STATIC_FUNCTION(getDailyLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getDemonLevelKey
		#define GEODE_STATICS_getDemonLevelKey
		GEODE_AS_STATIC_FUNCTION(getDemonLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getGauntletRewardKey
		#define GEODE_STATICS_getGauntletRewardKey
		GEODE_AS_STATIC_FUNCTION(getGauntletRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getItemKey
		#define GEODE_STATICS_getItemKey
		GEODE_AS_STATIC_FUNCTION(getItemKey) 
	#endif

	#ifndef GEODE_STATICS_getItemUnlockStateLite
		#define GEODE_STATICS_getItemUnlockStateLite
		GEODE_AS_STATIC_FUNCTION(getItemUnlockStateLite) 
	#endif

	#ifndef GEODE_STATICS_getLevelKey
		#define GEODE_STATICS_getLevelKey
		GEODE_AS_STATIC_FUNCTION(getLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getListRewardKey
		#define GEODE_STATICS_getListRewardKey
		GEODE_AS_STATIC_FUNCTION(getListRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getMapPackKey
		#define GEODE_STATICS_getMapPackKey
		GEODE_AS_STATIC_FUNCTION(getMapPackKey) 
	#endif

	#ifndef GEODE_STATICS_getNextVideoAdReward
		#define GEODE_STATICS_getNextVideoAdReward
		GEODE_AS_STATIC_FUNCTION(getNextVideoAdReward) 
	#endif

	#ifndef GEODE_STATICS_getPathRewardKey
		#define GEODE_STATICS_getPathRewardKey
		GEODE_AS_STATIC_FUNCTION(getPathRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getQueuedChallenge
		#define GEODE_STATICS_getQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(getQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_getRewardForSecretChest
		#define GEODE_STATICS_getRewardForSecretChest
		GEODE_AS_STATIC_FUNCTION(getRewardForSecretChest) 
	#endif

	#ifndef GEODE_STATICS_getRewardForSpecialChest
		#define GEODE_STATICS_getRewardForSpecialChest
		GEODE_AS_STATIC_FUNCTION(getRewardForSpecialChest) 
	#endif

	#ifndef GEODE_STATICS_getRewardItem
		#define GEODE_STATICS_getRewardItem
		GEODE_AS_STATIC_FUNCTION(getRewardItem) 
	#endif

	#ifndef GEODE_STATICS_getRewardKey
		#define GEODE_STATICS_getRewardKey
		GEODE_AS_STATIC_FUNCTION(getRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryQueuedChallenge
		#define GEODE_STATICS_getSecondaryQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(getSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_getSecretChestForItem
		#define GEODE_STATICS_getSecretChestForItem
		GEODE_AS_STATIC_FUNCTION(getSecretChestForItem) 
	#endif

	#ifndef GEODE_STATICS_getSecretCoinKey
		#define GEODE_STATICS_getSecretCoinKey
		GEODE_AS_STATIC_FUNCTION(getSecretCoinKey) 
	#endif

	#ifndef GEODE_STATICS_getSpecialChestKeyForItem
		#define GEODE_STATICS_getSpecialChestKeyForItem
		GEODE_AS_STATIC_FUNCTION(getSpecialChestKeyForItem) 
	#endif

	#ifndef GEODE_STATICS_getSpecialRewardDescription
		#define GEODE_STATICS_getSpecialRewardDescription
		GEODE_AS_STATIC_FUNCTION(getSpecialRewardDescription) 
	#endif

	#ifndef GEODE_STATICS_getSpecialUnlockDescription
		#define GEODE_STATICS_getSpecialUnlockDescription
		GEODE_AS_STATIC_FUNCTION(getSpecialUnlockDescription) 
	#endif

	#ifndef GEODE_STATICS_getStarLevelKey
		#define GEODE_STATICS_getStarLevelKey
		GEODE_AS_STATIC_FUNCTION(getStarLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getStat
		#define GEODE_STATICS_getStat
		GEODE_AS_STATIC_FUNCTION(getStat) 
	#endif

	#ifndef GEODE_STATICS_getStatFromKey
		#define GEODE_STATICS_getStatFromKey
		GEODE_AS_STATIC_FUNCTION(getStatFromKey) 
	#endif

	#ifndef GEODE_STATICS_getStoreItem
		#define GEODE_STATICS_getStoreItem
		GEODE_AS_STATIC_FUNCTION(getStoreItem) 
	#endif

	#ifndef GEODE_STATICS_getTotalCollectedCurrency
		#define GEODE_STATICS_getTotalCollectedCurrency
		GEODE_AS_STATIC_FUNCTION(getTotalCollectedCurrency) 
	#endif

	#ifndef GEODE_STATICS_getTotalCollectedDiamonds
		#define GEODE_STATICS_getTotalCollectedDiamonds
		GEODE_AS_STATIC_FUNCTION(getTotalCollectedDiamonds) 
	#endif

	#ifndef GEODE_STATICS_hasClaimedListReward
		#define GEODE_STATICS_hasClaimedListReward
		GEODE_AS_STATIC_FUNCTION(hasClaimedListReward) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedChallenge
		#define GEODE_STATICS_hasCompletedChallenge
		GEODE_AS_STATIC_FUNCTION(hasCompletedChallenge) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedDailyLevel
		#define GEODE_STATICS_hasCompletedDailyLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedDemonLevel
		#define GEODE_STATICS_hasCompletedDemonLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedDemonLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedGauntletLevel
		#define GEODE_STATICS_hasCompletedGauntletLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedGauntletLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedMapPack
		#define GEODE_STATICS_hasCompletedMapPack
		GEODE_AS_STATIC_FUNCTION(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedOnlineLevel
		#define GEODE_STATICS_hasCompletedOnlineLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedOnlineLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedStarLevel
		#define GEODE_STATICS_hasCompletedStarLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedStarLevel) 
	#endif

	#ifndef GEODE_STATICS_hasPendingUserCoin
		#define GEODE_STATICS_hasPendingUserCoin
		GEODE_AS_STATIC_FUNCTION(hasPendingUserCoin) 
	#endif

	#ifndef GEODE_STATICS_hasRewardBeenCollected
		#define GEODE_STATICS_hasRewardBeenCollected
		GEODE_AS_STATIC_FUNCTION(hasRewardBeenCollected) 
	#endif

	#ifndef GEODE_STATICS_hasSecretCoin
		#define GEODE_STATICS_hasSecretCoin
		GEODE_AS_STATIC_FUNCTION(hasSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_hasUserCoin
		#define GEODE_STATICS_hasUserCoin
		GEODE_AS_STATIC_FUNCTION(hasUserCoin) 
	#endif

	#ifndef GEODE_STATICS_incrementActivePath
		#define GEODE_STATICS_incrementActivePath
		GEODE_AS_STATIC_FUNCTION(incrementActivePath) 
	#endif

	#ifndef GEODE_STATICS_incrementChallenge
		#define GEODE_STATICS_incrementChallenge
		GEODE_AS_STATIC_FUNCTION(incrementChallenge) 
	#endif

	#ifndef GEODE_STATICS_incrementStat
		#define GEODE_STATICS_incrementStat
		GEODE_AS_STATIC_FUNCTION(incrementStat) 
	#endif

	#ifndef GEODE_STATICS_isGauntletChestUnlocked
		#define GEODE_STATICS_isGauntletChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isGauntletChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isItemEnabled
		#define GEODE_STATICS_isItemEnabled
		GEODE_AS_STATIC_FUNCTION(isItemEnabled) 
	#endif

	#ifndef GEODE_STATICS_isItemUnlocked
		#define GEODE_STATICS_isItemUnlocked
		GEODE_AS_STATIC_FUNCTION(isItemUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isPathChestUnlocked
		#define GEODE_STATICS_isPathChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isPathChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isPathUnlocked
		#define GEODE_STATICS_isPathUnlocked
		GEODE_AS_STATIC_FUNCTION(isPathUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isSecretChestUnlocked
		#define GEODE_STATICS_isSecretChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isSecretChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isSecretCoin
		#define GEODE_STATICS_isSecretCoin
		GEODE_AS_STATIC_FUNCTION(isSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_isSecretCoinValid
		#define GEODE_STATICS_isSecretCoinValid
		GEODE_AS_STATIC_FUNCTION(isSecretCoinValid) 
	#endif

	#ifndef GEODE_STATICS_isSpecialChestLiteUnlockable
		#define GEODE_STATICS_isSpecialChestLiteUnlockable
		GEODE_AS_STATIC_FUNCTION(isSpecialChestLiteUnlockable) 
	#endif

	#ifndef GEODE_STATICS_isSpecialChestUnlocked
		#define GEODE_STATICS_isSpecialChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isSpecialChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isStoreItemUnlocked
		#define GEODE_STATICS_isStoreItemUnlocked
		GEODE_AS_STATIC_FUNCTION(isStoreItemUnlocked) 
	#endif

	#ifndef GEODE_STATICS_keyCostForSecretChest
		#define GEODE_STATICS_keyCostForSecretChest
		GEODE_AS_STATIC_FUNCTION(keyCostForSecretChest) 
	#endif

	#ifndef GEODE_STATICS_logCoins
		#define GEODE_STATICS_logCoins
		GEODE_AS_STATIC_FUNCTION(logCoins) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsCompletedAndClaimed
		#define GEODE_STATICS_markLevelAsCompletedAndClaimed
		GEODE_AS_STATIC_FUNCTION(markLevelAsCompletedAndClaimed) 
	#endif

	#ifndef GEODE_STATICS_postLoadGameStats
		#define GEODE_STATICS_postLoadGameStats
		GEODE_AS_STATIC_FUNCTION(postLoadGameStats) 
	#endif

	#ifndef GEODE_STATICS_preProcessReward
		#define GEODE_STATICS_preProcessReward
		GEODE_AS_STATIC_FUNCTION(preProcessReward) 
	#endif

	#ifndef GEODE_STATICS_preSaveGameStats
		#define GEODE_STATICS_preSaveGameStats
		GEODE_AS_STATIC_FUNCTION(preSaveGameStats) 
	#endif

	#ifndef GEODE_STATICS_processChallengeQueue
		#define GEODE_STATICS_processChallengeQueue
		GEODE_AS_STATIC_FUNCTION(processChallengeQueue) 
	#endif

	#ifndef GEODE_STATICS_purchaseItem
		#define GEODE_STATICS_purchaseItem
		GEODE_AS_STATIC_FUNCTION(purchaseItem) 
	#endif

	#ifndef GEODE_STATICS_recountSpecialStats
		#define GEODE_STATICS_recountSpecialStats
		GEODE_AS_STATIC_FUNCTION(recountSpecialStats) 
	#endif

	#ifndef GEODE_STATICS_recountUserCoins
		#define GEODE_STATICS_recountUserCoins
		GEODE_AS_STATIC_FUNCTION(recountUserCoins) 
	#endif

	#ifndef GEODE_STATICS_registerRewardsFromItem
		#define GEODE_STATICS_registerRewardsFromItem
		GEODE_AS_STATIC_FUNCTION(registerRewardsFromItem) 
	#endif

	#ifndef GEODE_STATICS_removeChallenge
		#define GEODE_STATICS_removeChallenge
		GEODE_AS_STATIC_FUNCTION(removeChallenge) 
	#endif

	#ifndef GEODE_STATICS_removeErrorFromSpecialChests
		#define GEODE_STATICS_removeErrorFromSpecialChests
		GEODE_AS_STATIC_FUNCTION(removeErrorFromSpecialChests) 
	#endif

	#ifndef GEODE_STATICS_removeQueuedChallenge
		#define GEODE_STATICS_removeQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(removeQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_removeQueuedSecondaryChallenge
		#define GEODE_STATICS_removeQueuedSecondaryChallenge
		GEODE_AS_STATIC_FUNCTION(removeQueuedSecondaryChallenge) 
	#endif

	#ifndef GEODE_STATICS_resetChallengeTimer
		#define GEODE_STATICS_resetChallengeTimer
		GEODE_AS_STATIC_FUNCTION(resetChallengeTimer) 
	#endif

	#ifndef GEODE_STATICS_resetPreSync
		#define GEODE_STATICS_resetPreSync
		GEODE_AS_STATIC_FUNCTION(resetPreSync) 
	#endif

	#ifndef GEODE_STATICS_resetSpecialStatAchievements
		#define GEODE_STATICS_resetSpecialStatAchievements
		GEODE_AS_STATIC_FUNCTION(resetSpecialStatAchievements) 
	#endif

	#ifndef GEODE_STATICS_resetUserCoins
		#define GEODE_STATICS_resetUserCoins
		GEODE_AS_STATIC_FUNCTION(resetUserCoins) 
	#endif

	#ifndef GEODE_STATICS_restorePostSync
		#define GEODE_STATICS_restorePostSync
		GEODE_AS_STATIC_FUNCTION(restorePostSync) 
	#endif

	#ifndef GEODE_STATICS_setAwardedBonusKeys
		#define GEODE_STATICS_setAwardedBonusKeys
		GEODE_AS_STATIC_FUNCTION(setAwardedBonusKeys) 
	#endif

	#ifndef GEODE_STATICS_setStarsForMapPack
		#define GEODE_STATICS_setStarsForMapPack
		GEODE_AS_STATIC_FUNCTION(setStarsForMapPack) 
	#endif

	#ifndef GEODE_STATICS_setStat
		#define GEODE_STATICS_setStat
		GEODE_AS_STATIC_FUNCTION(setStat) 
	#endif

	#ifndef GEODE_STATICS_setStatIfHigher
		#define GEODE_STATICS_setStatIfHigher
		GEODE_AS_STATIC_FUNCTION(setStatIfHigher) 
	#endif

	#ifndef GEODE_STATICS_setupIconCredits
		#define GEODE_STATICS_setupIconCredits
		GEODE_AS_STATIC_FUNCTION(setupIconCredits) 
	#endif

	#ifndef GEODE_STATICS_shopTypeForItemID
		#define GEODE_STATICS_shopTypeForItemID
		GEODE_AS_STATIC_FUNCTION(shopTypeForItemID) 
	#endif

	#ifndef GEODE_STATICS_shouldAwardSecretKey
		#define GEODE_STATICS_shouldAwardSecretKey
		GEODE_AS_STATIC_FUNCTION(shouldAwardSecretKey) 
	#endif

	#ifndef GEODE_STATICS_starsForMapPack
		#define GEODE_STATICS_starsForMapPack
		GEODE_AS_STATIC_FUNCTION(starsForMapPack) 
	#endif

	#ifndef GEODE_STATICS_storeChallenge
		#define GEODE_STATICS_storeChallenge
		GEODE_AS_STATIC_FUNCTION(storeChallenge) 
	#endif

	#ifndef GEODE_STATICS_storeChallengeTime
		#define GEODE_STATICS_storeChallengeTime
		GEODE_AS_STATIC_FUNCTION(storeChallengeTime) 
	#endif

	#ifndef GEODE_STATICS_storePendingUserCoin
		#define GEODE_STATICS_storePendingUserCoin
		GEODE_AS_STATIC_FUNCTION(storePendingUserCoin) 
	#endif

	#ifndef GEODE_STATICS_storeQueuedChallenge
		#define GEODE_STATICS_storeQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(storeQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_storeRewardState
		#define GEODE_STATICS_storeRewardState
		GEODE_AS_STATIC_FUNCTION(storeRewardState) 
	#endif

	#ifndef GEODE_STATICS_storeSecondaryQueuedChallenge
		#define GEODE_STATICS_storeSecondaryQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(storeSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_storeSecretCoin
		#define GEODE_STATICS_storeSecretCoin
		GEODE_AS_STATIC_FUNCTION(storeSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_storeUserCoin
		#define GEODE_STATICS_storeUserCoin
		GEODE_AS_STATIC_FUNCTION(storeUserCoin) 
	#endif

	#ifndef GEODE_STATICS_tempClear
		#define GEODE_STATICS_tempClear
		GEODE_AS_STATIC_FUNCTION(tempClear) 
	#endif

	#ifndef GEODE_STATICS_toggleEnableItem
		#define GEODE_STATICS_toggleEnableItem
		GEODE_AS_STATIC_FUNCTION(toggleEnableItem) 
	#endif

	#ifndef GEODE_STATICS_tryFixPathBug
		#define GEODE_STATICS_tryFixPathBug
		GEODE_AS_STATIC_FUNCTION(tryFixPathBug) 
	#endif

	#ifndef GEODE_STATICS_trySelectActivePath
		#define GEODE_STATICS_trySelectActivePath
		GEODE_AS_STATIC_FUNCTION(trySelectActivePath) 
	#endif

	#ifndef GEODE_STATICS_uncompleteLevel
		#define GEODE_STATICS_uncompleteLevel
		GEODE_AS_STATIC_FUNCTION(uncompleteLevel) 
	#endif

	#ifndef GEODE_STATICS_unlockGauntletChest
		#define GEODE_STATICS_unlockGauntletChest
		GEODE_AS_STATIC_FUNCTION(unlockGauntletChest) 
	#endif

	#ifndef GEODE_STATICS_unlockPathChest
		#define GEODE_STATICS_unlockPathChest
		GEODE_AS_STATIC_FUNCTION(unlockPathChest) 
	#endif

	#ifndef GEODE_STATICS_unlockSecretChest
		#define GEODE_STATICS_unlockSecretChest
		GEODE_AS_STATIC_FUNCTION(unlockSecretChest) 
	#endif

	#ifndef GEODE_STATICS_unlockSpecialChest
		#define GEODE_STATICS_unlockSpecialChest
		GEODE_AS_STATIC_FUNCTION(unlockSpecialChest) 
	#endif

	#ifndef GEODE_STATICS_updateActivePath
		#define GEODE_STATICS_updateActivePath
		GEODE_AS_STATIC_FUNCTION(updateActivePath) 
	#endif

	#ifndef GEODE_STATICS_usernameForAccountID
		#define GEODE_STATICS_usernameForAccountID
		GEODE_AS_STATIC_FUNCTION(usernameForAccountID) 
	#endif

	#ifndef GEODE_STATICS_verifyPathAchievements
		#define GEODE_STATICS_verifyPathAchievements
		GEODE_AS_STATIC_FUNCTION(verifyPathAchievements) 
	#endif

	#ifndef GEODE_STATICS_verifyUserCoins
		#define GEODE_STATICS_verifyUserCoins
		GEODE_AS_STATIC_FUNCTION(verifyUserCoins) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accountIDForIcon
		#define GEODE_CONCEPT_CHECK_accountIDForIcon
		GEODE_CONCEPT_FUNCTION_CHECK(accountIDForIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSimpleSpecialChestReward
		#define GEODE_CONCEPT_CHECK_addSimpleSpecialChestReward
		GEODE_CONCEPT_FUNCTION_CHECK(addSimpleSpecialChestReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpecialRewardDescription
		#define GEODE_CONCEPT_CHECK_addSpecialRewardDescription
		GEODE_CONCEPT_FUNCTION_CHECK(addSpecialRewardDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addStoreItem
		#define GEODE_CONCEPT_CHECK_addStoreItem
		GEODE_CONCEPT_FUNCTION_CHECK(addStoreItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areChallengesLoaded
		#define GEODE_CONCEPT_CHECK_areChallengesLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(areChallengesLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areRewardsLoaded
		#define GEODE_CONCEPT_CHECK_areRewardsLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(areRewardsLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_awardCurrencyForLevel
		#define GEODE_CONCEPT_CHECK_awardCurrencyForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(awardCurrencyForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_awardDiamondsForLevel
		#define GEODE_CONCEPT_CHECK_awardDiamondsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(awardDiamondsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_awardSecretKey
		#define GEODE_CONCEPT_CHECK_awardSecretKey
		GEODE_CONCEPT_FUNCTION_CHECK(awardSecretKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkAchievement
		#define GEODE_CONCEPT_CHECK_checkAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(checkAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCoinAchievement
		#define GEODE_CONCEPT_CHECK_checkCoinAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(checkCoinAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCoinsForLevel
		#define GEODE_CONCEPT_CHECK_checkCoinsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(checkCoinsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimListReward
		#define GEODE_CONCEPT_CHECK_claimListReward
		GEODE_CONCEPT_FUNCTION_CHECK(claimListReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collectReward
		#define GEODE_CONCEPT_CHECK_collectReward
		GEODE_CONCEPT_FUNCTION_CHECK(collectReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collectVideoReward
		#define GEODE_CONCEPT_CHECK_collectVideoReward
		GEODE_CONCEPT_FUNCTION_CHECK(collectVideoReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedChallenge
		#define GEODE_CONCEPT_CHECK_completedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(completedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedDailyLevel
		#define GEODE_CONCEPT_CHECK_completedDailyLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedDailyLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedDemonLevel
		#define GEODE_CONCEPT_CHECK_completedDemonLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedDemonLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedLevel
		#define GEODE_CONCEPT_CHECK_completedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedMapPack
		#define GEODE_CONCEPT_CHECK_completedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(completedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedStarLevel
		#define GEODE_CONCEPT_CHECK_completedStarLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedStarLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countSecretChests
		#define GEODE_CONCEPT_CHECK_countSecretChests
		GEODE_CONCEPT_FUNCTION_CHECK(countSecretChests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countUnlockedSecretChests
		#define GEODE_CONCEPT_CHECK_countUnlockedSecretChests
		GEODE_CONCEPT_FUNCTION_CHECK(countUnlockedSecretChests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSecretChestItems
		#define GEODE_CONCEPT_CHECK_createSecretChestItems
		GEODE_CONCEPT_FUNCTION_CHECK(createSecretChestItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSecretChestRewards
		#define GEODE_CONCEPT_CHECK_createSecretChestRewards
		GEODE_CONCEPT_FUNCTION_CHECK(createSecretChestRewards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSpecialChestItems
		#define GEODE_CONCEPT_CHECK_createSpecialChestItems
		GEODE_CONCEPT_FUNCTION_CHECK(createSpecialChestItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStoreItems
		#define GEODE_CONCEPT_CHECK_createStoreItems
		GEODE_CONCEPT_FUNCTION_CHECK(createStoreItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateItemUnlockableData
		#define GEODE_CONCEPT_CHECK_generateItemUnlockableData
		GEODE_CONCEPT_FUNCTION_CHECK(generateItemUnlockableData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAwardedCurrencyForLevel
		#define GEODE_CONCEPT_CHECK_getAwardedCurrencyForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getAwardedCurrencyForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAwardedDiamondsForLevel
		#define GEODE_CONCEPT_CHECK_getAwardedDiamondsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getAwardedDiamondsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBaseCurrency
		#define GEODE_CONCEPT_CHECK_getBaseCurrency
		GEODE_CONCEPT_FUNCTION_CHECK(getBaseCurrency) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBaseCurrencyForLevel
		#define GEODE_CONCEPT_CHECK_getBaseCurrencyForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getBaseCurrencyForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBaseDiamonds
		#define GEODE_CONCEPT_CHECK_getBaseDiamonds
		GEODE_CONCEPT_FUNCTION_CHECK(getBaseDiamonds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBonusDiamonds
		#define GEODE_CONCEPT_CHECK_getBonusDiamonds
		GEODE_CONCEPT_FUNCTION_CHECK(getBonusDiamonds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChallenge
		#define GEODE_CONCEPT_CHECK_getChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(getChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChallengeKey
		#define GEODE_CONCEPT_CHECK_getChallengeKey
		GEODE_CONCEPT_FUNCTION_CHECK(getChallengeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCollectedCoinsForLevel
		#define GEODE_CONCEPT_CHECK_getCollectedCoinsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getCollectedCoinsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedMapPacks
		#define GEODE_CONCEPT_CHECK_getCompletedMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrencyKey
		#define GEODE_CONCEPT_CHECK_getCurrencyKey
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrencyKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDailyLevelKey
		#define GEODE_CONCEPT_CHECK_getDailyLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDailyLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDemonLevelKey
		#define GEODE_CONCEPT_CHECK_getDemonLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDemonLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntletRewardKey
		#define GEODE_CONCEPT_CHECK_getGauntletRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntletRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItemKey
		#define GEODE_CONCEPT_CHECK_getItemKey
		GEODE_CONCEPT_FUNCTION_CHECK(getItemKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItemUnlockState
		#define GEODE_CONCEPT_CHECK_getItemUnlockState
		GEODE_CONCEPT_FUNCTION_CHECK(getItemUnlockState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItemUnlockStateLite
		#define GEODE_CONCEPT_CHECK_getItemUnlockStateLite
		GEODE_CONCEPT_FUNCTION_CHECK(getItemUnlockStateLite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelKey
		#define GEODE_CONCEPT_CHECK_getLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getListRewardKey
		#define GEODE_CONCEPT_CHECK_getListRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getListRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMapPackKey
		#define GEODE_CONCEPT_CHECK_getMapPackKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMapPackKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextVideoAdReward
		#define GEODE_CONCEPT_CHECK_getNextVideoAdReward
		GEODE_CONCEPT_FUNCTION_CHECK(getNextVideoAdReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPathRewardKey
		#define GEODE_CONCEPT_CHECK_getPathRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getPathRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getQueuedChallenge
		#define GEODE_CONCEPT_CHECK_getQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(getQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardForSecretChest
		#define GEODE_CONCEPT_CHECK_getRewardForSecretChest
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardForSecretChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardForSpecialChest
		#define GEODE_CONCEPT_CHECK_getRewardForSpecialChest
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardForSpecialChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardItem
		#define GEODE_CONCEPT_CHECK_getRewardItem
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardKey
		#define GEODE_CONCEPT_CHECK_getRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryQueuedChallenge
		#define GEODE_CONCEPT_CHECK_getSecondaryQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecretChestForItem
		#define GEODE_CONCEPT_CHECK_getSecretChestForItem
		GEODE_CONCEPT_FUNCTION_CHECK(getSecretChestForItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecretCoinKey
		#define GEODE_CONCEPT_CHECK_getSecretCoinKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSecretCoinKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecialChestKeyForItem
		#define GEODE_CONCEPT_CHECK_getSpecialChestKeyForItem
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecialChestKeyForItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecialRewardDescription
		#define GEODE_CONCEPT_CHECK_getSpecialRewardDescription
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecialRewardDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecialUnlockDescription
		#define GEODE_CONCEPT_CHECK_getSpecialUnlockDescription
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecialUnlockDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStarLevelKey
		#define GEODE_CONCEPT_CHECK_getStarLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getStarLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStat
		#define GEODE_CONCEPT_CHECK_getStat
		GEODE_CONCEPT_FUNCTION_CHECK(getStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStatFromKey
		#define GEODE_CONCEPT_CHECK_getStatFromKey
		GEODE_CONCEPT_FUNCTION_CHECK(getStatFromKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoreItem
		#define GEODE_CONCEPT_CHECK_getStoreItem
		GEODE_CONCEPT_FUNCTION_CHECK(getStoreItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalCollectedCurrency
		#define GEODE_CONCEPT_CHECK_getTotalCollectedCurrency
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalCollectedCurrency) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalCollectedDiamonds
		#define GEODE_CONCEPT_CHECK_getTotalCollectedDiamonds
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalCollectedDiamonds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasClaimedListReward
		#define GEODE_CONCEPT_CHECK_hasClaimedListReward
		GEODE_CONCEPT_FUNCTION_CHECK(hasClaimedListReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedChallenge
		#define GEODE_CONCEPT_CHECK_hasCompletedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedDailyLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedDailyLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedDailyLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedDemonLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedDemonLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedDemonLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedGauntletLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedGauntletLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedGauntletLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedMainLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedMainLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedMainLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedMapPack
		#define GEODE_CONCEPT_CHECK_hasCompletedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedOnlineLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedOnlineLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedOnlineLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedStarLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedStarLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedStarLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasPendingUserCoin
		#define GEODE_CONCEPT_CHECK_hasPendingUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasPendingUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasRewardBeenCollected
		#define GEODE_CONCEPT_CHECK_hasRewardBeenCollected
		GEODE_CONCEPT_FUNCTION_CHECK(hasRewardBeenCollected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasSecretCoin
		#define GEODE_CONCEPT_CHECK_hasSecretCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasSecretCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasUserCoin
		#define GEODE_CONCEPT_CHECK_hasUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementActivePath
		#define GEODE_CONCEPT_CHECK_incrementActivePath
		GEODE_CONCEPT_FUNCTION_CHECK(incrementActivePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementChallenge
		#define GEODE_CONCEPT_CHECK_incrementChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(incrementChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementStat
		#define GEODE_CONCEPT_CHECK_incrementStat
		GEODE_CONCEPT_FUNCTION_CHECK(incrementStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGauntletChestUnlocked
		#define GEODE_CONCEPT_CHECK_isGauntletChestUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isGauntletChestUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isItemEnabled
		#define GEODE_CONCEPT_CHECK_isItemEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isItemEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isItemUnlocked
		#define GEODE_CONCEPT_CHECK_isItemUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isItemUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPathChestUnlocked
		#define GEODE_CONCEPT_CHECK_isPathChestUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isPathChestUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPathUnlocked
		#define GEODE_CONCEPT_CHECK_isPathUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isPathUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSecretChestUnlocked
		#define GEODE_CONCEPT_CHECK_isSecretChestUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isSecretChestUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSecretCoin
		#define GEODE_CONCEPT_CHECK_isSecretCoin
		GEODE_CONCEPT_FUNCTION_CHECK(isSecretCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSecretCoinValid
		#define GEODE_CONCEPT_CHECK_isSecretCoinValid
		GEODE_CONCEPT_FUNCTION_CHECK(isSecretCoinValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialChestLiteUnlockable
		#define GEODE_CONCEPT_CHECK_isSpecialChestLiteUnlockable
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialChestLiteUnlockable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialChestUnlocked
		#define GEODE_CONCEPT_CHECK_isSpecialChestUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialChestUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isStoreItemUnlocked
		#define GEODE_CONCEPT_CHECK_isStoreItemUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isStoreItemUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyCostForSecretChest
		#define GEODE_CONCEPT_CHECK_keyCostForSecretChest
		GEODE_CONCEPT_FUNCTION_CHECK(keyCostForSecretChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logCoins
		#define GEODE_CONCEPT_CHECK_logCoins
		GEODE_CONCEPT_FUNCTION_CHECK(logCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsCompletedAndClaimed
		#define GEODE_CONCEPT_CHECK_markLevelAsCompletedAndClaimed
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsCompletedAndClaimed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postLoadGameStats
		#define GEODE_CONCEPT_CHECK_postLoadGameStats
		GEODE_CONCEPT_FUNCTION_CHECK(postLoadGameStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preProcessReward
		#define GEODE_CONCEPT_CHECK_preProcessReward
		GEODE_CONCEPT_FUNCTION_CHECK(preProcessReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preSaveGameStats
		#define GEODE_CONCEPT_CHECK_preSaveGameStats
		GEODE_CONCEPT_FUNCTION_CHECK(preSaveGameStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processChallengeQueue
		#define GEODE_CONCEPT_CHECK_processChallengeQueue
		GEODE_CONCEPT_FUNCTION_CHECK(processChallengeQueue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purchaseItem
		#define GEODE_CONCEPT_CHECK_purchaseItem
		GEODE_CONCEPT_FUNCTION_CHECK(purchaseItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recountSpecialStats
		#define GEODE_CONCEPT_CHECK_recountSpecialStats
		GEODE_CONCEPT_FUNCTION_CHECK(recountSpecialStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recountUserCoins
		#define GEODE_CONCEPT_CHECK_recountUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(recountUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerRewardsFromItem
		#define GEODE_CONCEPT_CHECK_registerRewardsFromItem
		GEODE_CONCEPT_FUNCTION_CHECK(registerRewardsFromItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeChallenge
		#define GEODE_CONCEPT_CHECK_removeChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(removeChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeErrorFromSpecialChests
		#define GEODE_CONCEPT_CHECK_removeErrorFromSpecialChests
		GEODE_CONCEPT_FUNCTION_CHECK(removeErrorFromSpecialChests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeQueuedChallenge
		#define GEODE_CONCEPT_CHECK_removeQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(removeQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeQueuedSecondaryChallenge
		#define GEODE_CONCEPT_CHECK_removeQueuedSecondaryChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(removeQueuedSecondaryChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetChallengeTimer
		#define GEODE_CONCEPT_CHECK_resetChallengeTimer
		GEODE_CONCEPT_FUNCTION_CHECK(resetChallengeTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetPreSync
		#define GEODE_CONCEPT_CHECK_resetPreSync
		GEODE_CONCEPT_FUNCTION_CHECK(resetPreSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSpecialStatAchievements
		#define GEODE_CONCEPT_CHECK_resetSpecialStatAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(resetSpecialStatAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUserCoins
		#define GEODE_CONCEPT_CHECK_resetUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(resetUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restorePostSync
		#define GEODE_CONCEPT_CHECK_restorePostSync
		GEODE_CONCEPT_FUNCTION_CHECK(restorePostSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAwardedBonusKeys
		#define GEODE_CONCEPT_CHECK_setAwardedBonusKeys
		GEODE_CONCEPT_FUNCTION_CHECK(setAwardedBonusKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStarsForMapPack
		#define GEODE_CONCEPT_CHECK_setStarsForMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(setStarsForMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStat
		#define GEODE_CONCEPT_CHECK_setStat
		GEODE_CONCEPT_FUNCTION_CHECK(setStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStatIfHigher
		#define GEODE_CONCEPT_CHECK_setStatIfHigher
		GEODE_CONCEPT_FUNCTION_CHECK(setStatIfHigher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupIconCredits
		#define GEODE_CONCEPT_CHECK_setupIconCredits
		GEODE_CONCEPT_FUNCTION_CHECK(setupIconCredits) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shopTypeForItemID
		#define GEODE_CONCEPT_CHECK_shopTypeForItemID
		GEODE_CONCEPT_FUNCTION_CHECK(shopTypeForItemID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldAwardSecretKey
		#define GEODE_CONCEPT_CHECK_shouldAwardSecretKey
		GEODE_CONCEPT_FUNCTION_CHECK(shouldAwardSecretKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_starsForMapPack
		#define GEODE_CONCEPT_CHECK_starsForMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(starsForMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeChallenge
		#define GEODE_CONCEPT_CHECK_storeChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(storeChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeChallengeTime
		#define GEODE_CONCEPT_CHECK_storeChallengeTime
		GEODE_CONCEPT_FUNCTION_CHECK(storeChallengeTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storePendingUserCoin
		#define GEODE_CONCEPT_CHECK_storePendingUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(storePendingUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeQueuedChallenge
		#define GEODE_CONCEPT_CHECK_storeQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(storeQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeRewardState
		#define GEODE_CONCEPT_CHECK_storeRewardState
		GEODE_CONCEPT_FUNCTION_CHECK(storeRewardState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSecondaryQueuedChallenge
		#define GEODE_CONCEPT_CHECK_storeSecondaryQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(storeSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSecretCoin
		#define GEODE_CONCEPT_CHECK_storeSecretCoin
		GEODE_CONCEPT_FUNCTION_CHECK(storeSecretCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserCoin
		#define GEODE_CONCEPT_CHECK_storeUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tempClear
		#define GEODE_CONCEPT_CHECK_tempClear
		GEODE_CONCEPT_FUNCTION_CHECK(tempClear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEnableItem
		#define GEODE_CONCEPT_CHECK_toggleEnableItem
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEnableItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryFixPathBug
		#define GEODE_CONCEPT_CHECK_tryFixPathBug
		GEODE_CONCEPT_FUNCTION_CHECK(tryFixPathBug) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySelectActivePath
		#define GEODE_CONCEPT_CHECK_trySelectActivePath
		GEODE_CONCEPT_FUNCTION_CHECK(trySelectActivePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uncompleteLevel
		#define GEODE_CONCEPT_CHECK_uncompleteLevel
		GEODE_CONCEPT_FUNCTION_CHECK(uncompleteLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockGauntletChest
		#define GEODE_CONCEPT_CHECK_unlockGauntletChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockGauntletChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockPathChest
		#define GEODE_CONCEPT_CHECK_unlockPathChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockPathChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockSecretChest
		#define GEODE_CONCEPT_CHECK_unlockSecretChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockSecretChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockSpecialChest
		#define GEODE_CONCEPT_CHECK_unlockSpecialChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockSpecialChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateActivePath
		#define GEODE_CONCEPT_CHECK_updateActivePath
		GEODE_CONCEPT_FUNCTION_CHECK(updateActivePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_usernameForAccountID
		#define GEODE_CONCEPT_CHECK_usernameForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(usernameForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyPathAchievements
		#define GEODE_CONCEPT_CHECK_verifyPathAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(verifyPathAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyUserCoins
		#define GEODE_CONCEPT_CHECK_verifyUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(verifyUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameStatsManager> : ModifyBase<ModifyDerive<Der, GameStatsManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameStatsManager>>;
		using ModifyBase<ModifyDerive<Der, GameStatsManager>>::ModifyBase;
		using Base = GameStatsManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c6e60, Default, GameStatsManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, accountIDForIcon, , int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, addSimpleSpecialChestReward, , gd::string, UnlockType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, addSpecialRewardDescription, , gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ca0b0, Thiscall, GameStatsManager, addStoreItem, int, int, int, int, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, areChallengesLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, areRewardsLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6500, Thiscall, GameStatsManager, awardCurrencyForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, awardDiamondsForLevel, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, awardSecretKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1cb460, Thiscall, GameStatsManager, checkAchievement, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d3430, Thiscall, GameStatsManager, checkCoinAchievement, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, checkCoinsForLevel, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, claimListReward, , GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, collectReward, , GJRewardType, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, collectVideoReward, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, completedChallenge, , GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8680, Thiscall, GameStatsManager, completedDailyLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, completedDemonLevel, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, completedLevel, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d49a0, Thiscall, GameStatsManager, completedMapPack, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, completedStarLevel, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, countSecretChests, , GJRewardType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, countUnlockedSecretChests, , GJRewardType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, createSecretChestItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, createSecretChestRewards, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dae20, Thiscall, GameStatsManager, createSpecialChestItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c78e0, Thiscall, GameStatsManager, createStoreItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e5c00, Thiscall, GameStatsManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e5950, Thiscall, GameStatsManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, generateItemUnlockableData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d62c0, Thiscall, GameStatsManager, getAwardedCurrencyForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getAwardedDiamondsForLevel, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getBaseCurrency, , int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6020, Thiscall, GameStatsManager, getBaseCurrencyForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getBaseDiamonds, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getBonusDiamonds, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d76f0, Thiscall, GameStatsManager, getChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getChallengeKey, , GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d37d0, Thiscall, GameStatsManager, getCollectedCoinsForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d4cf0, Thiscall, GameStatsManager, getCompletedMapPacks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getCurrencyKey, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getDailyLevelKey, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getDemonLevelKey, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1de640, Thiscall, GameStatsManager, getGauntletRewardKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d7230, Thiscall, GameStatsManager, getItemKey, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameStatsManager, getItemUnlockState, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getItemUnlockStateLite, , int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameStatsManager, getLevelKey, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d3950, Thiscall, GameStatsManager, getLevelKey, int, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getListRewardKey, , GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getMapPackKey, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getNextVideoAdReward, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getPathRewardKey, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d77c0, Thiscall, GameStatsManager, getQueuedChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getRewardForSecretChest, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getRewardForSpecialChest, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getRewardItem, , GJRewardType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getRewardKey, , GJRewardType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getSecondaryQueuedChallenge, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getSecretChestForItem, , int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getSecretCoinKey, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getSpecialChestKeyForItem, , int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getSpecialRewardDescription, , gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1de7b0, Thiscall, GameStatsManager, getSpecialUnlockDescription, int, UnlockType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getStarLevelKey, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1cb1d0, Thiscall, GameStatsManager, getStat, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getStatFromKey, , StatKey)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getStoreItem, , int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, getStoreItem, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8e50, Thiscall, GameStatsManager, getTotalCollectedCurrency, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d9720, Thiscall, GameStatsManager, getTotalCollectedDiamonds, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d84b0, Thiscall, GameStatsManager, hasClaimedListReward, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, hasCompletedChallenge, , GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8590, Thiscall, GameStatsManager, hasCompletedDailyLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, hasCompletedDemonLevel, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d3d70, Thiscall, GameStatsManager, hasCompletedGauntletLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameStatsManager, hasCompletedLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameStatsManager, hasCompletedMainLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, hasCompletedMapPack, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d3c40, Thiscall, GameStatsManager, hasCompletedOnlineLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, hasCompletedStarLevel, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d5a00, Thiscall, GameStatsManager, hasPendingUserCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, hasRewardBeenCollected, , GJRewardType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d5ac0, Thiscall, GameStatsManager, hasSecretCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d5880, Thiscall, GameStatsManager, hasUserCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, incrementActivePath, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d7970, Thiscall, GameStatsManager, incrementChallenge, GJChallengeType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ca5b0, Thiscall, GameStatsManager, incrementStat, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, incrementStat, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, isGauntletChestUnlocked, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, isItemEnabled, , UnlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dabe0, Thiscall, GameStatsManager, isItemUnlocked, UnlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, isPathChestUnlocked, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, isPathUnlocked, , StatKey)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, isSecretChestUnlocked, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, isSecretCoin, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, isSecretCoinValid, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, isSpecialChestLiteUnlockable, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1de960, Thiscall, GameStatsManager, isSpecialChestUnlocked, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dec10, Thiscall, GameStatsManager, isStoreItemUnlocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, keyCostForSecretChest, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, logCoins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, markLevelAsCompletedAndClaimed, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e6d40, Thiscall, GameStatsManager, postLoadGameStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, preProcessReward, , GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e6f10, Thiscall, GameStatsManager, preSaveGameStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d81d0, Thiscall, GameStatsManager, processChallengeQueue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, purchaseItem, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d9a20, Thiscall, GameStatsManager, recountSpecialStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, recountUserCoins, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, registerRewardsFromItem, , GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, removeChallenge, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e6c00, Thiscall, GameStatsManager, removeErrorFromSpecialChests, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, removeQueuedChallenge, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, removeQueuedSecondaryChallenge, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, resetChallengeTimer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, resetPreSync, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, resetSpecialStatAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, resetUserCoins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, restorePostSync, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, setAwardedBonusKeys, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d4c00, Thiscall, GameStatsManager, setStarsForMapPack, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1cb2f0, Thiscall, GameStatsManager, setStat, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, setStatIfHigher, , char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ba150, Thiscall, GameStatsManager, setupIconCredits, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, shopTypeForItemID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, shouldAwardSecretKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, starsForMapPack, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, storeChallenge, , int, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, storeChallengeTime, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, storePendingUserCoin, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, storeQueuedChallenge, , int, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, storeRewardState, , GJRewardType, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, storeSecondaryQueuedChallenge, , int, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, storeSecretCoin, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, storeUserCoin, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, tempClear, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dad90, Thiscall, GameStatsManager, toggleEnableItem, UnlockType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ca870, Thiscall, GameStatsManager, tryFixPathBug, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ca740, Thiscall, GameStatsManager, trySelectActivePath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d4740, Thiscall, GameStatsManager, uncompleteLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, unlockGauntletChest, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, unlockPathChest, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, unlockSecretChest, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, unlockSpecialChest, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, updateActivePath, , StatKey)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GameStatsManager, usernameForAccountID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1caf70, Thiscall, GameStatsManager, verifyPathAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d57a0, Thiscall, GameStatsManager, verifyUserCoins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c7280, Thiscall, GameStatsManager, init, )
		}
	};
}
