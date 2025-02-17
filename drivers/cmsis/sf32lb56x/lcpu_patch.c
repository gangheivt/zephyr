#include <stdint.h>
#include <string.h>
#include "bf0_hal.h"
#include "mem_map.h"
#include "register.h"
#include "bf0_hal_patch.h"
#ifdef HAL_LCPU_PATCH_MODULE
const unsigned int g_lcpu_patch_list[] =
{
    0x50544348, 0x000000A8, 0x0004D8A8, 0xBCAAF3C9,
    0x00011864, 0xB4D2F005, 0x00023504, 0x21011A40,
    0x00054FC8, 0xB922F3C2, 0x0001D0A4, 0xB8B6F3FA,
    0x000274C8, 0xF8842102, 0x0001801C, 0xB904F3FF,
    0x0004770C, 0xBD8EF3CF, 0x00013F7C, 0xB158F003,
    0x00054F2C, 0xBF00BD7C, 0x00054F70, 0x81FCE8BD,
    0x00055EAC, 0x01F4012C, 0x0005CEF8, 0x087808A0,
    0x00007708, 0xB594F00F, 0x000055E4, 0xB627F011,
    0x00043DE0, 0x68330000, 0x00018C14, 0xBB11F3FE,
    0x00046534, 0x2C061D84, 0x00005FB0, 0xB145F011,
    0x00031360, 0x49C3E00B, 0x00024210, 0xE00A2600,
};

const unsigned int g_lcpu_patch_bin[] =
{
    0xF0004801, 0xBF00B8B7, 0x204147E8, 0xB8B7F000,
    0xB8BAF000, 0xB8BDF000, 0x68014802, 0x0101F041,
    0x47706001, 0x50000010, 0xB8B8F000, 0xB8BBF000,
    0xB8BEF000, 0xF0004770, 0xF000B8C0, 0xB580B8C3,
    0xF8C5F000, 0x0000BD80, 0x4A19B5BF, 0x4021F852,
    0xF894B35C, 0x1A0910B6, 0x0103F001, 0x6860180D,
    0x1B401A29, 0x4170F021, 0x4070F020, 0x6F00F1B1,
    0x4241BF88, 0xDB182903, 0xF43EA801, 0x9801FF69,
    0x30014A0C, 0xF0211B41, 0x42914170, 0x4068D807,
    0xD1060100, 0xF8BD8920, 0x42881008, 0x2001D901,
    0x4805E004, 0x31016801, 0x20006001, 0xBDB0B004,
    0x20414798, 0x07FFFFFE, 0x2041403C, 0x43F8E92D,
    0x8078F8DF, 0xEB004689, 0x46050140, 0xF8B84F1C,
    0x014C0026, 0x1241EB00, 0x8856443A, 0x5F80F5B6,
    0x4818D307, 0xF240A118, 0xF43D728F, 0xF8B8FE0D,
    0x19E10026, 0x42E1F240, 0x49175A08, 0x1025F851,
    0x42916F09, 0xEA40D813, 0xEBA04006, 0xF0210109,
    0xF1B14170, 0xD90A6F00, 0x0000EBA9, 0x4070F020,
    0x480FB128, 0x9000F8C0, 0xE8BD2001, 0x480B83F8,
    0xF8802114, 0x2000129B, 0x83F8E8BD, 0x204157AC,
    0x20418052, 0x1C0079A0, 0x5F676572, 0x625F6D65,
    0x73635F74, 0x0000682E, 0x20414798, 0x204167D8,
    0x20414044, 0x21FA4802, 0x129BF880, 0x47702001,
    0x204167D8, 0x4CC5F246, 0x4C00F6C1, 0xF2444760,
    0xF6C14C15, 0x47604C00, 0x3CB9F646, 0x4C00F6C1,
    0xF6444760, 0xF6C11C81, 0x47604C00, 0x6CA5F244,
    0x4C00F6C1, 0xF6454760, 0xF6C11CF5, 0x47604C00,
    0x4CD1F244, 0x4C00F6C1, 0xF2444760, 0xF6C11C59,
    0x47604C00, 0x7CA5F244, 0x4C00F6C1, 0xF2444760,
    0xF6C11CD5, 0x47604C00,
};
void lcpu_patch_install()
{
#ifdef SOC_BF0_HCPU
    memset((void *)(LCPU_PATCH_RAM_START_ADDR_S), 0, LCPU_PATCH_RAM_SIZE);

    memcpy((void *)(LCPU_PATCH_RAM_EXTRA_START_ADDR_S), g_lcpu_patch_bin, sizeof(g_lcpu_patch_bin));

#else
    memset((void *)(LCPU_PATCH_RAM_START_ADDR), 0, LCPU_PATCH_RAM_SIZE);
    memcpy((void *)(LCPU_PATCH_RAM_EXTRA_START_ADDR), g_lcpu_patch_bin, sizeof(g_lcpu_patch_bin));

#endif
    memcpy((void *)(LCPU_PATCH_RECORD_ADDR), g_lcpu_patch_list, sizeof(g_lcpu_patch_list));
    HAL_PATCH_install();
}

#endif
