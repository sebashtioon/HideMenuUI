#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ForceBlockGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_calculateForceToTarget
		#define GEODE_STATICS_calculateForceToTarget
		GEODE_AS_STATIC_FUNCTION(calculateForceToTarget) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_calculateForceToTarget
		#define GEODE_CONCEPT_CHECK_calculateForceToTarget
		GEODE_CONCEPT_FUNCTION_CHECK(calculateForceToTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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
	struct ModifyDerive<Der, ForceBlockGameObject> : ModifyBase<ModifyDerive<Der, ForceBlockGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ForceBlockGameObject>>;
		using ModifyBase<ModifyDerive<Der, ForceBlockGameObject>>::ModifyBase;
		using Base = ForceBlockGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ForceBlockGameObject, create, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ForceBlockGameObject, calculateForceToTarget, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ForceBlockGameObject, init, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ForceBlockGameObject, customObjectSetup, , gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ForceBlockGameObject, getSaveString, , GJBaseGameLayer*)
		}
	};
}
