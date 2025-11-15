static const char norm_fg[] = "#bfbfbf";
static const char norm_bg[] = "#010102";
static const char norm_border[] = "#404041";

static const char sel_fg[] = "#bfbfbf";
static const char sel_bg[] = "#2FA660";
static const char sel_border[] = "#bfbfbf";

static const char urg_fg[] = "#bfbfbf";
static const char urg_bg[] = "#987857";
static const char urg_border[] = "#987857";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
