#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
    static constexpr auto CLASS_NAME = "CCTextInputNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCTextInputNode, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17a66c
     * @note[short] Android: Out of line
     */
     CCTextInputNode();

    /**
     * @note[short] MacOS (ARM): 0x8da20
     * @note[short] MacOS (Intel): 0x9d950
     * @note[short] Windows: 0x4e270
     * @note[short] iOS: 0x178444
     * @note[short] Android
     */
    static CCTextInputNode* create(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, int fontSize, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDelegate(TextInputDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x8e824
     * @note[short] MacOS (Intel): 0x9e840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x178e10
     * @note[short] Android
     */
    void setMaxLabelScale(float v);

    /**
     * @note[short] MacOS (ARM): 0x8e82c
     * @note[short] MacOS (Intel): 0x9e860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x178e18
     * @note[short] Android
     */
    void setMaxLabelWidth(float v);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setMaxLabelLength(int v);

    /**
     * @note[short] MacOS (ARM): 0x8e834
     * @note[short] MacOS (Intel): 0x9e880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x178e20
     * @note[short] Android
     */
    void setLabelPlaceholderScale(float v);

    /**
     * @note[short] MacOS (ARM): 0x8e83c
     * @note[short] MacOS (Intel): 0x9e8a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x178e28
     * @note[short] Android
     */
    void setLabelPlaceholderColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x8e3f8
     * @note[short] MacOS (Intel): 0x9e3d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x178b2c
     * @note[short] Android
     */
    void setAllowedChars(gd::string filter);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    cocos2d::CCLabelBMFont* getPlaceholderLabel();

    /**
     * @note[short] MacOS (ARM): 0x8dec4
     * @note[short] MacOS (Intel): 0x9de60
     * @note[short] Windows: 0x4e6c0
     * @note[short] iOS: 0x178760
     * @note[short] Android
     */
    void addTextArea(TextArea* p0);
    
private:
    [[deprecated("CCTextInputNode::forceOffset not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8ff44
     * @note[short] MacOS (Intel): 0xa02c0
     * @note[short] Android
     */
    void forceOffset();
public:

    /**
     * @note[short] MacOS (ARM): 0x8e57c
     * @note[short] MacOS (Intel): 0x9e560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x178c4c
     * @note[short] Android
     */
    gd::string getString();

    /**
     * @note[short] MacOS (ARM): 0x8db78
     * @note[short] MacOS (Intel): 0x9db00
     * @note[short] Windows: 0x4e480
     * @note[short] iOS: 0x1784f8
     * @note[short] Android
     */
    bool init(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] MacOS (ARM): 0x8e628
     * @note[short] MacOS (Intel): 0x9e600
     * @note[short] Windows: 0x4ecc0
     * @note[short] iOS: 0x178c80
     * @note[short] Android
     */
    void refreshLabel();

    /**
     * @note[short] MacOS (ARM): 0x8e84c
     * @note[short] MacOS (Intel): 0x9e8c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLabelNormalColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x8e45c
     * @note[short] MacOS (Intel): 0x9e450
     * @note[short] Windows: 0x4e920
     * @note[short] iOS: 0x178b90
     * @note[short] Android
     */
    void setString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x8e818
     * @note[short] MacOS (Intel): 0x9e820
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBlinkLabel();

    /**
     * @note[short] MacOS (ARM): 0x8e860
     * @note[short] MacOS (Intel): 0x9e8e0
     * @note[short] Windows: 0x4efa0
     * @note[short] Android
     */
    void updateBlinkLabelToChar(int p0);

    /**
     * @note[short] MacOS (ARM): 0x8ff48
     * @note[short] MacOS (Intel): 0xa02d0
     * @note[short] Windows: 0x4fee0
     * @note[short] iOS: 0x179ffc
     * @note[short] Android
     */
    void updateCursorPosition(cocos2d::CCPoint p0, cocos2d::CCRect p1);

    /**
     * @note[short] MacOS (ARM): 0x8de1c
     * @note[short] MacOS (Intel): 0x9ddc0
     * @note[short] Windows: 0x4e7b0
     * @note[short] Android
     */
    void updateDefaultFontValues(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x8e134
     * @note[short] MacOS (Intel): 0x9e0c0
     * @note[short] Windows: 0x4e9c0
     * @note[short] iOS: 0x178894
     * @note[short] Android
     */
    void updateLabel(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x8e400
     * @note[short] MacOS (Intel): 0x9e3f0
     * @note[short] Windows: 0x4e8b0
     * @note[short] iOS: 0x178b34
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x903d8
     * @note[short] MacOS (Intel): 0xa0840
     * @note[short] Windows: 0x50440
     * @note[short] iOS: 0x17a440
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17a5e8
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17a5d8
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17a5e0
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x905dc
     * @note[short] MacOS (Intel): 0xa0a90
     * @note[short] Windows: 0x50650
     * @note[short] iOS: 0x17a5f0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x8eea4
     * @note[short] MacOS (Intel): 0x9efb0
     * @note[short] Windows: 0x4f590
     * @note[short] iOS: 0x1793e4
     * @note[short] Android
     */
    virtual void textChanged();

    /**
     * @note[short] MacOS (ARM): 0x8ee84
     * @note[short] MacOS (Intel): 0x9ef90
     * @note[short] Windows: 0x4f570
     * @note[short] iOS: 0x1793c4
     * @note[short] Android
     */
    virtual void onClickTrackNode(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x8ec40
     * @note[short] MacOS (Intel): 0x9ed30
     * @note[short] Windows: 0x4f390
     * @note[short] iOS: 0x1791e0
     * @note[short] Android
     */
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] MacOS (ARM): 0x8ed78
     * @note[short] MacOS (Intel): 0x9ef10
     * @note[short] Windows: 0x4f4f0
     * @note[short] iOS: 0x179334
     * @note[short] Android
     */
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] MacOS (ARM): 0x8efac
     * @note[short] MacOS (Intel): 0x9f0c0
     * @note[short] Windows: 0x4f620
     * @note[short] iOS: 0x17947c
     * @note[short] Android
     */
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* pSender, char const* text, int nLen, cocos2d::enumKeyCodes keyCodes);

    /**
     * @note[short] MacOS (ARM): 0x8f5c0
     * @note[short] MacOS (Intel): 0x9f820
     * @note[short] Windows: 0x4fa00
     * @note[short] iOS: 0x17987c
     * @note[short] Android
     */
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* tField);

    /**
     * @note[short] MacOS (ARM): 0x8f8ac
     * @note[short] MacOS (Intel): 0x9fb50
     * @note[short] Windows: 0x4fd30
     * @note[short] iOS: 0x179ae8
     * @note[short] Android
     */
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* tField);
    bool m_numberInput;
    gd::string m_caption;
    int m_unknown1;
    bool m_selected;
    bool m_unknown2;
    float m_fontValue1;
    float m_fontValue2;
    bool m_isChatFont;
    gd::string m_allowedChars;
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField;
    TextInputDelegate* m_delegate;
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_placeholderLabel;
    bool m_filterSwearWords;
    bool m_usePasswordChar;
    bool m_forceOffset;
    TextArea* m_textArea;
    InputValueType m_valueType;
    int m_decimalPlaces;
    int m_kerningAmount;
};
