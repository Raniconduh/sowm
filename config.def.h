#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const int bar_height = 12;
const int bar_fg = 0xEBDBB2;
const int bar_bg = 0x212121;

const int mono_vgap = 16;
const int mono_hgap = 16;

const char* menu[]    = {"dmenu_run",      0};
const char* term[]    = {"st",             0};
const char* scrot[]   = {"scrot",          0};
const char* sscrot[]  = {"scrot", "-s",    0};
const char* voldown[] = {"mixer", "-s", "vol", "-5",         0};
const char* volup[]   = {"mixer", "-s", "vol", "+5",         0};
const char* volmute[] = {"awk", "BEGIN{c=\"mixer -s pcm\";c|getline s;close(c);"
                                "if(match(s,/0:0$/))system(\"mixer -s pcm 100:100\");"
                                "else system(\"mixer -s pcm 0:0\")}",
                         0};
const char* emoji[]   = {"/home/rani/scripts/emoji",   0};

const char* startup   = "~/.fehbg & dwmstatus &"
                        "setxkbmap -model pc104 -layout us,es -option grp:shift_caps_toggle &";

static struct key keys[] = {
    {MOD|ShiftMask,  XK_q,   win_kill,   {0}},
    {MOD,            XK_c,   win_center, {0}},
    {MOD,            XK_f,   win_fs,     {0}},
    {MOD,            XK_m,   win_fs_all, {0}},
	{MOD|ShiftMask,  XK_f,   win_fs_full,{0}},
    {MOD|ShiftMask,  XK_e,   quit,       {0}},
    {MOD,            XK_Tab, win_next,   {0}},
    {MOD|ShiftMask,  XK_Tab, win_prev,   {0}},

    {MOD, XK_space,  run, {.com = menu}},
    {MOD, XK_p,      run, {.com = scrot}},
	{MOD|ShiftMask, XK_P, run, {.com = sscrot}},
    {MOD, XK_Return, run, {.com = term}},
    {MOD, XK_e,      run, {.com = emoji}},

    {MOD, XK_F2,     run, {.com = voldown}},
    {MOD, XK_F3,     run, {.com = volup}},
    {MOD, XK_F4,     run, {.com = volmute}},

    {MOD,            XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask,  XK_1, win_to_ws, {.i = 1}},
    {MOD,            XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask,  XK_2, win_to_ws, {.i = 2}},
    {MOD,            XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask,  XK_3, win_to_ws, {.i = 3}},
    {MOD,            XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask,  XK_4, win_to_ws, {.i = 4}},
    {MOD,            XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask,  XK_5, win_to_ws, {.i = 5}},
    {MOD,            XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask,  XK_6, win_to_ws, {.i = 6}},
};

#endif
