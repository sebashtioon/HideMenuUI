#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/StatsCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getTitleFromKey
		#define GEODE_STATICS_getTitleFromKey
		GEODE_AS_STATIC_FUNCTION(getTitleFromKey) 
	#endif

	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getTitleFromKey
		#define GEODE_CONCEPT_CHECK_getTitleFromKey
		GEODE_CONCEPT_FUNCTION_CHECK(getTitleFromKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromObject
		#define GEODE_CONCEPT_CHECK_loadFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, StatsCell> : ModifyBase<ModifyDerive<Der, StatsCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, StatsCell>>;
		using ModifyBase<ModifyDerive<Der, StatsCell>>::ModifyBase;
		using Base = StatsCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(StatsCell, getTitleFromKey, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb0a20, Thiscall, StatsCell, loadFromObject, StatsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(StatsCell, updateBGColor, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(StatsCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xabd00, Thiscall, StatsCell, draw, )
		}
	};
}
