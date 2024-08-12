#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorUI.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activateRotationControl
		#define GEODE_STATICS_activateRotationControl
		GEODE_AS_STATIC_FUNCTION(activateRotationControl) 
	#endif

	#ifndef GEODE_STATICS_activateScaleControl
		#define GEODE_STATICS_activateScaleControl
		GEODE_AS_STATIC_FUNCTION(activateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_activateTransformControl
		#define GEODE_STATICS_activateTransformControl
		GEODE_AS_STATIC_FUNCTION(activateTransformControl) 
	#endif

	#ifndef GEODE_STATICS_addObjectsToSmartTemplate
		#define GEODE_STATICS_addObjectsToSmartTemplate
		GEODE_AS_STATIC_FUNCTION(addObjectsToSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_addSnapPosition
		#define GEODE_STATICS_addSnapPosition
		GEODE_AS_STATIC_FUNCTION(addSnapPosition) 
	#endif

	#ifndef GEODE_STATICS_alignObjects
		#define GEODE_STATICS_alignObjects
		GEODE_AS_STATIC_FUNCTION(alignObjects) 
	#endif

	#ifndef GEODE_STATICS_applyOffset
		#define GEODE_STATICS_applyOffset
		GEODE_AS_STATIC_FUNCTION(applyOffset) 
	#endif

	#ifndef GEODE_STATICS_applySpecialOffset
		#define GEODE_STATICS_applySpecialOffset
		GEODE_AS_STATIC_FUNCTION(applySpecialOffset) 
	#endif

	#ifndef GEODE_STATICS_arrayContainsClass
		#define GEODE_STATICS_arrayContainsClass
		GEODE_AS_STATIC_FUNCTION(arrayContainsClass) 
	#endif

	#ifndef GEODE_STATICS_assignNewGroups
		#define GEODE_STATICS_assignNewGroups
		GEODE_AS_STATIC_FUNCTION(assignNewGroups) 
	#endif

	#ifndef GEODE_STATICS_canAllowMultiActivate
		#define GEODE_STATICS_canAllowMultiActivate
		GEODE_AS_STATIC_FUNCTION(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_canSelectObject
		#define GEODE_STATICS_canSelectObject
		GEODE_AS_STATIC_FUNCTION(canSelectObject) 
	#endif

	#ifndef GEODE_STATICS_centerCameraOnObject
		#define GEODE_STATICS_centerCameraOnObject
		GEODE_AS_STATIC_FUNCTION(centerCameraOnObject) 
	#endif

	#ifndef GEODE_STATICS_changeSelectedObjects
		#define GEODE_STATICS_changeSelectedObjects
		GEODE_AS_STATIC_FUNCTION(changeSelectedObjects) 
	#endif

	#ifndef GEODE_STATICS_checkDiffAfterTransformAnchor
		#define GEODE_STATICS_checkDiffAfterTransformAnchor
		GEODE_AS_STATIC_FUNCTION(checkDiffAfterTransformAnchor) 
	#endif

	#ifndef GEODE_STATICS_checkLiveColorSelect
		#define GEODE_STATICS_checkLiveColorSelect
		GEODE_AS_STATIC_FUNCTION(checkLiveColorSelect) 
	#endif

	#ifndef GEODE_STATICS_clickOnPosition
		#define GEODE_STATICS_clickOnPosition
		GEODE_AS_STATIC_FUNCTION(clickOnPosition) 
	#endif

	#ifndef GEODE_STATICS_closeLiveColorSelect
		#define GEODE_STATICS_closeLiveColorSelect
		GEODE_AS_STATIC_FUNCTION(closeLiveColorSelect) 
	#endif

	#ifndef GEODE_STATICS_closeLiveHSVSelect
		#define GEODE_STATICS_closeLiveHSVSelect
		GEODE_AS_STATIC_FUNCTION(closeLiveHSVSelect) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_constrainGameLayerPosition
		#define GEODE_STATICS_constrainGameLayerPosition
		GEODE_AS_STATIC_FUNCTION(constrainGameLayerPosition) 
	#endif

	#ifndef GEODE_STATICS_convertKeyBasedOnNeighbors
		#define GEODE_STATICS_convertKeyBasedOnNeighbors
		GEODE_AS_STATIC_FUNCTION(convertKeyBasedOnNeighbors) 
	#endif

	#ifndef GEODE_STATICS_convertToBaseKey
		#define GEODE_STATICS_convertToBaseKey
		GEODE_AS_STATIC_FUNCTION(convertToBaseKey) 
	#endif

	#ifndef GEODE_STATICS_copyObjects
		#define GEODE_STATICS_copyObjects
		GEODE_AS_STATIC_FUNCTION(copyObjects) 
	#endif

	#ifndef GEODE_STATICS_copyObjectsDetailed
		#define GEODE_STATICS_copyObjectsDetailed
		GEODE_AS_STATIC_FUNCTION(copyObjectsDetailed) 
	#endif

	#ifndef GEODE_STATICS_createCustomItems
		#define GEODE_STATICS_createCustomItems
		GEODE_AS_STATIC_FUNCTION(createCustomItems) 
	#endif

	#ifndef GEODE_STATICS_createEdgeForObject
		#define GEODE_STATICS_createEdgeForObject
		GEODE_AS_STATIC_FUNCTION(createEdgeForObject) 
	#endif

	#ifndef GEODE_STATICS_createExtraObject
		#define GEODE_STATICS_createExtraObject
		GEODE_AS_STATIC_FUNCTION(createExtraObject) 
	#endif

	#ifndef GEODE_STATICS_createExtras
		#define GEODE_STATICS_createExtras
		GEODE_AS_STATIC_FUNCTION(createExtras) 
	#endif

	#ifndef GEODE_STATICS_createExtrasForObject
		#define GEODE_STATICS_createExtrasForObject
		GEODE_AS_STATIC_FUNCTION(createExtrasForObject) 
	#endif

	#ifndef GEODE_STATICS_createGlow
		#define GEODE_STATICS_createGlow
		GEODE_AS_STATIC_FUNCTION(createGlow) 
	#endif

	#ifndef GEODE_STATICS_createLoop
		#define GEODE_STATICS_createLoop
		GEODE_AS_STATIC_FUNCTION(createLoop) 
	#endif

	#ifndef GEODE_STATICS_createMoveMenu
		#define GEODE_STATICS_createMoveMenu
		GEODE_AS_STATIC_FUNCTION(createMoveMenu) 
	#endif

	#ifndef GEODE_STATICS_createNewKeyframeAnim
		#define GEODE_STATICS_createNewKeyframeAnim
		GEODE_AS_STATIC_FUNCTION(createNewKeyframeAnim) 
	#endif

	#ifndef GEODE_STATICS_createObject
		#define GEODE_STATICS_createObject
		GEODE_AS_STATIC_FUNCTION(createObject) 
	#endif

	#ifndef GEODE_STATICS_createOutlines
		#define GEODE_STATICS_createOutlines
		GEODE_AS_STATIC_FUNCTION(createOutlines) 
	#endif

	#ifndef GEODE_STATICS_createPrefab
		#define GEODE_STATICS_createPrefab
		GEODE_AS_STATIC_FUNCTION(createPrefab) 
	#endif

	#ifndef GEODE_STATICS_createRockBases
		#define GEODE_STATICS_createRockBases
		GEODE_AS_STATIC_FUNCTION(createRockBases) 
	#endif

	#ifndef GEODE_STATICS_createRockEdges
		#define GEODE_STATICS_createRockEdges
		GEODE_AS_STATIC_FUNCTION(createRockEdges) 
	#endif

	#ifndef GEODE_STATICS_createSmartObjectsFromTemplate
		#define GEODE_STATICS_createSmartObjectsFromTemplate
		GEODE_AS_STATIC_FUNCTION(createSmartObjectsFromTemplate) 
	#endif

	#ifndef GEODE_STATICS_createSmartObjectsFromType
		#define GEODE_STATICS_createSmartObjectsFromType
		GEODE_AS_STATIC_FUNCTION(createSmartObjectsFromType) 
	#endif

	#ifndef GEODE_STATICS_createUndoObject
		#define GEODE_STATICS_createUndoObject
		GEODE_AS_STATIC_FUNCTION(createUndoObject) 
	#endif

	#ifndef GEODE_STATICS_createUndoSelectObject
		#define GEODE_STATICS_createUndoSelectObject
		GEODE_AS_STATIC_FUNCTION(createUndoSelectObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateRotationControl
		#define GEODE_STATICS_deactivateRotationControl
		GEODE_AS_STATIC_FUNCTION(deactivateRotationControl) 
	#endif

	#ifndef GEODE_STATICS_deactivateScaleControl
		#define GEODE_STATICS_deactivateScaleControl
		GEODE_AS_STATIC_FUNCTION(deactivateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_deactivateTransformControl
		#define GEODE_STATICS_deactivateTransformControl
		GEODE_AS_STATIC_FUNCTION(deactivateTransformControl) 
	#endif

	#ifndef GEODE_STATICS_deleteObject
		#define GEODE_STATICS_deleteObject
		GEODE_AS_STATIC_FUNCTION(deleteObject) 
	#endif

	#ifndef GEODE_STATICS_deleteSmartBlocksFromObjects
		#define GEODE_STATICS_deleteSmartBlocksFromObjects
		GEODE_AS_STATIC_FUNCTION(deleteSmartBlocksFromObjects) 
	#endif

	#ifndef GEODE_STATICS_deleteTypeFromObjects
		#define GEODE_STATICS_deleteTypeFromObjects
		GEODE_AS_STATIC_FUNCTION(deleteTypeFromObjects) 
	#endif

	#ifndef GEODE_STATICS_deselectAll
		#define GEODE_STATICS_deselectAll
		GEODE_AS_STATIC_FUNCTION(deselectAll) 
	#endif

	#ifndef GEODE_STATICS_deselectObject
		#define GEODE_STATICS_deselectObject
		GEODE_AS_STATIC_FUNCTION(deselectObject) 
	#endif

	#ifndef GEODE_STATICS_deselectObjectsColor
		#define GEODE_STATICS_deselectObjectsColor
		GEODE_AS_STATIC_FUNCTION(deselectObjectsColor) 
	#endif

	#ifndef GEODE_STATICS_deselectTargetPortals
		#define GEODE_STATICS_deselectTargetPortals
		GEODE_AS_STATIC_FUNCTION(deselectTargetPortals) 
	#endif

	#ifndef GEODE_STATICS_disableButton
		#define GEODE_STATICS_disableButton
		GEODE_AS_STATIC_FUNCTION(disableButton) 
	#endif

	#ifndef GEODE_STATICS_doCopyObjects
		#define GEODE_STATICS_doCopyObjects
		GEODE_AS_STATIC_FUNCTION(doCopyObjects) 
	#endif

	#ifndef GEODE_STATICS_doPasteInPlace
		#define GEODE_STATICS_doPasteInPlace
		GEODE_AS_STATIC_FUNCTION(doPasteInPlace) 
	#endif

	#ifndef GEODE_STATICS_doPasteObjects
		#define GEODE_STATICS_doPasteObjects
		GEODE_AS_STATIC_FUNCTION(doPasteObjects) 
	#endif

	#ifndef GEODE_STATICS_dynamicGroupUpdate
		#define GEODE_STATICS_dynamicGroupUpdate
		GEODE_AS_STATIC_FUNCTION(dynamicGroupUpdate) 
	#endif

	#ifndef GEODE_STATICS_edgeForObject
		#define GEODE_STATICS_edgeForObject
		GEODE_AS_STATIC_FUNCTION(edgeForObject) 
	#endif

	#ifndef GEODE_STATICS_editButton2Usable
		#define GEODE_STATICS_editButton2Usable
		GEODE_AS_STATIC_FUNCTION(editButton2Usable) 
	#endif

	#ifndef GEODE_STATICS_editButtonUsable
		#define GEODE_STATICS_editButtonUsable
		GEODE_AS_STATIC_FUNCTION(editButtonUsable) 
	#endif

	#ifndef GEODE_STATICS_editColor
		#define GEODE_STATICS_editColor
		GEODE_AS_STATIC_FUNCTION(editColor) 
	#endif

	#ifndef GEODE_STATICS_editColorButtonUsable
		#define GEODE_STATICS_editColorButtonUsable
		GEODE_AS_STATIC_FUNCTION(editColorButtonUsable) 
	#endif

	#ifndef GEODE_STATICS_editGroup
		#define GEODE_STATICS_editGroup
		GEODE_AS_STATIC_FUNCTION(editGroup) 
	#endif

	#ifndef GEODE_STATICS_editHSV
		#define GEODE_STATICS_editHSV
		GEODE_AS_STATIC_FUNCTION(editHSV) 
	#endif

	#ifndef GEODE_STATICS_editObject
		#define GEODE_STATICS_editObject
		GEODE_AS_STATIC_FUNCTION(editObject) 
	#endif

	#ifndef GEODE_STATICS_editObject2
		#define GEODE_STATICS_editObject2
		GEODE_AS_STATIC_FUNCTION(editObject2) 
	#endif

	#ifndef GEODE_STATICS_editObject3
		#define GEODE_STATICS_editObject3
		GEODE_AS_STATIC_FUNCTION(editObject3) 
	#endif

	#ifndef GEODE_STATICS_editObjectSpecial
		#define GEODE_STATICS_editObjectSpecial
		GEODE_AS_STATIC_FUNCTION(editObjectSpecial) 
	#endif

	#ifndef GEODE_STATICS_editorLayerForArray
		#define GEODE_STATICS_editorLayerForArray
		GEODE_AS_STATIC_FUNCTION(editorLayerForArray) 
	#endif

	#ifndef GEODE_STATICS_enableButton
		#define GEODE_STATICS_enableButton
		GEODE_AS_STATIC_FUNCTION(enableButton) 
	#endif

	#ifndef GEODE_STATICS_findAndSelectObject
		#define GEODE_STATICS_findAndSelectObject
		GEODE_AS_STATIC_FUNCTION(findAndSelectObject) 
	#endif

	#ifndef GEODE_STATICS_findSnapObject
		#define GEODE_STATICS_findSnapObject
		GEODE_AS_STATIC_FUNCTION(findSnapObject) 
	#endif

	#ifndef GEODE_STATICS_findTriggerTest
		#define GEODE_STATICS_findTriggerTest
		GEODE_AS_STATIC_FUNCTION(findTriggerTest) 
	#endif

	#ifndef GEODE_STATICS_flipObjectsX
		#define GEODE_STATICS_flipObjectsX
		GEODE_AS_STATIC_FUNCTION(flipObjectsX) 
	#endif

	#ifndef GEODE_STATICS_flipObjectsY
		#define GEODE_STATICS_flipObjectsY
		GEODE_AS_STATIC_FUNCTION(flipObjectsY) 
	#endif

	#ifndef GEODE_STATICS_getButton
		#define GEODE_STATICS_getButton
		GEODE_AS_STATIC_FUNCTION(getButton) 
	#endif

	#ifndef GEODE_STATICS_getCreateBtn
		#define GEODE_STATICS_getCreateBtn
		GEODE_AS_STATIC_FUNCTION(getCreateBtn) 
	#endif

	#ifndef GEODE_STATICS_getCreateMenuItemButton
		#define GEODE_STATICS_getCreateMenuItemButton
		GEODE_AS_STATIC_FUNCTION(getCreateMenuItemButton) 
	#endif

	#ifndef GEODE_STATICS_getCycledObject
		#define GEODE_STATICS_getCycledObject
		GEODE_AS_STATIC_FUNCTION(getCycledObject) 
	#endif

	#ifndef GEODE_STATICS_getEditColorTargets
		#define GEODE_STATICS_getEditColorTargets
		GEODE_AS_STATIC_FUNCTION(getEditColorTargets) 
	#endif

	#ifndef GEODE_STATICS_getGroupCenter
		#define GEODE_STATICS_getGroupCenter
		GEODE_AS_STATIC_FUNCTION(getGroupCenter) 
	#endif

	#ifndef GEODE_STATICS_getGroupInfo
		#define GEODE_STATICS_getGroupInfo
		GEODE_AS_STATIC_FUNCTION(getGroupInfo) 
	#endif

	#ifndef GEODE_STATICS_getLimitedPosition
		#define GEODE_STATICS_getLimitedPosition
		GEODE_AS_STATIC_FUNCTION(getLimitedPosition) 
	#endif

	#ifndef GEODE_STATICS_getModeBtn
		#define GEODE_STATICS_getModeBtn
		GEODE_AS_STATIC_FUNCTION(getModeBtn) 
	#endif

	#ifndef GEODE_STATICS_getNeighbor
		#define GEODE_STATICS_getNeighbor
		GEODE_AS_STATIC_FUNCTION(getNeighbor) 
	#endif

	#ifndef GEODE_STATICS_getRandomStartKey
		#define GEODE_STATICS_getRandomStartKey
		GEODE_AS_STATIC_FUNCTION(getRandomStartKey) 
	#endif

	#ifndef GEODE_STATICS_getRelativeOffset
		#define GEODE_STATICS_getRelativeOffset
		GEODE_AS_STATIC_FUNCTION(getRelativeOffset) 
	#endif

	#ifndef GEODE_STATICS_getSelectedObjects
		#define GEODE_STATICS_getSelectedObjects
		GEODE_AS_STATIC_FUNCTION(getSelectedObjects) 
	#endif

	#ifndef GEODE_STATICS_getSimpleButton
		#define GEODE_STATICS_getSimpleButton
		GEODE_AS_STATIC_FUNCTION(getSimpleButton) 
	#endif

	#ifndef GEODE_STATICS_getSmartNeighbor
		#define GEODE_STATICS_getSmartNeighbor
		GEODE_AS_STATIC_FUNCTION(getSmartNeighbor) 
	#endif

	#ifndef GEODE_STATICS_getSmartObjectKey
		#define GEODE_STATICS_getSmartObjectKey
		GEODE_AS_STATIC_FUNCTION(getSmartObjectKey) 
	#endif

	#ifndef GEODE_STATICS_getSnapAngle
		#define GEODE_STATICS_getSnapAngle
		GEODE_AS_STATIC_FUNCTION(getSnapAngle) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
	#endif

	#ifndef GEODE_STATICS_getTouchPoint
		#define GEODE_STATICS_getTouchPoint
		GEODE_AS_STATIC_FUNCTION(getTouchPoint) 
	#endif

	#ifndef GEODE_STATICS_getTransformState
		#define GEODE_STATICS_getTransformState
		GEODE_AS_STATIC_FUNCTION(getTransformState) 
	#endif

	#ifndef GEODE_STATICS_getXMin
		#define GEODE_STATICS_getXMin
		GEODE_AS_STATIC_FUNCTION(getXMin) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isLiveColorSelectTrigger
		#define GEODE_STATICS_isLiveColorSelectTrigger
		GEODE_AS_STATIC_FUNCTION(isLiveColorSelectTrigger) 
	#endif

	#ifndef GEODE_STATICS_isSpecialSnapObject
		#define GEODE_STATICS_isSpecialSnapObject
		GEODE_AS_STATIC_FUNCTION(isSpecialSnapObject) 
	#endif

	#ifndef GEODE_STATICS_liveEditColorUsable
		#define GEODE_STATICS_liveEditColorUsable
		GEODE_AS_STATIC_FUNCTION(liveEditColorUsable) 
	#endif

	#ifndef GEODE_STATICS_menuItemFromObjectString
		#define GEODE_STATICS_menuItemFromObjectString
		GEODE_AS_STATIC_FUNCTION(menuItemFromObjectString) 
	#endif

	#ifndef GEODE_STATICS_moveForCommand
		#define GEODE_STATICS_moveForCommand
		GEODE_AS_STATIC_FUNCTION(moveForCommand) 
	#endif

	#ifndef GEODE_STATICS_moveGamelayer
		#define GEODE_STATICS_moveGamelayer
		GEODE_AS_STATIC_FUNCTION(moveGamelayer) 
	#endif

	#ifndef GEODE_STATICS_moveObject
		#define GEODE_STATICS_moveObject
		GEODE_AS_STATIC_FUNCTION(moveObject) 
	#endif

	#ifndef GEODE_STATICS_moveObjectCall
		#define GEODE_STATICS_moveObjectCall
		GEODE_AS_STATIC_FUNCTION(moveObjectCall) 
	#endif

	#ifndef GEODE_STATICS_offsetForKey
		#define GEODE_STATICS_offsetForKey
		GEODE_AS_STATIC_FUNCTION(offsetForKey) 
	#endif

	#ifndef GEODE_STATICS_onAssignNewGroupID
		#define GEODE_STATICS_onAssignNewGroupID
		GEODE_AS_STATIC_FUNCTION(onAssignNewGroupID) 
	#endif

	#ifndef GEODE_STATICS_onColorFilter
		#define GEODE_STATICS_onColorFilter
		GEODE_AS_STATIC_FUNCTION(onColorFilter) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onCopyState
		#define GEODE_STATICS_onCopyState
		GEODE_AS_STATIC_FUNCTION(onCopyState) 
	#endif

	#ifndef GEODE_STATICS_onCreate
		#define GEODE_STATICS_onCreate
		GEODE_AS_STATIC_FUNCTION(onCreate) 
	#endif

	#ifndef GEODE_STATICS_onCreateButton
		#define GEODE_STATICS_onCreateButton
		GEODE_AS_STATIC_FUNCTION(onCreateButton) 
	#endif

	#ifndef GEODE_STATICS_onCreateObject
		#define GEODE_STATICS_onCreateObject
		GEODE_AS_STATIC_FUNCTION(onCreateObject) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onDeleteAll
		#define GEODE_STATICS_onDeleteAll
		GEODE_AS_STATIC_FUNCTION(onDeleteAll) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCustomItem
		#define GEODE_STATICS_onDeleteCustomItem
		GEODE_AS_STATIC_FUNCTION(onDeleteCustomItem) 
	#endif

	#ifndef GEODE_STATICS_onDeleteInfo
		#define GEODE_STATICS_onDeleteInfo
		GEODE_AS_STATIC_FUNCTION(onDeleteInfo) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelectedType
		#define GEODE_STATICS_onDeleteSelectedType
		GEODE_AS_STATIC_FUNCTION(onDeleteSelectedType) 
	#endif

	#ifndef GEODE_STATICS_onDeleteStartPos
		#define GEODE_STATICS_onDeleteStartPos
		GEODE_AS_STATIC_FUNCTION(onDeleteStartPos) 
	#endif

	#ifndef GEODE_STATICS_onDeselectAll
		#define GEODE_STATICS_onDeselectAll
		GEODE_AS_STATIC_FUNCTION(onDeselectAll) 
	#endif

	#ifndef GEODE_STATICS_onDuplicate
		#define GEODE_STATICS_onDuplicate
		GEODE_AS_STATIC_FUNCTION(onDuplicate) 
	#endif

	#ifndef GEODE_STATICS_onEditColor
		#define GEODE_STATICS_onEditColor
		GEODE_AS_STATIC_FUNCTION(onEditColor) 
	#endif

	#ifndef GEODE_STATICS_onFindObject
		#define GEODE_STATICS_onFindObject
		GEODE_AS_STATIC_FUNCTION(onFindObject) 
	#endif

	#ifndef GEODE_STATICS_onGoToBaseLayer
		#define GEODE_STATICS_onGoToBaseLayer
		GEODE_AS_STATIC_FUNCTION(onGoToBaseLayer) 
	#endif

	#ifndef GEODE_STATICS_onGoToLayer
		#define GEODE_STATICS_onGoToLayer
		GEODE_AS_STATIC_FUNCTION(onGoToLayer) 
	#endif

	#ifndef GEODE_STATICS_onGroupDown
		#define GEODE_STATICS_onGroupDown
		GEODE_AS_STATIC_FUNCTION(onGroupDown) 
	#endif

	#ifndef GEODE_STATICS_onGroupIDFilter
		#define GEODE_STATICS_onGroupIDFilter
		GEODE_AS_STATIC_FUNCTION(onGroupIDFilter) 
	#endif

	#ifndef GEODE_STATICS_onGroupSticky
		#define GEODE_STATICS_onGroupSticky
		GEODE_AS_STATIC_FUNCTION(onGroupSticky) 
	#endif

	#ifndef GEODE_STATICS_onGroupUp
		#define GEODE_STATICS_onGroupUp
		GEODE_AS_STATIC_FUNCTION(onGroupUp) 
	#endif

	#ifndef GEODE_STATICS_onLockLayer
		#define GEODE_STATICS_onLockLayer
		GEODE_AS_STATIC_FUNCTION(onLockLayer) 
	#endif

	#ifndef GEODE_STATICS_onNewCustomItem
		#define GEODE_STATICS_onNewCustomItem
		GEODE_AS_STATIC_FUNCTION(onNewCustomItem) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onPasteColor
		#define GEODE_STATICS_onPasteColor
		GEODE_AS_STATIC_FUNCTION(onPasteColor) 
	#endif

	#ifndef GEODE_STATICS_onPasteInPlace
		#define GEODE_STATICS_onPasteInPlace
		GEODE_AS_STATIC_FUNCTION(onPasteInPlace) 
	#endif

	#ifndef GEODE_STATICS_onPasteState
		#define GEODE_STATICS_onPasteState
		GEODE_AS_STATIC_FUNCTION(onPasteState) 
	#endif

	#ifndef GEODE_STATICS_onPause
		#define GEODE_STATICS_onPause
		GEODE_AS_STATIC_FUNCTION(onPause) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_onPlaytest
		#define GEODE_STATICS_onPlaytest
		GEODE_AS_STATIC_FUNCTION(onPlaytest) 
	#endif

	#ifndef GEODE_STATICS_onResetSpecialFilter
		#define GEODE_STATICS_onResetSpecialFilter
		GEODE_AS_STATIC_FUNCTION(onResetSpecialFilter) 
	#endif

	#ifndef GEODE_STATICS_onSelectBuildTab
		#define GEODE_STATICS_onSelectBuildTab
		GEODE_AS_STATIC_FUNCTION(onSelectBuildTab) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onStopPlaytest
		#define GEODE_STATICS_onStopPlaytest
		GEODE_AS_STATIC_FUNCTION(onStopPlaytest) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDChange
		#define GEODE_STATICS_onTargetIDChange
		GEODE_AS_STATIC_FUNCTION(onTargetIDChange) 
	#endif

	#ifndef GEODE_STATICS_onToggleGuide
		#define GEODE_STATICS_onToggleGuide
		GEODE_AS_STATIC_FUNCTION(onToggleGuide) 
	#endif

	#ifndef GEODE_STATICS_onToggleSelectedOrder
		#define GEODE_STATICS_onToggleSelectedOrder
		GEODE_AS_STATIC_FUNCTION(onToggleSelectedOrder) 
	#endif

	#ifndef GEODE_STATICS_onUngroupSticky
		#define GEODE_STATICS_onUngroupSticky
		GEODE_AS_STATIC_FUNCTION(onUngroupSticky) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDeleteFilter
		#define GEODE_STATICS_onUpdateDeleteFilter
		GEODE_AS_STATIC_FUNCTION(onUpdateDeleteFilter) 
	#endif

	#ifndef GEODE_STATICS_orderDownCustomItem
		#define GEODE_STATICS_orderDownCustomItem
		GEODE_AS_STATIC_FUNCTION(orderDownCustomItem) 
	#endif

	#ifndef GEODE_STATICS_orderUpCustomItem
		#define GEODE_STATICS_orderUpCustomItem
		GEODE_AS_STATIC_FUNCTION(orderUpCustomItem) 
	#endif

	#ifndef GEODE_STATICS_pasteObjects
		#define GEODE_STATICS_pasteObjects
		GEODE_AS_STATIC_FUNCTION(pasteObjects) 
	#endif

	#ifndef GEODE_STATICS_playCircleAnim
		#define GEODE_STATICS_playCircleAnim
		GEODE_AS_STATIC_FUNCTION(playCircleAnim) 
	#endif

	#ifndef GEODE_STATICS_playerTouchBegan
		#define GEODE_STATICS_playerTouchBegan
		GEODE_AS_STATIC_FUNCTION(playerTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_playerTouchEnded
		#define GEODE_STATICS_playerTouchEnded
		GEODE_AS_STATIC_FUNCTION(playerTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_playtestStopped
		#define GEODE_STATICS_playtestStopped
		GEODE_AS_STATIC_FUNCTION(playtestStopped) 
	#endif

	#ifndef GEODE_STATICS_positionIsInSnapped
		#define GEODE_STATICS_positionIsInSnapped
		GEODE_AS_STATIC_FUNCTION(positionIsInSnapped) 
	#endif

	#ifndef GEODE_STATICS_positionWithoutOffset
		#define GEODE_STATICS_positionWithoutOffset
		GEODE_AS_STATIC_FUNCTION(positionWithoutOffset) 
	#endif

	#ifndef GEODE_STATICS_processSelectObjects
		#define GEODE_STATICS_processSelectObjects
		GEODE_AS_STATIC_FUNCTION(processSelectObjects) 
	#endif

	#ifndef GEODE_STATICS_processSmartObjectsFromType
		#define GEODE_STATICS_processSmartObjectsFromType
		GEODE_AS_STATIC_FUNCTION(processSmartObjectsFromType) 
	#endif

	#ifndef GEODE_STATICS_recreateButtonTabs
		#define GEODE_STATICS_recreateButtonTabs
		GEODE_AS_STATIC_FUNCTION(recreateButtonTabs) 
	#endif

	#ifndef GEODE_STATICS_redoLastAction
		#define GEODE_STATICS_redoLastAction
		GEODE_AS_STATIC_FUNCTION(redoLastAction) 
	#endif

	#ifndef GEODE_STATICS_reloadCustomItems
		#define GEODE_STATICS_reloadCustomItems
		GEODE_AS_STATIC_FUNCTION(reloadCustomItems) 
	#endif

	#ifndef GEODE_STATICS_removeOffset
		#define GEODE_STATICS_removeOffset
		GEODE_AS_STATIC_FUNCTION(removeOffset) 
	#endif

	#ifndef GEODE_STATICS_replaceGroupID
		#define GEODE_STATICS_replaceGroupID
		GEODE_AS_STATIC_FUNCTION(replaceGroupID) 
	#endif

	#ifndef GEODE_STATICS_repositionObjectsToCenter
		#define GEODE_STATICS_repositionObjectsToCenter
		GEODE_AS_STATIC_FUNCTION(repositionObjectsToCenter) 
	#endif

	#ifndef GEODE_STATICS_resetObjectEditorValues
		#define GEODE_STATICS_resetObjectEditorValues
		GEODE_AS_STATIC_FUNCTION(resetObjectEditorValues) 
	#endif

	#ifndef GEODE_STATICS_resetSelectedObjectsColor
		#define GEODE_STATICS_resetSelectedObjectsColor
		GEODE_AS_STATIC_FUNCTION(resetSelectedObjectsColor) 
	#endif

	#ifndef GEODE_STATICS_resetUI
		#define GEODE_STATICS_resetUI
		GEODE_AS_STATIC_FUNCTION(resetUI) 
	#endif

	#ifndef GEODE_STATICS_rotateObjects
		#define GEODE_STATICS_rotateObjects
		GEODE_AS_STATIC_FUNCTION(rotateObjects) 
	#endif

	#ifndef GEODE_STATICS_rotationforCommand
		#define GEODE_STATICS_rotationforCommand
		GEODE_AS_STATIC_FUNCTION(rotationforCommand) 
	#endif

	#ifndef GEODE_STATICS_scaleObjects
		#define GEODE_STATICS_scaleObjects
		GEODE_AS_STATIC_FUNCTION(scaleObjects) 
	#endif

	#ifndef GEODE_STATICS_selectAll
		#define GEODE_STATICS_selectAll
		GEODE_AS_STATIC_FUNCTION(selectAll) 
	#endif

	#ifndef GEODE_STATICS_selectAllWithDirection
		#define GEODE_STATICS_selectAllWithDirection
		GEODE_AS_STATIC_FUNCTION(selectAllWithDirection) 
	#endif

	#ifndef GEODE_STATICS_selectBuildTab
		#define GEODE_STATICS_selectBuildTab
		GEODE_AS_STATIC_FUNCTION(selectBuildTab) 
	#endif

	#ifndef GEODE_STATICS_selectObject
		#define GEODE_STATICS_selectObject
		GEODE_AS_STATIC_FUNCTION(selectObject) 
	#endif

	#ifndef GEODE_STATICS_selectObjects
		#define GEODE_STATICS_selectObjects
		GEODE_AS_STATIC_FUNCTION(selectObjects) 
	#endif

	#ifndef GEODE_STATICS_selectObjectsInRect
		#define GEODE_STATICS_selectObjectsInRect
		GEODE_AS_STATIC_FUNCTION(selectObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_setupCreateMenu
		#define GEODE_STATICS_setupCreateMenu
		GEODE_AS_STATIC_FUNCTION(setupCreateMenu) 
	#endif

	#ifndef GEODE_STATICS_setupDeleteMenu
		#define GEODE_STATICS_setupDeleteMenu
		GEODE_AS_STATIC_FUNCTION(setupDeleteMenu) 
	#endif

	#ifndef GEODE_STATICS_setupTransformControl
		#define GEODE_STATICS_setupTransformControl
		GEODE_AS_STATIC_FUNCTION(setupTransformControl) 
	#endif

	#ifndef GEODE_STATICS_shouldDeleteObject
		#define GEODE_STATICS_shouldDeleteObject
		GEODE_AS_STATIC_FUNCTION(shouldDeleteObject) 
	#endif

	#ifndef GEODE_STATICS_shouldSnap
		#define GEODE_STATICS_shouldSnap
		GEODE_AS_STATIC_FUNCTION(shouldSnap) 
	#endif

	#ifndef GEODE_STATICS_showDeleteConfirmation
		#define GEODE_STATICS_showDeleteConfirmation
		GEODE_AS_STATIC_FUNCTION(showDeleteConfirmation) 
	#endif

	#ifndef GEODE_STATICS_showLiveColorSelectForMode
		#define GEODE_STATICS_showLiveColorSelectForMode
		GEODE_AS_STATIC_FUNCTION(showLiveColorSelectForMode) 
	#endif

	#ifndef GEODE_STATICS_showLiveColorSelectForModeSpecial
		#define GEODE_STATICS_showLiveColorSelectForModeSpecial
		GEODE_AS_STATIC_FUNCTION(showLiveColorSelectForModeSpecial) 
	#endif

	#ifndef GEODE_STATICS_showMaxBasicError
		#define GEODE_STATICS_showMaxBasicError
		GEODE_AS_STATIC_FUNCTION(showMaxBasicError) 
	#endif

	#ifndef GEODE_STATICS_showMaxCoinError
		#define GEODE_STATICS_showMaxCoinError
		GEODE_AS_STATIC_FUNCTION(showMaxCoinError) 
	#endif

	#ifndef GEODE_STATICS_showMaxError
		#define GEODE_STATICS_showMaxError
		GEODE_AS_STATIC_FUNCTION(showMaxError) 
	#endif

	#ifndef GEODE_STATICS_showUI
		#define GEODE_STATICS_showUI
		GEODE_AS_STATIC_FUNCTION(showUI) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_smartTypeForKey
		#define GEODE_STATICS_smartTypeForKey
		GEODE_AS_STATIC_FUNCTION(smartTypeForKey) 
	#endif

	#ifndef GEODE_STATICS_spriteFromObjectString
		#define GEODE_STATICS_spriteFromObjectString
		GEODE_AS_STATIC_FUNCTION(spriteFromObjectString) 
	#endif

	#ifndef GEODE_STATICS_toggleDuplicateButton
		#define GEODE_STATICS_toggleDuplicateButton
		GEODE_AS_STATIC_FUNCTION(toggleDuplicateButton) 
	#endif

	#ifndef GEODE_STATICS_toggleEditObjectButton
		#define GEODE_STATICS_toggleEditObjectButton
		GEODE_AS_STATIC_FUNCTION(toggleEditObjectButton) 
	#endif

	#ifndef GEODE_STATICS_toggleEnableRotate
		#define GEODE_STATICS_toggleEnableRotate
		GEODE_AS_STATIC_FUNCTION(toggleEnableRotate) 
	#endif

	#ifndef GEODE_STATICS_toggleFreeMove
		#define GEODE_STATICS_toggleFreeMove
		GEODE_AS_STATIC_FUNCTION(toggleFreeMove) 
	#endif

	#ifndef GEODE_STATICS_toggleLockUI
		#define GEODE_STATICS_toggleLockUI
		GEODE_AS_STATIC_FUNCTION(toggleLockUI) 
	#endif

	#ifndef GEODE_STATICS_toggleMode
		#define GEODE_STATICS_toggleMode
		GEODE_AS_STATIC_FUNCTION(toggleMode) 
	#endif

	#ifndef GEODE_STATICS_toggleObjectInfoLabel
		#define GEODE_STATICS_toggleObjectInfoLabel
		GEODE_AS_STATIC_FUNCTION(toggleObjectInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_toggleSnap
		#define GEODE_STATICS_toggleSnap
		GEODE_AS_STATIC_FUNCTION(toggleSnap) 
	#endif

	#ifndef GEODE_STATICS_toggleSpecialEditButtons
		#define GEODE_STATICS_toggleSpecialEditButtons
		GEODE_AS_STATIC_FUNCTION(toggleSpecialEditButtons) 
	#endif

	#ifndef GEODE_STATICS_toggleStickyControls
		#define GEODE_STATICS_toggleStickyControls
		GEODE_AS_STATIC_FUNCTION(toggleStickyControls) 
	#endif

	#ifndef GEODE_STATICS_toggleSwipe
		#define GEODE_STATICS_toggleSwipe
		GEODE_AS_STATIC_FUNCTION(toggleSwipe) 
	#endif

	#ifndef GEODE_STATICS_transformObject
		#define GEODE_STATICS_transformObject
		GEODE_AS_STATIC_FUNCTION(transformObject) 
	#endif

	#ifndef GEODE_STATICS_transformObjectCall
		#define GEODE_STATICS_transformObjectCall
		GEODE_AS_STATIC_FUNCTION(transformObjectCall) 
	#endif

	#ifndef GEODE_STATICS_transformObjects
		#define GEODE_STATICS_transformObjects
		GEODE_AS_STATIC_FUNCTION(transformObjects) 
	#endif

	#ifndef GEODE_STATICS_transformObjectsActive
		#define GEODE_STATICS_transformObjectsActive
		GEODE_AS_STATIC_FUNCTION(transformObjectsActive) 
	#endif

	#ifndef GEODE_STATICS_transformObjectsReset
		#define GEODE_STATICS_transformObjectsReset
		GEODE_AS_STATIC_FUNCTION(transformObjectsReset) 
	#endif

	#ifndef GEODE_STATICS_triggerSwipeMode
		#define GEODE_STATICS_triggerSwipeMode
		GEODE_AS_STATIC_FUNCTION(triggerSwipeMode) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateTimeMarkers
		#define GEODE_STATICS_tryUpdateTimeMarkers
		GEODE_AS_STATIC_FUNCTION(tryUpdateTimeMarkers) 
	#endif

	#ifndef GEODE_STATICS_undoLastAction
		#define GEODE_STATICS_undoLastAction
		GEODE_AS_STATIC_FUNCTION(undoLastAction) 
	#endif

	#ifndef GEODE_STATICS_updateButtons
		#define GEODE_STATICS_updateButtons
		GEODE_AS_STATIC_FUNCTION(updateButtons) 
	#endif

	#ifndef GEODE_STATICS_updateCreateMenu
		#define GEODE_STATICS_updateCreateMenu
		GEODE_AS_STATIC_FUNCTION(updateCreateMenu) 
	#endif

	#ifndef GEODE_STATICS_updateDeleteButtons
		#define GEODE_STATICS_updateDeleteButtons
		GEODE_AS_STATIC_FUNCTION(updateDeleteButtons) 
	#endif

	#ifndef GEODE_STATICS_updateEditButtonColor
		#define GEODE_STATICS_updateEditButtonColor
		GEODE_AS_STATIC_FUNCTION(updateEditButtonColor) 
	#endif

	#ifndef GEODE_STATICS_updateEditColorButton
		#define GEODE_STATICS_updateEditColorButton
		GEODE_AS_STATIC_FUNCTION(updateEditColorButton) 
	#endif

	#ifndef GEODE_STATICS_updateGridNodeSize
		#define GEODE_STATICS_updateGridNodeSize
		GEODE_AS_STATIC_FUNCTION(updateGridNodeSize) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDBtn2
		#define GEODE_STATICS_updateGroupIDBtn2
		GEODE_AS_STATIC_FUNCTION(updateGroupIDBtn2) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDLabel
		#define GEODE_STATICS_updateGroupIDLabel
		GEODE_AS_STATIC_FUNCTION(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_STATICS_updateObjectInfoLabel
		#define GEODE_STATICS_updateObjectInfoLabel
		GEODE_AS_STATIC_FUNCTION(updateObjectInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePlaybackBtn
		#define GEODE_STATICS_updatePlaybackBtn
		GEODE_AS_STATIC_FUNCTION(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_STATICS_updateSlider
		#define GEODE_STATICS_updateSlider
		GEODE_AS_STATIC_FUNCTION(updateSlider) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialUIElements
		#define GEODE_STATICS_updateSpecialUIElements
		GEODE_AS_STATIC_FUNCTION(updateSpecialUIElements) 
	#endif

	#ifndef GEODE_STATICS_updateZoom
		#define GEODE_STATICS_updateZoom
		GEODE_AS_STATIC_FUNCTION(updateZoom) 
	#endif

	#ifndef GEODE_STATICS_valueFromXPos
		#define GEODE_STATICS_valueFromXPos
		GEODE_AS_STATIC_FUNCTION(valueFromXPos) 
	#endif

	#ifndef GEODE_STATICS_xPosFromValue
		#define GEODE_STATICS_xPosFromValue
		GEODE_AS_STATIC_FUNCTION(xPosFromValue) 
	#endif

	#ifndef GEODE_STATICS_zoomGameLayer
		#define GEODE_STATICS_zoomGameLayer
		GEODE_AS_STATIC_FUNCTION(zoomGameLayer) 
	#endif

	#ifndef GEODE_STATICS_zoomIn
		#define GEODE_STATICS_zoomIn
		GEODE_AS_STATIC_FUNCTION(zoomIn) 
	#endif

	#ifndef GEODE_STATICS_zoomOut
		#define GEODE_STATICS_zoomOut
		GEODE_AS_STATIC_FUNCTION(zoomOut) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_getUI
		#define GEODE_STATICS_getUI
		GEODE_AS_STATIC_FUNCTION(getUI) 
	#endif

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateTransformControl
		#define GEODE_STATICS_updateTransformControl
		GEODE_AS_STATIC_FUNCTION(updateTransformControl) 
	#endif

	#ifndef GEODE_STATICS_transformChangeBegin
		#define GEODE_STATICS_transformChangeBegin
		GEODE_AS_STATIC_FUNCTION(transformChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_getTransformNode
		#define GEODE_STATICS_getTransformNode
		GEODE_AS_STATIC_FUNCTION(getTransformNode) 
	#endif

	#ifndef GEODE_STATICS_transformScaleXChanged
		#define GEODE_STATICS_transformScaleXChanged
		GEODE_AS_STATIC_FUNCTION(transformScaleXChanged) 
	#endif

	#ifndef GEODE_STATICS_transformScaleYChanged
		#define GEODE_STATICS_transformScaleYChanged
		GEODE_AS_STATIC_FUNCTION(transformScaleYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformScaleXYChanged
		#define GEODE_STATICS_transformScaleXYChanged
		GEODE_AS_STATIC_FUNCTION(transformScaleXYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformSkewXChanged
		#define GEODE_STATICS_transformSkewXChanged
		GEODE_AS_STATIC_FUNCTION(transformSkewXChanged) 
	#endif

	#ifndef GEODE_STATICS_transformSkewYChanged
		#define GEODE_STATICS_transformSkewYChanged
		GEODE_AS_STATIC_FUNCTION(transformSkewYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformRotationXChanged
		#define GEODE_STATICS_transformRotationXChanged
		GEODE_AS_STATIC_FUNCTION(transformRotationXChanged) 
	#endif

	#ifndef GEODE_STATICS_transformRotationYChanged
		#define GEODE_STATICS_transformRotationYChanged
		GEODE_AS_STATIC_FUNCTION(transformRotationYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformRotationChanged
		#define GEODE_STATICS_transformRotationChanged
		GEODE_AS_STATIC_FUNCTION(transformRotationChanged) 
	#endif

	#ifndef GEODE_STATICS_transformResetRotation
		#define GEODE_STATICS_transformResetRotation
		GEODE_AS_STATIC_FUNCTION(transformResetRotation) 
	#endif

	#ifndef GEODE_STATICS_transformRestoreRotation
		#define GEODE_STATICS_transformRestoreRotation
		GEODE_AS_STATIC_FUNCTION(transformRestoreRotation) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

	#ifndef GEODE_STATICS_scrollWheel
		#define GEODE_STATICS_scrollWheel
		GEODE_AS_STATIC_FUNCTION(scrollWheel) 
	#endif

	#ifndef GEODE_STATICS_angleChangeBegin
		#define GEODE_STATICS_angleChangeBegin
		GEODE_AS_STATIC_FUNCTION(angleChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_angleChanged
		#define GEODE_STATICS_angleChanged
		GEODE_AS_STATIC_FUNCTION(angleChanged) 
	#endif

	#ifndef GEODE_STATICS_updateScaleControl
		#define GEODE_STATICS_updateScaleControl
		GEODE_AS_STATIC_FUNCTION(updateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_anchorPointMoved
		#define GEODE_STATICS_anchorPointMoved
		GEODE_AS_STATIC_FUNCTION(anchorPointMoved) 
	#endif

	#ifndef GEODE_STATICS_scaleChangeBegin
		#define GEODE_STATICS_scaleChangeBegin
		GEODE_AS_STATIC_FUNCTION(scaleChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_scaleXChanged
		#define GEODE_STATICS_scaleXChanged
		GEODE_AS_STATIC_FUNCTION(scaleXChanged) 
	#endif

	#ifndef GEODE_STATICS_scaleYChanged
		#define GEODE_STATICS_scaleYChanged
		GEODE_AS_STATIC_FUNCTION(scaleYChanged) 
	#endif

	#ifndef GEODE_STATICS_scaleXYChanged
		#define GEODE_STATICS_scaleXYChanged
		GEODE_AS_STATIC_FUNCTION(scaleXYChanged) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateRotationControl
		#define GEODE_CONCEPT_CHECK_activateRotationControl
		GEODE_CONCEPT_FUNCTION_CHECK(activateRotationControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateScaleControl
		#define GEODE_CONCEPT_CHECK_activateScaleControl
		GEODE_CONCEPT_FUNCTION_CHECK(activateScaleControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateTransformControl
		#define GEODE_CONCEPT_CHECK_activateTransformControl
		GEODE_CONCEPT_FUNCTION_CHECK(activateTransformControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectsToSmartTemplate
		#define GEODE_CONCEPT_CHECK_addObjectsToSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectsToSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSnapPosition
		#define GEODE_CONCEPT_CHECK_addSnapPosition
		GEODE_CONCEPT_FUNCTION_CHECK(addSnapPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_alignObjects
		#define GEODE_CONCEPT_CHECK_alignObjects
		GEODE_CONCEPT_FUNCTION_CHECK(alignObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyOffset
		#define GEODE_CONCEPT_CHECK_applyOffset
		GEODE_CONCEPT_FUNCTION_CHECK(applyOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applySpecialOffset
		#define GEODE_CONCEPT_CHECK_applySpecialOffset
		GEODE_CONCEPT_FUNCTION_CHECK(applySpecialOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_arrayContainsClass
		#define GEODE_CONCEPT_CHECK_arrayContainsClass
		GEODE_CONCEPT_FUNCTION_CHECK(arrayContainsClass) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_assignNewGroups
		#define GEODE_CONCEPT_CHECK_assignNewGroups
		GEODE_CONCEPT_FUNCTION_CHECK(assignNewGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canAllowMultiActivate
		#define GEODE_CONCEPT_CHECK_canAllowMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canSelectObject
		#define GEODE_CONCEPT_CHECK_canSelectObject
		GEODE_CONCEPT_FUNCTION_CHECK(canSelectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_centerCameraOnObject
		#define GEODE_CONCEPT_CHECK_centerCameraOnObject
		GEODE_CONCEPT_FUNCTION_CHECK(centerCameraOnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_changeSelectedObjects
		#define GEODE_CONCEPT_CHECK_changeSelectedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(changeSelectedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkDiffAfterTransformAnchor
		#define GEODE_CONCEPT_CHECK_checkDiffAfterTransformAnchor
		GEODE_CONCEPT_FUNCTION_CHECK(checkDiffAfterTransformAnchor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkLiveColorSelect
		#define GEODE_CONCEPT_CHECK_checkLiveColorSelect
		GEODE_CONCEPT_FUNCTION_CHECK(checkLiveColorSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clickOnPosition
		#define GEODE_CONCEPT_CHECK_clickOnPosition
		GEODE_CONCEPT_FUNCTION_CHECK(clickOnPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeLiveColorSelect
		#define GEODE_CONCEPT_CHECK_closeLiveColorSelect
		GEODE_CONCEPT_FUNCTION_CHECK(closeLiveColorSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeLiveHSVSelect
		#define GEODE_CONCEPT_CHECK_closeLiveHSVSelect
		GEODE_CONCEPT_FUNCTION_CHECK(closeLiveHSVSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_constrainGameLayerPosition
		#define GEODE_CONCEPT_CHECK_constrainGameLayerPosition
		GEODE_CONCEPT_FUNCTION_CHECK(constrainGameLayerPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertKeyBasedOnNeighbors
		#define GEODE_CONCEPT_CHECK_convertKeyBasedOnNeighbors
		GEODE_CONCEPT_FUNCTION_CHECK(convertKeyBasedOnNeighbors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToBaseKey
		#define GEODE_CONCEPT_CHECK_convertToBaseKey
		GEODE_CONCEPT_FUNCTION_CHECK(convertToBaseKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyObjects
		#define GEODE_CONCEPT_CHECK_copyObjects
		GEODE_CONCEPT_FUNCTION_CHECK(copyObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyObjectsDetailed
		#define GEODE_CONCEPT_CHECK_copyObjectsDetailed
		GEODE_CONCEPT_FUNCTION_CHECK(copyObjectsDetailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCustomItems
		#define GEODE_CONCEPT_CHECK_createCustomItems
		GEODE_CONCEPT_FUNCTION_CHECK(createCustomItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createEdgeForObject
		#define GEODE_CONCEPT_CHECK_createEdgeForObject
		GEODE_CONCEPT_FUNCTION_CHECK(createEdgeForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createExtraObject
		#define GEODE_CONCEPT_CHECK_createExtraObject
		GEODE_CONCEPT_FUNCTION_CHECK(createExtraObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createExtras
		#define GEODE_CONCEPT_CHECK_createExtras
		GEODE_CONCEPT_FUNCTION_CHECK(createExtras) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createExtrasForObject
		#define GEODE_CONCEPT_CHECK_createExtrasForObject
		GEODE_CONCEPT_FUNCTION_CHECK(createExtrasForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGlow
		#define GEODE_CONCEPT_CHECK_createGlow
		GEODE_CONCEPT_FUNCTION_CHECK(createGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createLoop
		#define GEODE_CONCEPT_CHECK_createLoop
		GEODE_CONCEPT_FUNCTION_CHECK(createLoop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMoveMenu
		#define GEODE_CONCEPT_CHECK_createMoveMenu
		GEODE_CONCEPT_FUNCTION_CHECK(createMoveMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewKeyframeAnim
		#define GEODE_CONCEPT_CHECK_createNewKeyframeAnim
		GEODE_CONCEPT_FUNCTION_CHECK(createNewKeyframeAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObject
		#define GEODE_CONCEPT_CHECK_createObject
		GEODE_CONCEPT_FUNCTION_CHECK(createObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createOutlines
		#define GEODE_CONCEPT_CHECK_createOutlines
		GEODE_CONCEPT_FUNCTION_CHECK(createOutlines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPrefab
		#define GEODE_CONCEPT_CHECK_createPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(createPrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRockBases
		#define GEODE_CONCEPT_CHECK_createRockBases
		GEODE_CONCEPT_FUNCTION_CHECK(createRockBases) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRockEdges
		#define GEODE_CONCEPT_CHECK_createRockEdges
		GEODE_CONCEPT_FUNCTION_CHECK(createRockEdges) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSmartObjectsFromTemplate
		#define GEODE_CONCEPT_CHECK_createSmartObjectsFromTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(createSmartObjectsFromTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSmartObjectsFromType
		#define GEODE_CONCEPT_CHECK_createSmartObjectsFromType
		GEODE_CONCEPT_FUNCTION_CHECK(createSmartObjectsFromType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createUndoObject
		#define GEODE_CONCEPT_CHECK_createUndoObject
		GEODE_CONCEPT_FUNCTION_CHECK(createUndoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createUndoSelectObject
		#define GEODE_CONCEPT_CHECK_createUndoSelectObject
		GEODE_CONCEPT_FUNCTION_CHECK(createUndoSelectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateRotationControl
		#define GEODE_CONCEPT_CHECK_deactivateRotationControl
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateRotationControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateScaleControl
		#define GEODE_CONCEPT_CHECK_deactivateScaleControl
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateScaleControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateTransformControl
		#define GEODE_CONCEPT_CHECK_deactivateTransformControl
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateTransformControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteObject
		#define GEODE_CONCEPT_CHECK_deleteObject
		GEODE_CONCEPT_FUNCTION_CHECK(deleteObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSmartBlocksFromObjects
		#define GEODE_CONCEPT_CHECK_deleteSmartBlocksFromObjects
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSmartBlocksFromObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteTypeFromObjects
		#define GEODE_CONCEPT_CHECK_deleteTypeFromObjects
		GEODE_CONCEPT_FUNCTION_CHECK(deleteTypeFromObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectAll
		#define GEODE_CONCEPT_CHECK_deselectAll
		GEODE_CONCEPT_FUNCTION_CHECK(deselectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectObject
		#define GEODE_CONCEPT_CHECK_deselectObject
		GEODE_CONCEPT_FUNCTION_CHECK(deselectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectObjectsColor
		#define GEODE_CONCEPT_CHECK_deselectObjectsColor
		GEODE_CONCEPT_FUNCTION_CHECK(deselectObjectsColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectTargetPortals
		#define GEODE_CONCEPT_CHECK_deselectTargetPortals
		GEODE_CONCEPT_FUNCTION_CHECK(deselectTargetPortals) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableButton
		#define GEODE_CONCEPT_CHECK_disableButton
		GEODE_CONCEPT_FUNCTION_CHECK(disableButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doCopyObjects
		#define GEODE_CONCEPT_CHECK_doCopyObjects
		GEODE_CONCEPT_FUNCTION_CHECK(doCopyObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doPasteInPlace
		#define GEODE_CONCEPT_CHECK_doPasteInPlace
		GEODE_CONCEPT_FUNCTION_CHECK(doPasteInPlace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doPasteObjects
		#define GEODE_CONCEPT_CHECK_doPasteObjects
		GEODE_CONCEPT_FUNCTION_CHECK(doPasteObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dynamicGroupUpdate
		#define GEODE_CONCEPT_CHECK_dynamicGroupUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(dynamicGroupUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_edgeForObject
		#define GEODE_CONCEPT_CHECK_edgeForObject
		GEODE_CONCEPT_FUNCTION_CHECK(edgeForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editButton2Usable
		#define GEODE_CONCEPT_CHECK_editButton2Usable
		GEODE_CONCEPT_FUNCTION_CHECK(editButton2Usable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editButtonUsable
		#define GEODE_CONCEPT_CHECK_editButtonUsable
		GEODE_CONCEPT_FUNCTION_CHECK(editButtonUsable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editColor
		#define GEODE_CONCEPT_CHECK_editColor
		GEODE_CONCEPT_FUNCTION_CHECK(editColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editColorButtonUsable
		#define GEODE_CONCEPT_CHECK_editColorButtonUsable
		GEODE_CONCEPT_FUNCTION_CHECK(editColorButtonUsable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editGroup
		#define GEODE_CONCEPT_CHECK_editGroup
		GEODE_CONCEPT_FUNCTION_CHECK(editGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editHSV
		#define GEODE_CONCEPT_CHECK_editHSV
		GEODE_CONCEPT_FUNCTION_CHECK(editHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editObject
		#define GEODE_CONCEPT_CHECK_editObject
		GEODE_CONCEPT_FUNCTION_CHECK(editObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editObject2
		#define GEODE_CONCEPT_CHECK_editObject2
		GEODE_CONCEPT_FUNCTION_CHECK(editObject2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editObject3
		#define GEODE_CONCEPT_CHECK_editObject3
		GEODE_CONCEPT_FUNCTION_CHECK(editObject3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editObjectSpecial
		#define GEODE_CONCEPT_CHECK_editObjectSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(editObjectSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editorLayerForArray
		#define GEODE_CONCEPT_CHECK_editorLayerForArray
		GEODE_CONCEPT_FUNCTION_CHECK(editorLayerForArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableButton
		#define GEODE_CONCEPT_CHECK_enableButton
		GEODE_CONCEPT_FUNCTION_CHECK(enableButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findAndSelectObject
		#define GEODE_CONCEPT_CHECK_findAndSelectObject
		GEODE_CONCEPT_FUNCTION_CHECK(findAndSelectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findSnapObject
		#define GEODE_CONCEPT_CHECK_findSnapObject
		GEODE_CONCEPT_FUNCTION_CHECK(findSnapObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findTriggerTest
		#define GEODE_CONCEPT_CHECK_findTriggerTest
		GEODE_CONCEPT_FUNCTION_CHECK(findTriggerTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipObjectsX
		#define GEODE_CONCEPT_CHECK_flipObjectsX
		GEODE_CONCEPT_FUNCTION_CHECK(flipObjectsX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipObjectsY
		#define GEODE_CONCEPT_CHECK_flipObjectsY
		GEODE_CONCEPT_FUNCTION_CHECK(flipObjectsY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getButton
		#define GEODE_CONCEPT_CHECK_getButton
		GEODE_CONCEPT_FUNCTION_CHECK(getButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCreateBtn
		#define GEODE_CONCEPT_CHECK_getCreateBtn
		GEODE_CONCEPT_FUNCTION_CHECK(getCreateBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCreateMenuItemButton
		#define GEODE_CONCEPT_CHECK_getCreateMenuItemButton
		GEODE_CONCEPT_FUNCTION_CHECK(getCreateMenuItemButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCycledObject
		#define GEODE_CONCEPT_CHECK_getCycledObject
		GEODE_CONCEPT_FUNCTION_CHECK(getCycledObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditColorTargets
		#define GEODE_CONCEPT_CHECK_getEditColorTargets
		GEODE_CONCEPT_FUNCTION_CHECK(getEditColorTargets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGridSnappedPos
		#define GEODE_CONCEPT_CHECK_getGridSnappedPos
		GEODE_CONCEPT_FUNCTION_CHECK(getGridSnappedPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupCenter
		#define GEODE_CONCEPT_CHECK_getGroupCenter
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupInfo
		#define GEODE_CONCEPT_CHECK_getGroupInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLimitedPosition
		#define GEODE_CONCEPT_CHECK_getLimitedPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getLimitedPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getModeBtn
		#define GEODE_CONCEPT_CHECK_getModeBtn
		GEODE_CONCEPT_FUNCTION_CHECK(getModeBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNeighbor
		#define GEODE_CONCEPT_CHECK_getNeighbor
		GEODE_CONCEPT_FUNCTION_CHECK(getNeighbor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRandomStartKey
		#define GEODE_CONCEPT_CHECK_getRandomStartKey
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomStartKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeOffset
		#define GEODE_CONCEPT_CHECK_getRelativeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedObjects
		#define GEODE_CONCEPT_CHECK_getSelectedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSimpleButton
		#define GEODE_CONCEPT_CHECK_getSimpleButton
		GEODE_CONCEPT_FUNCTION_CHECK(getSimpleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSmartNeighbor
		#define GEODE_CONCEPT_CHECK_getSmartNeighbor
		GEODE_CONCEPT_FUNCTION_CHECK(getSmartNeighbor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSmartObjectKey
		#define GEODE_CONCEPT_CHECK_getSmartObjectKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSmartObjectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSnapAngle
		#define GEODE_CONCEPT_CHECK_getSnapAngle
		GEODE_CONCEPT_FUNCTION_CHECK(getSnapAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpriteButton
		#define GEODE_CONCEPT_CHECK_getSpriteButton
		GEODE_CONCEPT_FUNCTION_CHECK(getSpriteButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchPoint
		#define GEODE_CONCEPT_CHECK_getTouchPoint
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTransformState
		#define GEODE_CONCEPT_CHECK_getTransformState
		GEODE_CONCEPT_FUNCTION_CHECK(getTransformState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getXMin
		#define GEODE_CONCEPT_CHECK_getXMin
		GEODE_CONCEPT_FUNCTION_CHECK(getXMin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLiveColorSelectTrigger
		#define GEODE_CONCEPT_CHECK_isLiveColorSelectTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isLiveColorSelectTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialSnapObject
		#define GEODE_CONCEPT_CHECK_isSpecialSnapObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialSnapObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_liveEditColorUsable
		#define GEODE_CONCEPT_CHECK_liveEditColorUsable
		GEODE_CONCEPT_FUNCTION_CHECK(liveEditColorUsable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_menuItemFromObjectString
		#define GEODE_CONCEPT_CHECK_menuItemFromObjectString
		GEODE_CONCEPT_FUNCTION_CHECK(menuItemFromObjectString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveForCommand
		#define GEODE_CONCEPT_CHECK_moveForCommand
		GEODE_CONCEPT_FUNCTION_CHECK(moveForCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveGamelayer
		#define GEODE_CONCEPT_CHECK_moveGamelayer
		GEODE_CONCEPT_FUNCTION_CHECK(moveGamelayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObject
		#define GEODE_CONCEPT_CHECK_moveObject
		GEODE_CONCEPT_FUNCTION_CHECK(moveObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObjectCall
		#define GEODE_CONCEPT_CHECK_moveObjectCall
		GEODE_CONCEPT_FUNCTION_CHECK(moveObjectCall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetForKey
		#define GEODE_CONCEPT_CHECK_offsetForKey
		GEODE_CONCEPT_FUNCTION_CHECK(offsetForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAssignNewGroupID
		#define GEODE_CONCEPT_CHECK_onAssignNewGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(onAssignNewGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onColorFilter
		#define GEODE_CONCEPT_CHECK_onColorFilter
		GEODE_CONCEPT_FUNCTION_CHECK(onColorFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopyState
		#define GEODE_CONCEPT_CHECK_onCopyState
		GEODE_CONCEPT_FUNCTION_CHECK(onCopyState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreate
		#define GEODE_CONCEPT_CHECK_onCreate
		GEODE_CONCEPT_FUNCTION_CHECK(onCreate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateButton
		#define GEODE_CONCEPT_CHECK_onCreateButton
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateObject
		#define GEODE_CONCEPT_CHECK_onCreateObject
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteAll
		#define GEODE_CONCEPT_CHECK_onDeleteAll
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteCustomItem
		#define GEODE_CONCEPT_CHECK_onDeleteCustomItem
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteCustomItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteInfo
		#define GEODE_CONCEPT_CHECK_onDeleteInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelected
		#define GEODE_CONCEPT_CHECK_onDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelectedType
		#define GEODE_CONCEPT_CHECK_onDeleteSelectedType
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelectedType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteStartPos
		#define GEODE_CONCEPT_CHECK_onDeleteStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeselectAll
		#define GEODE_CONCEPT_CHECK_onDeselectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onDeselectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDuplicate
		#define GEODE_CONCEPT_CHECK_onDuplicate
		GEODE_CONCEPT_FUNCTION_CHECK(onDuplicate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditColor
		#define GEODE_CONCEPT_CHECK_onEditColor
		GEODE_CONCEPT_FUNCTION_CHECK(onEditColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFindObject
		#define GEODE_CONCEPT_CHECK_onFindObject
		GEODE_CONCEPT_FUNCTION_CHECK(onFindObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGoToBaseLayer
		#define GEODE_CONCEPT_CHECK_onGoToBaseLayer
		GEODE_CONCEPT_FUNCTION_CHECK(onGoToBaseLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGoToLayer
		#define GEODE_CONCEPT_CHECK_onGoToLayer
		GEODE_CONCEPT_FUNCTION_CHECK(onGoToLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupDown
		#define GEODE_CONCEPT_CHECK_onGroupDown
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupIDFilter
		#define GEODE_CONCEPT_CHECK_onGroupIDFilter
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupIDFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupSticky
		#define GEODE_CONCEPT_CHECK_onGroupSticky
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupSticky) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupUp
		#define GEODE_CONCEPT_CHECK_onGroupUp
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLockLayer
		#define GEODE_CONCEPT_CHECK_onLockLayer
		GEODE_CONCEPT_FUNCTION_CHECK(onLockLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewCustomItem
		#define GEODE_CONCEPT_CHECK_onNewCustomItem
		GEODE_CONCEPT_FUNCTION_CHECK(onNewCustomItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPasteColor
		#define GEODE_CONCEPT_CHECK_onPasteColor
		GEODE_CONCEPT_FUNCTION_CHECK(onPasteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPasteInPlace
		#define GEODE_CONCEPT_CHECK_onPasteInPlace
		GEODE_CONCEPT_FUNCTION_CHECK(onPasteInPlace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPasteState
		#define GEODE_CONCEPT_CHECK_onPasteState
		GEODE_CONCEPT_FUNCTION_CHECK(onPasteState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPause
		#define GEODE_CONCEPT_CHECK_onPause
		GEODE_CONCEPT_FUNCTION_CHECK(onPause) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayback
		#define GEODE_CONCEPT_CHECK_onPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlaytest
		#define GEODE_CONCEPT_CHECK_onPlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onPlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResetSpecialFilter
		#define GEODE_CONCEPT_CHECK_onResetSpecialFilter
		GEODE_CONCEPT_FUNCTION_CHECK(onResetSpecialFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectBuildTab
		#define GEODE_CONCEPT_CHECK_onSelectBuildTab
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectBuildTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStopPlaytest
		#define GEODE_CONCEPT_CHECK_onStopPlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onStopPlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetIDChange
		#define GEODE_CONCEPT_CHECK_onTargetIDChange
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetIDChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleGuide
		#define GEODE_CONCEPT_CHECK_onToggleGuide
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSelectedOrder
		#define GEODE_CONCEPT_CHECK_onToggleSelectedOrder
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSelectedOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUngroupSticky
		#define GEODE_CONCEPT_CHECK_onUngroupSticky
		GEODE_CONCEPT_FUNCTION_CHECK(onUngroupSticky) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateDeleteFilter
		#define GEODE_CONCEPT_CHECK_onUpdateDeleteFilter
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateDeleteFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_orderDownCustomItem
		#define GEODE_CONCEPT_CHECK_orderDownCustomItem
		GEODE_CONCEPT_FUNCTION_CHECK(orderDownCustomItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_orderUpCustomItem
		#define GEODE_CONCEPT_CHECK_orderUpCustomItem
		GEODE_CONCEPT_FUNCTION_CHECK(orderUpCustomItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pasteObjects
		#define GEODE_CONCEPT_CHECK_pasteObjects
		GEODE_CONCEPT_FUNCTION_CHECK(pasteObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playCircleAnim
		#define GEODE_CONCEPT_CHECK_playCircleAnim
		GEODE_CONCEPT_FUNCTION_CHECK(playCircleAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchBegan
		#define GEODE_CONCEPT_CHECK_playerTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchEnded
		#define GEODE_CONCEPT_CHECK_playerTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playtestStopped
		#define GEODE_CONCEPT_CHECK_playtestStopped
		GEODE_CONCEPT_FUNCTION_CHECK(playtestStopped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionIsInSnapped
		#define GEODE_CONCEPT_CHECK_positionIsInSnapped
		GEODE_CONCEPT_FUNCTION_CHECK(positionIsInSnapped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionWithoutOffset
		#define GEODE_CONCEPT_CHECK_positionWithoutOffset
		GEODE_CONCEPT_FUNCTION_CHECK(positionWithoutOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processSelectObjects
		#define GEODE_CONCEPT_CHECK_processSelectObjects
		GEODE_CONCEPT_FUNCTION_CHECK(processSelectObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processSmartObjectsFromType
		#define GEODE_CONCEPT_CHECK_processSmartObjectsFromType
		GEODE_CONCEPT_FUNCTION_CHECK(processSmartObjectsFromType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recreateButtonTabs
		#define GEODE_CONCEPT_CHECK_recreateButtonTabs
		GEODE_CONCEPT_FUNCTION_CHECK(recreateButtonTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_redoLastAction
		#define GEODE_CONCEPT_CHECK_redoLastAction
		GEODE_CONCEPT_FUNCTION_CHECK(redoLastAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadCustomItems
		#define GEODE_CONCEPT_CHECK_reloadCustomItems
		GEODE_CONCEPT_FUNCTION_CHECK(reloadCustomItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeOffset
		#define GEODE_CONCEPT_CHECK_removeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(removeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_replaceGroupID
		#define GEODE_CONCEPT_CHECK_replaceGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(replaceGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_repositionObjectsToCenter
		#define GEODE_CONCEPT_CHECK_repositionObjectsToCenter
		GEODE_CONCEPT_FUNCTION_CHECK(repositionObjectsToCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObjectEditorValues
		#define GEODE_CONCEPT_CHECK_resetObjectEditorValues
		GEODE_CONCEPT_FUNCTION_CHECK(resetObjectEditorValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSelectedObjectsColor
		#define GEODE_CONCEPT_CHECK_resetSelectedObjectsColor
		GEODE_CONCEPT_FUNCTION_CHECK(resetSelectedObjectsColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUI
		#define GEODE_CONCEPT_CHECK_resetUI
		GEODE_CONCEPT_FUNCTION_CHECK(resetUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateObjects
		#define GEODE_CONCEPT_CHECK_rotateObjects
		GEODE_CONCEPT_FUNCTION_CHECK(rotateObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotationforCommand
		#define GEODE_CONCEPT_CHECK_rotationforCommand
		GEODE_CONCEPT_FUNCTION_CHECK(rotationforCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleObjects
		#define GEODE_CONCEPT_CHECK_scaleObjects
		GEODE_CONCEPT_FUNCTION_CHECK(scaleObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectAll
		#define GEODE_CONCEPT_CHECK_selectAll
		GEODE_CONCEPT_FUNCTION_CHECK(selectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectAllWithDirection
		#define GEODE_CONCEPT_CHECK_selectAllWithDirection
		GEODE_CONCEPT_FUNCTION_CHECK(selectAllWithDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectBuildTab
		#define GEODE_CONCEPT_CHECK_selectBuildTab
		GEODE_CONCEPT_FUNCTION_CHECK(selectBuildTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectObject
		#define GEODE_CONCEPT_CHECK_selectObject
		GEODE_CONCEPT_FUNCTION_CHECK(selectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectObjects
		#define GEODE_CONCEPT_CHECK_selectObjects
		GEODE_CONCEPT_FUNCTION_CHECK(selectObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectObjectsInRect
		#define GEODE_CONCEPT_CHECK_selectObjectsInRect
		GEODE_CONCEPT_FUNCTION_CHECK(selectObjectsInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCreateMenu
		#define GEODE_CONCEPT_CHECK_setupCreateMenu
		GEODE_CONCEPT_FUNCTION_CHECK(setupCreateMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupDeleteMenu
		#define GEODE_CONCEPT_CHECK_setupDeleteMenu
		GEODE_CONCEPT_FUNCTION_CHECK(setupDeleteMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupEditMenu
		#define GEODE_CONCEPT_CHECK_setupEditMenu
		GEODE_CONCEPT_FUNCTION_CHECK(setupEditMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTransformControl
		#define GEODE_CONCEPT_CHECK_setupTransformControl
		GEODE_CONCEPT_FUNCTION_CHECK(setupTransformControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDeleteObject
		#define GEODE_CONCEPT_CHECK_shouldDeleteObject
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDeleteObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldSnap
		#define GEODE_CONCEPT_CHECK_shouldSnap
		GEODE_CONCEPT_FUNCTION_CHECK(shouldSnap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showDeleteConfirmation
		#define GEODE_CONCEPT_CHECK_showDeleteConfirmation
		GEODE_CONCEPT_FUNCTION_CHECK(showDeleteConfirmation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLiveColorSelectForMode
		#define GEODE_CONCEPT_CHECK_showLiveColorSelectForMode
		GEODE_CONCEPT_FUNCTION_CHECK(showLiveColorSelectForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLiveColorSelectForModeSpecial
		#define GEODE_CONCEPT_CHECK_showLiveColorSelectForModeSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(showLiveColorSelectForModeSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showMaxBasicError
		#define GEODE_CONCEPT_CHECK_showMaxBasicError
		GEODE_CONCEPT_FUNCTION_CHECK(showMaxBasicError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showMaxCoinError
		#define GEODE_CONCEPT_CHECK_showMaxCoinError
		GEODE_CONCEPT_FUNCTION_CHECK(showMaxCoinError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showMaxError
		#define GEODE_CONCEPT_CHECK_showMaxError
		GEODE_CONCEPT_FUNCTION_CHECK(showMaxError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showUI
		#define GEODE_CONCEPT_CHECK_showUI
		GEODE_CONCEPT_FUNCTION_CHECK(showUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_smartTypeForKey
		#define GEODE_CONCEPT_CHECK_smartTypeForKey
		GEODE_CONCEPT_FUNCTION_CHECK(smartTypeForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spriteFromObjectString
		#define GEODE_CONCEPT_CHECK_spriteFromObjectString
		GEODE_CONCEPT_FUNCTION_CHECK(spriteFromObjectString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDuplicateButton
		#define GEODE_CONCEPT_CHECK_toggleDuplicateButton
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDuplicateButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditObjectButton
		#define GEODE_CONCEPT_CHECK_toggleEditObjectButton
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditObjectButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEnableRotate
		#define GEODE_CONCEPT_CHECK_toggleEnableRotate
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEnableRotate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFreeMove
		#define GEODE_CONCEPT_CHECK_toggleFreeMove
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFreeMove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleLockUI
		#define GEODE_CONCEPT_CHECK_toggleLockUI
		GEODE_CONCEPT_FUNCTION_CHECK(toggleLockUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMode
		#define GEODE_CONCEPT_CHECK_toggleMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleObjectInfoLabel
		#define GEODE_CONCEPT_CHECK_toggleObjectInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(toggleObjectInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSnap
		#define GEODE_CONCEPT_CHECK_toggleSnap
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSnap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSpecialEditButtons
		#define GEODE_CONCEPT_CHECK_toggleSpecialEditButtons
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSpecialEditButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleStickyControls
		#define GEODE_CONCEPT_CHECK_toggleStickyControls
		GEODE_CONCEPT_FUNCTION_CHECK(toggleStickyControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSwipe
		#define GEODE_CONCEPT_CHECK_toggleSwipe
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSwipe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformObject
		#define GEODE_CONCEPT_CHECK_transformObject
		GEODE_CONCEPT_FUNCTION_CHECK(transformObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformObjectCall
		#define GEODE_CONCEPT_CHECK_transformObjectCall
		GEODE_CONCEPT_FUNCTION_CHECK(transformObjectCall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformObjects
		#define GEODE_CONCEPT_CHECK_transformObjects
		GEODE_CONCEPT_FUNCTION_CHECK(transformObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformObjectsActive
		#define GEODE_CONCEPT_CHECK_transformObjectsActive
		GEODE_CONCEPT_FUNCTION_CHECK(transformObjectsActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformObjectsReset
		#define GEODE_CONCEPT_CHECK_transformObjectsReset
		GEODE_CONCEPT_FUNCTION_CHECK(transformObjectsReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerSwipeMode
		#define GEODE_CONCEPT_CHECK_triggerSwipeMode
		GEODE_CONCEPT_FUNCTION_CHECK(triggerSwipeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateTimeMarkers
		#define GEODE_CONCEPT_CHECK_tryUpdateTimeMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateTimeMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_undoLastAction
		#define GEODE_CONCEPT_CHECK_undoLastAction
		GEODE_CONCEPT_FUNCTION_CHECK(undoLastAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateButtons
		#define GEODE_CONCEPT_CHECK_updateButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCreateMenu
		#define GEODE_CONCEPT_CHECK_updateCreateMenu
		GEODE_CONCEPT_FUNCTION_CHECK(updateCreateMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDeleteButtons
		#define GEODE_CONCEPT_CHECK_updateDeleteButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateDeleteButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDeleteMenu
		#define GEODE_CONCEPT_CHECK_updateDeleteMenu
		GEODE_CONCEPT_FUNCTION_CHECK(updateDeleteMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditButtonColor
		#define GEODE_CONCEPT_CHECK_updateEditButtonColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditButtonColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditColorButton
		#define GEODE_CONCEPT_CHECK_updateEditColorButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditColorButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditMenu
		#define GEODE_CONCEPT_CHECK_updateEditMenu
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGridNodeSize
		#define GEODE_CONCEPT_CHECK_updateGridNodeSize
		GEODE_CONCEPT_FUNCTION_CHECK(updateGridNodeSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupIDBtn2
		#define GEODE_CONCEPT_CHECK_updateGroupIDBtn2
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupIDBtn2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupIDLabel
		#define GEODE_CONCEPT_CHECK_updateGroupIDLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectInfoLabel
		#define GEODE_CONCEPT_CHECK_updateObjectInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlaybackBtn
		#define GEODE_CONCEPT_CHECK_updatePlaybackBtn
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSlider
		#define GEODE_CONCEPT_CHECK_updateSlider
		GEODE_CONCEPT_FUNCTION_CHECK(updateSlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialUIElements
		#define GEODE_CONCEPT_CHECK_updateSpecialUIElements
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialUIElements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZoom
		#define GEODE_CONCEPT_CHECK_updateZoom
		GEODE_CONCEPT_FUNCTION_CHECK(updateZoom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueFromXPos
		#define GEODE_CONCEPT_CHECK_valueFromXPos
		GEODE_CONCEPT_FUNCTION_CHECK(valueFromXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_xPosFromValue
		#define GEODE_CONCEPT_CHECK_xPosFromValue
		GEODE_CONCEPT_FUNCTION_CHECK(xPosFromValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_zoomGameLayer
		#define GEODE_CONCEPT_CHECK_zoomGameLayer
		GEODE_CONCEPT_FUNCTION_CHECK(zoomGameLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_zoomIn
		#define GEODE_CONCEPT_CHECK_zoomIn
		GEODE_CONCEPT_FUNCTION_CHECK(zoomIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_zoomOut
		#define GEODE_CONCEPT_CHECK_zoomOut
		GEODE_CONCEPT_FUNCTION_CHECK(zoomOut) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUI
		#define GEODE_CONCEPT_CHECK_getUI
		GEODE_CONCEPT_FUNCTION_CHECK(getUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIDPopupClosed
		#define GEODE_CONCEPT_CHECK_setIDPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setIDPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTransformControl
		#define GEODE_CONCEPT_CHECK_updateTransformControl
		GEODE_CONCEPT_FUNCTION_CHECK(updateTransformControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformChangeBegin
		#define GEODE_CONCEPT_CHECK_transformChangeBegin
		GEODE_CONCEPT_FUNCTION_CHECK(transformChangeBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformChangeEnded
		#define GEODE_CONCEPT_CHECK_transformChangeEnded
		GEODE_CONCEPT_FUNCTION_CHECK(transformChangeEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTransformNode
		#define GEODE_CONCEPT_CHECK_getTransformNode
		GEODE_CONCEPT_FUNCTION_CHECK(getTransformNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformScaleXChanged
		#define GEODE_CONCEPT_CHECK_transformScaleXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformScaleXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformScaleYChanged
		#define GEODE_CONCEPT_CHECK_transformScaleYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformScaleYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformScaleXYChanged
		#define GEODE_CONCEPT_CHECK_transformScaleXYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformScaleXYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformSkewXChanged
		#define GEODE_CONCEPT_CHECK_transformSkewXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformSkewXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformSkewYChanged
		#define GEODE_CONCEPT_CHECK_transformSkewYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformSkewYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformRotationXChanged
		#define GEODE_CONCEPT_CHECK_transformRotationXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformRotationXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformRotationYChanged
		#define GEODE_CONCEPT_CHECK_transformRotationYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformRotationYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformRotationChanged
		#define GEODE_CONCEPT_CHECK_transformRotationChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformRotationChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformResetRotation
		#define GEODE_CONCEPT_CHECK_transformResetRotation
		GEODE_CONCEPT_FUNCTION_CHECK(transformResetRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformRestoreRotation
		#define GEODE_CONCEPT_CHECK_transformRestoreRotation
		GEODE_CONCEPT_FUNCTION_CHECK(transformRestoreRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollWheel
		#define GEODE_CONCEPT_CHECK_scrollWheel
		GEODE_CONCEPT_FUNCTION_CHECK(scrollWheel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_angleChangeBegin
		#define GEODE_CONCEPT_CHECK_angleChangeBegin
		GEODE_CONCEPT_FUNCTION_CHECK(angleChangeBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_angleChangeEnded
		#define GEODE_CONCEPT_CHECK_angleChangeEnded
		GEODE_CONCEPT_FUNCTION_CHECK(angleChangeEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_angleChanged
		#define GEODE_CONCEPT_CHECK_angleChanged
		GEODE_CONCEPT_FUNCTION_CHECK(angleChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateScaleControl
		#define GEODE_CONCEPT_CHECK_updateScaleControl
		GEODE_CONCEPT_FUNCTION_CHECK(updateScaleControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_anchorPointMoved
		#define GEODE_CONCEPT_CHECK_anchorPointMoved
		GEODE_CONCEPT_FUNCTION_CHECK(anchorPointMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleChangeBegin
		#define GEODE_CONCEPT_CHECK_scaleChangeBegin
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChangeBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleChangeEnded
		#define GEODE_CONCEPT_CHECK_scaleChangeEnded
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChangeEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleXChanged
		#define GEODE_CONCEPT_CHECK_scaleXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(scaleXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleYChanged
		#define GEODE_CONCEPT_CHECK_scaleYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(scaleYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleXYChanged
		#define GEODE_CONCEPT_CHECK_scaleXYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(scaleXYChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorUI> : ModifyBase<ModifyDerive<Der, EditorUI>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorUI>>;
		using ModifyBase<ModifyDerive<Der, EditorUI>>::ModifyBase;
		using Base = EditorUI;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, create, , LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorUI, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11efb0, Thiscall, EditorUI, activateRotationControl, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110e10, Thiscall, EditorUI, activateScaleControl, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111460, Thiscall, EditorUI, activateTransformControl, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, addObjectsToSmartTemplate, , GJSmartTemplate*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, addSnapPosition, , cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, alignObjects, , cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11e8d0, Thiscall, EditorUI, applyOffset, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, applySpecialOffset, , cocos2d::CCPoint, GameObject*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, arrayContainsClass, , cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, assignNewGroups, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, canAllowMultiActivate, , GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, canSelectObject, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, centerCameraOnObject, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, changeSelectedObjects, , cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111c70, Thiscall, EditorUI, checkDiffAfterTransformAnchor, cocos2d::CCPoint, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, checkLiveColorSelect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdebe0, Thiscall, EditorUI, clickOnPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, closeLiveColorSelect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, closeLiveHSVSelect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, colorSelectClosed, , cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, constrainGameLayerPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11e960, Thiscall, EditorUI, constrainGameLayerPosition, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, convertKeyBasedOnNeighbors, , int, int, cocos2d::CCPoint, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, convertToBaseKey, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, copyObjects, , cocos2d::CCArray*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, copyObjectsDetailed, , cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe0c80, Thiscall, EditorUI, createCustomItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createEdgeForObject, , GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createExtraObject, , int, cocos2d::CCPoint, GameObject*, cocos2d::CCArray*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createExtras, , cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createExtrasForObject, , int, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createLoop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116ee0, Thiscall, EditorUI, createMoveMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createNewKeyframeAnim, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c3e0, Thiscall, EditorUI, createObject, int, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createOutlines, , cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createPrefab, , GJSmartTemplate*, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12b590, Thiscall, EditorUI, createRockBases, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createRockEdges, , cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createSmartObjectsFromTemplate, , GJSmartTemplate*, cocos2d::CCArray*, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, createSmartObjectsFromType, , int, cocos2d::CCArray*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d3d0, Thiscall, EditorUI, createUndoObject, UndoCommand, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d6f0, Thiscall, EditorUI, createUndoSelectObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, deactivateRotationControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111010, Thiscall, EditorUI, deactivateScaleControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111660, Thiscall, EditorUI, deactivateTransformControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, deleteObject, , GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, deleteSmartBlocksFromObjects, , cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, deleteTypeFromObjects, , int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d920, Thiscall, EditorUI, deselectAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, deselectObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d800, Thiscall, EditorUI, deselectObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, deselectObjectsColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, deselectTargetPortals, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, disableButton, , CreateMenuItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10f490, Thiscall, EditorUI, doCopyObjects, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, doPasteInPlace, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10f620, Thiscall, EditorUI, doPasteObjects, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, dynamicGroupUpdate, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, edgeForObject, , int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, editButton2Usable, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, editButtonUsable, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, editColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, editColorButtonUsable, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11b410, Thiscall, EditorUI, editGroup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, editHSV, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1180a0, Thiscall, EditorUI, editObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a030, Thiscall, EditorUI, editObject2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, editObject3, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, editObjectSpecial, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, editorLayerForArray, , cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, enableButton, , CreateMenuItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, findAndSelectObject, , int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11f220, Thiscall, EditorUI, findSnapObject, cocos2d::CCArray*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11f320, Thiscall, EditorUI, findSnapObject, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, findTriggerTest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11cc80, Thiscall, EditorUI, flipObjectsX, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11ce60, Thiscall, EditorUI, flipObjectsY, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getButton, , char const*, int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ae40, Thiscall, EditorUI, getCreateBtn, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getCreateMenuItemButton, , cocos2d::CCSprite*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getCycledObject, , cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getEditColorTargets, , ColorAction*&, ColorAction*&, EffectGameObject*&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorUI, getGridSnappedPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11ed20, Thiscall, EditorUI, getGroupCenter, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getGroupInfo, , GameObject*, cocos2d::CCArray*, int&, int&, int&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c280, Thiscall, EditorUI, getLimitedPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getModeBtn, , char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getNeighbor, , int, cocos2d::CCPoint, GJSmartDirection, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getRandomStartKey, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getRelativeOffset, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d320, Thiscall, EditorUI, getSelectedObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getSimpleButton, , gd::string, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getSmartNeighbor, , SmartGameObject*, cocos2d::CCPoint, GJSmartDirection, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getSmartObjectKey, , int, GJSmartDirection)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getSnapAngle, , GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xded70, Thiscall, EditorUI, getSpriteButton, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorUI, getSpriteButton, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdee00, Thiscall, EditorUI, getSpriteButton, cocos2d::CCSprite*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getTouchPoint, , cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getTransformState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, getXMin, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdba20, Thiscall, EditorUI, init, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, isLiveColorSelectTrigger, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124e40, Thiscall, EditorUI, isSpecialSnapObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, liveEditColorUsable, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ac30, Thiscall, EditorUI, menuItemFromObjectString, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11b9b0, Thiscall, EditorUI, moveForCommand, EditCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdf250, Thiscall, EditorUI, moveGamelayer, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11be20, Thiscall, EditorUI, moveObject, GameObject*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11bb60, Thiscall, EditorUI, moveObjectCall, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11bb90, Thiscall, EditorUI, moveObjectCall, EditCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x122780, Thiscall, EditorUI, offsetForKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onAssignNewGroupID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onColorFilter, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10f480, Thiscall, EditorUI, onCopy, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110650, Thiscall, EditorUI, onCopyState, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10b8b0, Thiscall, EditorUI, onCreate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10b420, Thiscall, EditorUI, onCreateButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10bab0, Thiscall, EditorUI, onCreateObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2300, Thiscall, EditorUI, onDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onDeleteAll, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe0a20, Thiscall, EditorUI, onDeleteCustomItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onDeleteInfo, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2920, Thiscall, EditorUI, onDeleteSelected, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2eb0, Thiscall, EditorUI, onDeleteSelectedType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2f00, Thiscall, EditorUI, onDeleteStartPos, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d8e0, Thiscall, EditorUI, onDeselectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ef70, Thiscall, EditorUI, onDuplicate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11ac40, Thiscall, EditorUI, onEditColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onFindObject, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110ad0, Thiscall, EditorUI, onGoToBaseLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110970, Thiscall, EditorUI, onGoToLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11b620, Thiscall, EditorUI, onGroupDown, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe3620, Thiscall, EditorUI, onGroupIDFilter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ec80, Thiscall, EditorUI, onGroupSticky, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11b600, Thiscall, EditorUI, onGroupUp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11b790, Thiscall, EditorUI, onLockLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe0530, Thiscall, EditorUI, onNewCustomItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10f610, Thiscall, EditorUI, onPaste, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110860, Thiscall, EditorUI, onPasteColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onPasteInPlace, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1106d0, Thiscall, EditorUI, onPasteState, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xddf70, Thiscall, EditorUI, onPause, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10df30, Thiscall, EditorUI, onPlayback, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e540, Thiscall, EditorUI, onPlaytest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onResetSpecialFilter, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110af0, Thiscall, EditorUI, onSelectBuildTab, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xddf10, Thiscall, EditorUI, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e8d0, Thiscall, EditorUI, onStopPlaytest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onTargetIDChange, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onToggleGuide, , EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onToggleSelectedOrder, , EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ecc0, Thiscall, EditorUI, onUngroupSticky, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, onUpdateDeleteFilter, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe0bf0, Thiscall, EditorUI, orderDownCustomItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe0b60, Thiscall, EditorUI, orderUpCustomItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, pasteObjects, , gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, playCircleAnim, , cocos2d::CCPoint, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, playerTouchBegan, , cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, playerTouchEnded, , cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e910, Thiscall, EditorUI, playtestStopped, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, positionIsInSnapped, , cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, positionWithoutOffset, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, processSelectObjects, , cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, processSmartObjectsFromType, , int, cocos2d::CCArray*, cocos2d::CCArray*, cocos2d::CCArray*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, recreateButtonTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10dd30, Thiscall, EditorUI, redoLastAction, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe1190, Thiscall, EditorUI, reloadCustomItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11e840, Thiscall, EditorUI, removeOffset, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, replaceGroupID, , GameObject*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1105b0, Thiscall, EditorUI, repositionObjectsToCenter, cocos2d::CCArray*, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, resetObjectEditorValues, , cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, resetSelectedObjectsColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe1270, Thiscall, EditorUI, resetUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d040, Thiscall, EditorUI, rotateObjects, cocos2d::CCArray*, float, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, rotationforCommand, , EditCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d460, Thiscall, EditorUI, scaleObjects, cocos2d::CCArray*, float, float, cocos2d::CCPoint, ObjectScaleType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, selectAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, selectAllWithDirection, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110b20, Thiscall, EditorUI, selectBuildTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c9f0, Thiscall, EditorUI, selectObject, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10cce0, Thiscall, EditorUI, selectObjects, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, selectObjectsInRect, , cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe44b0, Thiscall, EditorUI, setupCreateMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe1470, Thiscall, EditorUI, setupDeleteMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorUI, setupEditMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, setupTransformControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe27f0, Thiscall, EditorUI, shouldDeleteObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, shouldSnap, , GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, showDeleteConfirmation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, showLiveColorSelectForMode, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, showLiveColorSelectForModeSpecial, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, showMaxBasicError, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, showMaxCoinError, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ed00, Thiscall, EditorUI, showMaxError, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10dda0, Thiscall, EditorUI, showUI, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdef40, Thiscall, EditorUI, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, smartTypeForKey, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10a330, Thiscall, EditorUI, spriteFromObjectString, gd::string, bool, bool, int, cocos2d::CCArray*, cocos2d::CCArray*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, toggleDuplicateButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116aa0, Thiscall, EditorUI, toggleEditObjectButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c6a0, Thiscall, EditorUI, toggleEnableRotate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c520, Thiscall, EditorUI, toggleFreeMove, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, toggleLockUI, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe1390, Thiscall, EditorUI, toggleMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdf2d0, Thiscall, EditorUI, toggleObjectInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c5c0, Thiscall, EditorUI, toggleSnap, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, toggleSpecialEditButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, toggleStickyControls, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c480, Thiscall, EditorUI, toggleSwipe, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c890, Thiscall, EditorUI, transformObject, GameObject*, EditCommand, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, transformObjectCall, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c340, Thiscall, EditorUI, transformObjectCall, EditCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11da50, Thiscall, EditorUI, transformObjects, cocos2d::CCArray*, cocos2d::CCPoint, float, float, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, transformObjectsActive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, transformObjectsReset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, triggerSwipeMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, tryUpdateTimeMarkers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10dcc0, Thiscall, EditorUI, undoLastAction, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xde380, Thiscall, EditorUI, updateButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10b460, Thiscall, EditorUI, updateCreateMenu, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe3b50, Thiscall, EditorUI, updateDeleteButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorUI, updateDeleteMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, updateEditButtonColor, , int, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, updateEditColorButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorUI, updateEditMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdf100, Thiscall, EditorUI, updateGridNodeSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, updateGridNodeSize, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, updateGroupIDBtn2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, updateGroupIDLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdf360, Thiscall, EditorUI, updateObjectInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, updatePlaybackBtn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdf040, Thiscall, EditorUI, updateSlider, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, updateSpecialUIElements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ea80, Thiscall, EditorUI, updateZoom, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, valueFromXPos, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, xPosFromValue, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, zoomGameLayer, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e9e0, Thiscall, EditorUI, zoomIn, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ea30, Thiscall, EditorUI, zoomOut, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11ecb0, Thiscall, EditorUI, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11f7f0, Thiscall, EditorUI, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11fe70, Thiscall, EditorUI, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1205c0, Thiscall, EditorUI, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EditorUI, ccTouchCancelled, , cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99990, Thiscall, EditorUI, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x110c70, Thiscall, EditorUI, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x121300, Thiscall, EditorUI, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb4b0, Thiscall, EditorUI, getUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe3120, Thiscall, EditorUI, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2f30, Thiscall, EditorUI, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1116f0, Thiscall, EditorUI, updateTransformControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111be0, Thiscall, EditorUI, transformChangeBegin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorUI, transformChangeEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb4c0, Thiscall, EditorUI, getTransformNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d830, Thiscall, EditorUI, transformScaleXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d850, Thiscall, EditorUI, transformScaleYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d870, Thiscall, EditorUI, transformScaleXYChanged, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d890, Thiscall, EditorUI, transformSkewXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d8b0, Thiscall, EditorUI, transformSkewYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d8d0, Thiscall, EditorUI, transformRotationXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d8f0, Thiscall, EditorUI, transformRotationYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d910, Thiscall, EditorUI, transformRotationChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d930, Thiscall, EditorUI, transformResetRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d960, Thiscall, EditorUI, transformRestoreRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e530, Thiscall, EditorUI, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11b860, Thiscall, EditorUI, colorSelectClosed, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x122590, Thiscall, EditorUI, keyUp, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1225d0, Thiscall, EditorUI, scrollWheel, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11f0f0, Thiscall, EditorUI, angleChangeBegin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorUI, angleChangeEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11f100, Thiscall, EditorUI, angleChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1110e0, Thiscall, EditorUI, updateScaleControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111bf0, Thiscall, EditorUI, anchorPointMoved, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111240, Thiscall, EditorUI, scaleChangeBegin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorUI, scaleChangeEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111250, Thiscall, EditorUI, scaleXChanged, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111300, Thiscall, EditorUI, scaleYChanged, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1113b0, Thiscall, EditorUI, scaleXYChanged, float, float, bool)
		}
	};
}
