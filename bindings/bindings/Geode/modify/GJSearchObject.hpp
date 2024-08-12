#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSearchObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createFromKey
		#define GEODE_STATICS_createFromKey
		GEODE_AS_STATIC_FUNCTION(createFromKey) 
	#endif

	#ifndef GEODE_STATICS_getKey
		#define GEODE_STATICS_getKey
		GEODE_AS_STATIC_FUNCTION(getKey) 
	#endif

	#ifndef GEODE_STATICS_getNextPageKey
		#define GEODE_STATICS_getNextPageKey
		GEODE_AS_STATIC_FUNCTION(getNextPageKey) 
	#endif

	#ifndef GEODE_STATICS_getNextPageObject
		#define GEODE_STATICS_getNextPageObject
		GEODE_AS_STATIC_FUNCTION(getNextPageObject) 
	#endif

	#ifndef GEODE_STATICS_getPageObject
		#define GEODE_STATICS_getPageObject
		GEODE_AS_STATIC_FUNCTION(getPageObject) 
	#endif

	#ifndef GEODE_STATICS_getPrevPageObject
		#define GEODE_STATICS_getPrevPageObject
		GEODE_AS_STATIC_FUNCTION(getPrevPageObject) 
	#endif

	#ifndef GEODE_STATICS_getSearchKey
		#define GEODE_STATICS_getSearchKey
		GEODE_AS_STATIC_FUNCTION(getSearchKey) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isLevelSearchObject
		#define GEODE_STATICS_isLevelSearchObject
		GEODE_AS_STATIC_FUNCTION(isLevelSearchObject) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromKey
		#define GEODE_CONCEPT_CHECK_createFromKey
		GEODE_CONCEPT_FUNCTION_CHECK(createFromKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getKey
		#define GEODE_CONCEPT_CHECK_getKey
		GEODE_CONCEPT_FUNCTION_CHECK(getKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextPageKey
		#define GEODE_CONCEPT_CHECK_getNextPageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNextPageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextPageObject
		#define GEODE_CONCEPT_CHECK_getNextPageObject
		GEODE_CONCEPT_FUNCTION_CHECK(getNextPageObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageObject
		#define GEODE_CONCEPT_CHECK_getPageObject
		GEODE_CONCEPT_FUNCTION_CHECK(getPageObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrevPageObject
		#define GEODE_CONCEPT_CHECK_getPrevPageObject
		GEODE_CONCEPT_FUNCTION_CHECK(getPrevPageObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchKey
		#define GEODE_CONCEPT_CHECK_getSearchKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLevelSearchObject
		#define GEODE_CONCEPT_CHECK_isLevelSearchObject
		GEODE_CONCEPT_FUNCTION_CHECK(isLevelSearchObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSearchObject> : ModifyBase<ModifyDerive<Der, GJSearchObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSearchObject>>;
		using ModifyBase<ModifyDerive<Der, GJSearchObject>>::ModifyBase;
		using Base = GJSearchObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16c030, Default, GJSearchObject, create, SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16bf00, Default, GJSearchObject, create, SearchType, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16be20, Default, GJSearchObject, create, SearchType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16b720, Default, GJSearchObject, createFromKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16c370, Thiscall, GJSearchObject, getKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJSearchObject, getNextPageKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJSearchObject, getNextPageObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16c4c0, Thiscall, GJSearchObject, getPageObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJSearchObject, getPrevPageObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16c630, Thiscall, GJSearchObject, getSearchKey, SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJSearchObject, init, , SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16c910, Thiscall, GJSearchObject, isLevelSearchObject, )
		}
	};
}
