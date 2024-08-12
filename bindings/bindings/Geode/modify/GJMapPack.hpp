#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMapPack.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_completedMaps
		#define GEODE_STATICS_completedMaps
		GEODE_AS_STATIC_FUNCTION(completedMaps) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedMapPack
		#define GEODE_STATICS_hasCompletedMapPack
		GEODE_AS_STATIC_FUNCTION(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_STATICS_parsePackColors
		#define GEODE_STATICS_parsePackColors
		GEODE_AS_STATIC_FUNCTION(parsePackColors) 
	#endif

	#ifndef GEODE_STATICS_parsePackLevels
		#define GEODE_STATICS_parsePackLevels
		GEODE_AS_STATIC_FUNCTION(parsePackLevels) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedMaps
		#define GEODE_CONCEPT_CHECK_completedMaps
		GEODE_CONCEPT_FUNCTION_CHECK(completedMaps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedMapPack
		#define GEODE_CONCEPT_CHECK_hasCompletedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parsePackColors
		#define GEODE_CONCEPT_CHECK_parsePackColors
		GEODE_CONCEPT_FUNCTION_CHECK(parsePackColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parsePackLevels
		#define GEODE_CONCEPT_CHECK_parsePackLevels
		GEODE_CONCEPT_FUNCTION_CHECK(parsePackLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_totalMaps
		#define GEODE_CONCEPT_CHECK_totalMaps
		GEODE_CONCEPT_FUNCTION_CHECK(totalMaps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMapPack> : ModifyBase<ModifyDerive<Der, GJMapPack>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMapPack>>;
		using ModifyBase<ModifyDerive<Der, GJMapPack>>::ModifyBase;
		using Base = GJMapPack;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMapPack, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMapPack, create, , cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMapPack, completedMaps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168810, Thiscall, GJMapPack, hasCompletedMapPack, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMapPack, parsePackColors, , gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMapPack, parsePackLevels, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMapPack, totalMaps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMapPack, init, )
		}
	};
}
