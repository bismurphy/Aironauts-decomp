/*
 * Primitive Handling Macros
 */
#define setlen(p, _len) (((P_TAG*)(p))->len = (u_char)(_len))
#define setaddr(p, _addr) (((P_TAG*)(p))->addr = (u_long)(_addr))
#define setcode(p, _code) (((P_TAG*)(p))->code = (u_char)(_code))

typedef struct {
    /* 0x0 */ short x;
    /* 0x2 */ short y; /* offset point on VRAM */
    /* 0x4 */ short w; /* width */
    /* 0x6 */ short h; /* height */
} RECT;                /* size = 0x8 */

#define O_TAG u_long tag
#define OT_TYPE u_long

typedef struct {
    unsigned addr : 24;
    unsigned len : 8;
    u_char r0, g0, b0, code;
} P_TAG;

typedef struct {
    O_TAG;
    /* 0x4 */ u_long code[15];
} DR_ENV; /* Packed Drawing Environment, size = 0x40 */


typedef struct {
    /* 0x00 */ RECT clip;     /* clip area */
    /* 0x08 */ short ofs[2];  /* drawing offset */
    /* 0x0C */ RECT tw;       /* texture window */
    /* 0x14 */ u_short tpage; /* texture page */
    /* 0x16 */ u_char dtd;    /* dither flag (0:off, 1:on) */
    /* 0x17 */ u_char dfe;    /* flag to draw on display area (0:off 1:on) */
    /* 0x18 */ u_char isbg;   /* enable to auto-clear */
    /* 0x19 */ u_char r0, g0, b0; /* initital background color */
    /* 0x1C */ DR_ENV dr_env;     /* reserved */
} DRAWENV;                        /* size = 0x58 */

