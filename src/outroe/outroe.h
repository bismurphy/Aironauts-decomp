#include "common.h"
#include <psxsdk/libgpu.h>

extern s32 (*GPU_printf)(char* somePtr,  ...);


typedef struct{
    u8 unk0;
    u8 unk1;
    u8 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    void (*unkC);
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s16 unk68;
    s16 correction; // 6a was coming at 68? need more used in here.
    u8 unk6A;
} unk801CC4EC;

extern unk801CC4EC D_801CC4EC;


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