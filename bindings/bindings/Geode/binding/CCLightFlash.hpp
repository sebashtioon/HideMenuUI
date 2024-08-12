#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCLightFlash : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCLightFlash";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCLightFlash, cocos2d::CCNode)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
     CCLightFlash();

    /**
     * @note[short] MacOS (ARM): 0x46510c
     * @note[short] MacOS (Intel): 0x50e4e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCLightFlash* create();

    /**
     * @note[short] MacOS (ARM): 0x50edd0
     * @note[short] MacOS (Intel): 0x50edd0
     * @note[short] Windows: 0x42e00
     * @note[short] Android
     */
    void cleanupFlash();
    
private:
    [[deprecated("CCLightFlash::fadeAndRemove not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x465718
     * @note[short] MacOS (Intel): 0x50ebf0
     * @note[short] Android
     */
    void fadeAndRemove();
public:

    /**
     * @note[short] MacOS (ARM): 0x465178
     * @note[short] MacOS (Intel): 0x50e560
     * @note[short] Windows: 0x42520
     * @note[short] Android
     */
    void playEffect(cocos2d::CCPoint p0, cocos2d::ccColor3B p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, int p16, bool p17, bool p18, float p19);

    /**
     * @note[short] MacOS (ARM): 0x465894
     * @note[short] MacOS (Intel): 0x50ed70
     * @note[short] Windows: 0x42da0
     * @note[short] Android
     */
    void removeLights();

    /**
     * @note[short] MacOS (ARM): 0x4655ec
     * @note[short] MacOS (Intel): 0x50eab0
     * @note[short] Windows: 0x42a60
     * @note[short] Android
     */
    void showFlash();

    /**
     * @note[short] MacOS (ARM): 0x465170
     * @note[short] MacOS (Intel): 0x50e550
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCArray* m_lightStripArray;
    cocos2d::CCLayerColor* m_layerColor;
    bool m_dontFadeOut;
    cocos2d::CCNode* m_mainLayer;
    int m_layerColorZOrder;
};
