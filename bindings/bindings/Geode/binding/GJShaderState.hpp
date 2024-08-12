#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJValueTween.hpp"

class GJShaderState {
public:
    static constexpr auto CLASS_NAME = "GJShaderState";
    
private:
    [[deprecated("GJShaderState::reset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reset();
public:
    
private:
    [[deprecated("GJShaderState::stopTweenAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopTweenAction(int p0);
public:
    
private:
    [[deprecated("GJShaderState::timesyncShaderAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn timesyncShaderAction(int p0);
public:
    
private:
    [[deprecated("GJShaderState::timesyncShaderActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn timesyncShaderActions();
public:
    
private:
    [[deprecated("GJShaderState::tweenValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tweenValue(float p0, float p1, int p2, float p3, int p4, float p5);
public:
    
private:
    [[deprecated("GJShaderState::updateTweenAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTweenAction(float p0, int p1);
public:
    
private:
    [[deprecated("GJShaderState::updateTweenActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTweenActions(float p0);
public:
    gd::unordered_map<int, GJValueTween> m_someIntToValueTweenMap;
    gd::unordered_map<int, double> m_someIntToDoubleMap;
    double m_time;
    double m_prevTime;
    double m_startTime;
    float m_textureScaleX;
    float m_textureScaleY;
    cocos2d::ccColor3B m_blurRefColor;
    float m_blurIntensity;
    int m_blurUnk60;
    bool m_blurOnlyEmpty;
    float m_shockWaveUnk68;
    float m_shockWaveUnk6c;
    float m_shockWaveUnk70;
    float m_shockWaveUnk74;
    float m_shockWaveUnk78;
    float m_shockWaveUnk7c;
    float m_shockWaveUnk80;
    float m_shockWaveUnk84;
    float m_shockWaveUnk88;
    bool m_shockWaveInvert;
    float m_shockWaveUnk90;
    float m_shockWaveUnk94;
    int m_shockWaveUnk98;
    bool m_shockWaveUnk9c;
    bool m_shockWaveCenterMoving;
    bool m_shockWaveUnk9e;
    float m_shockWaveUnka0;
    cocos2d::CCPoint m_shockWaveUnka4;
    bool m_shockWaveCenterDirty;
    cocos2d::CCPoint m_shockWaveCenter;
    double m_shockLineUnkb8;
    float m_shockLineUnkc0;
    float m_shockLineUnkc4;
    float m_shockLineUnkc8;
    bool m_shockLineAxis;
    bool m_shockLineDirection;
    bool m_shockLineDual;
    bool m_shockLineUnkcf;
    float m_shockLineUnkd0;
    float m_shockLineUnkd4;
    float m_shockLineUnkd8;
    float m_shockLineUnkdc;
    float m_shockLineUnke0;
    float m_shockLineUnke4;
    int m_shockLineUnke8;
    bool m_shockLineUnkec;
    bool m_shockLineCenterMoving;
    bool m_shockLineUnkee;
    float m_shockLineUnkf0;
    cocos2d::CCPoint m_shockLineUnkf4;
    bool m_shockLineCenterDirty;
    cocos2d::CCPoint m_shockLineCenter;
    float m_glitchUnk108;
    float m_glitchUnk10c;
    float m_glitchUnk110;
    float m_glitchUnk114;
    float m_glitchUnk118;
    float m_glitchUnk11c;
    bool m_glitchUnk120;
    float m_chromaticUnk124;
    float m_chromaticUnk128;
    bool m_chromaticUnk12c;
    float m_cGUnk130;
    float m_cGUnk134;
    float m_cGUnk138;
    float m_cGUnk13c;
    float m_cGUnk140;
    float m_cGUnk144;
    float m_cGUnk148;
    float m_cGUnk14c;
    bool m_cGUnk150;
    bool m_cGUnk151;
    bool m_cGUnk152;
    bool m_cGUnk153;
    float m_pixelateTargetX;
    float m_pixelateTargetY;
    bool m_pixelateSnapGrid;
    bool m_pixelatePixelating;
    bool m_pixelateRelative;
    bool m_pixelateHardEdges;
    float m_lensCircleUnk160;
    float m_lensCircleUnk164;
    float m_lensCircleStrength;
    int m_lensCircleUnk16c;
    int m_lensCircleUnk170;
    bool m_lensCircleUnk174;
    bool m_lensCircleAdditive;
    char m_lensCircleTintR;
    char m_lensCircleTintG;
    char m_lensCircleTintB;
    cocos2d::CCPoint m_lensCircleUnk17c;
    cocos2d::CCPoint m_lensCircleUnk184;
    float m_radialBlurUnk18c;
    float m_radialBlurUnk190;
    bool m_radialBlurUnk194;
    int m_radialBlurUnk198;
    cocos2d::CCPoint m_radialBlurUnk19c;
    cocos2d::CCPoint m_radialBlurUnk1a4;
    float m_motionBlurUnk1ac;
    float m_motionBlurUnk1b0;
    float m_motionBlurSpeedX;
    float m_motionBlurSpeedY;
    float m_motionBlurUnk1bc;
    float m_motionBlurUnk1c0;
    int m_motionBlurUnk1c4;
    int m_motionBlurUnk1c8;
    bool m_motionBlurDual;
    bool m_motionBlurUnk1cd;
    float m_bulgeValue;
    bool m_bulgeUnk1d4;
    int m_bulgeUnk1d8;
    float m_bulgeRadius;
    cocos2d::CCPoint m_bulgeUnk1e0;
    cocos2d::CCPoint m_bulgeUnk1e8;
    float m_pinchUnk1f0;
    float m_pinchUnk1f4;
    bool m_pinchUnk1f8;
    bool m_pinchUnk1f9;
    int m_pinchUnk1fc;
    int m_pinchUnk200;
    cocos2d::CCPoint m_pinchUnk204;
    cocos2d::CCPoint m_pinchUnk20c;
    bool m_pinchUnk214;
    float m_pinchUnk218;
    cocos2d::CCPoint m_pinchUnk21c;
    float m_grayscaleValue;
    bool m_grayscaleUseLum;
    int m_grayscaleUnk22c;
    cocos2d::ccColor3B m_grayscaleTint;
    float m_sepiaValue;
    float m_invertColorEditRGB;
    float m_invertColorR;
    float m_invertColorG;
    float m_invertColorB;
    bool m_invertColorClampRGB;
    float m_hueShiftDegrees;
    float m_colorChangeCR;
    float m_colorChangeCG;
    float m_colorChangeCB;
    float m_colorChangeBR;
    float m_colorChangeBG;
    float m_colorChangeBB;
    float m_splitUnk268;
    float m_splitUnk26c;
    bool m_splitUnk260;
    int m_blurRefChannel;
    int m_somethingZLayerUnk278;
    bool m_zLayerDirty;
    bool m_somethingZLayerUnk27d;
    bool m_usesShaders;
};
