#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJEffectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJEffectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJEffectManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x248f30
     * @note[short] Android
     */
    static GJEffectManager* create();
    
private:
    [[deprecated("GJEffectManager::activeColorForIndex not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x276598
     * @note[short] MacOS (Intel): 0x2da1c0
     * @note[short] Android
     */
    TodoReturn activeColorForIndex(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::activeOpacityForIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activeOpacityForIndex(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::addAllInheritedColorActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addAllInheritedColorActions(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GJEffectManager::addCountToItem not implemented")]]
    /**
     * @note[short] Android
     */
    void addCountToItem(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::addMoveCalculation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addMoveCalculation(CCMoveCNode* p0, cocos2d::CCPoint p1, GameObject* p2);
public:
    
private:
    [[deprecated("GJEffectManager::calculateBaseActiveColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateBaseActiveColors();
public:
    
private:
    [[deprecated("GJEffectManager::calculateInheritedColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateInheritedColor(int p0, ColorAction* p1);
public:
    
private:
    [[deprecated("GJEffectManager::calculateLightBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateLightBGColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("GJEffectManager::checkCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCollision(int const& p0, int const& p1);
public:
    
private:
    [[deprecated("GJEffectManager::colorActionChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x277584
     * @note[short] MacOS (Intel): 0x2db560
     * @note[short] Android
     */
    void colorActionChanged(ColorAction* p0);
public:
    
private:
    [[deprecated("GJEffectManager::colorExists not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x27755c
     * @note[short] MacOS (Intel): 0x2db530
     * @note[short] Android
     */
    bool colorExists(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::colorForEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForEffect(cocos2d::ccColor3B p0, cocos2d::ccHSVValue p1);
public:
    
private:
    [[deprecated("GJEffectManager::colorForGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForGroupID(int p0, cocos2d::ccColor3B const& p1, bool p2);
public:
    
private:
    [[deprecated("GJEffectManager::colorForIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForIndex(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::colorForPulseEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForPulseEffect(cocos2d::ccColor3B const& p0, PulseEffectAction* p1);
public:
    
private:
    [[deprecated("GJEffectManager::controlActionsForControlID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlActionsForControlID(int p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJEffectManager::controlActionsForTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlActionsForTrigger(EffectGameObject* p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJEffectManager::countForItem not implemented")]]
    /**
     * @note[short] Android
     */
    int countForItem(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::createFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createFollowCommand(float p0, float p1, float p2, int p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("GJEffectManager::createKeyframeCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createKeyframeCommand(int p0, cocos2d::CCArray* p1, GameObject* p2, int p3, int p4, bool p5, float p6, float p7, float p8, float p9, float p10, float p11, gd::vector<int> const& p12);
public:
    
private:
    [[deprecated("GJEffectManager::createMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, bool p7, bool p8, float p9, float p10, int p11, int p12);
public:
    
private:
    [[deprecated("GJEffectManager::createPlayerFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::createRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createRotateCommand(float p0, float p1, int p2, int p3, int p4, float p5, bool p6, bool p7, bool p8, int p9, int p10);
public:
    
private:
    [[deprecated("GJEffectManager::createTransformCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTransformCommand(double p0, double p1, double p2, double p3, bool p4, float p5, int p6, int p7, int p8, float p9, bool p10, bool p11, int p12, int p13);
public:
    
private:
    [[deprecated("GJEffectManager::getAllColorActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllColorActions();
public:
    
private:
    [[deprecated("GJEffectManager::getAllColorSprites not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllColorSprites();
public:

    /**
     * @note[short] MacOS (ARM): 0x276444
     * @note[short] MacOS (Intel): 0x2da050
     * @note[short] Windows: 0x249eb0
     * @note[short] Android
     */
    ColorAction* getColorAction(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2765f8
     * @note[short] MacOS (Intel): 0x2da210
     * @note[short] Windows: 0x249f70
     * @note[short] Android
     */
    ColorActionSprite* getColorSprite(int p0);
    
private:
    [[deprecated("GJEffectManager::getLoadedMoveOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLoadedMoveOffset(gd::unordered_map<int, std::pair<double, double>>& p0);
public:
    
private:
    [[deprecated("GJEffectManager::getMixedColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMixedColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);
public:
    
private:
    [[deprecated("GJEffectManager::getMoveCommandNode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMoveCommandNode(GroupCommandObject2* p0);
public:
    
private:
    [[deprecated("GJEffectManager::getMoveCommandObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMoveCommandObject();
public:
    
private:
    [[deprecated("GJEffectManager::getOpacityActionForGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOpacityActionForGroup(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();
public:
    
private:
    [[deprecated("GJEffectManager::getTempGroupCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTempGroupCommand();
public:
    
private:
    [[deprecated("GJEffectManager::handleObjectCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleObjectCollision(bool p0, int p1, int p2);
public:
    
private:
    [[deprecated("GJEffectManager::hasActiveDualTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasActiveDualTouch();
public:
    
private:
    [[deprecated("GJEffectManager::hasBeenTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasBeenTriggered(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::hasPulseEffectForGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasPulseEffectForGroupID(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::isGroupEnabled not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x27f38c
     * @note[short] MacOS (Intel): 0x2e64b0
     * @note[short] Android
     */
    bool isGroupEnabled(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::keyForGroupIDColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn keyForGroupIDColor(int p0, cocos2d::ccColor3B const& p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x2827a8
     * @note[short] MacOS (Intel): 0x2ea7b0
     * @note[short] Windows: 0x2521c0
     * @note[short] Android
     */
    void loadFromState(EffectManagerState& p0);
    
private:
    [[deprecated("GJEffectManager::objectsCollided not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2782f8
     * @note[short] MacOS (Intel): 0x2dc570
     * @note[short] Android
     */
    void objectsCollided(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::opacityForIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn opacityForIndex(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::opacityModForGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn opacityModForGroup(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::pauseTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseTimer(int p0);
public:

    /**
     * @note[short] Windows: 0x250470
     * @note[short] Android
     */
    TodoReturn playerButton(bool p0, bool p1);
    
private:
    [[deprecated("GJEffectManager::playerDied not implemented")]]
    /**
     * @note[short] iOS: 0x155ac
     * @note[short] Android
     */
    void playerDied();
public:

    /**
     * @note[short] Windows: 0x24a580
     * @note[short] Android
     */
    TodoReturn postCollisionCheck();

    /**
     * @note[short] Windows: 0x24eac0
     * @note[short] Android
     */
    TodoReturn postMoveActions();
    
private:
    [[deprecated("GJEffectManager::preCollisionCheck not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preCollisionCheck();
public:

    /**
     * @note[short] Windows: 0x24d6b0
     * @note[short] Android
     */
    TodoReturn prepareMoveActions(float p0, bool p1);

    /**
     * @note[short] Windows: 0x2495f0
     * @note[short] Android
     */
    TodoReturn processColors();
    
private:
    [[deprecated("GJEffectManager::processCopyColorPulseActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processCopyColorPulseActions();
public:
    
private:
    [[deprecated("GJEffectManager::processInheritedColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processInheritedColors();
public:
    
private:
    [[deprecated("GJEffectManager::processMoveCalculations not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processMoveCalculations();
public:
    
private:
    [[deprecated("GJEffectManager::processPulseActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processPulseActions();
public:
    
private:
    [[deprecated("GJEffectManager::registerCollisionTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, gd::vector<int> const& p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::registerRotationCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerRotationCommand(GroupCommandObject2* p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::removeAllPulseActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeAllPulseActions();
public:
    
private:
    [[deprecated("GJEffectManager::removeColorAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeColorAction(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::removePersistentFromAllItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePersistentFromAllItems();
public:
    
private:
    [[deprecated("GJEffectManager::removePersistentFromAllTimers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePersistentFromAllTimers();
public:
    
private:
    [[deprecated("GJEffectManager::removeTriggeredID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeTriggeredID(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x249350
     * @note[short] Android
     */
    TodoReturn reset();

    /**
     * @note[short] Windows: 0x24a2d0
     * @note[short] Android
     */
    TodoReturn resetEffects();
    
private:
    [[deprecated("GJEffectManager::resetMoveActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMoveActions();
public:
    
private:
    [[deprecated("GJEffectManager::resetTempGroupCommands not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetTempGroupCommands(bool p0);
public:
    
private:
    [[deprecated("GJEffectManager::resetToggledGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetToggledGroups();
public:
    
private:
    [[deprecated("GJEffectManager::resetTriggeredIDs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetTriggeredIDs();
public:
    
private:
    [[deprecated("GJEffectManager::onRewardedVideo not implemented")]]
    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJEffectManager::resumeTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeTimer(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::runCountTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, gd::vector<int> const& p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::runDeathTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runDeathTrigger(int p0, bool p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJEffectManager::runOpacityActionOnGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runOpacityActionOnGroup(int p0, float p1, float p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJEffectManager::runPulseEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::ccColor3B p6, cocos2d::ccHSVValue p7, int p8, bool p9, bool p10, bool p11, bool p12, int p13, int p14);
public:
    
private:
    [[deprecated("GJEffectManager::runTimerTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runTimerTrigger(int p0, double p1, bool p2, int p3, gd::vector<int> const& p4, int p5, int p6);
public:
    
private:
    [[deprecated("GJEffectManager::runTouchTriggerCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, TouchTriggerControl p3, bool p4, gd::vector<int> const& p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::saveCompletedMove not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveCompletedMove(int p0, double p1, double p2);
public:

    /**
     * @note[short] Windows: 0x251ba0
     * @note[short] Android
     */
    void saveToState(EffectManagerState& p0);
    
private:
    [[deprecated("GJEffectManager::setColorAction not implemented")]]
    /**
     * @note[short] Android
     */
    void setColorAction(ColorAction* p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::setFollowing not implemented")]]
    /**
     * @note[short] Android
     */
    void setFollowing(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GJEffectManager::setupFromString not implemented")]]
    /**
     * @note[short] Android
     */
    void setupFromString(gd::string p0);
public:
    
private:
    [[deprecated("GJEffectManager::shouldBlend not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x27672c
     * @note[short] MacOS (Intel): 0x2da350
     * @note[short] Android
     */
    bool shouldBlend(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::spawnGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnGroup(int p0, float p1, bool p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJEffectManager::spawnObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnObject(GameObject* p0, float p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJEffectManager::startTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startTimer(int p0, double p1, double p2, bool p3, bool p4, bool p5, float p6, bool p7, int p8, gd::vector<int> const& p9, int p10, int p11);
public:

    /**
     * @note[short] Windows: 0x2502d0
     * @note[short] Android
     */
    TodoReturn storeTriggeredID(int p0, int p1);
    
private:
    [[deprecated("GJEffectManager::timeForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn timeForItem(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::timerExists not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn timerExists(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::toggleGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::toggleItemPersistent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleItemPersistent(int p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::toggleTimerPersistent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleTimerPersistent(int p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::transferPersistentItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transferPersistentItems();
public:
    
private:
    [[deprecated("GJEffectManager::traverseInheritanceChain not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn traverseInheritanceChain(InheritanceNode* p0);
public:
    
private:
    [[deprecated("GJEffectManager::tryGetMoveCommandNode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetMoveCommandNode(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateActiveOpacityEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateActiveOpacityEffects();
public:
    
private:
    [[deprecated("GJEffectManager::updateColorAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorAction(ColorAction* p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateColorEffects not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2776a8
     * @note[short] MacOS (Intel): 0x2db6c0
     * @note[short] Android
     */
    void updateColorEffects(float p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateColors not implemented")]]
    /**
     * @note[short] Android
     */
    void updateColors(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);
public:
    
private:
    [[deprecated("GJEffectManager::updateCountForItem not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCountForItem(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::rewardedVideoFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();
public:

    /**
     * @note[short] MacOS (ARM): 0x2775a4
     * @note[short] MacOS (Intel): 0x2db590
     * @note[short] Windows: 0x24a150
     * @note[short] Android
     */
    void updateEffects(float p0);
    
private:
    [[deprecated("GJEffectManager::updateOpacityAction not implemented")]]
    /**
     * @note[short] Android
     */
    void updateOpacityAction(OpacityEffectAction* p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateOpacityEffects not implemented")]]
    /**
     * @note[short] Android
     */
    void updateOpacityEffects(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x277838
     * @note[short] MacOS (Intel): 0x2db890
     * @note[short] Windows: 0x24f480
     * @note[short] Android
     */
    void updatePulseEffects(float p0);

    /**
     * @note[short] Windows: 0x250080
     * @note[short] Android
     */
    TodoReturn updateSpawnTriggers(float p0);
    
private:
    [[deprecated("GJEffectManager::updateTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimer(int p0, double p1);
public:

    /**
     * @note[short] Windows: 0x251060
     * @note[short] Android
     */
    TodoReturn updateTimers(float p0, float p1);
    
private:
    [[deprecated("GJEffectManager::wasFollowing not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn wasFollowing(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::wouldCreateLoop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn wouldCreateLoop(InheritanceNode* p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x275984
     * @note[short] MacOS (Intel): 0x2d8d70
     * @note[short] Android
     */
    virtual bool init();
public:
    GEODE_PAD(156);
    cocos2d::CCDictionary* m_colorActionDict;
};
