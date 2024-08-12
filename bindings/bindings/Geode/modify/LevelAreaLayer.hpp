#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelAreaLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addGodRay
		#define GEODE_STATICS_addGodRay
		GEODE_AS_STATIC_FUNCTION(addGodRay) 
	#endif

	#ifndef GEODE_STATICS_addTorch
		#define GEODE_STATICS_addTorch
		GEODE_AS_STATIC_FUNCTION(addTorch) 
	#endif

	#ifndef GEODE_STATICS_fadeInsideTower
		#define GEODE_STATICS_fadeInsideTower
		GEODE_AS_STATIC_FUNCTION(fadeInsideTower) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onClickDoor
		#define GEODE_STATICS_onClickDoor
		GEODE_AS_STATIC_FUNCTION(onClickDoor) 
	#endif

	#ifndef GEODE_STATICS_onEnterTower
		#define GEODE_STATICS_onEnterTower
		GEODE_AS_STATIC_FUNCTION(onEnterTower) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_showDialog
		#define GEODE_STATICS_showDialog
		GEODE_AS_STATIC_FUNCTION(showDialog) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGodRay
		#define GEODE_CONCEPT_CHECK_addGodRay
		GEODE_CONCEPT_FUNCTION_CHECK(addGodRay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTorch
		#define GEODE_CONCEPT_CHECK_addTorch
		GEODE_CONCEPT_FUNCTION_CHECK(addTorch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInsideTower
		#define GEODE_CONCEPT_CHECK_fadeInsideTower
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInsideTower) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClickDoor
		#define GEODE_CONCEPT_CHECK_onClickDoor
		GEODE_CONCEPT_FUNCTION_CHECK(onClickDoor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnterTower
		#define GEODE_CONCEPT_CHECK_onEnterTower
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterTower) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showDialog
		#define GEODE_CONCEPT_CHECK_showDialog
		GEODE_CONCEPT_FUNCTION_CHECK(showDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelAreaLayer> : ModifyBase<ModifyDerive<Der, LevelAreaLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelAreaLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelAreaLayer>>::ModifyBase;
		using Base = LevelAreaLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, addGodRay, , float, float, float, float, float, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, addTorch, , cocos2d::CCNode*, cocos2d::CCPoint, int, float, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, fadeInsideTower, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, onBack, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, onClickDoor, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, onEnterTower, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, showDialog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelAreaLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b30e0, Thiscall, LevelAreaLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b2420, Thiscall, LevelAreaLayer, dialogClosed, DialogLayer*)
		}
	};
}
