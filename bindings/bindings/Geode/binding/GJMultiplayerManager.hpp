#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMultiplayerManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMultiplayerManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMultiplayerManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x581828
     * @note[short] MacOS (Intel): 0x665610
     * @note[short] Windows: 0x270430
     * @note[short] Android
     */
    static GJMultiplayerManager* sharedState();
    
private:
    [[deprecated("GJMultiplayerManager::addComment not implemented")]]
    /**
     * @note[short] Android
     */
    void addComment(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJMultiplayerManager::addDLToActive not implemented")]]
    /**
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);
public:
    
private:
    [[deprecated("GJMultiplayerManager::addDLToActive not implemented")]]
    /**
     * @note[short] Android
     */
    void addDLToActive(char const* tag);
public:
    
private:
    [[deprecated("GJMultiplayerManager::createAndAddComment not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndAddComment(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJMultiplayerManager::dataLoaded not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x584f3c
     * @note[short] MacOS (Intel): 0x669130
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::encodeDataTo not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x584f38
     * @note[short] MacOS (Intel): 0x669120
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::exitLobby not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLobby(int p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("GJMultiplayerManager::getBasePostString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBasePostString();
public:
    
private:
    [[deprecated("GJMultiplayerManager::getDLObject not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::getLastCommentIDForGame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLastCommentIDForGame(int p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::handleIt not implemented")]]
    /**
     * @note[short] Android
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GJMultiplayerManager::handleItDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GJMultiplayerManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("GJMultiplayerManager::isDLActive not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDLActive(char const* tag);
public:
    
private:
    [[deprecated("GJMultiplayerManager::joinLobby not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn joinLobby(int p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::onExitLobbyCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onExitLobbyCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GJMultiplayerManager::onJoinLobbyCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onJoinLobbyCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GJMultiplayerManager::onProcessHttpRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("GJMultiplayerManager::onUploadCommentCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUploadCommentCompleted(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GJMultiplayerManager::ProcessHttpRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GJMultiplayerManager::removeDLFromActive not implemented")]]
    /**
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);
public:
    
private:
    [[deprecated("GJMultiplayerManager::uploadComment not implemented")]]
    /**
     * @note[short] Android
     */
    void uploadComment(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJMultiplayerManager::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x583214
     * @note[short] MacOS (Intel): 0x6671e0
     * @note[short] Android
     */
    virtual bool init();
public:
};
