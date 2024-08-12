#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ListButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ListButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ListButtonBar, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x372be8
     * @note[short] MacOS (Intel): 0x3f8aa0
     * @note[short] Windows: 0x698f0
     * @note[short] Android
     */
    static ListButtonBar* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6, float p7, int p8);
    
private:
    [[deprecated("ListButtonBar::getPage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3732ec
     * @note[short] MacOS (Intel): 0x3f9200
     * @note[short] Android
     */
    int getPage();
public:

    /**
     * @note[short] MacOS (ARM): 0x3732f8
     * @note[short] MacOS (Intel): 0x3f9220
     * @note[short] Windows: 0x69f00
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x372ccc
     * @note[short] MacOS (Intel): 0x3f8b70
     * @note[short] Windows: 0x69a00
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, int p3, float p4, float p5, float p6, float p7, int p8);

    /**
     * @note[short] MacOS (ARM): 0x3731d4
     * @note[short] MacOS (Intel): 0x3f90d0
     * @note[short] Windows: 0x69fb0
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x373260
     * @note[short] MacOS (Intel): 0x3f9170
     * @note[short] Windows: 0x69f90
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pages;
    ListButtonBarDelegate* m_delegate;
    bool m_useMoveAnimation;
};
