#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_initWithAction
		#define GEODE_STATICS_initWithAction
		GEODE_AS_STATIC_FUNCTION(initWithAction) 
	#endif

	#ifndef GEODE_STATICS_getInnerAction
		#define GEODE_STATICS_getInnerAction
		GEODE_AS_STATIC_FUNCTION(getInnerAction) 
	#endif

	#ifndef GEODE_STATICS_getSpeed
		#define GEODE_STATICS_getSpeed
		GEODE_AS_STATIC_FUNCTION(getSpeed) 
	#endif

	#ifndef GEODE_STATICS_setInnerAction
		#define GEODE_STATICS_setInnerAction
		GEODE_AS_STATIC_FUNCTION(setInnerAction) 
	#endif

	#ifndef GEODE_STATICS_setSpeed
		#define GEODE_STATICS_setSpeed
		GEODE_AS_STATIC_FUNCTION(setSpeed) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_isDone
		#define GEODE_STATICS_isDone
		GEODE_AS_STATIC_FUNCTION(isDone) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_stop
		#define GEODE_STATICS_stop
		GEODE_AS_STATIC_FUNCTION(stop) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithAction
		#define GEODE_CONCEPT_CHECK_initWithAction
		GEODE_CONCEPT_FUNCTION_CHECK(initWithAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInnerAction
		#define GEODE_CONCEPT_CHECK_getInnerAction
		GEODE_CONCEPT_FUNCTION_CHECK(getInnerAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpeed
		#define GEODE_CONCEPT_CHECK_getSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(getSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInnerAction
		#define GEODE_CONCEPT_CHECK_setInnerAction
		GEODE_CONCEPT_FUNCTION_CHECK(setInnerAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpeed
		#define GEODE_CONCEPT_CHECK_setSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(setSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDone
		#define GEODE_CONCEPT_CHECK_isDone
		GEODE_CONCEPT_FUNCTION_CHECK(isDone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startWithTarget
		#define GEODE_CONCEPT_CHECK_startWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(startWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stop
		#define GEODE_CONCEPT_CHECK_stop
		GEODE_CONCEPT_FUNCTION_CHECK(stop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverse
		#define GEODE_CONCEPT_CHECK_reverse
		GEODE_CONCEPT_FUNCTION_CHECK(reverse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpeed> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpeed>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpeed>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpeed>>::ModifyBase;
		using Base = cocos2d::CCSpeed;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCActionInterval*, float>::func(&cocos2d::CCSpeed::create)), Default, cocos2d::CCSpeed, create, cocos2d::CCActionInterval*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCActionInterval*, float>::func(&cocos2d::CCSpeed::initWithAction)), Thiscall, cocos2d::CCSpeed, initWithAction, cocos2d::CCActionInterval*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpeed::getInnerAction)), Thiscall, cocos2d::CCSpeed, getInnerAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpeed::getSpeed)), Thiscall, cocos2d::CCSpeed, getSpeed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCActionInterval*>::func(&cocos2d::CCSpeed::setInnerAction)), Thiscall, cocos2d::CCSpeed, setInnerAction, cocos2d::CCActionInterval*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCSpeed::setSpeed)), Thiscall, cocos2d::CCSpeed, setSpeed, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCSpeed::copyWithZone)), Thiscall, cocos2d::CCSpeed, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpeed::isDone)), Thiscall, cocos2d::CCSpeed, isDone, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCSpeed::startWithTarget)), Thiscall, cocos2d::CCSpeed, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpeed::stop)), Thiscall, cocos2d::CCSpeed, stop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSpeed::step)), Thiscall, cocos2d::CCSpeed, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpeed::reverse)), Thiscall, cocos2d::CCSpeed, reverse, )
		}
	};
}
