#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CurrencySprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithSprite
		#define GEODE_STATICS_createWithSprite
		GEODE_AS_STATIC_FUNCTION(createWithSprite) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_initWithSprite
		#define GEODE_STATICS_initWithSprite
		GEODE_AS_STATIC_FUNCTION(initWithSprite) 
	#endif

	#ifndef GEODE_STATICS_rewardToSpriteType
		#define GEODE_STATICS_rewardToSpriteType
		GEODE_AS_STATIC_FUNCTION(rewardToSpriteType) 
	#endif

	#ifndef GEODE_STATICS_spriteTypeToStat
		#define GEODE_STATICS_spriteTypeToStat
		GEODE_AS_STATIC_FUNCTION(spriteTypeToStat) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSprite
		#define GEODE_CONCEPT_CHECK_createWithSprite
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSprite
		#define GEODE_CONCEPT_CHECK_initWithSprite
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardToSpriteType
		#define GEODE_CONCEPT_CHECK_rewardToSpriteType
		GEODE_CONCEPT_FUNCTION_CHECK(rewardToSpriteType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spriteTypeToStat
		#define GEODE_CONCEPT_CHECK_spriteTypeToStat
		GEODE_CONCEPT_FUNCTION_CHECK(spriteTypeToStat) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CurrencySprite> : ModifyBase<ModifyDerive<Der, CurrencySprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CurrencySprite>>;
		using ModifyBase<ModifyDerive<Der, CurrencySprite>>::ModifyBase;
		using Base = CurrencySprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x9dbf0, Thiscall, CurrencySprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencySprite, create, CurrencySpriteType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2ae0, Default, CurrencySprite, createWithSprite, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa1390, Thiscall, CurrencySprite, init, CurrencySpriteType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CurrencySprite, initWithSprite, , cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2d00, Default, CurrencySprite, rewardToSpriteType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2da0, Default, CurrencySprite, spriteTypeToStat, CurrencySpriteType)
		}
	};
}
