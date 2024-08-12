#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongInfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBPM
		#define GEODE_STATICS_onBPM
		GEODE_AS_STATIC_FUNCTION(onBPM) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDownload
		#define GEODE_STATICS_onDownload
		GEODE_AS_STATIC_FUNCTION(onDownload) 
	#endif

	#ifndef GEODE_STATICS_onFB
		#define GEODE_STATICS_onFB
		GEODE_AS_STATIC_FUNCTION(onFB) 
	#endif

	#ifndef GEODE_STATICS_onMenuMusic
		#define GEODE_STATICS_onMenuMusic
		GEODE_AS_STATIC_FUNCTION(onMenuMusic) 
	#endif

	#ifndef GEODE_STATICS_onNG
		#define GEODE_STATICS_onNG
		GEODE_AS_STATIC_FUNCTION(onNG) 
	#endif

	#ifndef GEODE_STATICS_onPracticeMusic
		#define GEODE_STATICS_onPracticeMusic
		GEODE_AS_STATIC_FUNCTION(onPracticeMusic) 
	#endif

	#ifndef GEODE_STATICS_onYT
		#define GEODE_STATICS_onYT
		GEODE_AS_STATIC_FUNCTION(onYT) 
	#endif

	#ifndef GEODE_STATICS_showCustomMusicUnlockInfo
		#define GEODE_STATICS_showCustomMusicUnlockInfo
		GEODE_AS_STATIC_FUNCTION(showCustomMusicUnlockInfo) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBPM
		#define GEODE_CONCEPT_CHECK_onBPM
		GEODE_CONCEPT_FUNCTION_CHECK(onBPM) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownload
		#define GEODE_CONCEPT_CHECK_onDownload
		GEODE_CONCEPT_FUNCTION_CHECK(onDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFB
		#define GEODE_CONCEPT_CHECK_onFB
		GEODE_CONCEPT_FUNCTION_CHECK(onFB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMenuMusic
		#define GEODE_CONCEPT_CHECK_onMenuMusic
		GEODE_CONCEPT_FUNCTION_CHECK(onMenuMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNG
		#define GEODE_CONCEPT_CHECK_onNG
		GEODE_CONCEPT_FUNCTION_CHECK(onNG) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPracticeMusic
		#define GEODE_CONCEPT_CHECK_onPracticeMusic
		GEODE_CONCEPT_FUNCTION_CHECK(onPracticeMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onYT
		#define GEODE_CONCEPT_CHECK_onYT
		GEODE_CONCEPT_FUNCTION_CHECK(onYT) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCustomMusicUnlockInfo
		#define GEODE_CONCEPT_CHECK_showCustomMusicUnlockInfo
		GEODE_CONCEPT_FUNCTION_CHECK(showCustomMusicUnlockInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongInfoLayer> : ModifyBase<ModifyDerive<Der, SongInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, SongInfoLayer>>::ModifyBase;
		using Base = SongInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, create, , gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, int, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, create, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x466b00, Thiscall, SongInfoLayer, init, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, int, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, onBPM, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, onDownload, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, onFB, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, onMenuMusic, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, onNG, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, onPracticeMusic, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, onYT, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, showCustomMusicUnlockInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoLayer, keyBackClicked, )
		}
	};
}
