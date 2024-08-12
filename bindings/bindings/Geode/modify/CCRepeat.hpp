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

	#ifndef GEODE_STATICS_setInnerAction
		#define GEODE_STATICS_setInnerAction
		GEODE_AS_STATIC_FUNCTION(setInnerAction) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
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

	#ifndef GEODE_CONCEPT_CHECK_setInnerAction
		#define GEODE_CONCEPT_CHECK_setInnerAction
		GEODE_CONCEPT_FUNCTION_CHECK(setInnerAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
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

	#ifndef GEODE_CONCEPT_CHECK_reverse
		#define GEODE_CONCEPT_CHECK_reverse
		GEODE_CONCEPT_FUNCTION_CHECK(reverse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCRepeat> : ModifyBase<ModifyDerive<Der, cocos2d::CCRepeat>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCRepeat>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCRepeat>>::ModifyBase;
		using Base = cocos2d::CCRepeat;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCFiniteTimeAction*, unsigned int>::func(&cocos2d::CCRepeat::create)), Default, cocos2d::CCRepeat, create, cocos2d::CCFiniteTimeAction*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCFiniteTimeAction*, unsigned int>::func(&cocos2d::CCRepeat::initWithAction)), Thiscall, cocos2d::CCRepeat, initWithAction, cocos2d::CCFiniteTimeAction*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCRepeat::getInnerAction)), Thiscall, cocos2d::CCRepeat, getInnerAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCFiniteTimeAction*>::func(&cocos2d::CCRepeat::setInnerAction)), Thiscall, cocos2d::CCRepeat, setInnerAction, cocos2d::CCFiniteTimeAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCRepeat::copyWithZone)), Thiscall, cocos2d::CCRepeat, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCRepeat::update)), Thiscall, cocos2d::CCRepeat, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCRepeat::isDone)), Thiscall, cocos2d::CCRepeat, isDone, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCRepeat::startWithTarget)), Thiscall, cocos2d::CCRepeat, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCRepeat::stop)), Thiscall, cocos2d::CCRepeat, stop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCRepeat::reverse)), Thiscall, cocos2d::CCRepeat, reverse, )
		}
	};
}
