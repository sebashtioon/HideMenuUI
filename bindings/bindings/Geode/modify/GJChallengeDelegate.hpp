#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJChallengeDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_challengeStatusFinished
		#define GEODE_STATICS_challengeStatusFinished
		GEODE_AS_STATIC_FUNCTION(challengeStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_challengeStatusFailed
		#define GEODE_STATICS_challengeStatusFailed
		GEODE_AS_STATIC_FUNCTION(challengeStatusFailed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_challengeStatusFinished
		#define GEODE_CONCEPT_CHECK_challengeStatusFinished
		GEODE_CONCEPT_FUNCTION_CHECK(challengeStatusFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_challengeStatusFailed
		#define GEODE_CONCEPT_CHECK_challengeStatusFailed
		GEODE_CONCEPT_FUNCTION_CHECK(challengeStatusFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJChallengeDelegate> : ModifyBase<ModifyDerive<Der, GJChallengeDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJChallengeDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJChallengeDelegate>>::ModifyBase;
		using Base = GJChallengeDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJChallengeDelegate, challengeStatusFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJChallengeDelegate, challengeStatusFailed, )
		}
	};
}
