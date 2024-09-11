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

u8 GetGraphDebug(void) {
    return D_801CC4EC.unk2;
}

void* DrawSyncCallback(void (*func)()) {
    s32 temp_v0;

    if (D_801CC4EC.unk2 >= 2) {
        GPU_printf("DrawSyncCallback(%08x)...\n", func);
    }
    temp_v0 = D_801CC4EC.unkC;
    D_801CC4EC.unkC = func;
    return temp_v0;
}


void SetDispMask(s32 mask) {
    if (D_801CC4EC.unk2 >= 2) {
        GPU_printf("SetDispMask(%d)...\n", mask);
    }
    if (mask == 0) {
        fillArrayWithValue(&D_801CC4EC.unk6A, -1, 0x14);
    }
    g_GPU->ctl(mask ? 0x03000000 : 0x03000001);
}

void DrawSync(s32 arg0) { 
    if (D_801CC4EC.unk2 >= 2) {
        GPU_printf("DrawSync(%d)...\n", arg0);
    }
    g_GPU->sync(arg0);
}

void checkRECT(char* arg0, s16* arg1) { 
    switch (D_801CC4EC.unk2) {
    case 1:
        if ((arg1[2] > D_801CC4EC.unk4) || 
            (arg1[2] + arg1[0] > D_801CC4EC.unk4) || 
            (arg1[1] > D_801CC4EC.unk6) || 
            (arg1[1] + arg1[3] > D_801CC4EC.unk6) || 
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
    checkRECT("ClearImage", arg0);
    g_GPU->addque2(g_GPU->clr, arg0, 8, arg3 << 16 |  arg2 << 8 | arg1);
}

void func_801B9E04(s16* arg0, u8 arg1, u8 arg2, u8 arg3) {
    checkRECT("ClearImage2", arg0);
    g_GPU->addque2(g_GPU->clr, arg0, 8, 0x80000000 | arg3 << 16 |  arg2 << 8 | arg1);
}

void func_801B9E9C(s16* arg0, s32 arg1) { 
    checkRECT("LoadImage", arg0);
    g_GPU->addque2(g_GPU->dws, arg0, 8, arg1);
}

void func_801B9EFC(s16* arg0, s32 arg1) { 
    checkRECT(&D_801B4A78, arg0); // Can't pull this into rodata yet; used by func_801BC504.
    g_GPU->addque2(g_GPU->drs, arg0, 8, arg1);
}

s32 MoveImage(Rectangle* arg0, s32 arg1, s32 arg2) { 
    gpu* temp_gpu;
    s32* thing2;

    checkRECT(&D_801B4A84, arg0); //"MoveImage"
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

    if (D_801CC4EC.unk2 >= 2) { 
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
    
    if (D_801CC4EC.unk2 >= 2) {
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

#ifdef NON_MATCHING

// Nonmatching due to args on addque2.
extern s8 D_801B4AC0;

void DrawOTag(OT_TYPE p) {
    if (D_801CC4EC.unk2 >= 2) {
        GPU_printf(&D_801B4AC0, p); //"DrawOTag(%08x)...\n"
    }
    g_GPU->addque2(g_GPU->cwc, p, 0, 0);
}
#else
INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", func_801BA1E4);
#endif

extern s8 D_801B4AD4;

DRAWENV* PutDrawEnv(DRAWENV* env) {
    if (D_801CC4EC.unk2 >= 2) {
        GPU_printf(&D_801B4AD4, env); //"PutDrawEnv(%08x)...\n"
    }
    func_801BAD10(&env->dr_env, env);
    env->dr_env.tag |= 0xFFFFFF;
    g_GPU->addque2(g_GPU->cwc, &env->dr_env, 0x40, 0);
    func_801C2704(&D_801CC4EC.unk10, env, 0x5C);
    return env;
}

extern s8 D_801B4AEC;

void DrawOTagEnv(s32 arg0, DRAWENV* env) {

    if (D_801CC4EC.unk2 >= 2) {
        GPU_printf(&D_801B4AEC, arg0, env); //"DrawOTagEnv(%08x,&08x)...\n"
    }
    func_801BAD10(&env->dr_env, env);
    env->dr_env.tag = (s32) ((env->dr_env.tag & 0xFF000000) | (arg0 & 0xFFFFFF));
    g_GPU->addque2(g_GPU->cwc, &env->dr_env, 0x40, 0);
    func_801C2704(&D_801CC4EC.unk10, env, 0x5C);
}

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

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _status);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _otc);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _clr);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _dws);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _drs);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _ctl);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _getctl);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _cwb);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _cwc);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _param);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _addque);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _addque2);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _exeque);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _reset);

INCLUDE_ASM("asm/outroe/nonmatchings/1A7588", _sync);

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
