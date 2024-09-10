#include "outroe.h"

typedef struct {
    /* 0x00 */ u32 unk00;                       // aIdSysCV1831995
    /* 0x04 */ void (*addque)();                // _addque
    /* 0x08 */ int (*addque2)();                // _addque2
    /* 0x0C */ u32 clr;                         // _clr
    /* 0x10 */ void (*ctl)(int);                // _ctl
    /* 0x14 */ s32 (*cwb)(s32* arg0, s32 arg1); // _cwb
    /* 0x18 */ u32 cwc;                         // _cwc
    /* 0x1C */ u32 drs;                         // _drs
    /* 0x20 */ u32 dws;                         // _dws
    /* 0x24 */ u32 unk24;                       // _exeque
    /* 0x28 */ int (*getctl)(int);              // _getctl
    /* 0x2C */ void (*otc)(u32* ot, s32 n);     // _otc
    /* 0x30 */ u32 unk30;                       // _param
    /* 0x34 */ void (*reset)(int);              // _reset
    /* 0x38 */ u_long (*status)(void);          // _status
    /* 0x3C */ void (*sync)(int);               // _sync
} gpu;                                          // size = 0x40

extern gpu* g_GPU;


INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7588);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B77C0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B78C4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7BEC);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7CE8);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7D20);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7DD0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7E34);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7EC0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7F1C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7F84);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7FB4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B7FD4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8000);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B802C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B809C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B80CC);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8190);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B81F4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8204);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B82F0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B83BC);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8424);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B84C8);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8500);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8528);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B862C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B874C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B88DC);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8970);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B89C0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8A44);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8AA8);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8B04);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8B44);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8B54);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8C3C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8CA0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8D04);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8DB8);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8DF4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8E34);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B8ED4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B918C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B94A8);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B9874);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B99E8);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B9A44);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B9AE8);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B9AF8);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801B9B58);

void func_801B9BF0(s32 arg0) { 
    if (D_801CC4EE.unk0 >= 2) {
        GPU_printf("DrawSync(%d)...\n", arg0);
    }
    g_GPU->sync(arg0);
}

void func_801B9C58(char* arg0, s16* arg1) { 
    switch (D_801CC4EE.unk0) {
    case 1:
        if ((arg1[2] > D_801CC4EE.unk2) || 
            (arg1[2] + arg1[0] > D_801CC4EE.unk2) || 
            (arg1[1] > D_801CC4EE.unk4) || 
            (arg1[1] + arg1[3] > D_801CC4EE.unk4) || 
            (arg1[2] <= 0) || 
            (arg1[0] < 0) || 
            (arg1[1] < 0) || 
            (arg1[3] <= 0)) {
            GPU_printf("%s:bad RECT", arg0);
            GPU_printf("(%d,%d)-(%d,%d)\n", arg1[0],arg1[1],arg1[2],arg1[3]);
        }
        break;
    case 2:
        GPU_printf("%s:", arg0);
        GPU_printf("(%d,%d)-(%d,%d)\n", arg1[0],arg1[1],arg1[2],arg1[3]);
    }
}

void func_801B9D74(s16* arg0, u8 arg1, u8 arg2, u8 arg3) {
    func_801B9C58("ClearImage", arg0);
    g_GPU->addque2(g_GPU->clr, arg0, 8, arg3 << 16 |  arg2 << 8 | arg1);
}

void func_801B9E04(s16* arg0, u8 arg1, u8 arg2, u8 arg3) {
    func_801B9C58("ClearImage2", arg0);
    g_GPU->addque2(g_GPU->clr, arg0, 8, 0x80000000 | arg3 << 16 |  arg2 << 8 | arg1);
}

void func_801B9E9C(s16* arg0, s32 arg1) { 
    func_801B9C58("LoadImage", arg0);
    g_GPU->addque2(g_GPU->dws, arg0, 8, arg1);
}

void func_801B9EFC(s16* arg0, s32 arg1) { 
    func_801B9C58(&D_801B4A78, arg0); // Can't pull this into rodata yet; used by func_801BC504.
    g_GPU->addque2(g_GPU->drs, arg0, 8, arg1);
}

s32 func_801B9F5C(Rectangle* arg0, s32 arg1, s32 arg2) { 
    gpu* temp_gpu;
    s32* thing2;

    func_801B9C58(&D_801B4A84, arg0); //"MoveImage"
    if (arg0->coord3 == 0 || arg0->coord4 == 0) {
        return -1; 
    }
    thing2 = (s32*)&arg0->coord3;
    temp_gpu = *(&g_GPU);
    D_801CC58C[0] = LOW(arg0->coord1);
    D_801CC58C[1] = ((arg2 << 0x10) | (arg1 & 0xFFFF));
    D_801CC58C[2] = *thing2;
    return temp_gpu->addque2(temp_gpu->cwc, &D_801CC58C[-2], 0x14, 0);
}

extern s8 D_801B4A90;
extern s32 D_801CC598;
extern s32 D_801CC5AC;

OT_TYPE* ClearOTag(OT_TYPE* ot, s32 n) {
    s32* target;

    if (D_801CC4EE.unk0 >= 2) { 
        GPU_printf(&D_801B4A90, ot, n); //"ClearOTag(%08x,%d)...\n"
    }
    for(n--; n != 0; n--, ot++) {
        setlen(ot, 0);
        setaddr(ot, ot + 1);
    }
    target = &D_801CC5AC;
    *target = ((s32) &D_801CC598  & 0xFFFFFF) | 0x04000000;
    LOW(target) &= 0xFFFFFF;
    *ot = target;
    return ot;
}

extern s8 D_801B4AA8;

OT_TYPE* ClearOTagR(OT_TYPE* ot, int arg1) {
    s32* target;
    
    if (D_801CC4EE.unk0 >= 2) {
        GPU_printf(&D_801B4AA8, ot, arg1); //"ClearOTagR(%08x,%d)...\n"
    }
    g_GPU->otc(ot, arg1);
    target = &D_801CC5AC;
    *target = ((s32) &D_801CC598  & 0xFFFFFF) | 0x04000000;
    LOW(target) &= 0xFFFFFF;
    *ot = target;
    return ot;
}

struct Temp {
    s16 unk0;
    u8 unk2;
    u8 unk3;
};


void func_801BA188(struct Temp* arg0) {
    s32 temp_s1;

    temp_s1 = arg0->unk3;
    g_GPU->sync(0);
    g_GPU->cwb(arg0 + 1, temp_s1);
}

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA1E4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA254);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA314);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA3EC);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA420);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA918);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA94C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA97C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA9B4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BAA34);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BAA74);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BAA9C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BAAC4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BAB18);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BAD10);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BAF80);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BAFA0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB038);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB0D0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB0EC);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB16C);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB184);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB264);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB494);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB6D0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB950);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB974);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB988);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BB9C8);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BBA10);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BBA40);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BBA64);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BBD14);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BBF74);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BC0C4);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BC200);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BC234);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BC378);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BC418);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BC504);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BC5F0);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BC734);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BC830);

void fillArrayWithValue(s8* byteArray, s8 value, s32 count) {
    s32 remainingCount;
    for(remainingCount = count - 1; remainingCount != -1; remainingCount--){
        *byteArray++ = value;
    }
}
