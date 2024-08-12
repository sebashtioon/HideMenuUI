#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGameState.hpp"
#include "GJShaderState.hpp"
#include "FMODAudioState.hpp"
#include "EffectManagerState.hpp"

class CheckpointObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CheckpointObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CheckpointObject, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x381f50
     * @note[short] Android
     */
     CheckpointObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CheckpointObject* create();
    
private:
    [[deprecated("CheckpointObject::getObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObject();
public:
    
private:
    [[deprecated("CheckpointObject::setObject not implemented")]]
    /**
     * @note[short] Android
     */
    void setObject(GameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xab33c
     * @note[short] MacOS (Intel): 0xbfd90
     * @note[short] Windows: 0x767c0
     * @note[short] Android
     */
    virtual bool init();
    GJGameState m_gameState;
    GJShaderState m_shaderState;
    FMODAudioState m_audioState;
    GameObject* m_physicalCheckpointObject;
    PlayerCheckpoint* m_player1Checkpoint;
    PlayerCheckpoint* m_player2Checkpoint;
    void* m_maybeAPointer1;
    int m_unkInt1;
    short m_unkShort1;
    GEODE_PAD(2);
    void* m_maybeAPointer2;
    gd::vector<DynamicSaveObject> m_vectorDynamicSaveObjects;
    gd::vector<ActiveSaveObject1> m_vectorActiveSaveObjects1;
    gd::vector<ActiveSaveObject2> m_vectorActiveSaveObjects2;
    EffectManagerState m_effectManagerState;
    cocos2d::CCArray* m_gradientTriggerObjectArray;
    bool m_unkBool1;
    GEODE_PAD(7);
    gd::unordered_map<int,SequenceTriggerState> m_sequenceTriggerStateUnorderedMap;
    void* m_maybeAPointer3;
};
