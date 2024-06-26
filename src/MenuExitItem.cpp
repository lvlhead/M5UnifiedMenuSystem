#include "MenuExitItem.h"

#include "Menu.h"

#include <M5Unified.h>

MenuExitItem::MenuExitItem(Layout& layout_, Menu* parentMenu_) : MenuItem(layout_, "..")
{
	parentMenu = parentMenu_;
}

void MenuExitItem::loop()
{
	getMenu()->reset();
	getMenu()->disable();

	if (parentMenu != NULL)
	{
		parentMenu->resetActiveMenuItem();
	}
}

