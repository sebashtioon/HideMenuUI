#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FRequestProfilePage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_deleteSelected
		#define GEODE_STATICS_deleteSelected
		GEODE_AS_STATIC_FUNCTION(deleteSelected) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onSentRequests
		#define GEODE_STATICS_onSentRequests
		GEODE_AS_STATIC_FUNCTION(onSentRequests) 
	#endif

	#ifndef GEODE_STATICS_onToggleAllObjects
		#define GEODE_STATICS_onToggleAllObjects
		GEODE_AS_STATIC_FUNCTION(onToggleAllObjects) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_untoggleAll
		#define GEODE_STATICS_untoggleAll
		GEODE_AS_STATIC_FUNCTION(untoggleAll) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsLabel
		#define GEODE_STATICS_updateLevelsLabel
		GEODE_AS_STATIC_FUNCTION(updateLevelsLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_loadFRequestsFinished
		#define GEODE_STATICS_loadFRequestsFinished
		GEODE_AS_STATIC_FUNCTION(loadFRequestsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadFRequestsFailed
		#define GEODE_STATICS_loadFRequestsFailed
		GEODE_AS_STATIC_FUNCTION(loadFRequestsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_forceReloadRequests
		#define GEODE_STATICS_forceReloadRequests
		GEODE_AS_STATIC_FUNCTION(forceReloadRequests) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSelected
		#define GEODE_CONCEPT_CHECK_deleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCorrect
		#define GEODE_CONCEPT_CHECK_isCorrect
		GEODE_CONCEPT_FUNCTION_CHECK(isCorrect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPage
		#define GEODE_CONCEPT_CHECK_loadPage
		GEODE_CONCEPT_FUNCTION_CHECK(loadPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelected
		#define GEODE_CONCEPT_CHECK_onDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSentRequests
		#define GEODE_CONCEPT_CHECK_onSentRequests
		GEODE_CONCEPT_FUNCTION_CHECK(onSentRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleAllObjects
		#define GEODE_CONCEPT_CHECK_onToggleAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCommentsBrowser
		#define GEODE_CONCEPT_CHECK_setupCommentsBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_untoggleAll
		#define GEODE_CONCEPT_CHECK_untoggleAll
		GEODE_CONCEPT_FUNCTION_CHECK(untoggleAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelsLabel
		#define GEODE_CONCEPT_CHECK_updateLevelsLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelsLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageArrows
		#define GEODE_CONCEPT_CHECK_updatePageArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageArrows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFRequestsFinished
		#define GEODE_CONCEPT_CHECK_loadFRequestsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadFRequestsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFRequestsFailed
		#define GEODE_CONCEPT_CHECK_loadFRequestsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadFRequestsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceReloadRequests
		#define GEODE_CONCEPT_CHECK_forceReloadRequests
		GEODE_CONCEPT_FUNCTION_CHECK(forceReloadRequests) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FRequestProfilePage> : ModifyBase<ModifyDerive<Der, FRequestProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FRequestProfilePage>>;
		using ModifyBase<ModifyDerive<Der, FRequestProfilePage>>::ModifyBase;
		using Base = FRequestProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, create, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, deleteSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x139500, Thiscall, FRequestProfilePage, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, isCorrect, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, loadPage, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, onDeleteSelected, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, onNextPage, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, onPrevPage, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, onSentRequests, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, onToggleAllObjects, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, onUpdate, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b100, Thiscall, FRequestProfilePage, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, untoggleAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, updateLevelsLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, updatePageArrows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(FRequestProfilePage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13a960, Thiscall, FRequestProfilePage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13a740, Thiscall, FRequestProfilePage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13a970, Thiscall, FRequestProfilePage, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13a9c0, Thiscall, FRequestProfilePage, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13ab30, Thiscall, FRequestProfilePage, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b2a0, Thiscall, FRequestProfilePage, loadFRequestsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b320, Thiscall, FRequestProfilePage, loadFRequestsFailed, char const*, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b3c0, Thiscall, FRequestProfilePage, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b3a0, Thiscall, FRequestProfilePage, forceReloadRequests, bool)
		}
	};
}
