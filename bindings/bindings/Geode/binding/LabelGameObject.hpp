#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class LabelGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "LabelGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LabelGameObject, EffectGameObject)
    
private:
    [[deprecated("LabelGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LabelGameObject* create();
public:
    
private:
    [[deprecated("LabelGameObject::createLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::queueUpdateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queueUpdateLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::removeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeLabel();
public:
    
private:
    [[deprecated("LabelGameObject::unlockLabelColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockLabelColor();
public:
    
private:
    [[deprecated("LabelGameObject::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(float p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateLabelAlign not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelAlign(int p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateLabelIfDirty not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelIfDirty();
public:
    
private:
    [[deprecated("LabelGameObject::updatePreviewLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePreviewLabel();
public:
    
private:
    [[deprecated("LabelGameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1786d4
     * @note[short] MacOS (Intel): 0x1bbd40
     * @note[short] Android
     */
    virtual bool init();
public:

    /**
     * @note[short] MacOS (ARM): 0x178b30
     * @note[short] MacOS (Intel): 0x1bc1b0
     * @note[short] Windows: 0x487310
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
    
private:
    [[deprecated("LabelGameObject::setupCustomSprites not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x178704
     * @note[short] MacOS (Intel): 0x1bbd70
     * @note[short] Android
     */
    virtual void setupCustomSprites(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::addMainSpriteToParent not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1793fc
     * @note[short] MacOS (Intel): 0x1bcb50
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool p0);
public:
    
private:
    [[deprecated("LabelGameObject::resetObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17a074
     * @note[short] MacOS (Intel): 0x1bdab0
     * @note[short] Android
     */
    virtual void resetObject();
public:
    
private:
    [[deprecated("LabelGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1791b8
     * @note[short] MacOS (Intel): 0x1bc8e0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("LabelGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x179454
     * @note[short] MacOS (Intel): 0x1bcbb0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("LabelGameObject::setObjectColor not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1793b4
     * @note[short] MacOS (Intel): 0x1bcb00
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateTextKerning not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x178bb4
     * @note[short] MacOS (Intel): 0x1bc230
     * @note[short] Android
     */
    virtual void updateTextKerning(int p0);
public:
    
private:
    [[deprecated("LabelGameObject::getTextKerning not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1a1638
     * @note[short] MacOS (Intel): 0x1ed720
     * @note[short] Android
     */
    virtual int getTextKerning();
public:
private:
    int m_alignment;
public:
private:
    bool m_showSecondsOnly;
public:
private:
    int m_shownSpecial;
public:
private:
    bool m_isTimeCounter;
public:
private:
    int m_kerning;
public:
};
