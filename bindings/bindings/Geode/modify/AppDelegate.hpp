#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AppDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_bgScale
		#define GEODE_STATICS_bgScale
		GEODE_AS_STATIC_FUNCTION(bgScale) 
	#endif

	#ifndef GEODE_STATICS_checkSound
		#define GEODE_STATICS_checkSound
		GEODE_AS_STATIC_FUNCTION(checkSound) 
	#endif

	#ifndef GEODE_STATICS_hideLoadingCircle
		#define GEODE_STATICS_hideLoadingCircle
		GEODE_AS_STATIC_FUNCTION(hideLoadingCircle) 
	#endif

	#ifndef GEODE_STATICS_loadingIsFinished
		#define GEODE_STATICS_loadingIsFinished
		GEODE_AS_STATIC_FUNCTION(loadingIsFinished) 
	#endif

	#ifndef GEODE_STATICS_musicTest
		#define GEODE_STATICS_musicTest
		GEODE_AS_STATIC_FUNCTION(musicTest) 
	#endif

	#ifndef GEODE_STATICS_pauseGame
		#define GEODE_STATICS_pauseGame
		GEODE_AS_STATIC_FUNCTION(pauseGame) 
	#endif

	#ifndef GEODE_STATICS_pauseSound
		#define GEODE_STATICS_pauseSound
		GEODE_AS_STATIC_FUNCTION(pauseSound) 
	#endif

	#ifndef GEODE_STATICS_platformShutdown
		#define GEODE_STATICS_platformShutdown
		GEODE_AS_STATIC_FUNCTION(platformShutdown) 
	#endif

	#ifndef GEODE_STATICS_resumeSound
		#define GEODE_STATICS_resumeSound
		GEODE_AS_STATIC_FUNCTION(resumeSound) 
	#endif

	#ifndef GEODE_STATICS_setIdleTimerDisabled
		#define GEODE_STATICS_setIdleTimerDisabled
		GEODE_AS_STATIC_FUNCTION(setIdleTimerDisabled) 
	#endif

	#ifndef GEODE_STATICS_setupGLView
		#define GEODE_STATICS_setupGLView
		GEODE_AS_STATIC_FUNCTION(setupGLView) 
	#endif

	#ifndef GEODE_STATICS_showLoadingCircle
		#define GEODE_STATICS_showLoadingCircle
		GEODE_AS_STATIC_FUNCTION(showLoadingCircle) 
	#endif

	#ifndef GEODE_STATICS_applicationDidFinishLaunching
		#define GEODE_STATICS_applicationDidFinishLaunching
		GEODE_AS_STATIC_FUNCTION(applicationDidFinishLaunching) 
	#endif

	#ifndef GEODE_STATICS_applicationDidEnterBackground
		#define GEODE_STATICS_applicationDidEnterBackground
		GEODE_AS_STATIC_FUNCTION(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_STATICS_applicationWillEnterForeground
		#define GEODE_STATICS_applicationWillEnterForeground
		GEODE_AS_STATIC_FUNCTION(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_STATICS_applicationWillBecomeActive
		#define GEODE_STATICS_applicationWillBecomeActive
		GEODE_AS_STATIC_FUNCTION(applicationWillBecomeActive) 
	#endif

	#ifndef GEODE_STATICS_applicationWillResignActive
		#define GEODE_STATICS_applicationWillResignActive
		GEODE_AS_STATIC_FUNCTION(applicationWillResignActive) 
	#endif

	#ifndef GEODE_STATICS_trySaveGame
		#define GEODE_STATICS_trySaveGame
		GEODE_AS_STATIC_FUNCTION(trySaveGame) 
	#endif

	#ifndef GEODE_STATICS_willSwitchToScene
		#define GEODE_STATICS_willSwitchToScene
		GEODE_AS_STATIC_FUNCTION(willSwitchToScene) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bgScale
		#define GEODE_CONCEPT_CHECK_bgScale
		GEODE_CONCEPT_FUNCTION_CHECK(bgScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSound
		#define GEODE_CONCEPT_CHECK_checkSound
		GEODE_CONCEPT_FUNCTION_CHECK(checkSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideLoadingCircle
		#define GEODE_CONCEPT_CHECK_hideLoadingCircle
		GEODE_CONCEPT_FUNCTION_CHECK(hideLoadingCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadingIsFinished
		#define GEODE_CONCEPT_CHECK_loadingIsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadingIsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicTest
		#define GEODE_CONCEPT_CHECK_musicTest
		GEODE_CONCEPT_FUNCTION_CHECK(musicTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseGame
		#define GEODE_CONCEPT_CHECK_pauseGame
		GEODE_CONCEPT_FUNCTION_CHECK(pauseGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseSound
		#define GEODE_CONCEPT_CHECK_pauseSound
		GEODE_CONCEPT_FUNCTION_CHECK(pauseSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_platformShutdown
		#define GEODE_CONCEPT_CHECK_platformShutdown
		GEODE_CONCEPT_FUNCTION_CHECK(platformShutdown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeSound
		#define GEODE_CONCEPT_CHECK_resumeSound
		GEODE_CONCEPT_FUNCTION_CHECK(resumeSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIdleTimerDisabled
		#define GEODE_CONCEPT_CHECK_setIdleTimerDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(setIdleTimerDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupGLView
		#define GEODE_CONCEPT_CHECK_setupGLView
		GEODE_CONCEPT_FUNCTION_CHECK(setupGLView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLoadingCircle
		#define GEODE_CONCEPT_CHECK_showLoadingCircle
		GEODE_CONCEPT_FUNCTION_CHECK(showLoadingCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationDidFinishLaunching
		#define GEODE_CONCEPT_CHECK_applicationDidFinishLaunching
		GEODE_CONCEPT_FUNCTION_CHECK(applicationDidFinishLaunching) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationDidEnterBackground
		#define GEODE_CONCEPT_CHECK_applicationDidEnterBackground
		GEODE_CONCEPT_FUNCTION_CHECK(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationWillEnterForeground
		#define GEODE_CONCEPT_CHECK_applicationWillEnterForeground
		GEODE_CONCEPT_FUNCTION_CHECK(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationWillBecomeActive
		#define GEODE_CONCEPT_CHECK_applicationWillBecomeActive
		GEODE_CONCEPT_FUNCTION_CHECK(applicationWillBecomeActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationWillResignActive
		#define GEODE_CONCEPT_CHECK_applicationWillResignActive
		GEODE_CONCEPT_FUNCTION_CHECK(applicationWillResignActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySaveGame
		#define GEODE_CONCEPT_CHECK_trySaveGame
		GEODE_CONCEPT_FUNCTION_CHECK(trySaveGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willSwitchToScene
		#define GEODE_CONCEPT_CHECK_willSwitchToScene
		GEODE_CONCEPT_FUNCTION_CHECK(willSwitchToScene) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AppDelegate> : ModifyBase<ModifyDerive<Der, AppDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AppDelegate>>;
		using ModifyBase<ModifyDerive<Der, AppDelegate>>::ModifyBase;
		using Base = AppDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AppDelegate, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AppDelegate, bgScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AppDelegate, checkSound, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AppDelegate, hideLoadingCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AppDelegate, loadingIsFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81cf0, Thiscall, AppDelegate, musicTest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81970, Thiscall, AppDelegate, pauseGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81a50, Thiscall, AppDelegate, pauseSound, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80f30, Thiscall, AppDelegate, platformShutdown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81bf0, Thiscall, AppDelegate, resumeSound, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AppDelegate, setIdleTimerDisabled, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80f50, Thiscall, AppDelegate, setupGLView, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AppDelegate, showLoadingCircle, , bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81370, Thiscall, AppDelegate, applicationDidFinishLaunching, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81720, Thiscall, AppDelegate, applicationDidEnterBackground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x817a0, Thiscall, AppDelegate, applicationWillEnterForeground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x816c0, Thiscall, AppDelegate, applicationWillBecomeActive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81710, Thiscall, AppDelegate, applicationWillResignActive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81e30, Thiscall, AppDelegate, trySaveGame, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81f10, Thiscall, AppDelegate, willSwitchToScene, cocos2d::CCScene*)
		}
	};
}
