#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupRandAdvTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addChance
		#define GEODE_STATICS_addChance
		GEODE_AS_STATIC_FUNCTION(addChance) 
	#endif

	#ifndef GEODE_STATICS_addChanceToObject
		#define GEODE_STATICS_addChanceToObject
		GEODE_AS_STATIC_FUNCTION(addChanceToObject) 
	#endif

	#ifndef GEODE_STATICS_callRemoveFromGroup
		#define GEODE_STATICS_callRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(callRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddChance
		#define GEODE_STATICS_onAddChance
		GEODE_AS_STATIC_FUNCTION(onAddChance) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFromGroup
		#define GEODE_STATICS_onRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(onRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_removeGroupID
		#define GEODE_STATICS_removeGroupID
		GEODE_AS_STATIC_FUNCTION(removeGroupID) 
	#endif

	#ifndef GEODE_STATICS_removeGroupIDFromObject
		#define GEODE_STATICS_removeGroupIDFromObject
		GEODE_AS_STATIC_FUNCTION(removeGroupIDFromObject) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDButtons
		#define GEODE_STATICS_updateGroupIDButtons
		GEODE_AS_STATIC_FUNCTION(updateGroupIDButtons) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addChance
		#define GEODE_CONCEPT_CHECK_addChance
		GEODE_CONCEPT_FUNCTION_CHECK(addChance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addChanceToObject
		#define GEODE_CONCEPT_CHECK_addChanceToObject
		GEODE_CONCEPT_FUNCTION_CHECK(addChanceToObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_callRemoveFromGroup
		#define GEODE_CONCEPT_CHECK_callRemoveFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(callRemoveFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddChance
		#define GEODE_CONCEPT_CHECK_onAddChance
		GEODE_CONCEPT_FUNCTION_CHECK(onAddChance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveFromGroup
		#define GEODE_CONCEPT_CHECK_onRemoveFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGroupID
		#define GEODE_CONCEPT_CHECK_removeGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(removeGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGroupIDFromObject
		#define GEODE_CONCEPT_CHECK_removeGroupIDFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(removeGroupIDFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupIDButtons
		#define GEODE_CONCEPT_CHECK_updateGroupIDButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupIDButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupRandAdvTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupRandAdvTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupRandAdvTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupRandAdvTriggerPopup>>::ModifyBase;
		using Base = SetupRandAdvTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, create, , RandTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, addChance, , int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, addChanceToObject, , RandTriggerGameObject*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, callRemoveFromGroup, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, init, , RandTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, onAddChance, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, onRemoveFromGroup, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, removeGroupID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, removeGroupIDFromObject, , RandTriggerGameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, updateGroupIDButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupRandAdvTriggerPopup, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupRandAdvTriggerPopup, textChanged, CCTextInputNode*)
		}
	};
}
