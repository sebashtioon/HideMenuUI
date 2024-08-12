#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountSyncDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_syncAccountFinished
		#define GEODE_STATICS_syncAccountFinished
		GEODE_AS_STATIC_FUNCTION(syncAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_syncAccountFailed
		#define GEODE_STATICS_syncAccountFailed
		GEODE_AS_STATIC_FUNCTION(syncAccountFailed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_syncAccountFinished
		#define GEODE_CONCEPT_CHECK_syncAccountFinished
		GEODE_CONCEPT_FUNCTION_CHECK(syncAccountFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncAccountFailed
		#define GEODE_CONCEPT_CHECK_syncAccountFailed
		GEODE_CONCEPT_FUNCTION_CHECK(syncAccountFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountSyncDelegate> : ModifyBase<ModifyDerive<Der, GJAccountSyncDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountSyncDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountSyncDelegate>>::ModifyBase;
		using Base = GJAccountSyncDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJAccountSyncDelegate, syncAccountFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJAccountSyncDelegate, syncAccountFailed, , BackupAccountError, int)
		}
	};
}
