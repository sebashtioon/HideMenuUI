#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "TextAreaDelegate";
    
private:
    [[deprecated("TextAreaDelegate::fadeInTextFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn fadeInTextFinished(TextArea* p0);
public:
};
