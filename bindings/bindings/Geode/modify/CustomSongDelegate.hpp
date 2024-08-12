#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_songIDChanged
		#define GEODE_STATICS_songIDChanged
		GEODE_AS_STATIC_FUNCTION(songIDChanged) 
	#endif

	#ifndef GEODE_STATICS_getActiveSongID
		#define GEODE_STATICS_getActiveSongID
		GEODE_AS_STATIC_FUNCTION(getActiveSongID) 
	#endif

	#ifndef GEODE_STATICS_getSongFileName
		#define GEODE_STATICS_getSongFileName
		GEODE_AS_STATIC_FUNCTION(getSongFileName) 
	#endif

	#ifndef GEODE_STATICS_getLevelSettings
		#define GEODE_STATICS_getLevelSettings
		GEODE_AS_STATIC_FUNCTION(getLevelSettings) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_songIDChanged
		#define GEODE_CONCEPT_CHECK_songIDChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songIDChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveSongID
		#define GEODE_CONCEPT_CHECK_getActiveSongID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongFileName
		#define GEODE_CONCEPT_CHECK_getSongFileName
		GEODE_CONCEPT_FUNCTION_CHECK(getSongFileName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelSettings
		#define GEODE_CONCEPT_CHECK_getLevelSettings
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelSettings) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongDelegate> : ModifyBase<ModifyDerive<Der, CustomSongDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongDelegate>>;
		using ModifyBase<ModifyDerive<Der, CustomSongDelegate>>::ModifyBase;
		using Base = CustomSongDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CustomSongDelegate, songIDChanged, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CustomSongDelegate, getActiveSongID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CustomSongDelegate, getSongFileName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CustomSongDelegate, getLevelSettings, )
		}
	};
}
