#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameToolbox {
public:
    static constexpr auto CLASS_NAME = "GameToolbox";

    /**
     * @note[short] MacOS (ARM): 0x45326c
     * @note[short] MacOS (Intel): 0x4fa520
     * @note[short] Windows: 0x63a20
     * @note[short] iOS: 0x4abd0
     * @note[short] Android
     */
    static void addBackButton(cocos2d::CCLayer* p0, cocos2d::CCMenuItem* p1);

    /**
     * @note[short] MacOS (ARM): 0x453354
     * @note[short] MacOS (Intel): 0x4fa5f0
     * @note[short] Windows: 0x63b00
     * @note[short] iOS: 0x4acb4
     * @note[short] Android
     */
    static void addRThumbScrollButton(cocos2d::CCLayer* p0);

    /**
     * @note[short] Windows: 0x62b20
     * @note[short] iOS: 0x49d30
     * @note[short] Android
     */
    static void alignItemsHorisontally(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, bool p3);
    
private:
    [[deprecated("GameToolbox::alignItemsVertically not implemented")]]
    /**
     * @note[short] Android
     */
    static void alignItemsVertically(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("GameToolbox::bounceTime not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn bounceTime(float p0);
public:
    
private:
    [[deprecated("GameToolbox::colorToSepia not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn colorToSepia(cocos2d::ccColor3B p0, float p1);
public:
    
private:
    [[deprecated("GameToolbox::contentScaleClipRect not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn contentScaleClipRect(cocos2d::CCRect& p0);
public:
    
private:
    [[deprecated("GameToolbox::createHashString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn createHashString(gd::string const& p0, int p1);
public:
    
private:
    [[deprecated("GameToolbox::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, cocos2d::CCArray* container);
public:

    /**
     * @note[short] MacOS (ARM): 0x4528d0
     * @note[short] MacOS (Intel): 0x4f9b80
     * @note[short] Windows: 0x63080
     * @note[short] iOS: 0x4a4f8
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, float buttonScale, float maxLabelScale, float maxLabelWidth, cocos2d::CCPoint labelOffset, char const* font, bool labelTop, int labelTag, cocos2d::CCArray* container);
    
private:
    [[deprecated("GameToolbox::doWeHaveInternet not implemented")]]
    /**
     * @note[short] Android
     */
    static bool doWeHaveInternet();
public:
    
private:
    [[deprecated("GameToolbox::easeToText not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn easeToText(int p0);
public:
    
private:
    [[deprecated("GameToolbox::fast_rand_0_1 not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn fast_rand_0_1();
public:
    
private:
    [[deprecated("GameToolbox::fast_rand_minus1_1 not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn fast_rand_minus1_1();
public:
    
private:
    [[deprecated("GameToolbox::fast_rand not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn fast_rand();
public:
    
private:
    [[deprecated("GameToolbox::fast_srand not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x45516c
     * @note[short] MacOS (Intel): 0x4fc670
     * @note[short] Android
     */
    static void fast_srand(uint64_t p0);
public:
    
private:
    [[deprecated("GameToolbox::gen_random not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn gen_random(int p0);
public:
    
private:
    [[deprecated("GameToolbox::getDropActionWDelay not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWDelay(float p0, float p1, float p2, cocos2d::CCNode* p3, cocos2d::SEL_CallFunc p4);
public:
    
private:
    [[deprecated("GameToolbox::getDropActionWEnd not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWEnd(float p0, float p1, float p2, cocos2d::CCAction* p3, float p4);
public:
    
private:
    [[deprecated("GameToolbox::getEasedAction not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x454f34
     * @note[short] MacOS (Intel): 0x4fc400
     * @note[short] Android
     */
    static cocos2d::CCActionEase* getEasedAction(cocos2d::CCActionInterval* p0, int p1, float p2);
public:

    /**
     * @note[short] Windows: 0x67550
     * @note[short] Android
     */
    static TodoReturn getEasedValue(float p0, int p1, float p2);
    
private:
    [[deprecated("GameToolbox::getfast_srand not implemented")]]
    /**
     * @note[short] Android
     */
    static uint64_t getfast_srand();
public:
    
private:
    [[deprecated("GameToolbox::getInvertedEasing not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getInvertedEasing(int p0);
public:
    
private:
    [[deprecated("GameToolbox::getLargestMergedIntDicts not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLargestMergedIntDicts(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:
    
private:
    [[deprecated("GameToolbox::getMultipliedHSV not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getMultipliedHSV(cocos2d::ccHSVValue const& p0, float p1);
public:

    /**
     * @note[short] Windows: 0x63380
     * @note[short] Android
     */
    static TodoReturn getRelativeOffset(GameObject* p0, cocos2d::CCPoint p1);

    /**
     * @note[short] MacOS (ARM): 0x452480
     * @note[short] MacOS (Intel): 0x4f9610
     * @note[short] Windows: 0x62d20
     * @note[short] Android
     */
    static gd::string getResponse(cocos2d::extension::CCHttpResponse* p0);

    /**
     * @note[short] MacOS (ARM): 0x454db4
     * @note[short] MacOS (Intel): 0x4fc280
     * @note[short] Windows: 0x64830
     * @note[short] Android
     */
    static gd::string getTimeString(int p0, bool p1);
    
private:
    [[deprecated("GameToolbox::hsvFromString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn hsvFromString(gd::string const& p0, char const* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x459ec8
     * @note[short] MacOS (Intel): 0x501e80
     * @note[short] Windows: 0x67b30
     * @note[short] Android
     */
    static gd::string intToShortString(int p0);

    /**
     * @note[short] MacOS (ARM): 0x459ba0
     * @note[short] MacOS (Intel): 0x501b70
     * @note[short] Windows: 0x67a70
     * @note[short] iOS: 0x4e558
     * @note[short] Android
     */
    static TodoReturn intToString(int p0);
    
private:
    [[deprecated("GameToolbox::isIOS not implemented")]]
    /**
     * @note[short] Android
     */
    static bool isIOS();
public:
    
private:
    [[deprecated("GameToolbox::isRateEasing not implemented")]]
    /**
     * @note[short] Android
     */
    static bool isRateEasing(int p0);
public:
    
private:
    [[deprecated("GameToolbox::mergeDictsSaveLargestInt not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x452dc8
     * @note[short] MacOS (Intel): 0x4fa060
     * @note[short] Android
     */
    static TodoReturn mergeDictsSaveLargestInt(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:
    
private:
    [[deprecated("GameToolbox::mergeDictsSkipConflict not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x453028
     * @note[short] MacOS (Intel): 0x4fa2d0
     * @note[short] Android
     */
    static TodoReturn mergeDictsSkipConflict(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:
    
private:
    [[deprecated("GameToolbox::msToTimeString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn msToTimeString(int p0, int p1);
public:
    
private:
    [[deprecated("GameToolbox::multipliedColorValue not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn multipliedColorValue(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);
public:
    
private:
    [[deprecated("GameToolbox::openAppPage not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn openAppPage();
public:
    
private:
    [[deprecated("GameToolbox::openRateURL not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn openRateURL(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x458ac0
     * @note[short] MacOS (Intel): 0x500b10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromString(gd::string const& str, cocos2d::CCParticleSystemQuad* system, bool p2);

    /**
     * @note[short] Windows: 0x66a10
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromStruct(cocos2d::ParticleStruct const& p0, cocos2d::CCParticleSystemQuad* p1, bool p2);

    /**
     * @note[short] Windows: 0x65f50
     * @note[short] Android
     */
    static void particleStringToStruct(gd::string const& p0, cocos2d::ParticleStruct& p1);

    /**
     * @note[short] MacOS (ARM): 0x45a650
     * @note[short] MacOS (Intel): 0x502610
     * @note[short] Windows: 0x68170
     * @note[short] Android
     */
    static gd::string pointsToString(int p0);
    
private:
    [[deprecated("GameToolbox::postClipVisit not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x452740
     * @note[short] MacOS (Intel): 0x4f99e0
     * @note[short] iOS: 0x4a3bc
     * @note[short] Android
     */
    static void postClipVisit();
public:

    /**
     * @note[short] MacOS (ARM): 0x452658
     * @note[short] MacOS (Intel): 0x4f98e0
     * @note[short] Windows: 0x62fd0
     * @note[short] iOS: 0x4a2d8
     * @note[short] Android
     */
    static void preVisitWithClippingRect(cocos2d::CCNode* p0, cocos2d::CCRect p1);
    
private:
    [[deprecated("GameToolbox::preVisitWithClipRect not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn preVisitWithClipRect(cocos2d::CCRect p0);
public:

    /**
     * @note[short] Windows: 0x64ce0
     * @note[short] Android
     */
    static gd::string saveParticleToString(cocos2d::CCParticleSystemQuad* p0);
    
private:
    [[deprecated("GameToolbox::saveStringToFile not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn saveStringToFile(gd::string const& p0, gd::string const& p1);
public:
    
private:
    [[deprecated("GameToolbox::stringFromHSV not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn stringFromHSV(cocos2d::ccHSVValue p0, char const* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x4546ec
     * @note[short] MacOS (Intel): 0x4fbb70
     * @note[short] Windows: 0x64640
     * @note[short] Android
     */
    static cocos2d::CCDictionary* stringSetupToDict(gd::string const& p0, char const* p1);

    /**
     * @note[short] Windows: 0x642a0
     * @note[short] Android
     */
    static gd::map<gd::string,gd::string> stringSetupToMap(gd::string const& p0, char const* p1, gd::map<gd::string, gd::string>& p2);
    
private:
    [[deprecated("GameToolbox::strongColor not implemented")]]
    /**
     * @note[short] iOS: 0x4bbd8
     * @note[short] Android
     */
    static TodoReturn strongColor(cocos2d::ccColor3B p0);
public:

    /**
     * @note[short] Windows: 0x67cd0
     * @note[short] Android
     */
    static gd::string timestampToHumanReadable(time_t p0, time_t p1);

    /**
     * @note[short] Windows: 0x63ca0
     * @note[short] Android
     */
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& p0, cocos2d::ccHSVValue p1);
    
private:
    [[deprecated("GameToolbox::transformColor not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn transformColor(cocos2d::ccColor3B const& p0, float p1, float p2, float p3);
public:
};
