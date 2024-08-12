#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCAnimateFrameCache.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedSpriteFrameCache
		#define GEODE_STATICS_sharedSpriteFrameCache
		GEODE_AS_STATIC_FUNCTION(sharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_STATICS_addCustomSpriteFramesWithFile
		#define GEODE_STATICS_addCustomSpriteFramesWithFile
		GEODE_AS_STATIC_FUNCTION(addCustomSpriteFramesWithFile) 
	#endif

	#ifndef GEODE_STATICS_addDict
		#define GEODE_STATICS_addDict
		GEODE_AS_STATIC_FUNCTION(addDict) 
	#endif

	#ifndef GEODE_STATICS_addSpriteFramesWithFile
		#define GEODE_STATICS_addSpriteFramesWithFile
		GEODE_AS_STATIC_FUNCTION(addSpriteFramesWithFile) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_purgeSharedSpriteFrameCache
		#define GEODE_STATICS_purgeSharedSpriteFrameCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFrames
		#define GEODE_STATICS_removeSpriteFrames
		GEODE_AS_STATIC_FUNCTION(removeSpriteFrames) 
	#endif

	#ifndef GEODE_STATICS_spriteFrameByName
		#define GEODE_STATICS_spriteFrameByName
		GEODE_AS_STATIC_FUNCTION(spriteFrameByName) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedSpriteFrameCache
		#define GEODE_CONCEPT_CHECK_sharedSpriteFrameCache
		GEODE_CONCEPT_FUNCTION_CHECK(sharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomSpriteFramesWithFile
		#define GEODE_CONCEPT_CHECK_addCustomSpriteFramesWithFile
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomSpriteFramesWithFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDict
		#define GEODE_CONCEPT_CHECK_addDict
		GEODE_CONCEPT_FUNCTION_CHECK(addDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpriteFramesWithFile
		#define GEODE_CONCEPT_CHECK_addSpriteFramesWithFile
		GEODE_CONCEPT_FUNCTION_CHECK(addSpriteFramesWithFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeSharedSpriteFrameCache
		#define GEODE_CONCEPT_CHECK_purgeSharedSpriteFrameCache
		GEODE_CONCEPT_FUNCTION_CHECK(purgeSharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSpriteFrames
		#define GEODE_CONCEPT_CHECK_removeSpriteFrames
		GEODE_CONCEPT_FUNCTION_CHECK(removeSpriteFrames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spriteFrameByName
		#define GEODE_CONCEPT_CHECK_spriteFrameByName
		GEODE_CONCEPT_FUNCTION_CHECK(spriteFrameByName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCAnimateFrameCache> : ModifyBase<ModifyDerive<Der, CCAnimateFrameCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCAnimateFrameCache>>;
		using ModifyBase<ModifyDerive<Der, CCAnimateFrameCache>>::ModifyBase;
		using Base = CCAnimateFrameCache;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x405d0, Default, CCAnimateFrameCache, sharedSpriteFrameCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCAnimateFrameCache, addCustomSpriteFramesWithFile, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCAnimateFrameCache, addDict, , cocos2d::CCDictionary*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCAnimateFrameCache, addDict, , DS_Dictionary*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40660, Thiscall, CCAnimateFrameCache, addSpriteFramesWithFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCAnimateFrameCache, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCAnimateFrameCache, purgeSharedSpriteFrameCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCAnimateFrameCache, removeSpriteFrames, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCAnimateFrameCache, spriteFrameByName, , char const*)
		}
	};
}
