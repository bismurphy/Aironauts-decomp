#include "common.h"
#include <psxsdk/libgpu.h>

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