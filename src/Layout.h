#ifndef LAYOUT_DEFINES_H
#define LAYOUT_DEFINES_H

// GENERAL
#define SCREEN_WIDTH M5.Lcd.width()
#define SCREEN_HEIGHT M5.Lcd.height()
#define MENU_FONT 2
#define MENU_FONT_SIZE 2
#define MENU_FONT_HEIGHT M5.Lcd.fontHeight(MENU_FONT)

// --- TOP ---
#define TOP_BAR_TITLE_COLOR WHITE
#define TOP_BAR_BACKGROUND_COLOR RED
#define TOP_BAR_V_PADDING 4

// --- CENTER ---
#define MENU_ITEM_MAX_NR 5

// grey levels theme
#define MENU_ITEM_TEXT_COLOR DARKGREY
#define MENU_ITEM_BACKGROUND_COLOR LIGHTGREY
#define MENU_ITEM_HIGHLIGHTED_TEXT_COLOR BLACK
#define MENU_ITEM_HIGHLIGHTED_BACKGROUND_COLOR WHITE

// high contrast theme
//#define MENU_ITEM_TEXT_COLOR WHITE
//#define MENU_ITEM_BACKGROUND_COLOR BLACK
//#define MENU_ITEM_HIGHLIGHTED_TEXT_COLOR BLACK
//#define MENU_ITEM_HIGHLIGHTED_BACKGROUND_COLOR WHITE

#define MENU_EXIT_ITEM_TEXT ".."

// --- BOTTOM ---
#define BOTTOM_BAR_BACKGROUND_COLOR RED
#define BOTTOM_BAR_SOFTKEY_COLOR WHITE
#define BOTTOM_BAR_SOFTKEY_BACKGROUND_COLOR RED
#define BOTTOM_BAR_V_PADDING 4




#endif 

