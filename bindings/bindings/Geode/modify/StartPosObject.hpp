#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/StartPosObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_loadSettingsFromString
		#define GEODE_STATICS_loadSettingsFromString
		GEODE_AS_STATIC_FUNCTION(loadSettingsFromString) 
	#endif

	#ifndef GEODE_STATICS_setSettings
		#define GEODE_STATICS_setSettings
		GEODE_AS_STATIC_FUNCTION(setSettings) 
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

	#ifndef GEODE_CONCEPT_CHECK_loadSettingsFromString
		#define GEODE_CONCEPT_CHECK_loadSettingsFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadSettingsFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSettings
		#define GEODE_CONCEPT_CHECK_setSettings
		GEODE_CONCEPT_FUNCTION_CHECK(setSettings) 
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
	struct ModifyDerive<Der, StartPosObject> : ModifyBase<ModifyDerive<Der, StartPosObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, StartPosObject>>;
		using ModifyBase<ModifyDerive<Der, StartPosObject>>::ModifyBase;
		using Base = StartPosObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(StartPosObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(StartPosObject, loadSettingsFromString, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(StartPosObject, setSettings, , LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(StartPosObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(StartPosObject, customObjectSetup, , gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(StartPosObject, getSaveString, , GJBaseGameLayer*)
		}
	};
}
