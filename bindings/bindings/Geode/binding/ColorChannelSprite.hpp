#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorChannelSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ColorChannelSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorChannelSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x2715f4
     * @note[short] MacOS (Intel): 0x2d44d0
     * @note[short] Windows: 0x246c10
     * @note[short] iOS: 0xc730
     * @note[short] Android
     */
    static ColorChannelSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x2719b0
     * @note[short] MacOS (Intel): 0x2d48a0
     * @note[short] Windows: 0x247000
     * @note[short] Android
     */
    void updateBlending(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x2716a8
     * @note[short] MacOS (Intel): 0x2d4590
     * @note[short] Windows: 0x246cf0
     * @note[short] Android
     */
    void updateCopyLabel(int channelID, bool copyOpacity);

    /**
     * @note[short] MacOS (ARM): 0x271850
     * @note[short] MacOS (Intel): 0x2d4750
     * @note[short] Windows: 0x246eb0
     * @note[short] iOS: 0xc978
     * @note[short] Android
     */
    void updateOpacity(float alpha);

    /**
     * @note[short] MacOS (ARM): 0x271ab8
     * @note[short] MacOS (Intel): 0x2d49b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcbdc
     * @note[short] Android
     */
    void updateValues(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x27169c
     * @note[short] MacOS (Intel): 0x2d4570
     * @note[short] Windows: 0x246cd0
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCLabelBMFont* m_copyLabel;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    cocos2d::CCLabelBMFont* m_blendingLabel;
};
