#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CommentCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_incrementDislikes
		#define GEODE_STATICS_incrementDislikes
		GEODE_AS_STATIC_FUNCTION(incrementDislikes) 
	#endif

	#ifndef GEODE_STATICS_incrementLikes
		#define GEODE_STATICS_incrementLikes
		GEODE_AS_STATIC_FUNCTION(incrementLikes) 
	#endif

	#ifndef GEODE_STATICS_loadFromComment
		#define GEODE_STATICS_loadFromComment
		GEODE_AS_STATIC_FUNCTION(loadFromComment) 
	#endif

	#ifndef GEODE_STATICS_onConfirmDelete
		#define GEODE_STATICS_onConfirmDelete
		GEODE_AS_STATIC_FUNCTION(onConfirmDelete) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onGoToLevel
		#define GEODE_STATICS_onGoToLevel
		GEODE_AS_STATIC_FUNCTION(onGoToLevel) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_onUndelete
		#define GEODE_STATICS_onUndelete
		GEODE_AS_STATIC_FUNCTION(onUndelete) 
	#endif

	#ifndef GEODE_STATICS_onUnhide
		#define GEODE_STATICS_onUnhide
		GEODE_AS_STATIC_FUNCTION(onUnhide) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_updateLabelValues
		#define GEODE_STATICS_updateLabelValues
		GEODE_AS_STATIC_FUNCTION(updateLabelValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_likedItem
		#define GEODE_STATICS_likedItem
		GEODE_AS_STATIC_FUNCTION(likedItem) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_incrementDislikes
		#define GEODE_CONCEPT_CHECK_incrementDislikes
		GEODE_CONCEPT_FUNCTION_CHECK(incrementDislikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementLikes
		#define GEODE_CONCEPT_CHECK_incrementLikes
		GEODE_CONCEPT_FUNCTION_CHECK(incrementLikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromComment
		#define GEODE_CONCEPT_CHECK_loadFromComment
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onConfirmDelete
		#define GEODE_CONCEPT_CHECK_onConfirmDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onConfirmDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGoToLevel
		#define GEODE_CONCEPT_CHECK_onGoToLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onGoToLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLike
		#define GEODE_CONCEPT_CHECK_onLike
		GEODE_CONCEPT_FUNCTION_CHECK(onLike) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUndelete
		#define GEODE_CONCEPT_CHECK_onUndelete
		GEODE_CONCEPT_FUNCTION_CHECK(onUndelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnhide
		#define GEODE_CONCEPT_CHECK_onUnhide
		GEODE_CONCEPT_FUNCTION_CHECK(onUnhide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelValues
		#define GEODE_CONCEPT_CHECK_updateLabelValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likedItem
		#define GEODE_CONCEPT_CHECK_likedItem
		GEODE_CONCEPT_FUNCTION_CHECK(likedItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CommentCell> : ModifyBase<ModifyDerive<Der, CommentCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CommentCell>>;
		using ModifyBase<ModifyDerive<Der, CommentCell>>::ModifyBase;
		using Base = CommentCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, incrementDislikes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, incrementLikes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3790, Thiscall, CommentCell, loadFromComment, GJComment*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5be0, Thiscall, CommentCell, onConfirmDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, onDelete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, onGoToLevel, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5980, Thiscall, CommentCell, onLike, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, onUndelete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, onUnhide, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, onViewProfile, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, updateBGColor, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, updateLabelValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3770, Thiscall, CommentCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CommentCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5ae0, Thiscall, CommentCell, likedItem, LikeItemType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5d50, Thiscall, CommentCell, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
