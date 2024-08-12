#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"
#include "ColorSelectDelegate.hpp"
#include "SliderDelegate.hpp"

class CreateParticlePopup : public FLAlertLayer, public TextInputDelegate, public ColorSelectDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "CreateParticlePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateParticlePopup, FLAlertLayer)
    
private:
    [[deprecated("CreateParticlePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CreateParticlePopup* create(gd::string p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1, gd::string p2);
public:

    /**
     * @note[short] Windows: 0x400d80
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("CreateParticlePopup::centerAlignParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn centerAlignParticle(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::createParticleSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createParticleSlider(gjParticleValue p0, int p1, bool p2, cocos2d::CCPoint p3, cocos2d::CCArray* p4);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPage(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageButton(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageContainer(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageInputNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageInputNodes(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageMenu(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageSliders not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageSliders(int p0);
public:

    /**
     * @note[short] Windows: 0x400f70
     * @note[short] Android
     */
    bool init(ParticleGameObject* p0, cocos2d::CCArray* p1, gd::string p2);
    
private:
    [[deprecated("CreateParticlePopup::maxSliderValueForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn maxSliderValueForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::minSliderValueForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn minSliderValueForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::onAnimateActiveOnly not implemented")]]
    /**
     * @note[short] Android
     */
    void onAnimateActiveOnly(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onAnimateOnTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void onAnimateOnTrigger(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onCalcEmission not implemented")]]
    /**
     * @note[short] Android
     */
    void onCalcEmission(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x409b20
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreateParticlePopup::onCopySettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopySettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDuplicateColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onDuplicateColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDurationForever not implemented")]]
    /**
     * @note[short] Android
     */
    void onDurationForever(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDynamicColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onDynamicColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDynamicRotation not implemented")]]
    /**
     * @note[short] Android
     */
    void onDynamicRotation(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onEmitterMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onEmitterMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onEndRGBVarSync not implemented")]]
    /**
     * @note[short] Android
     */
    void onEndRGBVarSync(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onMaxEmission not implemented")]]
    /**
     * @note[short] Android
     */
    void onMaxEmission(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onOrderSensitive not implemented")]]
    /**
     * @note[short] Android
     */
    void onOrderSensitive(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onPasteSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onPasteSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onPosType not implemented")]]
    /**
     * @note[short] Android
     */
    void onPosType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onQuickStart not implemented")]]
    /**
     * @note[short] Android
     */
    void onQuickStart(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onSelectColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onSelectParticleTexture not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectParticleTexture(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onStartRGBVarSync not implemented")]]
    /**
     * @note[short] Android
     */
    void onStartRGBVarSync(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleBlending not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleBlending(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartRadiusEqualToEnd not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartRotationIsDir not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleStartRotationIsDir(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartSizeEqualToEnd not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartSpinEqualToEnd not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onUniformColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onUniformColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::particleValueIsInt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn particleValueIsInt(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::titleForParticleValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn titleForParticleValue(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::toggleGravityMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGravityMode(bool p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorSprite(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateInputNodeStringForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInputNodeStringForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateParticleValueForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticleValueForType(float p0, gjParticleValue p1, cocos2d::CCParticleSystemQuad* p2);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateSliderForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSliderForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::valueForParticleValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn valueForParticleValue(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::willClose not implemented")]]
    /**
     * @note[short] Android
     */
    void willClose();
public:
    
private:
    [[deprecated("CreateParticlePopup::update not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3e6e08
     * @note[short] MacOS (Intel): 0x480650
     * @note[short] Android
     */
    virtual void update(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3e7814
     * @note[short] MacOS (Intel): 0x4811d0
     * @note[short] Windows: 0x409c70
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3e7908
     * @note[short] MacOS (Intel): 0x4812e0
     * @note[short] Windows: 0x409d70
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3e7ca4
     * @note[short] MacOS (Intel): 0x4816b0
     * @note[short] Windows: 0x40a1a0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("CreateParticlePopup::ccTouchCancelled not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3e7ce0
     * @note[short] MacOS (Intel): 0x481700
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x3e7680
     * @note[short] MacOS (Intel): 0x481030
     * @note[short] Windows: 0x409c60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3e7530
     * @note[short] MacOS (Intel): 0x480ef0
     * @note[short] Windows: 0x4093a0
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* p0);

    /**
     * @note[short] MacOS (ARM): 0x3e7648
     * @note[short] MacOS (Intel): 0x480fd0
     * @note[short] Windows: 0x409460
     * @note[short] Android
     */
    virtual TodoReturn sliderEnded(Slider* p0);

    /**
     * @note[short] MacOS (ARM): 0x3e6b94
     * @note[short] MacOS (Intel): 0x4803c0
     * @note[short] Windows: 0x406a10
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);
    
private:
    [[deprecated("CreateParticlePopup::textInputShouldOffset not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3e768c
     * @note[short] MacOS (Intel): 0x481060
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("CreateParticlePopup::textInputReturn not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3e775c
     * @note[short] MacOS (Intel): 0x481120
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::textInputClosed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3e6f4c
     * @note[short] MacOS (Intel): 0x4807c0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3e6f68
     * @note[short] MacOS (Intel): 0x480800
     * @note[short] Windows: 0x4072b0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    ParticleGameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_particles;
    bool m_unkBool;
    cocos2d::CCParticleSystemQuad* m_particle;
};
