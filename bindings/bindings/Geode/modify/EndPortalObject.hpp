#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EndPortalObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getSpawnPos
		#define GEODE_STATICS_getSpawnPos
		GEODE_AS_STATIC_FUNCTION(getSpawnPos) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateEndPos
		#define GEODE_STATICS_updateEndPos
		GEODE_AS_STATIC_FUNCTION(updateEndPos) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpawnPos
		#define GEODE_CONCEPT_CHECK_getSpawnPos
		GEODE_CONCEPT_FUNCTION_CHECK(getSpawnPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColors
		#define GEODE_CONCEPT_CHECK_updateColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEndPos
		#define GEODE_CONCEPT_CHECK_updateEndPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateEndPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EndPortalObject> : ModifyBase<ModifyDerive<Der, EndPortalObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EndPortalObject>>;
		using ModifyBase<ModifyDerive<Der, EndPortalObject>>::ModifyBase;
		using Base = EndPortalObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EndPortalObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x134050, Thiscall, EndPortalObject, getSpawnPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EndPortalObject, triggerObject, , GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EndPortalObject, updateColors, , cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1342c0, Thiscall, EndPortalObject, updateEndPos, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EndPortalObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EndPortalObject, setPosition, , cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EndPortalObject, setVisible, , bool)
		}
	};
}
