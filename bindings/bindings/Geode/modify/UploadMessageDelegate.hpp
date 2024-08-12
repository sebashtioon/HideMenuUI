#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadMessageDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_uploadMessageFinished
		#define GEODE_STATICS_uploadMessageFinished
		GEODE_AS_STATIC_FUNCTION(uploadMessageFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadMessageFailed
		#define GEODE_STATICS_uploadMessageFailed
		GEODE_AS_STATIC_FUNCTION(uploadMessageFailed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_uploadMessageFinished
		#define GEODE_CONCEPT_CHECK_uploadMessageFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadMessageFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadMessageFailed
		#define GEODE_CONCEPT_CHECK_uploadMessageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadMessageFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadMessageDelegate> : ModifyBase<ModifyDerive<Der, UploadMessageDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadMessageDelegate>>;
		using ModifyBase<ModifyDerive<Der, UploadMessageDelegate>>::ModifyBase;
		using Base = UploadMessageDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(UploadMessageDelegate, uploadMessageFinished, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(UploadMessageDelegate, uploadMessageFailed, , int)
		}
	};
}
