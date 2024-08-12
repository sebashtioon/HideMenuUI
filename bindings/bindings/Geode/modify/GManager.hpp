#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getCompressedSaveString
		#define GEODE_STATICS_getCompressedSaveString
		GEODE_AS_STATIC_FUNCTION(getCompressedSaveString) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_load
		#define GEODE_STATICS_load
		GEODE_AS_STATIC_FUNCTION(load) 
	#endif

	#ifndef GEODE_STATICS_loadDataFromFile
		#define GEODE_STATICS_loadDataFromFile
		GEODE_AS_STATIC_FUNCTION(loadDataFromFile) 
	#endif

	#ifndef GEODE_STATICS_loadFromCompressedString
		#define GEODE_STATICS_loadFromCompressedString
		GEODE_AS_STATIC_FUNCTION(loadFromCompressedString) 
	#endif

	#ifndef GEODE_STATICS_loadFromString
		#define GEODE_STATICS_loadFromString
		GEODE_AS_STATIC_FUNCTION(loadFromString) 
	#endif

	#ifndef GEODE_STATICS_save
		#define GEODE_STATICS_save
		GEODE_AS_STATIC_FUNCTION(save) 
	#endif

	#ifndef GEODE_STATICS_saveData
		#define GEODE_STATICS_saveData
		GEODE_AS_STATIC_FUNCTION(saveData) 
	#endif

	#ifndef GEODE_STATICS_saveGMTo
		#define GEODE_STATICS_saveGMTo
		GEODE_AS_STATIC_FUNCTION(saveGMTo) 
	#endif

	#ifndef GEODE_STATICS_tryLoadData
		#define GEODE_STATICS_tryLoadData
		GEODE_AS_STATIC_FUNCTION(tryLoadData) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getCompressedSaveString
		#define GEODE_CONCEPT_CHECK_getCompressedSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getCompressedSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_load
		#define GEODE_CONCEPT_CHECK_load
		GEODE_CONCEPT_FUNCTION_CHECK(load) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDataFromFile
		#define GEODE_CONCEPT_CHECK_loadDataFromFile
		GEODE_CONCEPT_FUNCTION_CHECK(loadDataFromFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromCompressedString
		#define GEODE_CONCEPT_CHECK_loadFromCompressedString
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromCompressedString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromString
		#define GEODE_CONCEPT_CHECK_loadFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_save
		#define GEODE_CONCEPT_CHECK_save
		GEODE_CONCEPT_FUNCTION_CHECK(save) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveData
		#define GEODE_CONCEPT_CHECK_saveData
		GEODE_CONCEPT_FUNCTION_CHECK(saveData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveGMTo
		#define GEODE_CONCEPT_CHECK_saveGMTo
		GEODE_CONCEPT_FUNCTION_CHECK(saveGMTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryLoadData
		#define GEODE_CONCEPT_CHECK_tryLoadData
		GEODE_CONCEPT_FUNCTION_CHECK(tryLoadData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setup
		#define GEODE_CONCEPT_CHECK_setup
		GEODE_CONCEPT_FUNCTION_CHECK(setup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstLoad
		#define GEODE_CONCEPT_CHECK_firstLoad
		GEODE_CONCEPT_FUNCTION_CHECK(firstLoad) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GManager> : ModifyBase<ModifyDerive<Der, GManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GManager>>;
		using ModifyBase<ModifyDerive<Der, GManager>>::ModifyBase;
		using Base = GManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, getCompressedSaveString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, getSaveString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, load, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69610, Thiscall, GManager, loadDataFromFile, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, loadFromCompressedString, , gd::string&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, loadFromString, , gd::string&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69520, Thiscall, GManager, save, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, saveData, , DS_Dictionary*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, saveGMTo, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, tryLoadData, , DS_Dictionary*, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69340, Thiscall, GManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69350, Thiscall, GManager, setup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, encodeDataTo, , DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, dataLoaded, , DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GManager, firstLoad, )
		}
	};
}
