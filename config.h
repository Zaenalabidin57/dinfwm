#ifndef CONFIG_H
#define CONFIG_H

/* tambah thunar */

#define MOD Mod4Mask

#define BORDER_SELECTED "#77aaff"
#define BORDER_UNSELECTED "#e0e0e0"
#define BAR_FONT "mono"
#define BAR_BACKGROUND "#ffffff"
#define BAR_SELECTED "#77aaff"
#define BAR_TEXT_SELECTED "#ffffff"
#define BAR_TEXT_UNSELECTED "#77aaff"

const char* menu[] = {"rofi", "-show", "drun", 0};
const char* term[] = {"st", 0};
const char* voldown[] = {"pactl", "set-sink-volume", "0", "5%-", 0};
const char* volup[] = {"pactl", "set-sink-volume", "0", "5%+", 0};
const char* volmute[] = {"pactl", "set-sink-mute", "0", "toggle", 0};
const char* light_up[] = {"brightnessctl", "s", "20+", 0};
const char* light_down[] = {"brightnessctl", "s", "20-", 0};

const char* exitbiji[] = {"st", "-e", "/home/shigure/.config/hypr/exit.sh", 0};

const char* Ppause[] = {"playerctl", "play-pause", 0};
const char* Pplay[] = {"playerctl", "play-pause", 0};
const char* audionext[] = {"playerctl", "next", 0};
const char* audioprev[] = {"playerctl", "previous", 0};

const char* colorpicker[] = {"xcolor | xclip", 0};
const char* clipboard[] = {"clipcat-menu", 0};

const char* screenshot[] = {"flameshot", "gui", 0};
const char* lock[] = {"i3lock-fancy-dualmonitor", "-p",  0};

const char* thunar[] = {"thunar", 0};

const char* browser[] = {"firefox", 0};
const char* emoji[] = {"rofi -modi emoji -show emoji", 0};


static struct key keys[] = {
    {MOD, XK_q, win_kill, {0}},
    {MOD, XK_s, win_center, {0}},
    {MOD, XK_f, win_fs, {0}},
    {MOD|ShiftMask, XK_q, killclient, {0}},
    {MOD, XK_p, toggle_bar, {0}},
 
    {MOD, XK_k, win_next, {0}},
    {MOD, XK_j, win_prev, {0}},

    {MOD, XK_d, run, {.com = menu}},
    {MOD, XK_o, run, {.com = browser}},
    {MOD, XK_n, run, {.com = thunar}},
    {MOD, XK_Return, run, {.com = term}},

    {MOD|ShiftMask, XK_p, run, {.com = lock}},

    {MOD|ShiftMask, XK_e, run, {.com = exitbiji}},

    {MOD|ShiftMask, XK_w, run, {.com = emoji}},

    {0, XF86XK_AudioLowerVolume, run, {.com = voldown}},
    {0, XF86XK_AudioRaiseVolume, run, {.com = volup}},
    {0, XF86XK_AudioMute, run, {.com = volmute}},
    {0, XF86XK_MonBrightnessUp, run, {.com = light_up}},
    {0, XF86XK_MonBrightnessDown, run, {.com = light_down}},

    {0, XK_Print, run, {.com = screenshot}},

    {0, XF86XK_AudioPlay, run, {.com = Pplay}},
    {0, XF86XK_AudioPause, run, {.com = Ppause}},
    {0, XF86XK_AudioNext, run, {.com = audionext}},
    {0, XF86XK_AudioPrev, run, {.com = audioprev}},

    {MOD|ShiftMask, XK_g, run, {.com = colorpicker}},
    {MOD, XK_y, run, {.com = clipboard}},

    {MOD, XK_z, ws_go, {.i = 1}},
    {MOD|ShiftMask, XK_z, win_to_ws, {.i = 1}},
    {MOD, XK_x, ws_go, {.i = 2}},
    {MOD|ShiftMask, XK_x, win_to_ws, {.i = 2}},
    {MOD, XK_c, ws_go, {.i = 3}},
    {MOD|ShiftMask, XK_c, win_to_ws, {.i = 3}},
    {MOD, XK_v, ws_go, {.i = 4}},
    {MOD|ShiftMask, XK_v, win_to_ws, {.i = 4}},
    {MOD, XK_b, ws_go, {.i = 5}},
    {MOD|ShiftMask, XK_b, win_to_ws, {.i = 5}},
};

#endif
