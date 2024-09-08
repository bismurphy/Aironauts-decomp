#include "common.h"

typedef struct{
    void (**unk0)();
    s32 unk4;
    void (*AllocPrimitives)(s32* somePtr, s32 count);
} unkStr_D_801CC4E4;

extern unkStr_D_801CC4E4 D_801CC4E4;

extern void (*Some_PrintF)(char* somePtr,  ...);


typedef struct{
    u8 unk0;
    s16 unk2;
    s16 unk4;

} unk801CC4EE;

extern unk801CC4EE D_801CC4EE;
