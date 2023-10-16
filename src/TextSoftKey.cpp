#include "TextSoftKey.h"

#include <M5Stack.h>


TextSoftKey::TextSoftKey(SoftKeySlot slot_, String text_) : SoftKey(slot_)
{
	text = text_;
}


void TextSoftKey::renderInternal(int x, int y, int w, int h)
{
	renderRow(x, y, w, h);
	renderText(x, y, w, h);
}

void TextSoftKey::renderText(int x, int y, int w, int h)
{
	if (pressed)
	{
		M5.Lcd.setTextColor(SOFTKEY_BACKGROUND_COLOR);
	}
	else
	{
		M5.Lcd.setTextColor(SOFTKEY_COLOR);
	}

	M5.Lcd.setTextDatum(MC_DATUM);
	M5.Lcd.drawString((text).c_str(), x + (w / 2), y + (h / 2));

}