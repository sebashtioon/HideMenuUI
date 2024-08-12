#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRewardDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_rewardsStatusFinished
		#define GEODE_STATICS_rewardsStatusFinished
		GEODE_AS_STATIC_FUNCTION(rewardsStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_rewardsStatusFailed
		#define GEODE_STATICS_rewardsStatusFailed
		GEODE_AS_STATIC_FUNCTION(rewardsStatusFailed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_rewardsStatusFinished
		#define GEODE_CONCEPT_CHECK_rewardsStatusFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rewardsStatusFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardsStatusFailed
		#define GEODE_CONCEPT_CHECK_rewardsStatusFailed
		GEODE_CONCEPT_FUNCTION_CHECK(rewardsStatusFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRewardDelegate> : ModifyBase<ModifyDerive<Der, GJRewardDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRewardDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJRewardDelegate>>::ModifyBase;
		using Base = GJRewardDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardDelegate, rewardsStatusFinished, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRewardDelegate, rewardsStatusFailed, )
		}
	};
}
