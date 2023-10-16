#include "CallbackMenuItem.h"

#include "Menu.h"

#include <M5Stack.h>

CallbackMenuItem::CallbackMenuItem(String text_, CallbackFunction callbackOneTimeFunction_, CallbackFunction callbackLoopFunction_) : MenuItem(text_)
{
	text = text_;
	callbackOneTimeFunction = callbackOneTimeFunction_;
	callbackLoopFunction = callbackLoopFunction_;
	firstLoop = true;
}

void CallbackMenuItem::loop() 
{
	if (firstLoop)
	{
		callbackOneTimeFunction(*this);
		firstLoop = false;

		if (callbackLoopFunction == NULL)
		{
			deactivateCallbacks();
		}
	}	

	if (callbackLoopFunction != NULL)
	{
		callbackLoopFunction(*this);
	}
}

void CallbackMenuItem::deactivateCallbacks()
{
	firstLoop = true;
	getMenu()->resetActiveMenuItem();
}
