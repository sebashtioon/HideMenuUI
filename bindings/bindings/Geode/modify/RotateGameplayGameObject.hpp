#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RotateGameplayGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_updateGameplayRotation
		#define GEODE_STATICS_updateGameplayRotation
		GEODE_AS_STATIC_FUNCTION(updateGameplayRotation) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateStartValues
		#define GEODE_STATICS_updateStartValues
		GEODE_AS_STATIC_FUNCTION(updateStartValues) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGameplayRotation
		#define GEODE_CONCEPT_CHECK_updateGameplayRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateGameplayRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStartValues
		#define GEODE_CONCEPT_CHECK_updateStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RotateGameplayGameObject> : ModifyBase<ModifyDerive<Der, RotateGameplayGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RotateGameplayGameObject>>;
		using ModifyBase<ModifyDerive<Der, RotateGameplayGameObject>>::ModifyBase;
		using Base = RotateGameplayGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RotateGameplayGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RotateGameplayGameObject, updateGameplayRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RotateGameplayGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RotateGameplayGameObject, updateStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RotateGameplayGameObject, customObjectSetup, , gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RotateGameplayGameObject, getSaveString, , GJBaseGameLayer*)
		}
	};
}
