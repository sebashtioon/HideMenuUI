#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRobotSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_hideGlow
		#define GEODE_STATICS_hideGlow
		GEODE_AS_STATIC_FUNCTION(hideGlow) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_showGlow
		#define GEODE_STATICS_showGlow
		GEODE_AS_STATIC_FUNCTION(showGlow) 
	#endif

	#ifndef GEODE_STATICS_updateColor01
		#define GEODE_STATICS_updateColor01
		GEODE_AS_STATIC_FUNCTION(updateColor01) 
	#endif

	#ifndef GEODE_STATICS_updateColor02
		#define GEODE_STATICS_updateColor02
		GEODE_AS_STATIC_FUNCTION(updateColor02) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateFrame
		#define GEODE_STATICS_updateFrame
		GEODE_AS_STATIC_FUNCTION(updateFrame) 
	#endif

	#ifndef GEODE_STATICS_updateGlowColor
		#define GEODE_STATICS_updateGlowColor
		GEODE_AS_STATIC_FUNCTION(updateGlowColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_hideSecondary
		#define GEODE_STATICS_hideSecondary
		GEODE_AS_STATIC_FUNCTION(hideSecondary) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideGlow
		#define GEODE_CONCEPT_CHECK_hideGlow
		GEODE_CONCEPT_FUNCTION_CHECK(hideGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showGlow
		#define GEODE_CONCEPT_CHECK_showGlow
		GEODE_CONCEPT_FUNCTION_CHECK(showGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor01
		#define GEODE_CONCEPT_CHECK_updateColor01
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor02
		#define GEODE_CONCEPT_CHECK_updateColor02
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColors
		#define GEODE_CONCEPT_CHECK_updateColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFrame
		#define GEODE_CONCEPT_CHECK_updateFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updateFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGlowColor
		#define GEODE_CONCEPT_CHECK_updateGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideSecondary
		#define GEODE_CONCEPT_CHECK_hideSecondary
		GEODE_CONCEPT_FUNCTION_CHECK(hideSecondary) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRobotSprite> : ModifyBase<ModifyDerive<Der, GJRobotSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRobotSprite>>;
		using ModifyBase<ModifyDerive<Der, GJRobotSprite>>::ModifyBase;
		using Base = GJRobotSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x294360, Default, GJRobotSprite, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRobotSprite, hideGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x294410, Thiscall, GJRobotSprite, init, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRobotSprite, init, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRobotSprite, showGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRobotSprite, updateColor01, , cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRobotSprite, updateColor02, , cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x294ba0, Thiscall, GJRobotSprite, updateColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x295150, Thiscall, GJRobotSprite, updateFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJRobotSprite, updateGlowColor, , cocos2d::ccColor3B, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x295050, Thiscall, GJRobotSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x295740, Thiscall, GJRobotSprite, hideSecondary, )
		}
	};
}
