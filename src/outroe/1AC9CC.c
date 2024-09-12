#include "outroe.h"

// Defines the syscall stub for various functions
#define BIOS_FUNCTION(name, section, id)                                       \
    __asm__(                                                                   \
        ".pushsection .text\n"                                                 \
        "\t.align\t2\n"                                                        \
        "\t.globl\t" #name "\n"                                                \
        "\t.ent\t" #name "\n"                                                  \
        "" #name " :\n"                                                        \
        ".set noat\n"                                                          \
        ".set noreorder\n"                                                     \
        "\n"                                                                   \
        "glabel " #name "\n"                                                   \
        "\taddiu  $t2, $zero, " #section "\n"                                  \
        "\tjr     $t2\n"                                                       \
        "\t addiu $t1, $zero, " #id "\n"                                       \
        "\tnop\n"                                                              \
        ".size " #name ", . - " #name "\n"                                     \
        "\t.set reorder\n"                                                     \
        "\t.set at\n"                                                          \
        "\t.end\t" #name "\n"                                                  \
        ".popsection");

#define BIOS_C_FUNCTION(name, id) BIOS_FUNCTION(name, 0xC0, id)


INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BC9CC);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", SetGeomOffset);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", SetGeomScreen);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCA84);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCB30);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", FlushCache);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCB74);

extern volatile s32 D_801CD78C;

void v_wait(s32 arg0, s32 arg1) {
    volatile s32 sp10 = arg1 << 15;
    while (D_801CD78C < arg0) {
        if (--sp10 == -1) {
            puts("VSync: timeout\n");
            ChangeClearPAD(0);
            ChangeClearRCnt(3, 0);
            return;
        }
    }
}

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", ChangeClearPAD);

BIOS_C_FUNCTION(ChangeClearRCnt, 0xA);
 
void func_801BCDA4(void) {
    g_GPUCallbacks->ResetCallback();
} 

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCDD4);

void func_801BCE04(void) {
    g_GPUCallbacks->DMACallback();
}
INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCE34);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCE68);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCE98);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCEC8);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCEF8);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCF08);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCF20);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BCF38);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BD010);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BD1E0);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BD328);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BD3C8);

INCLUDE_ASM("asm/outroe/nonmatchings/1AC9CC", func_801BD440);
