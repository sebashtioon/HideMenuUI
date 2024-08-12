#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetGroupIDLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addGroupID
		#define GEODE_STATICS_addGroupID
		GEODE_AS_STATIC_FUNCTION(addGroupID) 
	#endif

	#ifndef GEODE_STATICS_callRemoveFromGroup
		#define GEODE_STATICS_callRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(callRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_createTextInput
		#define GEODE_STATICS_createTextInput
		GEODE_AS_STATIC_FUNCTION(createTextInput) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddGroup
		#define GEODE_STATICS_onAddGroup
		GEODE_AS_STATIC_FUNCTION(onAddGroup) 
	#endif

	#ifndef GEODE_STATICS_onAddGroupParent
		#define GEODE_STATICS_onAddGroupParent
		GEODE_AS_STATIC_FUNCTION(onAddGroupParent) 
	#endif

	#ifndef GEODE_STATICS_onAnim
		#define GEODE_STATICS_onAnim
		GEODE_AS_STATIC_FUNCTION(onAnim) 
	#endif

	#ifndef GEODE_STATICS_onArrow
		#define GEODE_STATICS_onArrow
		GEODE_AS_STATIC_FUNCTION(onArrow) 
	#endif

	#ifndef GEODE_STATICS_onArrowLeft
		#define GEODE_STATICS_onArrowLeft
		GEODE_AS_STATIC_FUNCTION(onArrowLeft) 
	#endif

	#ifndef GEODE_STATICS_onArrowRight
		#define GEODE_STATICS_onArrowRight
		GEODE_AS_STATIC_FUNCTION(onArrowRight) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onExtra
		#define GEODE_STATICS_onExtra
		GEODE_AS_STATIC_FUNCTION(onExtra) 
	#endif

	#ifndef GEODE_STATICS_onExtra2
		#define GEODE_STATICS_onExtra2
		GEODE_AS_STATIC_FUNCTION(onExtra2) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEditorLayer1
		#define GEODE_STATICS_onNextFreeEditorLayer1
		GEODE_AS_STATIC_FUNCTION(onNextFreeEditorLayer1) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEditorLayer2
		#define GEODE_STATICS_onNextFreeEditorLayer2
		GEODE_AS_STATIC_FUNCTION(onNextFreeEditorLayer2) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeOrderChannel
		#define GEODE_STATICS_onNextFreeOrderChannel
		GEODE_AS_STATIC_FUNCTION(onNextFreeOrderChannel) 
	#endif

	#ifndef GEODE_STATICS_onNextGroupID1
		#define GEODE_STATICS_onNextGroupID1
		GEODE_AS_STATIC_FUNCTION(onNextGroupID1) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFromGroup
		#define GEODE_STATICS_onRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(onRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_onSmoothEase
		#define GEODE_STATICS_onSmoothEase
		GEODE_AS_STATIC_FUNCTION(onSmoothEase) 
	#endif

	#ifndef GEODE_STATICS_onToggleGuide
		#define GEODE_STATICS_onToggleGuide
		GEODE_AS_STATIC_FUNCTION(onToggleGuide) 
	#endif

	#ifndef GEODE_STATICS_onToggleSelectedOrder
		#define GEODE_STATICS_onToggleSelectedOrder
		GEODE_AS_STATIC_FUNCTION(onToggleSelectedOrder) 
	#endif

	#ifndef GEODE_STATICS_onZLayer
		#define GEODE_STATICS_onZLayer
		GEODE_AS_STATIC_FUNCTION(onZLayer) 
	#endif

	#ifndef GEODE_STATICS_onZLayerShift
		#define GEODE_STATICS_onZLayerShift
		GEODE_AS_STATIC_FUNCTION(onZLayerShift) 
	#endif

	#ifndef GEODE_STATICS_removeGroupID
		#define GEODE_STATICS_removeGroupID
		GEODE_AS_STATIC_FUNCTION(removeGroupID) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel
		#define GEODE_STATICS_updateEditorLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel2
		#define GEODE_STATICS_updateEditorLabel2
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel2) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLayerID
		#define GEODE_STATICS_updateEditorLayerID
		GEODE_AS_STATIC_FUNCTION(updateEditorLayerID) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLayerID2
		#define GEODE_STATICS_updateEditorLayerID2
		GEODE_AS_STATIC_FUNCTION(updateEditorLayerID2) 
	#endif

	#ifndef GEODE_STATICS_updateEditorOrder
		#define GEODE_STATICS_updateEditorOrder
		GEODE_AS_STATIC_FUNCTION(updateEditorOrder) 
	#endif

	#ifndef GEODE_STATICS_updateEditorOrderLabel
		#define GEODE_STATICS_updateEditorOrderLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorOrderLabel) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDButtons
		#define GEODE_STATICS_updateGroupIDButtons
		GEODE_AS_STATIC_FUNCTION(updateGroupIDButtons) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDLabel
		#define GEODE_STATICS_updateGroupIDLabel
		GEODE_AS_STATIC_FUNCTION(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_STATICS_updateOrderChannel
		#define GEODE_STATICS_updateOrderChannel
		GEODE_AS_STATIC_FUNCTION(updateOrderChannel) 
	#endif

	#ifndef GEODE_STATICS_updateOrderChannelLabel
		#define GEODE_STATICS_updateOrderChannelLabel
		GEODE_AS_STATIC_FUNCTION(updateOrderChannelLabel) 
	#endif

	#ifndef GEODE_STATICS_updateZLayerButtons
		#define GEODE_STATICS_updateZLayerButtons
		GEODE_AS_STATIC_FUNCTION(updateZLayerButtons) 
	#endif

	#ifndef GEODE_STATICS_updateZOrder
		#define GEODE_STATICS_updateZOrder
		GEODE_AS_STATIC_FUNCTION(updateZOrder) 
	#endif

	#ifndef GEODE_STATICS_updateZOrderLabel
		#define GEODE_STATICS_updateZOrderLabel
		GEODE_AS_STATIC_FUNCTION(updateZOrderLabel) 
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGroupID
		#define GEODE_CONCEPT_CHECK_addGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(addGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_callRemoveFromGroup
		#define GEODE_CONCEPT_CHECK_callRemoveFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(callRemoveFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTextInput
		#define GEODE_CONCEPT_CHECK_createTextInput
		GEODE_CONCEPT_FUNCTION_CHECK(createTextInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddGroup
		#define GEODE_CONCEPT_CHECK_onAddGroup
		GEODE_CONCEPT_FUNCTION_CHECK(onAddGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddGroupParent
		#define GEODE_CONCEPT_CHECK_onAddGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(onAddGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAnim
		#define GEODE_CONCEPT_CHECK_onAnim
		GEODE_CONCEPT_FUNCTION_CHECK(onAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArrow
		#define GEODE_CONCEPT_CHECK_onArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArrowLeft
		#define GEODE_CONCEPT_CHECK_onArrowLeft
		GEODE_CONCEPT_FUNCTION_CHECK(onArrowLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArrowRight
		#define GEODE_CONCEPT_CHECK_onArrowRight
		GEODE_CONCEPT_FUNCTION_CHECK(onArrowRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExtra
		#define GEODE_CONCEPT_CHECK_onExtra
		GEODE_CONCEPT_FUNCTION_CHECK(onExtra) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExtra2
		#define GEODE_CONCEPT_CHECK_onExtra2
		GEODE_CONCEPT_FUNCTION_CHECK(onExtra2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextFreeEditorLayer1
		#define GEODE_CONCEPT_CHECK_onNextFreeEditorLayer1
		GEODE_CONCEPT_FUNCTION_CHECK(onNextFreeEditorLayer1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextFreeEditorLayer2
		#define GEODE_CONCEPT_CHECK_onNextFreeEditorLayer2
		GEODE_CONCEPT_FUNCTION_CHECK(onNextFreeEditorLayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextFreeOrderChannel
		#define GEODE_CONCEPT_CHECK_onNextFreeOrderChannel
		GEODE_CONCEPT_FUNCTION_CHECK(onNextFreeOrderChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextGroupID1
		#define GEODE_CONCEPT_CHECK_onNextGroupID1
		GEODE_CONCEPT_FUNCTION_CHECK(onNextGroupID1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveFromGroup
		#define GEODE_CONCEPT_CHECK_onRemoveFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSmoothEase
		#define GEODE_CONCEPT_CHECK_onSmoothEase
		GEODE_CONCEPT_FUNCTION_CHECK(onSmoothEase) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleGuide
		#define GEODE_CONCEPT_CHECK_onToggleGuide
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSelectedOrder
		#define GEODE_CONCEPT_CHECK_onToggleSelectedOrder
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSelectedOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onZLayer
		#define GEODE_CONCEPT_CHECK_onZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(onZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onZLayerShift
		#define GEODE_CONCEPT_CHECK_onZLayerShift
		GEODE_CONCEPT_FUNCTION_CHECK(onZLayerShift) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGroupID
		#define GEODE_CONCEPT_CHECK_removeGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(removeGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLabel
		#define GEODE_CONCEPT_CHECK_updateEditorLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLabel2
		#define GEODE_CONCEPT_CHECK_updateEditorLabel2
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLabel2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLayerID
		#define GEODE_CONCEPT_CHECK_updateEditorLayerID
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLayerID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLayerID2
		#define GEODE_CONCEPT_CHECK_updateEditorLayerID2
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLayerID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorOrder
		#define GEODE_CONCEPT_CHECK_updateEditorOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorOrderLabel
		#define GEODE_CONCEPT_CHECK_updateEditorOrderLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorOrderLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupIDButtons
		#define GEODE_CONCEPT_CHECK_updateGroupIDButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupIDButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupIDLabel
		#define GEODE_CONCEPT_CHECK_updateGroupIDLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOrderChannel
		#define GEODE_CONCEPT_CHECK_updateOrderChannel
		GEODE_CONCEPT_FUNCTION_CHECK(updateOrderChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOrderChannelLabel
		#define GEODE_CONCEPT_CHECK_updateOrderChannelLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateOrderChannelLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZLayerButtons
		#define GEODE_CONCEPT_CHECK_updateZLayerButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateZLayerButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZOrder
		#define GEODE_CONCEPT_CHECK_updateZOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateZOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZOrderLabel
		#define GEODE_CONCEPT_CHECK_updateZOrderLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateZOrderLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetGroupIDLayer> : ModifyBase<ModifyDerive<Der, SetGroupIDLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetGroupIDLayer>>;
		using ModifyBase<ModifyDerive<Der, SetGroupIDLayer>>::ModifyBase;
		using Base = SetGroupIDLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, create, , GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, addGroupID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, callRemoveFromGroup, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, createTextInput, , cocos2d::CCPoint, int, int, gd::string, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cde60, Thiscall, SetGroupIDLayer, init, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onAddGroup, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onAddGroupParent, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onAnim, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d05e0, Thiscall, SetGroupIDLayer, onArrow, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d0580, Thiscall, SetGroupIDLayer, onArrowLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d05b0, Thiscall, SetGroupIDLayer, onArrowRight, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onCopy, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onExtra, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onExtra2, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d23b0, Thiscall, SetGroupIDLayer, onNextFreeEditorLayer1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2420, Thiscall, SetGroupIDLayer, onNextFreeEditorLayer2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d28c0, Thiscall, SetGroupIDLayer, onNextFreeOrderChannel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d14d0, Thiscall, SetGroupIDLayer, onNextGroupID1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onPaste, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onRemoveFromGroup, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onSmoothEase, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onToggleGuide, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onToggleSelectedOrder, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onZLayer, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, onZLayerShift, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, removeGroupID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2520, Thiscall, SetGroupIDLayer, updateEditorLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d25b0, Thiscall, SetGroupIDLayer, updateEditorLabel2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d22b0, Thiscall, SetGroupIDLayer, updateEditorLayerID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2330, Thiscall, SetGroupIDLayer, updateEditorLayerID2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2a90, Thiscall, SetGroupIDLayer, updateEditorOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2760, Thiscall, SetGroupIDLayer, updateEditorOrderLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, updateGroupIDButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d26d0, Thiscall, SetGroupIDLayer, updateGroupIDLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d29c0, Thiscall, SetGroupIDLayer, updateOrderChannel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2810, Thiscall, SetGroupIDLayer, updateOrderChannelLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, updateZLayerButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2490, Thiscall, SetGroupIDLayer, updateZOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2640, Thiscall, SetGroupIDLayer, updateZOrderLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2ee0, Thiscall, SetGroupIDLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetGroupIDLayer, textInputClosed, , CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1000, Thiscall, SetGroupIDLayer, textChanged, CCTextInputNode*)
		}
	};
}
