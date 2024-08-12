#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRotationControlDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_angleChanged
		#define GEODE_STATICS_angleChanged
		GEODE_AS_STATIC_FUNCTION(angleChanged) 
	#endif

	#ifndef GEODE_STATICS_angleChangeBegin
		#define GEODE_STATICS_angleChangeBegin
		GEODE_AS_STATIC_FUNCTION(angleChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_angleChangeEnded
		#define GEODE_STATICS_angleChangeEnded
		GEODE_AS_STATIC_FUNCTION(angleChangeEnded) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_angleChanged
		#define GEODE_CONCEPT_CHECK_angleChanged
		GEODE_CONCEPT_FUNCTION_CHECK(angleChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_angleChangeBegin
		#define GEODE_CONCEPT_CHECK_angleChangeBegin
		GEODE_CONCEPT_FUNCTION_CHECK(angleChangeBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_angleChangeEnded
		#define GEODE_CONCEPT_CHECK_angleChangeEnded
		GEODE_CONCEPT_FUNCTION_CHECK(angleChangeEnded) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRotationControlDelegate> : ModifyBase<ModifyDerive<Der, GJRotationControlDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRotationControlDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJRotationControlDelegate>>::ModifyBase;
		using Base = GJRotationControlDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRotationControlDelegate, angleChanged, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRotationControlDelegate, angleChangeBegin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRotationControlDelegate, angleChangeEnded, )
		}
	};
}
