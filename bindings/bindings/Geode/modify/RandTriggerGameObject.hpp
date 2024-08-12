#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RandTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getRandomGroupID
		#define GEODE_STATICS_getRandomGroupID
		GEODE_AS_STATIC_FUNCTION(getRandomGroupID) 
	#endif

	#ifndef GEODE_STATICS_getTotalChance
		#define GEODE_STATICS_getTotalChance
		GEODE_AS_STATIC_FUNCTION(getTotalChance) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
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

	#ifndef GEODE_CONCEPT_CHECK_getRandomGroupID
		#define GEODE_CONCEPT_CHECK_getRandomGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalChance
		#define GEODE_CONCEPT_CHECK_getTotalChance
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalChance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
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
	struct ModifyDerive<Der, RandTriggerGameObject> : ModifyBase<ModifyDerive<Der, RandTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RandTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, RandTriggerGameObject>>::ModifyBase;
		using Base = RandTriggerGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RandTriggerGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RandTriggerGameObject, getRandomGroupID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RandTriggerGameObject, getTotalChance, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RandTriggerGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RandTriggerGameObject, triggerObject, , GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RandTriggerGameObject, customObjectSetup, , gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(RandTriggerGameObject, getSaveString, , GJBaseGameLayer*)
		}
	};
}
