#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODLevelVisualizer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_updateVisualizer
		#define GEODE_STATICS_updateVisualizer
		GEODE_AS_STATIC_FUNCTION(updateVisualizer) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisualizer
		#define GEODE_CONCEPT_CHECK_updateVisualizer
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisualizer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMODLevelVisualizer> : ModifyBase<ModifyDerive<Der, FMODLevelVisualizer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODLevelVisualizer>>;
		using ModifyBase<ModifyDerive<Der, FMODLevelVisualizer>>::ModifyBase;
		using Base = FMODLevelVisualizer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28c5d0, Default, FMODLevelVisualizer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28cb10, Thiscall, FMODLevelVisualizer, updateVisualizer, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FMODLevelVisualizer, init, )
		}
	};
}
