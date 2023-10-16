#ifndef SUB_MENU_ITEM_H
#define SUB_MENU_ITEM_H

#include "MenuItem.h"

// foward declare class for backwards reference without cyclic dependency
class Menu;

class SubMenuItem : virtual public MenuItem
{

public:
	SubMenuItem(String text_, Menu* subMenu_);
	virtual ~SubMenuItem() {}
	virtual void loop();

	virtual void onAdded();

protected:
	Menu* subMenu;

private:
};

#endif 
