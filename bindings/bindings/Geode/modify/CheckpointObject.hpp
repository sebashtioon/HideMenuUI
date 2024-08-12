#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CheckpointObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getObject
		#define GEODE_STATICS_getObject
		GEODE_AS_STATIC_FUNCTION(getObject) 
	#endif

	#ifndef GEODE_STATICS_setObject
		#define GEODE_STATICS_setObject
		GEODE_AS_STATIC_FUNCTION(setObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObject
		#define GEODE_CONCEPT_CHECK_getObject
		GEODE_CONCEPT_FUNCTION_CHECK(getObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObject
		#define GEODE_CONCEPT_CHECK_setObject
		GEODE_CONCEPT_FUNCTION_CHECK(setObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CheckpointObject> : ModifyBase<ModifyDerive<Der, CheckpointObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CheckpointObject>>;
		using ModifyBase<ModifyDerive<Der, CheckpointObject>>::ModifyBase;
		using Base = CheckpointObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x381f50, Thiscall, CheckpointObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CheckpointObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CheckpointObject, getObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CheckpointObject, setObject, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x767c0, Thiscall, CheckpointObject, init, )
		}
	};
}
