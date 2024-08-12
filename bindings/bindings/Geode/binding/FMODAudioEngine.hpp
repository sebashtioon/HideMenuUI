#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>
#include "FMODAudioState.hpp"
#include "FMODMusic.hpp"
#include "FMODSound.hpp"
#include "FMODQueuedEffect.hpp"

class FMODAudioEngine : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODAudioEngine, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x52250
     * @note[short] iOS: 0x145344
     * @note[short] Android
     */
     FMODAudioEngine();

    /**
     * @note[short] MacOS (ARM): 0x360e54
     * @note[short] MacOS (Intel): 0x3e0a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e590
     * @note[short] Android
     */
    static FMODAudioEngine* sharedEngine();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FMODAudioEngine* get();
    
private:
    [[deprecated("FMODAudioEngine::activateQueuedMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateQueuedMusic(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3638d8
     * @note[short] MacOS (Intel): 0x3e4320
     * @note[short] Windows: 0x575d0
     * @note[short] Android
     */
    FMOD::Channel* channelForChannelID(int p0);
    
private:
    [[deprecated("FMODAudioEngine::channelForUniqueID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelIDForUniqueID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelIDForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelLinkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelLinkSound(int p0, FMODSound* p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelStopped not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelStopped(FMOD::Channel* p0, bool p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelUnlinkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelUnlinkSound(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3620ac
     * @note[short] MacOS (Intel): 0x3e1f70
     * @note[short] Windows: 0x54460
     * @note[short] Android
     */
    void clearAllAudio();
    
private:
    [[deprecated("FMODAudioEngine::countActiveEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countActiveEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::countActiveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countActiveMusic();
public:
    
private:
    [[deprecated("FMODAudioEngine::createStream not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createStream(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void disableMetering();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void enableMetering();
    
private:
    [[deprecated("FMODAudioEngine::fadeInBackgroundMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeInBackgroundMusic(float p0);
public:

    /**
     * @note[short] Windows: 0x5b170
     * @note[short] Android
     */
    void fadeInMusic(float p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x36bec0
     * @note[short] MacOS (Intel): 0x3ef250
     * @note[short] Windows: 0x5b2b0
     * @note[short] Android
     */
    float fadeOutMusic(float p0, int p1);
    
private:
    [[deprecated("FMODAudioEngine::getActiveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveMusic(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x364ca8
     * @note[short] MacOS (Intel): 0x3e5fd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    FMOD::Channel* getActiveMusicChannel(int musicChannel);

    /**
     * @note[short] MacOS (ARM): 0x36927c
     * @note[short] MacOS (Intel): 0x3eba30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14341c
     * @note[short] Android
     */
    float getBackgroundMusicVolume();

    /**
     * @note[short] Windows: 0x55c70
     * @note[short] Android
     */
    FMOD::ChannelGroup* getChannelGroup(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x36929c
     * @note[short] MacOS (Intel): 0x3eba70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14343c
     * @note[short] Android: Out of line
     */
    float getEffectsVolume();

    /**
     * @note[short] Windows: 0x5ba00
     * @note[short] iOS: 0x1450f8
     * @note[short] Android
     */
    TodoReturn getFMODStatus(int p0);
    
private:
    [[deprecated("FMODAudioEngine::getMeteringValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x366518
     * @note[short] MacOS (Intel): 0x3e7ec0
     * @note[short] Android
     */
    float getMeteringValue();
public:
    
private:
    [[deprecated("FMODAudioEngine::getMusicChannelID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicChannelID(int p0);
public:

    /**
     * @note[short] Windows: 0x5b0e0
     * @note[short] Android
     */
    unsigned int getMusicLengthMS(int channel);
    
private:
    [[deprecated("FMODAudioEngine::getMusicTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicTime(int p0);
public:

    /**
     * @note[short] Windows: 0x5b080
     * @note[short] Android
     */
    unsigned int getMusicTimeMS(int channel);
    
private:
    [[deprecated("FMODAudioEngine::getNextChannelID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextChannelID();
public:
    
private:
    [[deprecated("FMODAudioEngine::getTweenContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTweenContainer(AudioTargetType p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isChannelStopping not implemented")]]
    /**
     * @note[short] Android
     */
    bool isChannelStopping(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isEffectLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isEffectLoaded(gd::string path);
public:

    /**
     * @note[short] MacOS (ARM): 0x369394
     * @note[short] MacOS (Intel): 0x3ebaa0
     * @note[short] Windows: 0x58f20
     * @note[short] Android
     */
    bool isMusicPlaying(gd::string path, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3692b8
     * @note[short] MacOS (Intel): 0x3ebb90
     * @note[short] Windows: 0x58e50
     * @note[short] Android
     */
    bool isMusicPlaying(int channel);
    
private:
    [[deprecated("FMODAudioEngine::isSoundReady not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSoundReady(FMOD::Sound* sound);
public:
    
private:
    [[deprecated("FMODAudioEngine::lengthForSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lengthForSound(gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::loadAndPlayMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadAndPlayMusic(gd::string path, unsigned int p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::loadAudioState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadAudioState(FMODAudioState& p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x364748
     * @note[short] MacOS (Intel): 0x3e5890
     * @note[short] Windows: 0x592b0
     * @note[short] Android
     */
    void loadMusic(gd::string path, float speed, float p2, float volume, bool shouldLoop, int p5, int p6);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void loadMusic(gd::string path);
    
private:
    [[deprecated("FMODAudioEngine::pauseAllAudio not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x362018
     * @note[short] MacOS (Intel): 0x3e1ed0
     * @note[short] Android
     */
    void pauseAllAudio();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void pauseAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x3692f4
     * @note[short] MacOS (Intel): 0x3ebae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x143494
     * @note[short] Android
     */
    void pauseAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::pauseEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseEffect(unsigned int p0);
public:

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pauseMusic(int musicChannel);
    
private:
    [[deprecated("FMODAudioEngine::pitchForIdx not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pitchForIdx(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x366d7c
     * @note[short] MacOS (Intel): 0x3e8a40
     * @note[short] Windows: 0x55f60
     * @note[short] iOS: 0x141c24
     * @note[short] Android
     */
    void playEffect(gd::string path, float speed, float p2, float volume);

    /**
     * @note[short] MacOS (ARM): 0x366c7c
     * @note[short] MacOS (Intel): 0x3e8960
     * @note[short] Windows: 0x55ee0
     * @note[short] Android
     */
    void playEffect(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x364de4
     * @note[short] MacOS (Intel): 0x3e6190
     * @note[short] Windows: 0x56050
     * @note[short] Android
     */
    void playEffectAdvanced(gd::string path, float speed, float p2, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int p12, bool override, bool p14, int p15, int uniqueID, float minInterval, int sfxGroup);
    
private:
    [[deprecated("FMODAudioEngine::playEffectAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playEffectAsync(gd::string path);
public:

    /**
     * @note[short] MacOS (ARM): 0x3697a8
     * @note[short] MacOS (Intel): 0x3ebff0
     * @note[short] Windows: 0x59140
     * @note[short] Android
     */
    void playMusic(gd::string path, bool shouldLoop, float fadeInTime, int channel);

    /**
     * @note[short] MacOS (ARM): 0x3616a4
     * @note[short] MacOS (Intel): 0x3e1580
     * @note[short] Windows: 0x583b0
     * @note[short] Android
     */
    FMODSound& preloadEffect(gd::string path);
    
private:
    [[deprecated("FMODAudioEngine::preloadEffectAsync not implemented")]]
    /**
     * @note[short] Android
     */
    void preloadEffectAsync(gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::preloadMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preloadMusic(gd::string path, bool p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::printResult not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn printResult(FMOD_RESULT p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::queuedEffectFinishedLoading not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queuedEffectFinishedLoading(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x56a70
     * @note[short] Android
     */
    TodoReturn queuePlayEffect(gd::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, int p14, float p15, int p16);

    /**
     * @note[short] Windows: 0x59a40
     * @note[short] Android
     */
    void queueStartMusic(gd::string audioFilename, float p1, float p2, float p3, bool p4, int ms, int p6, int p7, int p8, int p9, bool p10, int p11, bool p12);
    
private:
    [[deprecated("FMODAudioEngine::registerChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerChannel(FMOD::Channel* p0, int p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::releaseRemovedSounds not implemented")]]
    /**
     * @note[short] Android
     */
    void releaseRemovedSounds();
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeAllAudio not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x362064
     * @note[short] MacOS (Intel): 0x3e1f20
     * @note[short] Android
     */
    void resumeAllAudio();
public:

    /**
     * @note[short] MacOS (ARM): 0x368fcc
     * @note[short] MacOS (Intel): 0x3eb510
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x369340
     * @note[short] MacOS (Intel): 0x3ebb30
     * @note[short] Windows: 0x58ec0
     * @note[short] Android
     */
    void resumeAllMusic();

    /**
     * @note[short] MacOS (ARM): 0x361edc
     * @note[short] MacOS (Intel): 0x3e1d90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void resumeEffect(unsigned int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeMusic(int musicChannel);
    
private:
    [[deprecated("FMODAudioEngine::reverbToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverbToString(FMODReverbPreset p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::saveAudioState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveAudioState(FMODAudioState& p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x369284
     * @note[short] MacOS (Intel): 0x3eba40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x143424
     * @note[short] Android
     */
    void setBackgroundMusicVolume(float volume);
    
private:
    [[deprecated("FMODAudioEngine::setChannelPitch not implemented")]]
    /**
     * @note[short] Android
     */
    void setChannelPitch(int p0, AudioTargetType p1, float p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::setChannelVolume not implemented")]]
    /**
     * @note[short] Android
     */
    void setChannelVolume(int p0, AudioTargetType p1, float p2);
public:

    /**
     * @note[short] Windows: 0x580d0
     * @note[short] Android
     */
    void setChannelVolumeMod(int p0, AudioTargetType p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x3692a4
     * @note[short] MacOS (Intel): 0x3eba80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setEffectsVolume(float volume);

    /**
     * @note[short] Windows: 0x5af40
     * @note[short] Android
     */
    void setMusicTimeMS(unsigned int ms, bool p1, int channel);

    /**
     * @note[short] MacOS (ARM): 0x36103c
     * @note[short] MacOS (Intel): 0x3e0e30
     * @note[short] Windows: 0x52d40
     * @note[short] iOS: 0x13e5f0
     * @note[short] Android
     */
    void setup();

    /**
     * @note[short] Windows: 0x53220
     * @note[short] Android
     */
    void setupAudioEngine();

    /**
     * @note[short] Windows: 0x54400
     * @note[short] Android
     */
    void start();
    
private:
    [[deprecated("FMODAudioEngine::startMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startMusic(int p0, int p1, int p2, int p3, bool p4, int p5);
public:
    
private:
    [[deprecated("FMODAudioEngine::stop not implemented")]]
    /**
     * @note[short] Android
     */
    void stop();
public:

    /**
     * @note[short] MacOS (ARM): 0x362154
     * @note[short] MacOS (Intel): 0x3e2040
     * @note[short] Windows: 0x58a00
     * @note[short] iOS: 0x13f128
     * @note[short] Android
     */
    void stopAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x362440
     * @note[short] MacOS (Intel): 0x3e2820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13f1d4
     * @note[short] Android
     */
    void stopAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::stopAndGetFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAndGetFade(FMOD::Channel* p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopAndRemoveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAndRemoveMusic(int p0);
public:

    /**
     * @note[short] Windows: 0x57960
     * @note[short] Android
     */
    void stopChannel(FMOD::Channel* p0, bool p1, float p2);
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannel(int p0, AudioTargetType p1, bool p2, float p3);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTween not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannelTween(int p0, AudioTargetType p1, AudioModType p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTweens not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannelTweens(int p0, AudioTargetType p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopMusicNotInSet not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopMusicNotInSet(std::unordered_set<int, std::hash<int>, std::equal_to<int>, std::allocator<int> >& p0);
public:

    /**
     * @note[short] Windows: 0x58660
     * @note[short] Android
     */
    TodoReturn storeEffect(FMOD::Sound* sound, gd::string path);
    
private:
    [[deprecated("FMODAudioEngine::swapMusicIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapMusicIndex(int p0, int p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::testFunction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testFunction(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::triggerQueuedMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerQueuedMusic(FMODQueuedMusic p0);
public:

    /**
     * @note[short] Windows: 0x58bf0
     * @note[short] Android
     */
    TodoReturn unloadAllEffects();
    
private:
    [[deprecated("FMODAudioEngine::unloadEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unloadEffect(gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::unregisterChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unregisterChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateBackgroundFade not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBackgroundFade();
public:
    
private:
    [[deprecated("FMODAudioEngine::updateChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChannel(int p0, AudioTargetType p1, AudioModType p2, float p3, float p4);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateChannelTweens not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChannelTweens(float p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateMetering not implemented")]]
    /**
     * @note[short] Android
     */
    void updateMetering();
public:

    /**
     * @note[short] Windows: 0x59cd0
     * @note[short] Android
     */
    void updateQueuedEffects();
    
private:
    [[deprecated("FMODAudioEngine::updateQueuedMusic not implemented")]]
    /**
     * @note[short] Android
     */
    void updateQueuedMusic();
public:

    /**
     * @note[short] Windows: 0x53580
     * @note[short] Android
     */
    void updateReverb(FMODReverbPreset p0, bool p1);

    /**
     * @note[short] Windows: 0x5a220
     * @note[short] Android
     */
    void updateTemporaryEffects();
    
private:
    [[deprecated("FMODAudioEngine::waitUntilSoundReady not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn waitUntilSoundReady(FMOD::Sound* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x362540
     * @note[short] MacOS (Intel): 0x3e2ac0
     * @note[short] Windows: 0x54510
     * @note[short] Android
     */
    virtual void update(float p0);
    gd::unordered_map<int, FMODMusic> m_musicChannels;
    gd::unordered_map<gd::string, FMODMusic> m_unkMap180;
    gd::unordered_set<gd::string> m_unkMap1c0;
    float m_musicVolume;
    float m_sfxVolume;
    int m_unusedInt164;
    int m_unusedInt168;
    float m_pulse1;
    float m_pulse2;
    float m_pulse3;
    int m_pulseCounter;
    bool m_metering;
    FMOD::ChannelGroup* m_backgroundMusicChannel;
    FMOD::System* m_system;
    FMOD::DSP* m_mainDSP;
    FMOD::DSP* m_globalChannelDSP;
    FMOD::ChannelGroup* m_globalChannel;
    FMOD::ChannelGroup* m_channelGroup2;
    FMOD_RESULT m_lastResult;
    int m_sampleRate;
    bool m_reducedQuality;
    bool m_unkBool1a1;
    int m_unkInt1a4;
    bool m_unkBool1a8;
    int m_unkInt1ac;
    FMODAudioState m_audioState;
    gd::vector<FMOD::Sound*> m_unkSoundVector;
    gd::unordered_map<int, FMOD::DSP*> m_unkDSPMap384;
    gd::unordered_map<int, FMOD::Channel*> m_channelIDToChannel;
    gd::unordered_set<int> m_unkIntSet3bc;
    FMODReverbPreset m_reverbPreset;
    gd::unordered_map<int, int> m_unkMapIntInt3dc;
    gd::unordered_map<int, int> m_unkMapIntInt3f8;
    gd::unordered_map<int, gd::string> m_unkMapIntString414;
    gd::vector<FMODQueuedEffect> m_queuedEffects;
    gd::unordered_map<gd::string, FMOD::Sound*> m_unkMapStringSound43c;
    gd::unordered_map<int, FMOD::ChannelGroup*> m_unkMapIntChannelGroup458;
    gd::unordered_map<int, FMOD::ChannelGroup*> m_unkMapIntChannelGroup474;
    int m_unkInt490;
    int m_unkInt494;
    int m_unkInt498;
    int m_unkInt49c;
    int m_unkInt4a0;
    int m_unkInt4a4;
    int m_unkInt4a8;
    int m_unkInt4ac;
};
