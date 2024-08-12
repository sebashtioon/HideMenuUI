#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongInfoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addTags
		#define GEODE_STATICS_addTags
		GEODE_AS_STATIC_FUNCTION(addTags) 
	#endif

	#ifndef GEODE_STATICS_containsTag
		#define GEODE_STATICS_containsTag
		GEODE_AS_STATIC_FUNCTION(containsTag) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_getArtistNames
		#define GEODE_STATICS_getArtistNames
		GEODE_AS_STATIC_FUNCTION(getArtistNames) 
	#endif

	#ifndef GEODE_STATICS_getTagsString
		#define GEODE_STATICS_getTagsString
		GEODE_AS_STATIC_FUNCTION(getTagsString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTags
		#define GEODE_CONCEPT_CHECK_addTags
		GEODE_CONCEPT_FUNCTION_CHECK(addTags) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_containsTag
		#define GEODE_CONCEPT_CHECK_containsTag
		GEODE_CONCEPT_FUNCTION_CHECK(containsTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getArtistNames
		#define GEODE_CONCEPT_CHECK_getArtistNames
		GEODE_CONCEPT_FUNCTION_CHECK(getArtistNames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTagsString
		#define GEODE_CONCEPT_CHECK_getTagsString
		GEODE_CONCEPT_FUNCTION_CHECK(getTagsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongInfoObject> : ModifyBase<ModifyDerive<Der, SongInfoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongInfoObject>>;
		using ModifyBase<ModifyDerive<Der, SongInfoObject>>::ModifyBase;
		using Base = SongInfoObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoObject, create, , cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3245a0, Default, SongInfoObject, create, int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, int, gd::string, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoObject, create, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoObject, addTags, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoObject, containsTag, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x324b70, Thiscall, SongInfoObject, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoObject, getArtistNames, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoObject, getTagsString, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoObject, init, , int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, int, gd::string, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x324e80, Thiscall, SongInfoObject, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SongInfoObject, canEncode, )
		}
	};
}
