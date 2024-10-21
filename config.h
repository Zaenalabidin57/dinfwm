#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod1Mask
#define BORDER_SELECTED "#77aaff"
#define BORDER_UNSELECTED "#e0e0e0"
#define BAR_FONT "mono"
#define BAR_BACKGROUND "#ffffff"
#define BAR_SELECTED "#77aaff"
#define BAR_TEXT_SELECTED "#ffffff"
#define BAR_TEXT_UNSELECTED "#77aaff"

const char* menu[] = {"rofi", "-show", "drun", 0};
const char* term[] = {"alacritty", 0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-", 0};
const char* volup[] = {"amixer", "sset", "Master", "5%+", 0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle", 0};

static struct key keys[] = {
    {MOD, XK_q, win_kill, {0}},
    {MOD, XK_c, win_center, {0}},
    {MOD, XK_f, win_fs, {0}},
    {MOD, XK_e, killclient, {0}},
    {MOD, XK_b, toggle_bar, {0}},
 
    {Mod1Mask, XK_Tab, win_next, {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev, {0}},

    {MOD, XK_r, run, {.com = menu}},
    {MOD, XK_Return, run, {.com = term}},

    {0, XF86XK_AudioLowerVolume, run, {.com = voldown}},
    {0, XF86XK_AudioRaiseVolume, run, {.com = volup}},
    {0, XF86XK_AudioMute, run, {.com = volmute}},

    {MOD, XK_1, ws_go, {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD, XK_2, ws_go, {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD, XK_3, ws_go, {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD, XK_4, ws_go, {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD, XK_5, ws_go, {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
};

#endif
