/********************************************************************** 
 Freeciv - Copyright (C) 2005 - The Freeciv Project
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/

#ifndef FC__THEMECOLORS_H
#define FC__THEMECOLORS_H

#include "colors_common.h"

/* The color system is designed on the assumption that almost, but
 * not quite, all displays will be truecolor. */

enum theme_color {
  COLOR_THEME_BACKGROUND_BROWN = COLOR_LAST, /* Background2 (brown) */
  COLOR_THEME_QUICK_INFO_BG,	 /* Quick info Background color */
  COLOR_THEME_QUICK_INFO_TEXT,	 /* Quick info Text color */
  COLOR_THEME_QUICK_INFO_FRAME,  /* Quick info frame color */
  COLOR_THEME_DISABLED,		 /* disable color */
  COLOR_THEME_CITYDLG_PROD,	 /* city production color */
  COLOR_THEME_CITYDLG_SUPPORT,	 /* city units support color */
  COLOR_THEME_CITYDLG_TRADE,	 /* city trade color */
  COLOR_THEME_CITYDLG_GOLD,	 /* city gold color */
  COLOR_THEME_CITYDLG_LUX,		 /* city luxuries color */
  COLOR_THEME_CITYDLG_FOOD_SURPLUS, /* city food surplus color */
  COLOR_THEME_CITYDLG_UPKEEP,	 /* city upkeep color */
  COLOR_THEME_CITYDLG_SCIENCE,	 /* city science color */
  COLOR_THEME_CITYDLG_HAPPY,	 /* city happy color */
  COLOR_THEME_CITYDLG_CELEB,	 /* city celebrating color */
  COLOR_THEME_CITYDLG_IMPR,         /* city improvements */
  COLOR_THEME_CITYDLG_BUY,
  COLOR_THEME_CITYDLG_SELL,
  COLOR_THEME_CITYDLG_PANEL,
  COLOR_THEME_CITYDLG_INFOPANEL,
  COLOR_THEME_CITYDLG_FOODPERTURN,
  COLOR_THEME_CITYDLG_CORRUPTION,
  COLOR_THEME_CITYDLG_FOODSTOCK,
  COLOR_THEME_CITYDLG_SHIELDSTOCK,
  COLOR_THEME_CITYDLG_GRANARY,
  COLOR_THEME_CITYDLG_STOCKS,
  COLOR_THEME_CITYDLG_GROWTH,
  COLOR_THEME_CITYREP_FOODSTOCK,
  COLOR_THEME_CITYREP_TRADE,
  COLOR_THEME_CITYREP_PROD,
  COLOR_THEME_CMA_TEXT,
  COLOR_THEME_UNITUPGRADE_TEXT,
  COLOR_THEME_ADVANCEDTERRAINDLG_TEXT,
  COLOR_THEME_REVOLUTIONDLG_TEXT,
  COLOR_THEME_NATIONDLG_LEGEND,
  COLOR_THEME_NEWCITYDLG_TEXT,
  COLOR_THEME_WARDLG_TEXT,
  COLOR_THEME_MESWIN_ACTIVE_TEXT,
  COLOR_THEME_MESWIN_ACTIVE_TEXT2,
  COLOR_THEME_PLRDLG_ARMISTICE,
  COLOR_THEME_PLRDLG_WAR,
  COLOR_THEME_PLRDLG_CEASEFIRE,
  COLOR_THEME_PLRDLG_PEACE,
  COLOR_THEME_PLRDLG_ALLIANCE,
  COLOR_THEME_JOINGAME_TEXT,
  COLOR_THEME_JOINGAME_FRAME,
  COLOR_THEME_SELECTIONRECTANGLE,
  COLOR_THEME_RED_DISABLED,	 /* player at war but can't meet or get intel. data */
  COLOR_THEME_CHECKBOX_LABEL_TEXT,
  COLOR_THEME_TEXT_STD,
  COLOR_THEME_WIDGET_TEXT_NORMAL,
  COLOR_THEME_WIDGET_TEXT_SELECTED,
  COLOR_THEME_WIDGET_TEXT_PRESSED,
  COLOR_THEME_WIDGET_TEXT_DISABLED,
  COLOR_THEME_CUSTOM_WIDGET_TEXT_NORMAL,
  COLOR_THEME_CUSTOM_WIDGET_TEXT_SELECTED,
  COLOR_THEME_CUSTOM_WIDGET_TEXT_PRESSED,
  COLOR_THEME_CUSTOM_WIDGET_TEXT_DISABLED,
  COLOR_THEME_CUSTOM_WIDGET_FRAME_SELECTED,
  COLOR_THEME_CUSTOM_WIDGET_FRAME_PRESSED,
  COLOR_THEME_THEMELABEL2_BG,
  COLOR_THEME_LABEL_BAR,
  COLOR_THEME_WINDOW_FRAME,
  COLOR_THEME_EDITFIELD_CARET,
  THEME_COLOR_LAST
};

struct color;
struct theme_color_system;
struct theme;

struct color *theme_get_color(const struct theme *t, enum theme_color color);
        
/* Functions used by the theme to allocate the color system. */
struct theme_color_system *theme_color_system_read(struct section_file *file);

void theme_color_system_free(struct theme_color_system *colors);

#endif /* FC__THEMECOLORS_H */
