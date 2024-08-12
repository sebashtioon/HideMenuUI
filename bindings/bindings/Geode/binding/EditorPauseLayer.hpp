#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "EditorPauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorPauseLayer, CCBlockLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditorPauseLayer();

    /**
     * @note[short] MacOS (ARM): 0x230728
     * @note[short] MacOS (Intel): 0x28ce10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a4eac
     * @note[short] Android
     */
    static EditorPauseLayer* create(LevelEditorLayer* p0);

    /**
     * @note[short] Windows: 0x2c7800
     * @note[short] Android
     */
    TodoReturn doResetUnused();

    /**
     * @note[short] MacOS (ARM): 0x230800
     * @note[short] MacOS (Intel): 0x28cf10
     * @note[short] Windows: 0xd66f0
     * @note[short] iOS: 0x3a4f78
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] Windows: 0xd95e0
     * @note[short] Android
     */
    void onAlignX(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd9610
     * @note[short] Android
     */
    void onAlignY(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd93b0
     * @note[short] Android
     */
    void onBuildHelper(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onCopyWColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopyWColor(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xd9360
     * @note[short] Android
     */
    void onCreateExtras(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onCreateLoop not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreateLoop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onCreateTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xda950
     * @note[short] Android
     */
    void onExitEditor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdaa20
     * @note[short] Android
     */
    void onExitNoSave(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onKeybindings not implemented")]]
    /**
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onNewGroupX not implemented")]]
    /**
     * @note[short] Android
     */
    void onNewGroupX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onNewGroupY not implemented")]]
    /**
     * @note[short] Android
     */
    void onNewGroupY(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onOptions not implemented")]]
    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onPasteWColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onPasteWColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onReGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void onReGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onResetUnusedColors not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetUnusedColors(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x232c7c
     * @note[short] MacOS (Intel): 0x28f5e0
     * @note[short] Windows: 0xd9d40
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xda7e0
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x232d78
     * @note[short] MacOS (Intel): 0x28f6c0
     * @note[short] Windows: 0xda910
     * @note[short] Android
     */
    void onSaveAndExit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x232ce8
     * @note[short] MacOS (Intel): 0x28f650
     * @note[short] Windows: 0xda5a0
     * @note[short] Android
     */
    void onSaveAndPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd9470
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd95a0
     * @note[short] Android
     */
    void onSelectAllLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd95c0
     * @note[short] Android
     */
    void onSelectAllRight(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onSong not implemented")]]
    /**
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onUnlockAllLayers not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnlockAllLayers(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xda620
     * @note[short] Android
     */
    TodoReturn playStep2();

    /**
     * @note[short] Windows: 0xda740
     * @note[short] Android
     */
    TodoReturn playStep3();

    /**
     * @note[short] MacOS (ARM): 0x233bac
     * @note[short] MacOS (Intel): 0x290670
     * @note[short] Windows: 0xd9f10
     * @note[short] Android
     */
    void saveLevel();
    
private:
    [[deprecated("EditorPauseLayer::toggleDebugDraw not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleDebugDraw(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorBackground(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorColorMode(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorGrid not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorGrid(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorGround(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEffectDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEffectDuration(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEffectLines not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEffectLines(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleFollowPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleFollowPlayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleGridOnTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGridOnTop(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleHideInvisible not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleHideInvisible(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleIgnoreDamage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleIgnoreDamage(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePlaytestMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePlaytestMusic(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0xd9810
     * @note[short] Android
     */
    void togglePreviewAnim(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorPauseLayer::togglePreviewParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePreviewParticles(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePreviewShaders not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePreviewShaders(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleRecordOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleRecordOrder(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleSelectFilter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleSelectFilter(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleShowObjectInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleShowObjectInfo(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::uncheckAllPortals not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn uncheckAllPortals(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::updateSongButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSongButton();
public:

    /**
     * @note[short] MacOS (ARM): 0x234290
     * @note[short] MacOS (Intel): 0x290db0
     * @note[short] Windows: 0xdac80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x234370
     * @note[short] MacOS (Intel): 0x290ea0
     * @note[short] Windows: 0xdac90
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x23116c
     * @note[short] MacOS (Intel): 0x28d840
     * @note[short] Windows: 0xd6d50
     * @note[short] iOS: 0x3a5500
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x2341b4
     * @note[short] MacOS (Intel): 0x290cd0
     * @note[short] Windows: 0xdab60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    bool m_saved;
    CCMenuItemSpriteExtra* m_guidelinesOffButton;
    CCMenuItemSpriteExtra* m_guidelinesOnButton;
    LevelEditorLayer* m_editorLayer;
    GEODE_PAD(32);
};
