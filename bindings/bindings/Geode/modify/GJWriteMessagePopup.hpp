#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJWriteMessagePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_closeMessagePopup
		#define GEODE_STATICS_closeMessagePopup
		GEODE_AS_STATIC_FUNCTION(closeMessagePopup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearBody
		#define GEODE_STATICS_onClearBody
		GEODE_AS_STATIC_FUNCTION(onClearBody) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSend
		#define GEODE_STATICS_onSend
		GEODE_AS_STATIC_FUNCTION(onSend) 
	#endif

	#ifndef GEODE_STATICS_updateBody
		#define GEODE_STATICS_updateBody
		GEODE_AS_STATIC_FUNCTION(updateBody) 
	#endif

	#ifndef GEODE_STATICS_updateCharCountLabel
		#define GEODE_STATICS_updateCharCountLabel
		GEODE_AS_STATIC_FUNCTION(updateCharCountLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSubject
		#define GEODE_STATICS_updateSubject
		GEODE_AS_STATIC_FUNCTION(updateSubject) 
	#endif

	#ifndef GEODE_STATICS_updateText
		#define GEODE_STATICS_updateText
		GEODE_AS_STATIC_FUNCTION(updateText) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_uploadMessageFinished
		#define GEODE_STATICS_uploadMessageFinished
		GEODE_AS_STATIC_FUNCTION(uploadMessageFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadMessageFailed
		#define GEODE_STATICS_uploadMessageFailed
		GEODE_AS_STATIC_FUNCTION(uploadMessageFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeMessagePopup
		#define GEODE_CONCEPT_CHECK_closeMessagePopup
		GEODE_CONCEPT_FUNCTION_CHECK(closeMessagePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearBody
		#define GEODE_CONCEPT_CHECK_onClearBody
		GEODE_CONCEPT_FUNCTION_CHECK(onClearBody) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSend
		#define GEODE_CONCEPT_CHECK_onSend
		GEODE_CONCEPT_FUNCTION_CHECK(onSend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBody
		#define GEODE_CONCEPT_CHECK_updateBody
		GEODE_CONCEPT_FUNCTION_CHECK(updateBody) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCharCountLabel
		#define GEODE_CONCEPT_CHECK_updateCharCountLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCharCountLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSubject
		#define GEODE_CONCEPT_CHECK_updateSubject
		GEODE_CONCEPT_FUNCTION_CHECK(updateSubject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateText
		#define GEODE_CONCEPT_CHECK_updateText
		GEODE_CONCEPT_FUNCTION_CHECK(updateText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadMessageFinished
		#define GEODE_CONCEPT_CHECK_uploadMessageFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadMessageFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadMessageFailed
		#define GEODE_CONCEPT_CHECK_uploadMessageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadMessageFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJWriteMessagePopup> : ModifyBase<ModifyDerive<Der, GJWriteMessagePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJWriteMessagePopup>>;
		using ModifyBase<ModifyDerive<Der, GJWriteMessagePopup>>::ModifyBase;
		using Base = GJWriteMessagePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, create, , int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, closeMessagePopup, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, init, , int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, onClearBody, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, onSend, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, updateBody, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, updateCharCountLabel, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, updateSubject, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, updateText, , gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288550, Thiscall, GJWriteMessagePopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJWriteMessagePopup, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, textInputClosed, , CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288560, Thiscall, GJWriteMessagePopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288b40, Thiscall, GJWriteMessagePopup, uploadMessageFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288bc0, Thiscall, GJWriteMessagePopup, uploadMessageFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288c70, Thiscall, GJWriteMessagePopup, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288d10, Thiscall, GJWriteMessagePopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, textInputShouldOffset, , CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJWriteMessagePopup, textInputReturn, , CCTextInputNode*)
		}
	};
}
