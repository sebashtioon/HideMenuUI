#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EnterEffectObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetEnterAnimValues
		#define GEODE_STATICS_resetEnterAnimValues
		GEODE_AS_STATIC_FUNCTION(resetEnterAnimValues) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetEnterAnimValues
		#define GEODE_CONCEPT_CHECK_resetEnterAnimValues
		GEODE_CONCEPT_FUNCTION_CHECK(resetEnterAnimValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
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
	struct ModifyDerive<Der, EnterEffectObject> : ModifyBase<ModifyDerive<Der, EnterEffectObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EnterEffectObject>>;
		using ModifyBase<ModifyDerive<Der, EnterEffectObject>>::ModifyBase;
		using Base = EnterEffectObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnterEffectObject, create, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnterEffectObject, init, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnterEffectObject, resetEnterAnimValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnterEffectObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnterEffectObject, customObjectSetup, , gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnterEffectObject, getSaveString, , GJBaseGameLayer*)
		}
	};
}
