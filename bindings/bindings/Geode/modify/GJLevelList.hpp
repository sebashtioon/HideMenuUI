#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJLevelList.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addLevelToList
		#define GEODE_STATICS_addLevelToList
		GEODE_AS_STATIC_FUNCTION(addLevelToList) 
	#endif

	#ifndef GEODE_STATICS_completedLevels
		#define GEODE_STATICS_completedLevels
		GEODE_AS_STATIC_FUNCTION(completedLevels) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_duplicateListLevels
		#define GEODE_STATICS_duplicateListLevels
		GEODE_AS_STATIC_FUNCTION(duplicateListLevels) 
	#endif

	#ifndef GEODE_STATICS_frameForListDifficulty
		#define GEODE_STATICS_frameForListDifficulty
		GEODE_AS_STATIC_FUNCTION(frameForListDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getListLevelsArray
		#define GEODE_STATICS_getListLevelsArray
		GEODE_AS_STATIC_FUNCTION(getListLevelsArray) 
	#endif

	#ifndef GEODE_STATICS_getUnpackedDescription
		#define GEODE_STATICS_getUnpackedDescription
		GEODE_AS_STATIC_FUNCTION(getUnpackedDescription) 
	#endif

	#ifndef GEODE_STATICS_handleStatsConflict
		#define GEODE_STATICS_handleStatsConflict
		GEODE_AS_STATIC_FUNCTION(handleStatsConflict) 
	#endif

	#ifndef GEODE_STATICS_hasMatchingLevels
		#define GEODE_STATICS_hasMatchingLevels
		GEODE_AS_STATIC_FUNCTION(hasMatchingLevels) 
	#endif

	#ifndef GEODE_STATICS_orderForLevel
		#define GEODE_STATICS_orderForLevel
		GEODE_AS_STATIC_FUNCTION(orderForLevel) 
	#endif

	#ifndef GEODE_STATICS_parseListLevels
		#define GEODE_STATICS_parseListLevels
		GEODE_AS_STATIC_FUNCTION(parseListLevels) 
	#endif

	#ifndef GEODE_STATICS_removeLevelFromList
		#define GEODE_STATICS_removeLevelFromList
		GEODE_AS_STATIC_FUNCTION(removeLevelFromList) 
	#endif

	#ifndef GEODE_STATICS_reorderLevel
		#define GEODE_STATICS_reorderLevel
		GEODE_AS_STATIC_FUNCTION(reorderLevel) 
	#endif

	#ifndef GEODE_STATICS_reorderLevelStep
		#define GEODE_STATICS_reorderLevelStep
		GEODE_AS_STATIC_FUNCTION(reorderLevelStep) 
	#endif

	#ifndef GEODE_STATICS_showListInfo
		#define GEODE_STATICS_showListInfo
		GEODE_AS_STATIC_FUNCTION(showListInfo) 
	#endif

	#ifndef GEODE_STATICS_totalLevels
		#define GEODE_STATICS_totalLevels
		GEODE_AS_STATIC_FUNCTION(totalLevels) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsString
		#define GEODE_STATICS_updateLevelsString
		GEODE_AS_STATIC_FUNCTION(updateLevelsString) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addLevelToList
		#define GEODE_CONCEPT_CHECK_addLevelToList
		GEODE_CONCEPT_FUNCTION_CHECK(addLevelToList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedLevels
		#define GEODE_CONCEPT_CHECK_completedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(completedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateListLevels
		#define GEODE_CONCEPT_CHECK_duplicateListLevels
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateListLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_frameForListDifficulty
		#define GEODE_CONCEPT_CHECK_frameForListDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(frameForListDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getListLevelsArray
		#define GEODE_CONCEPT_CHECK_getListLevelsArray
		GEODE_CONCEPT_FUNCTION_CHECK(getListLevelsArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUnpackedDescription
		#define GEODE_CONCEPT_CHECK_getUnpackedDescription
		GEODE_CONCEPT_FUNCTION_CHECK(getUnpackedDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleStatsConflict
		#define GEODE_CONCEPT_CHECK_handleStatsConflict
		GEODE_CONCEPT_FUNCTION_CHECK(handleStatsConflict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasMatchingLevels
		#define GEODE_CONCEPT_CHECK_hasMatchingLevels
		GEODE_CONCEPT_FUNCTION_CHECK(hasMatchingLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_orderForLevel
		#define GEODE_CONCEPT_CHECK_orderForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(orderForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseListLevels
		#define GEODE_CONCEPT_CHECK_parseListLevels
		GEODE_CONCEPT_FUNCTION_CHECK(parseListLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeLevelFromList
		#define GEODE_CONCEPT_CHECK_removeLevelFromList
		GEODE_CONCEPT_FUNCTION_CHECK(removeLevelFromList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderLevel
		#define GEODE_CONCEPT_CHECK_reorderLevel
		GEODE_CONCEPT_FUNCTION_CHECK(reorderLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderLevelStep
		#define GEODE_CONCEPT_CHECK_reorderLevelStep
		GEODE_CONCEPT_FUNCTION_CHECK(reorderLevelStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showListInfo
		#define GEODE_CONCEPT_CHECK_showListInfo
		GEODE_CONCEPT_FUNCTION_CHECK(showListInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_totalLevels
		#define GEODE_CONCEPT_CHECK_totalLevels
		GEODE_CONCEPT_FUNCTION_CHECK(totalLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelsString
		#define GEODE_CONCEPT_CHECK_updateLevelsString
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJLevelList> : ModifyBase<ModifyDerive<Der, GJLevelList>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJLevelList>>;
		using ModifyBase<ModifyDerive<Der, GJLevelList>>::ModifyBase;
		using Base = GJLevelList;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16de90, Default, GJLevelList, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16d5a0, Default, GJLevelList, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16e610, Thiscall, GJLevelList, addLevelToList, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16ef90, Thiscall, GJLevelList, completedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, createWithCoder, , DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16f3c0, Thiscall, GJLevelList, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, duplicateListLevels, , GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, frameForListDifficulty, , int, DifficultyIconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16e890, Thiscall, GJLevelList, getListLevelsArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16e2b0, Thiscall, GJLevelList, getUnpackedDescription, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, handleStatsConflict, , GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16e0a0, Thiscall, GJLevelList, hasMatchingLevels, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, orderForLevel, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, parseListLevels, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, removeLevelFromList, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16e7a0, Thiscall, GJLevelList, reorderLevel, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, reorderLevelStep, , int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16eff0, Thiscall, GJLevelList, showListInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, totalLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, updateLevelsString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16f6e0, Thiscall, GJLevelList, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJLevelList, init, )
		}
	};
}
