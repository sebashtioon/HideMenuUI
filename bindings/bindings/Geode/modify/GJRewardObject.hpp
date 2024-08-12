#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRewardObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createItemUnlock
		#define GEODE_STATICS_createItemUnlock
		GEODE_AS_STATIC_FUNCTION(createItemUnlock) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isSpecialType
		#define GEODE_STATICS_isSpecialType
		GEODE_AS_STATIC_FUNCTION(isSpecialType) 
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

	#ifndef GEODE_CONCEPT_CHECK_createItemUnlock
		#define GEODE_CONCEPT_CHECK_createItemUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(createItemUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialType
		#define GEODE_CONCEPT_CHECK_isSpecialType
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialType) 
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
	struct ModifyDerive<Der, GJRewardObject> : ModifyBase<ModifyDerive<Der, GJRewardObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRewardObject>>;
		using ModifyBase<ModifyDerive<Der, GJRewardObject>>::ModifyBase;
		using Base = GJRewardObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardObject, create, , SpecialRewardItem, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardObject, createItemUnlock, , UnlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardObject, createWithCoder, , DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardObject, dataLoaded, , DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardObject, init, , SpecialRewardItem, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardObject, isSpecialType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e71d0, Thiscall, GJRewardObject, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardObject, canEncode, )
		}
	};
}
