/*
 * Primitive Handling Macros
 */
#define setlen(p, _len) (((P_TAG*)(p))->len = (u_char)(_len))
#define setaddr(p, _addr) (((P_TAG*)(p))->addr = (u_long)(_addr))
#define setcode(p, _code) (((P_TAG*)(p))->code = (u_char)(_code))

#define O_TAG u_long tag
#define OT_TYPE u_long

typedef struct {
    unsigned addr : 24;
    unsigned len : 8;
    u_char r0, g0, b0, code;
} P_TAG;


