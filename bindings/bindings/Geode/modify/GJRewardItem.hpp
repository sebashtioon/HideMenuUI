#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRewardItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createSpecial
		#define GEODE_STATICS_createSpecial
		GEODE_AS_STATIC_FUNCTION(createSpecial) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_createWithObject
		#define GEODE_STATICS_createWithObject
		GEODE_AS_STATIC_FUNCTION(createWithObject) 
	#endif

	#ifndef GEODE_STATICS_createWithObjects
		#define GEODE_STATICS_createWithObjects
		GEODE_AS_STATIC_FUNCTION(createWithObjects) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_getNextShardType
		#define GEODE_STATICS_getNextShardType
		GEODE_AS_STATIC_FUNCTION(getNextShardType) 
	#endif

	#ifndef GEODE_STATICS_getRandomNonMaxShardType
		#define GEODE_STATICS_getRandomNonMaxShardType
		GEODE_AS_STATIC_FUNCTION(getRandomNonMaxShardType) 
	#endif

	#ifndef GEODE_STATICS_getRandomShardType
		#define GEODE_STATICS_getRandomShardType
		GEODE_AS_STATIC_FUNCTION(getRandomShardType) 
	#endif

	#ifndef GEODE_STATICS_getRewardCount
		#define GEODE_STATICS_getRewardCount
		GEODE_AS_STATIC_FUNCTION(getRewardCount) 
	#endif

	#ifndef GEODE_STATICS_getRewardObjectForType
		#define GEODE_STATICS_getRewardObjectForType
		GEODE_AS_STATIC_FUNCTION(getRewardObjectForType) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isShardType
		#define GEODE_STATICS_isShardType
		GEODE_AS_STATIC_FUNCTION(isShardType) 
	#endif

	#ifndef GEODE_STATICS_rewardItemToStat
		#define GEODE_STATICS_rewardItemToStat
		GEODE_AS_STATIC_FUNCTION(rewardItemToStat) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSpecial
		#define GEODE_CONCEPT_CHECK_createSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(createSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithObject
		#define GEODE_CONCEPT_CHECK_createWithObject
		GEODE_CONCEPT_FUNCTION_CHECK(createWithObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithObjects
		#define GEODE_CONCEPT_CHECK_createWithObjects
		GEODE_CONCEPT_FUNCTION_CHECK(createWithObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextShardType
		#define GEODE_CONCEPT_CHECK_getNextShardType
		GEODE_CONCEPT_FUNCTION_CHECK(getNextShardType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRandomNonMaxShardType
		#define GEODE_CONCEPT_CHECK_getRandomNonMaxShardType
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomNonMaxShardType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRandomShardType
		#define GEODE_CONCEPT_CHECK_getRandomShardType
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomShardType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardCount
		#define GEODE_CONCEPT_CHECK_getRewardCount
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardObjectForType
		#define GEODE_CONCEPT_CHECK_getRewardObjectForType
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardObjectForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isShardType
		#define GEODE_CONCEPT_CHECK_isShardType
		GEODE_CONCEPT_FUNCTION_CHECK(isShardType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardItemToStat
		#define GEODE_CONCEPT_CHECK_rewardItemToStat
		GEODE_CONCEPT_FUNCTION_CHECK(rewardItemToStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRewardItem> : ModifyBase<ModifyDerive<Der, GJRewardItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRewardItem>>;
		using ModifyBase<ModifyDerive<Der, GJRewardItem>>::ModifyBase;
		using Base = GJRewardItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, create, , int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, createSpecial, , GJRewardType, int, int, SpecialRewardItem, int, SpecialRewardItem, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, createWithCoder, , DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, createWithObject, , GJRewardType, GJRewardObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, createWithObjects, , GJRewardType, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, dataLoaded, , DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, getNextShardType, , SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, getRandomNonMaxShardType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, getRandomShardType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, getRewardCount, , SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, getRewardObjectForType, , SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, init, , int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, isShardType, , SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, rewardItemToStat, , SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e7b00, Thiscall, GJRewardItem, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardItem, canEncode, )
		}
	};
}
