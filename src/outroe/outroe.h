#include "common.h"
#include <psxsdk/libgpu.h>



typedef struct {
    void (*func0)(s32, ...);
    void (*func1)(s32, ...);
    s32 (*func2)(void(*), ...);
    void (*func3)(s32, ...);
    void (*func4)(s32, ...);
    void (*func5)(s32, ...);
    void (*func6)(s32, ...);
    void (*func7)(s32, ...);
    void (*func8)(s32, ...);
    void (*func9)(s32, ...);
    void (*func10)(s32, ...);
    void (*func11)(s32, ...);
    void (*func12)(s32, ...);
    void (*func13)(s32, ...);
    void (*func14)(s32, ...);
    void (*func15)(s32, ...);
} Overlay;

typedef struct{
    Overlay* o;
} unkStr_D_801CC4E4;

extern unkStr_D_801CC4E4 D_801CC4E4;

extern s32 (*GPU_printf)(char* somePtr,  ...);


typedef struct{
    u8 unk0;
    s16 unk2;
    s16 unk4;

} unk801CC4EE;

extern unk801CC4EE D_801CC4EE;


extern char* D_801B4A78;
#define LOW(x) (*(s32*)&(x))


typedef struct{
    s16 coord1;
    s16 coord2;
    s16 coord3;
    s16 coord4;
} Rectangle;
extern char D_801B4A84;
extern s32 D_801CC58C[];