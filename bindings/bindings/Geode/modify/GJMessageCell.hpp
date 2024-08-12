#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMessageCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromMessage
		#define GEODE_STATICS_loadFromMessage
		GEODE_AS_STATIC_FUNCTION(loadFromMessage) 
	#endif

	#ifndef GEODE_STATICS_markAsRead
		#define GEODE_STATICS_markAsRead
		GEODE_AS_STATIC_FUNCTION(markAsRead) 
	#endif

	#ifndef GEODE_STATICS_onDeleteMessage
		#define GEODE_STATICS_onDeleteMessage
		GEODE_AS_STATIC_FUNCTION(onDeleteMessage) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_onViewMessage
		#define GEODE_STATICS_onViewMessage
		GEODE_AS_STATIC_FUNCTION(onViewMessage) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_updateToggle
		#define GEODE_STATICS_updateToggle
		GEODE_AS_STATIC_FUNCTION(updateToggle) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_loadFromMessage
		#define GEODE_CONCEPT_CHECK_loadFromMessage
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markAsRead
		#define GEODE_CONCEPT_CHECK_markAsRead
		GEODE_CONCEPT_FUNCTION_CHECK(markAsRead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteMessage
		#define GEODE_CONCEPT_CHECK_onDeleteMessage
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewMessage
		#define GEODE_CONCEPT_CHECK_onViewMessage
		GEODE_CONCEPT_FUNCTION_CHECK(onViewMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateToggle
		#define GEODE_CONCEPT_CHECK_updateToggle
		GEODE_CONCEPT_FUNCTION_CHECK(updateToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMessageCell> : ModifyBase<ModifyDerive<Der, GJMessageCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMessageCell>>;
		using ModifyBase<ModifyDerive<Der, GJMessageCell>>::ModifyBase;
		using Base = GJMessageCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbab70, Thiscall, GJMessageCell, loadFromMessage, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMessageCell, markAsRead, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMessageCell, onDeleteMessage, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMessageCell, onToggle, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMessageCell, onViewMessage, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMessageCell, onViewProfile, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMessageCell, updateBGColor, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMessageCell, updateToggle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb99b0, Thiscall, GJMessageCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMessageCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb7d0, Thiscall, GJMessageCell, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb970, Thiscall, GJMessageCell, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbaf0, Thiscall, GJMessageCell, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJMessageCell, onClosePopup, , UploadActionPopup*)
		}
	};
}
