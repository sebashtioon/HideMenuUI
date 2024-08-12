#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ObjectToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_allKeys
		#define GEODE_STATICS_allKeys
		GEODE_AS_STATIC_FUNCTION(allKeys) 
	#endif

	#ifndef GEODE_STATICS_gridNodeSizeForKey
		#define GEODE_STATICS_gridNodeSizeForKey
		GEODE_AS_STATIC_FUNCTION(gridNodeSizeForKey) 
	#endif

	#ifndef GEODE_STATICS_perspectiveBlockFrame
		#define GEODE_STATICS_perspectiveBlockFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveBlockFrame) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allKeys
		#define GEODE_CONCEPT_CHECK_allKeys
		GEODE_CONCEPT_FUNCTION_CHECK(allKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gridNodeSizeForKey
		#define GEODE_CONCEPT_CHECK_gridNodeSizeForKey
		GEODE_CONCEPT_FUNCTION_CHECK(gridNodeSizeForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_intKeyToFrame
		#define GEODE_CONCEPT_CHECK_intKeyToFrame
		GEODE_CONCEPT_FUNCTION_CHECK(intKeyToFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_perspectiveBlockFrame
		#define GEODE_CONCEPT_CHECK_perspectiveBlockFrame
		GEODE_CONCEPT_FUNCTION_CHECK(perspectiveBlockFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ObjectToolbox> : ModifyBase<ModifyDerive<Der, ObjectToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ObjectToolbox>>;
		using ModifyBase<ModifyDerive<Der, ObjectToolbox>>::ModifyBase;
		using Base = ObjectToolbox;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x327460, Default, ObjectToolbox, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ObjectToolbox, allKeys, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34f350, Thiscall, ObjectToolbox, gridNodeSizeForKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ObjectToolbox, intKeyToFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ObjectToolbox, perspectiveBlockFrame, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ObjectToolbox, init, )
		}
	};
}
