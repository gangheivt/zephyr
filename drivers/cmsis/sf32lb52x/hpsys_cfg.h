#ifndef __HPSYS_CFG_H
#define __HPSYS_CFG_H

typedef struct
{
    __IO uint32_t BMR;
    __IO uint32_t IDR;
    __IO uint32_t SWCR;
    __IO uint32_t SCR;
    __IO uint32_t SYSCR;
    __IO uint32_t RTC_TR;
    __IO uint32_t RTC_DR;
    __IO uint32_t ULPMCR;
    __IO uint32_t DBGR;
    __IO uint32_t MDBGR;
    __IO uint32_t BISTCR;
    __IO uint32_t BISTR;
    __IO uint32_t ROMCR0;
    __IO uint32_t ROMCR1;
    __IO uint32_t ROMCR2;
    __IO uint32_t LPIRQ;
    __IO uint32_t USBCR;
    __IO uint32_t SYS_RSVD;
    __IO uint32_t I2C1_PINR;
    __IO uint32_t I2C2_PINR;
    __IO uint32_t I2C3_PINR;
    __IO uint32_t I2C4_PINR;
    __IO uint32_t USART1_PINR;
    __IO uint32_t USART2_PINR;
    __IO uint32_t USART3_PINR;
    __IO uint32_t GPTIM1_PINR;
    __IO uint32_t GPTIM2_PINR;
    __IO uint32_t ETR_PINR;
    __IO uint32_t LPTIM1_PINR;
    __IO uint32_t LPTIM2_PINR;
    __IO uint32_t ATIM1_PINR1;
    __IO uint32_t ATIM1_PINR2;
    __IO uint32_t ATIM1_PINR3;
    __IO uint32_t PTA_PINR;
    __IO uint32_t ANAU_CR;
    __IO uint32_t ANAU_RSVD;
    __IO uint32_t ANATR;
    __IO uint32_t CAU2_CR;
    __IO uint32_t CAU2_RSVD;
} HPSYS_CFG_TypeDef;

/* starting from I2C1_PINR */
#define HPSYS_CFG_PINR_OFFSET        (18)
#define HPSYS_CFG_PINR_SIZE          (15)


/***************** Bit definition for HPSYS_CFG_BMR register ******************/
#define HPSYS_CFG_BMR_BOOT_MODE_Pos     (0U)
#define HPSYS_CFG_BMR_BOOT_MODE_Msk     (0x1UL << HPSYS_CFG_BMR_BOOT_MODE_Pos)
#define HPSYS_CFG_BMR_BOOT_MODE         HPSYS_CFG_BMR_BOOT_MODE_Msk

/***************** Bit definition for HPSYS_CFG_IDR register ******************/
#define HPSYS_CFG_IDR_REVID_Pos         (0U)
#define HPSYS_CFG_IDR_REVID_Msk         (0xFFUL << HPSYS_CFG_IDR_REVID_Pos)
#define HPSYS_CFG_IDR_REVID             HPSYS_CFG_IDR_REVID_Msk
#define HPSYS_CFG_IDR_PID_Pos           (8U)
#define HPSYS_CFG_IDR_PID_Msk           (0xFFUL << HPSYS_CFG_IDR_PID_Pos)
#define HPSYS_CFG_IDR_PID               HPSYS_CFG_IDR_PID_Msk
#define HPSYS_CFG_IDR_CID_Pos           (16U)
#define HPSYS_CFG_IDR_CID_Msk           (0xFFUL << HPSYS_CFG_IDR_CID_Pos)
#define HPSYS_CFG_IDR_CID               HPSYS_CFG_IDR_CID_Msk
#define HPSYS_CFG_IDR_SID_Pos           (24U)
#define HPSYS_CFG_IDR_SID_Msk           (0xFFUL << HPSYS_CFG_IDR_SID_Pos)
#define HPSYS_CFG_IDR_SID               HPSYS_CFG_IDR_SID_Msk

/***************** Bit definition for HPSYS_CFG_SWCR register *****************/
#define HPSYS_CFG_SWCR_SWSEL_Pos        (0U)
#define HPSYS_CFG_SWCR_SWSEL_Msk        (0x1UL << HPSYS_CFG_SWCR_SWSEL_Pos)
#define HPSYS_CFG_SWCR_SWSEL            HPSYS_CFG_SWCR_SWSEL_Msk

/***************** Bit definition for HPSYS_CFG_SCR register ******************/
#define HPSYS_CFG_SCR_FKEY_MODE_Pos     (0U)
#define HPSYS_CFG_SCR_FKEY_MODE_Msk     (0x1UL << HPSYS_CFG_SCR_FKEY_MODE_Pos)
#define HPSYS_CFG_SCR_FKEY_MODE         HPSYS_CFG_SCR_FKEY_MODE_Msk

/**************** Bit definition for HPSYS_CFG_SYSCR register *****************/
#define HPSYS_CFG_SYSCR_WDT1_REBOOT_Pos  (0U)
#define HPSYS_CFG_SYSCR_WDT1_REBOOT_Msk  (0x1UL << HPSYS_CFG_SYSCR_WDT1_REBOOT_Pos)
#define HPSYS_CFG_SYSCR_WDT1_REBOOT     HPSYS_CFG_SYSCR_WDT1_REBOOT_Msk
#define HPSYS_CFG_SYSCR_SDNAND_Pos      (1U)
#define HPSYS_CFG_SYSCR_SDNAND_Msk      (0x1UL << HPSYS_CFG_SYSCR_SDNAND_Pos)
#define HPSYS_CFG_SYSCR_SDNAND          HPSYS_CFG_SYSCR_SDNAND_Msk
#define HPSYS_CFG_SYSCR_LDO_VSEL_Pos    (2U)
#define HPSYS_CFG_SYSCR_LDO_VSEL_Msk    (0x1UL << HPSYS_CFG_SYSCR_LDO_VSEL_Pos)
#define HPSYS_CFG_SYSCR_LDO_VSEL        HPSYS_CFG_SYSCR_LDO_VSEL_Msk

/**************** Bit definition for HPSYS_CFG_RTC_TR register ****************/
#define HPSYS_CFG_RTC_TR_SS_Pos         (0U)
#define HPSYS_CFG_RTC_TR_SS_Msk         (0x3FFUL << HPSYS_CFG_RTC_TR_SS_Pos)
#define HPSYS_CFG_RTC_TR_SS             HPSYS_CFG_RTC_TR_SS_Msk
#define HPSYS_CFG_RTC_TR_SU_Pos         (11U)
#define HPSYS_CFG_RTC_TR_SU_Msk         (0xFUL << HPSYS_CFG_RTC_TR_SU_Pos)
#define HPSYS_CFG_RTC_TR_SU             HPSYS_CFG_RTC_TR_SU_Msk
#define HPSYS_CFG_RTC_TR_ST_Pos         (15U)
#define HPSYS_CFG_RTC_TR_ST_Msk         (0x7UL << HPSYS_CFG_RTC_TR_ST_Pos)
#define HPSYS_CFG_RTC_TR_ST             HPSYS_CFG_RTC_TR_ST_Msk
#define HPSYS_CFG_RTC_TR_MNU_Pos        (18U)
#define HPSYS_CFG_RTC_TR_MNU_Msk        (0xFUL << HPSYS_CFG_RTC_TR_MNU_Pos)
#define HPSYS_CFG_RTC_TR_MNU            HPSYS_CFG_RTC_TR_MNU_Msk
#define HPSYS_CFG_RTC_TR_MNT_Pos        (22U)
#define HPSYS_CFG_RTC_TR_MNT_Msk        (0x7UL << HPSYS_CFG_RTC_TR_MNT_Pos)
#define HPSYS_CFG_RTC_TR_MNT            HPSYS_CFG_RTC_TR_MNT_Msk
#define HPSYS_CFG_RTC_TR_HU_Pos         (25U)
#define HPSYS_CFG_RTC_TR_HU_Msk         (0xFUL << HPSYS_CFG_RTC_TR_HU_Pos)
#define HPSYS_CFG_RTC_TR_HU             HPSYS_CFG_RTC_TR_HU_Msk
#define HPSYS_CFG_RTC_TR_HT_Pos         (29U)
#define HPSYS_CFG_RTC_TR_HT_Msk         (0x3UL << HPSYS_CFG_RTC_TR_HT_Pos)
#define HPSYS_CFG_RTC_TR_HT             HPSYS_CFG_RTC_TR_HT_Msk
#define HPSYS_CFG_RTC_TR_PM_Pos         (31U)
#define HPSYS_CFG_RTC_TR_PM_Msk         (0x1UL << HPSYS_CFG_RTC_TR_PM_Pos)
#define HPSYS_CFG_RTC_TR_PM             HPSYS_CFG_RTC_TR_PM_Msk

/**************** Bit definition for HPSYS_CFG_RTC_DR register ****************/
#define HPSYS_CFG_RTC_DR_DU_Pos         (0U)
#define HPSYS_CFG_RTC_DR_DU_Msk         (0xFUL << HPSYS_CFG_RTC_DR_DU_Pos)
#define HPSYS_CFG_RTC_DR_DU             HPSYS_CFG_RTC_DR_DU_Msk
#define HPSYS_CFG_RTC_DR_DT_Pos         (4U)
#define HPSYS_CFG_RTC_DR_DT_Msk         (0x3UL << HPSYS_CFG_RTC_DR_DT_Pos)
#define HPSYS_CFG_RTC_DR_DT             HPSYS_CFG_RTC_DR_DT_Msk
#define HPSYS_CFG_RTC_DR_MU_Pos         (8U)
#define HPSYS_CFG_RTC_DR_MU_Msk         (0xFUL << HPSYS_CFG_RTC_DR_MU_Pos)
#define HPSYS_CFG_RTC_DR_MU             HPSYS_CFG_RTC_DR_MU_Msk
#define HPSYS_CFG_RTC_DR_MT_Pos         (12U)
#define HPSYS_CFG_RTC_DR_MT_Msk         (0x1UL << HPSYS_CFG_RTC_DR_MT_Pos)
#define HPSYS_CFG_RTC_DR_MT             HPSYS_CFG_RTC_DR_MT_Msk
#define HPSYS_CFG_RTC_DR_WD_Pos         (13U)
#define HPSYS_CFG_RTC_DR_WD_Msk         (0x7UL << HPSYS_CFG_RTC_DR_WD_Pos)
#define HPSYS_CFG_RTC_DR_WD             HPSYS_CFG_RTC_DR_WD_Msk
#define HPSYS_CFG_RTC_DR_YU_Pos         (16U)
#define HPSYS_CFG_RTC_DR_YU_Msk         (0xFUL << HPSYS_CFG_RTC_DR_YU_Pos)
#define HPSYS_CFG_RTC_DR_YU             HPSYS_CFG_RTC_DR_YU_Msk
#define HPSYS_CFG_RTC_DR_YT_Pos         (20U)
#define HPSYS_CFG_RTC_DR_YT_Msk         (0xFUL << HPSYS_CFG_RTC_DR_YT_Pos)
#define HPSYS_CFG_RTC_DR_YT             HPSYS_CFG_RTC_DR_YT_Msk
#define HPSYS_CFG_RTC_DR_CB_Pos         (24U)
#define HPSYS_CFG_RTC_DR_CB_Msk         (0x1UL << HPSYS_CFG_RTC_DR_CB_Pos)
#define HPSYS_CFG_RTC_DR_CB             HPSYS_CFG_RTC_DR_CB_Msk
#define HPSYS_CFG_RTC_DR_ERR_Pos        (31U)
#define HPSYS_CFG_RTC_DR_ERR_Msk        (0x1UL << HPSYS_CFG_RTC_DR_ERR_Pos)
#define HPSYS_CFG_RTC_DR_ERR            HPSYS_CFG_RTC_DR_ERR_Msk

/**************** Bit definition for HPSYS_CFG_ULPMCR register ****************/
#define HPSYS_CFG_ULPMCR_RAM_RM_Pos     (0U)
#define HPSYS_CFG_ULPMCR_RAM_RM_Msk     (0x3UL << HPSYS_CFG_ULPMCR_RAM_RM_Pos)
#define HPSYS_CFG_ULPMCR_RAM_RM         HPSYS_CFG_ULPMCR_RAM_RM_Msk
#define HPSYS_CFG_ULPMCR_RAM_RME_Pos    (4U)
#define HPSYS_CFG_ULPMCR_RAM_RME_Msk    (0x1UL << HPSYS_CFG_ULPMCR_RAM_RME_Pos)
#define HPSYS_CFG_ULPMCR_RAM_RME        HPSYS_CFG_ULPMCR_RAM_RME_Msk
#define HPSYS_CFG_ULPMCR_RAM_RA_Pos     (5U)
#define HPSYS_CFG_ULPMCR_RAM_RA_Msk     (0x3UL << HPSYS_CFG_ULPMCR_RAM_RA_Pos)
#define HPSYS_CFG_ULPMCR_RAM_RA         HPSYS_CFG_ULPMCR_RAM_RA_Msk
#define HPSYS_CFG_ULPMCR_RAM_WA_Pos     (7U)
#define HPSYS_CFG_ULPMCR_RAM_WA_Msk     (0x7UL << HPSYS_CFG_ULPMCR_RAM_WA_Pos)
#define HPSYS_CFG_ULPMCR_RAM_WA         HPSYS_CFG_ULPMCR_RAM_WA_Msk
#define HPSYS_CFG_ULPMCR_RAM_WPULSE_Pos  (10U)
#define HPSYS_CFG_ULPMCR_RAM_WPULSE_Msk  (0x7UL << HPSYS_CFG_ULPMCR_RAM_WPULSE_Pos)
#define HPSYS_CFG_ULPMCR_RAM_WPULSE     HPSYS_CFG_ULPMCR_RAM_WPULSE_Msk
#define HPSYS_CFG_ULPMCR_ROM_RM_Pos     (16U)
#define HPSYS_CFG_ULPMCR_ROM_RM_Msk     (0x3UL << HPSYS_CFG_ULPMCR_ROM_RM_Pos)
#define HPSYS_CFG_ULPMCR_ROM_RM         HPSYS_CFG_ULPMCR_ROM_RM_Msk
#define HPSYS_CFG_ULPMCR_ROM_RME_Pos    (20U)
#define HPSYS_CFG_ULPMCR_ROM_RME_Msk    (0x1UL << HPSYS_CFG_ULPMCR_ROM_RME_Pos)
#define HPSYS_CFG_ULPMCR_ROM_RME        HPSYS_CFG_ULPMCR_ROM_RME_Msk
#define HPSYS_CFG_ULPMCR_ROM_DIS_Pos    (30U)
#define HPSYS_CFG_ULPMCR_ROM_DIS_Msk    (0x1UL << HPSYS_CFG_ULPMCR_ROM_DIS_Pos)
#define HPSYS_CFG_ULPMCR_ROM_DIS        HPSYS_CFG_ULPMCR_ROM_DIS_Msk

/***************** Bit definition for HPSYS_CFG_DBGR register *****************/
#define HPSYS_CFG_DBGR_HP2LP_NMI_Pos    (28U)
#define HPSYS_CFG_DBGR_HP2LP_NMI_Msk    (0x1UL << HPSYS_CFG_DBGR_HP2LP_NMI_Pos)
#define HPSYS_CFG_DBGR_HP2LP_NMI        HPSYS_CFG_DBGR_HP2LP_NMI_Msk
#define HPSYS_CFG_DBGR_LP2HP_NMIE_Pos   (29U)
#define HPSYS_CFG_DBGR_LP2HP_NMIE_Msk   (0x1UL << HPSYS_CFG_DBGR_LP2HP_NMIE_Pos)
#define HPSYS_CFG_DBGR_LP2HP_NMIE       HPSYS_CFG_DBGR_LP2HP_NMIE_Msk
#define HPSYS_CFG_DBGR_LP2HP_NMIF_Pos   (30U)
#define HPSYS_CFG_DBGR_LP2HP_NMIF_Msk   (0x1UL << HPSYS_CFG_DBGR_LP2HP_NMIF_Pos)
#define HPSYS_CFG_DBGR_LP2HP_NMIF       HPSYS_CFG_DBGR_LP2HP_NMIF_Msk
#define HPSYS_CFG_DBGR_SWAP_Pos         (31U)
#define HPSYS_CFG_DBGR_SWAP_Msk         (0x1UL << HPSYS_CFG_DBGR_SWAP_Pos)
#define HPSYS_CFG_DBGR_SWAP             HPSYS_CFG_DBGR_SWAP_Msk

/**************** Bit definition for HPSYS_CFG_MDBGR register *****************/
#define HPSYS_CFG_MDBGR_LS_RAM0_Pos     (0U)
#define HPSYS_CFG_MDBGR_LS_RAM0_Msk     (0x1UL << HPSYS_CFG_MDBGR_LS_RAM0_Pos)
#define HPSYS_CFG_MDBGR_LS_RAM0         HPSYS_CFG_MDBGR_LS_RAM0_Msk
#define HPSYS_CFG_MDBGR_LS_RAM1_Pos     (1U)
#define HPSYS_CFG_MDBGR_LS_RAM1_Msk     (0x1UL << HPSYS_CFG_MDBGR_LS_RAM1_Pos)
#define HPSYS_CFG_MDBGR_LS_RAM1         HPSYS_CFG_MDBGR_LS_RAM1_Msk
#define HPSYS_CFG_MDBGR_LS_RAM2_Pos     (2U)
#define HPSYS_CFG_MDBGR_LS_RAM2_Msk     (0x1UL << HPSYS_CFG_MDBGR_LS_RAM2_Pos)
#define HPSYS_CFG_MDBGR_LS_RAM2         HPSYS_CFG_MDBGR_LS_RAM2_Msk
#define HPSYS_CFG_MDBGR_LS_ROM_Pos      (3U)
#define HPSYS_CFG_MDBGR_LS_ROM_Msk      (0x1UL << HPSYS_CFG_MDBGR_LS_ROM_Pos)
#define HPSYS_CFG_MDBGR_LS_ROM          HPSYS_CFG_MDBGR_LS_ROM_Msk
#define HPSYS_CFG_MDBGR_PD_ROM_Pos      (4U)
#define HPSYS_CFG_MDBGR_PD_ROM_Msk      (0x1UL << HPSYS_CFG_MDBGR_PD_ROM_Pos)
#define HPSYS_CFG_MDBGR_PD_ROM          HPSYS_CFG_MDBGR_PD_ROM_Msk

/**************** Bit definition for HPSYS_CFG_BISTCR register ****************/
#define HPSYS_CFG_BISTCR_BIST_MODE_Pos  (0U)
#define HPSYS_CFG_BISTCR_BIST_MODE_Msk  (0x1UL << HPSYS_CFG_BISTCR_BIST_MODE_Pos)
#define HPSYS_CFG_BISTCR_BIST_MODE      HPSYS_CFG_BISTCR_BIST_MODE_Msk
#define HPSYS_CFG_BISTCR_BIST_DONE_Pos  (1U)
#define HPSYS_CFG_BISTCR_BIST_DONE_Msk  (0x1UL << HPSYS_CFG_BISTCR_BIST_DONE_Pos)
#define HPSYS_CFG_BISTCR_BIST_DONE      HPSYS_CFG_BISTCR_BIST_DONE_Msk
#define HPSYS_CFG_BISTCR_BIST_FAIL_Pos  (2U)
#define HPSYS_CFG_BISTCR_BIST_FAIL_Msk  (0x1UL << HPSYS_CFG_BISTCR_BIST_FAIL_Pos)
#define HPSYS_CFG_BISTCR_BIST_FAIL      HPSYS_CFG_BISTCR_BIST_FAIL_Msk

/**************** Bit definition for HPSYS_CFG_BISTR register *****************/
#define HPSYS_CFG_BISTR_BIST_FAIL_ROM_Pos  (0U)
#define HPSYS_CFG_BISTR_BIST_FAIL_ROM_Msk  (0x1UL << HPSYS_CFG_BISTR_BIST_FAIL_ROM_Pos)
#define HPSYS_CFG_BISTR_BIST_FAIL_ROM   HPSYS_CFG_BISTR_BIST_FAIL_ROM_Msk
#define HPSYS_CFG_BISTR_BIST_FAIL_RAM_Pos  (1U)
#define HPSYS_CFG_BISTR_BIST_FAIL_RAM_Msk  (0x7UL << HPSYS_CFG_BISTR_BIST_FAIL_RAM_Pos)
#define HPSYS_CFG_BISTR_BIST_FAIL_RAM   HPSYS_CFG_BISTR_BIST_FAIL_RAM_Msk
#define HPSYS_CFG_BISTR_BIST_FAIL_HCPU_Pos  (4U)
#define HPSYS_CFG_BISTR_BIST_FAIL_HCPU_Msk  (0x1UL << HPSYS_CFG_BISTR_BIST_FAIL_HCPU_Pos)
#define HPSYS_CFG_BISTR_BIST_FAIL_HCPU  HPSYS_CFG_BISTR_BIST_FAIL_HCPU_Msk
#define HPSYS_CFG_BISTR_BIST_FAIL_EPIC_Pos  (5U)
#define HPSYS_CFG_BISTR_BIST_FAIL_EPIC_Msk  (0x1UL << HPSYS_CFG_BISTR_BIST_FAIL_EPIC_Pos)
#define HPSYS_CFG_BISTR_BIST_FAIL_EPIC  HPSYS_CFG_BISTR_BIST_FAIL_EPIC_Msk
#define HPSYS_CFG_BISTR_BIST_FAIL_EZIP_Pos  (6U)
#define HPSYS_CFG_BISTR_BIST_FAIL_EZIP_Msk  (0x1UL << HPSYS_CFG_BISTR_BIST_FAIL_EZIP_Pos)
#define HPSYS_CFG_BISTR_BIST_FAIL_EZIP  HPSYS_CFG_BISTR_BIST_FAIL_EZIP_Msk
#define HPSYS_CFG_BISTR_BIST_FAIL_SDMMC1_Pos  (7U)
#define HPSYS_CFG_BISTR_BIST_FAIL_SDMMC1_Msk  (0x1UL << HPSYS_CFG_BISTR_BIST_FAIL_SDMMC1_Pos)
#define HPSYS_CFG_BISTR_BIST_FAIL_SDMMC1  HPSYS_CFG_BISTR_BIST_FAIL_SDMMC1_Msk
#define HPSYS_CFG_BISTR_BIST_FAIL_USBC_Pos  (8U)
#define HPSYS_CFG_BISTR_BIST_FAIL_USBC_Msk  (0x1UL << HPSYS_CFG_BISTR_BIST_FAIL_USBC_Pos)
#define HPSYS_CFG_BISTR_BIST_FAIL_USBC  HPSYS_CFG_BISTR_BIST_FAIL_USBC_Msk
#define HPSYS_CFG_BISTR_BIST_FAIL_AUD_Pos  (9U)
#define HPSYS_CFG_BISTR_BIST_FAIL_AUD_Msk  (0x1UL << HPSYS_CFG_BISTR_BIST_FAIL_AUD_Pos)
#define HPSYS_CFG_BISTR_BIST_FAIL_AUD   HPSYS_CFG_BISTR_BIST_FAIL_AUD_Msk

/**************** Bit definition for HPSYS_CFG_ROMCR0 register ****************/
#define HPSYS_CFG_ROMCR0_CMP_Pos        (0U)
#define HPSYS_CFG_ROMCR0_CMP_Msk        (0xFFFFFFFFUL << HPSYS_CFG_ROMCR0_CMP_Pos)
#define HPSYS_CFG_ROMCR0_CMP            HPSYS_CFG_ROMCR0_CMP_Msk

/**************** Bit definition for HPSYS_CFG_ROMCR1 register ****************/
#define HPSYS_CFG_ROMCR1_CMP_Pos        (0U)
#define HPSYS_CFG_ROMCR1_CMP_Msk        (0xFFFFFFFFUL << HPSYS_CFG_ROMCR1_CMP_Pos)
#define HPSYS_CFG_ROMCR1_CMP            HPSYS_CFG_ROMCR1_CMP_Msk

/**************** Bit definition for HPSYS_CFG_ROMCR2 register ****************/
#define HPSYS_CFG_ROMCR2_CMP_Pos        (0U)
#define HPSYS_CFG_ROMCR2_CMP_Msk        (0xFFFFFFFFUL << HPSYS_CFG_ROMCR2_CMP_Pos)
#define HPSYS_CFG_ROMCR2_CMP            HPSYS_CFG_ROMCR2_CMP_Msk

/**************** Bit definition for HPSYS_CFG_LPIRQ register *****************/
#define HPSYS_CFG_LPIRQ_SEL0_Pos        (0U)
#define HPSYS_CFG_LPIRQ_SEL0_Msk        (0x3FUL << HPSYS_CFG_LPIRQ_SEL0_Pos)
#define HPSYS_CFG_LPIRQ_SEL0            HPSYS_CFG_LPIRQ_SEL0_Msk
#define HPSYS_CFG_LPIRQ_IF0_Pos         (7U)
#define HPSYS_CFG_LPIRQ_IF0_Msk         (0x1UL << HPSYS_CFG_LPIRQ_IF0_Pos)
#define HPSYS_CFG_LPIRQ_IF0             HPSYS_CFG_LPIRQ_IF0_Msk
#define HPSYS_CFG_LPIRQ_SEL1_Pos        (8U)
#define HPSYS_CFG_LPIRQ_SEL1_Msk        (0x3FUL << HPSYS_CFG_LPIRQ_SEL1_Pos)
#define HPSYS_CFG_LPIRQ_SEL1            HPSYS_CFG_LPIRQ_SEL1_Msk
#define HPSYS_CFG_LPIRQ_IF1_Pos         (15U)
#define HPSYS_CFG_LPIRQ_IF1_Msk         (0x1UL << HPSYS_CFG_LPIRQ_IF1_Pos)
#define HPSYS_CFG_LPIRQ_IF1             HPSYS_CFG_LPIRQ_IF1_Msk

/**************** Bit definition for HPSYS_CFG_USBCR register *****************/
#define HPSYS_CFG_USBCR_USB_EN_Pos      (0U)
#define HPSYS_CFG_USBCR_USB_EN_Msk      (0x1UL << HPSYS_CFG_USBCR_USB_EN_Pos)
#define HPSYS_CFG_USBCR_USB_EN          HPSYS_CFG_USBCR_USB_EN_Msk
#define HPSYS_CFG_USBCR_LDO_VSEL_Pos    (1U)
#define HPSYS_CFG_USBCR_LDO_VSEL_Msk    (0x7UL << HPSYS_CFG_USBCR_LDO_VSEL_Pos)
#define HPSYS_CFG_USBCR_LDO_VSEL        HPSYS_CFG_USBCR_LDO_VSEL_Msk
#define HPSYS_CFG_USBCR_LDO_LP_EN_Pos   (4U)
#define HPSYS_CFG_USBCR_LDO_LP_EN_Msk   (0x1UL << HPSYS_CFG_USBCR_LDO_LP_EN_Pos)
#define HPSYS_CFG_USBCR_LDO_LP_EN       HPSYS_CFG_USBCR_LDO_LP_EN_Msk
#define HPSYS_CFG_USBCR_DM_PD_Pos       (5U)
#define HPSYS_CFG_USBCR_DM_PD_Msk       (0x1UL << HPSYS_CFG_USBCR_DM_PD_Pos)
#define HPSYS_CFG_USBCR_DM_PD           HPSYS_CFG_USBCR_DM_PD_Msk
#define HPSYS_CFG_USBCR_DP_EN_Pos       (6U)
#define HPSYS_CFG_USBCR_DP_EN_Msk       (0x1UL << HPSYS_CFG_USBCR_DP_EN_Pos)
#define HPSYS_CFG_USBCR_DP_EN           HPSYS_CFG_USBCR_DP_EN_Msk
#define HPSYS_CFG_USBCR_TX_RTUNE_Pos    (8U)
#define HPSYS_CFG_USBCR_TX_RTUNE_Msk    (0x7UL << HPSYS_CFG_USBCR_TX_RTUNE_Pos)
#define HPSYS_CFG_USBCR_TX_RTUNE        HPSYS_CFG_USBCR_TX_RTUNE_Msk
#define HPSYS_CFG_USBCR_DC_TE_Pos       (12U)
#define HPSYS_CFG_USBCR_DC_TE_Msk       (0x1UL << HPSYS_CFG_USBCR_DC_TE_Pos)
#define HPSYS_CFG_USBCR_DC_TE           HPSYS_CFG_USBCR_DC_TE_Msk
#define HPSYS_CFG_USBCR_DC_TR_Pos       (13U)
#define HPSYS_CFG_USBCR_DC_TR_Msk       (0x7UL << HPSYS_CFG_USBCR_DC_TR_Pos)
#define HPSYS_CFG_USBCR_DC_TR           HPSYS_CFG_USBCR_DC_TR_Msk
#define HPSYS_CFG_USBCR_RSVD0_Pos       (16U)
#define HPSYS_CFG_USBCR_RSVD0_Msk       (0xFFUL << HPSYS_CFG_USBCR_RSVD0_Pos)
#define HPSYS_CFG_USBCR_RSVD0           HPSYS_CFG_USBCR_RSVD0_Msk
#define HPSYS_CFG_USBCR_RSVD1_Pos       (24U)
#define HPSYS_CFG_USBCR_RSVD1_Msk       (0xFFUL << HPSYS_CFG_USBCR_RSVD1_Pos)
#define HPSYS_CFG_USBCR_RSVD1           HPSYS_CFG_USBCR_RSVD1_Msk

/*************** Bit definition for HPSYS_CFG_SYS_RSVD register ***************/
#define HPSYS_CFG_SYS_RSVD_RESERVE0_Pos  (0U)
#define HPSYS_CFG_SYS_RSVD_RESERVE0_Msk  (0xFFUL << HPSYS_CFG_SYS_RSVD_RESERVE0_Pos)
#define HPSYS_CFG_SYS_RSVD_RESERVE0     HPSYS_CFG_SYS_RSVD_RESERVE0_Msk
#define HPSYS_CFG_SYS_RSVD_RESERVE1_Pos  (8U)
#define HPSYS_CFG_SYS_RSVD_RESERVE1_Msk  (0xFFUL << HPSYS_CFG_SYS_RSVD_RESERVE1_Pos)
#define HPSYS_CFG_SYS_RSVD_RESERVE1     HPSYS_CFG_SYS_RSVD_RESERVE1_Msk
#define HPSYS_CFG_SYS_RSVD_RESERVE2_Pos  (16U)
#define HPSYS_CFG_SYS_RSVD_RESERVE2_Msk  (0xFFUL << HPSYS_CFG_SYS_RSVD_RESERVE2_Pos)
#define HPSYS_CFG_SYS_RSVD_RESERVE2     HPSYS_CFG_SYS_RSVD_RESERVE2_Msk
#define HPSYS_CFG_SYS_RSVD_RESERVE3_Pos  (24U)
#define HPSYS_CFG_SYS_RSVD_RESERVE3_Msk  (0xFFUL << HPSYS_CFG_SYS_RSVD_RESERVE3_Pos)
#define HPSYS_CFG_SYS_RSVD_RESERVE3     HPSYS_CFG_SYS_RSVD_RESERVE3_Msk

/************** Bit definition for HPSYS_CFG_I2C1_PINR register ***************/
#define HPSYS_CFG_I2C1_PINR_SCL_PIN_Pos  (0U)
#define HPSYS_CFG_I2C1_PINR_SCL_PIN_Msk  (0x3FUL << HPSYS_CFG_I2C1_PINR_SCL_PIN_Pos)
#define HPSYS_CFG_I2C1_PINR_SCL_PIN     HPSYS_CFG_I2C1_PINR_SCL_PIN_Msk
#define HPSYS_CFG_I2C1_PINR_SDA_PIN_Pos  (8U)
#define HPSYS_CFG_I2C1_PINR_SDA_PIN_Msk  (0x3FUL << HPSYS_CFG_I2C1_PINR_SDA_PIN_Pos)
#define HPSYS_CFG_I2C1_PINR_SDA_PIN     HPSYS_CFG_I2C1_PINR_SDA_PIN_Msk

/************** Bit definition for HPSYS_CFG_I2C2_PINR register ***************/
#define HPSYS_CFG_I2C2_PINR_SCL_PIN_Pos  (0U)
#define HPSYS_CFG_I2C2_PINR_SCL_PIN_Msk  (0x3FUL << HPSYS_CFG_I2C2_PINR_SCL_PIN_Pos)
#define HPSYS_CFG_I2C2_PINR_SCL_PIN     HPSYS_CFG_I2C2_PINR_SCL_PIN_Msk
#define HPSYS_CFG_I2C2_PINR_SDA_PIN_Pos  (8U)
#define HPSYS_CFG_I2C2_PINR_SDA_PIN_Msk  (0x3FUL << HPSYS_CFG_I2C2_PINR_SDA_PIN_Pos)
#define HPSYS_CFG_I2C2_PINR_SDA_PIN     HPSYS_CFG_I2C2_PINR_SDA_PIN_Msk

/************** Bit definition for HPSYS_CFG_I2C3_PINR register ***************/
#define HPSYS_CFG_I2C3_PINR_SCL_PIN_Pos  (0U)
#define HPSYS_CFG_I2C3_PINR_SCL_PIN_Msk  (0x3FUL << HPSYS_CFG_I2C3_PINR_SCL_PIN_Pos)
#define HPSYS_CFG_I2C3_PINR_SCL_PIN     HPSYS_CFG_I2C3_PINR_SCL_PIN_Msk
#define HPSYS_CFG_I2C3_PINR_SDA_PIN_Pos  (8U)
#define HPSYS_CFG_I2C3_PINR_SDA_PIN_Msk  (0x3FUL << HPSYS_CFG_I2C3_PINR_SDA_PIN_Pos)
#define HPSYS_CFG_I2C3_PINR_SDA_PIN     HPSYS_CFG_I2C3_PINR_SDA_PIN_Msk

/************** Bit definition for HPSYS_CFG_I2C4_PINR register ***************/
#define HPSYS_CFG_I2C4_PINR_SCL_PIN_Pos  (0U)
#define HPSYS_CFG_I2C4_PINR_SCL_PIN_Msk  (0x3FUL << HPSYS_CFG_I2C4_PINR_SCL_PIN_Pos)
#define HPSYS_CFG_I2C4_PINR_SCL_PIN     HPSYS_CFG_I2C4_PINR_SCL_PIN_Msk
#define HPSYS_CFG_I2C4_PINR_SDA_PIN_Pos  (8U)
#define HPSYS_CFG_I2C4_PINR_SDA_PIN_Msk  (0x3FUL << HPSYS_CFG_I2C4_PINR_SDA_PIN_Pos)
#define HPSYS_CFG_I2C4_PINR_SDA_PIN     HPSYS_CFG_I2C4_PINR_SDA_PIN_Msk

/************* Bit definition for HPSYS_CFG_USART1_PINR register **************/
#define HPSYS_CFG_USART1_PINR_TXD_PIN_Pos  (0U)
#define HPSYS_CFG_USART1_PINR_TXD_PIN_Msk  (0x3FUL << HPSYS_CFG_USART1_PINR_TXD_PIN_Pos)
#define HPSYS_CFG_USART1_PINR_TXD_PIN   HPSYS_CFG_USART1_PINR_TXD_PIN_Msk
#define HPSYS_CFG_USART1_PINR_RXD_PIN_Pos  (8U)
#define HPSYS_CFG_USART1_PINR_RXD_PIN_Msk  (0x3FUL << HPSYS_CFG_USART1_PINR_RXD_PIN_Pos)
#define HPSYS_CFG_USART1_PINR_RXD_PIN   HPSYS_CFG_USART1_PINR_RXD_PIN_Msk
#define HPSYS_CFG_USART1_PINR_RTS_PIN_Pos  (16U)
#define HPSYS_CFG_USART1_PINR_RTS_PIN_Msk  (0x3FUL << HPSYS_CFG_USART1_PINR_RTS_PIN_Pos)
#define HPSYS_CFG_USART1_PINR_RTS_PIN   HPSYS_CFG_USART1_PINR_RTS_PIN_Msk
#define HPSYS_CFG_USART1_PINR_CTS_PIN_Pos  (24U)
#define HPSYS_CFG_USART1_PINR_CTS_PIN_Msk  (0x3FUL << HPSYS_CFG_USART1_PINR_CTS_PIN_Pos)
#define HPSYS_CFG_USART1_PINR_CTS_PIN   HPSYS_CFG_USART1_PINR_CTS_PIN_Msk

/************* Bit definition for HPSYS_CFG_USART2_PINR register **************/
#define HPSYS_CFG_USART2_PINR_TXD_PIN_Pos  (0U)
#define HPSYS_CFG_USART2_PINR_TXD_PIN_Msk  (0x3FUL << HPSYS_CFG_USART2_PINR_TXD_PIN_Pos)
#define HPSYS_CFG_USART2_PINR_TXD_PIN   HPSYS_CFG_USART2_PINR_TXD_PIN_Msk
#define HPSYS_CFG_USART2_PINR_RXD_PIN_Pos  (8U)
#define HPSYS_CFG_USART2_PINR_RXD_PIN_Msk  (0x3FUL << HPSYS_CFG_USART2_PINR_RXD_PIN_Pos)
#define HPSYS_CFG_USART2_PINR_RXD_PIN   HPSYS_CFG_USART2_PINR_RXD_PIN_Msk
#define HPSYS_CFG_USART2_PINR_RTS_PIN_Pos  (16U)
#define HPSYS_CFG_USART2_PINR_RTS_PIN_Msk  (0x3FUL << HPSYS_CFG_USART2_PINR_RTS_PIN_Pos)
#define HPSYS_CFG_USART2_PINR_RTS_PIN   HPSYS_CFG_USART2_PINR_RTS_PIN_Msk
#define HPSYS_CFG_USART2_PINR_CTS_PIN_Pos  (24U)
#define HPSYS_CFG_USART2_PINR_CTS_PIN_Msk  (0x3FUL << HPSYS_CFG_USART2_PINR_CTS_PIN_Pos)
#define HPSYS_CFG_USART2_PINR_CTS_PIN   HPSYS_CFG_USART2_PINR_CTS_PIN_Msk

/************* Bit definition for HPSYS_CFG_USART3_PINR register **************/
#define HPSYS_CFG_USART3_PINR_TXD_PIN_Pos  (0U)
#define HPSYS_CFG_USART3_PINR_TXD_PIN_Msk  (0x3FUL << HPSYS_CFG_USART3_PINR_TXD_PIN_Pos)
#define HPSYS_CFG_USART3_PINR_TXD_PIN   HPSYS_CFG_USART3_PINR_TXD_PIN_Msk
#define HPSYS_CFG_USART3_PINR_RXD_PIN_Pos  (8U)
#define HPSYS_CFG_USART3_PINR_RXD_PIN_Msk  (0x3FUL << HPSYS_CFG_USART3_PINR_RXD_PIN_Pos)
#define HPSYS_CFG_USART3_PINR_RXD_PIN   HPSYS_CFG_USART3_PINR_RXD_PIN_Msk
#define HPSYS_CFG_USART3_PINR_RTS_PIN_Pos  (16U)
#define HPSYS_CFG_USART3_PINR_RTS_PIN_Msk  (0x3FUL << HPSYS_CFG_USART3_PINR_RTS_PIN_Pos)
#define HPSYS_CFG_USART3_PINR_RTS_PIN   HPSYS_CFG_USART3_PINR_RTS_PIN_Msk
#define HPSYS_CFG_USART3_PINR_CTS_PIN_Pos  (24U)
#define HPSYS_CFG_USART3_PINR_CTS_PIN_Msk  (0x3FUL << HPSYS_CFG_USART3_PINR_CTS_PIN_Pos)
#define HPSYS_CFG_USART3_PINR_CTS_PIN   HPSYS_CFG_USART3_PINR_CTS_PIN_Msk

/************* Bit definition for HPSYS_CFG_GPTIM1_PINR register **************/
#define HPSYS_CFG_GPTIM1_PINR_CH1_PIN_Pos  (0U)
#define HPSYS_CFG_GPTIM1_PINR_CH1_PIN_Msk  (0x3FUL << HPSYS_CFG_GPTIM1_PINR_CH1_PIN_Pos)
#define HPSYS_CFG_GPTIM1_PINR_CH1_PIN   HPSYS_CFG_GPTIM1_PINR_CH1_PIN_Msk
#define HPSYS_CFG_GPTIM1_PINR_CH2_PIN_Pos  (8U)
#define HPSYS_CFG_GPTIM1_PINR_CH2_PIN_Msk  (0x3FUL << HPSYS_CFG_GPTIM1_PINR_CH2_PIN_Pos)
#define HPSYS_CFG_GPTIM1_PINR_CH2_PIN   HPSYS_CFG_GPTIM1_PINR_CH2_PIN_Msk
#define HPSYS_CFG_GPTIM1_PINR_CH3_PIN_Pos  (16U)
#define HPSYS_CFG_GPTIM1_PINR_CH3_PIN_Msk  (0x3FUL << HPSYS_CFG_GPTIM1_PINR_CH3_PIN_Pos)
#define HPSYS_CFG_GPTIM1_PINR_CH3_PIN   HPSYS_CFG_GPTIM1_PINR_CH3_PIN_Msk
#define HPSYS_CFG_GPTIM1_PINR_CH4_PIN_Pos  (24U)
#define HPSYS_CFG_GPTIM1_PINR_CH4_PIN_Msk  (0x3FUL << HPSYS_CFG_GPTIM1_PINR_CH4_PIN_Pos)
#define HPSYS_CFG_GPTIM1_PINR_CH4_PIN   HPSYS_CFG_GPTIM1_PINR_CH4_PIN_Msk

/************* Bit definition for HPSYS_CFG_GPTIM2_PINR register **************/
#define HPSYS_CFG_GPTIM2_PINR_CH1_PIN_Pos  (0U)
#define HPSYS_CFG_GPTIM2_PINR_CH1_PIN_Msk  (0x3FUL << HPSYS_CFG_GPTIM2_PINR_CH1_PIN_Pos)
#define HPSYS_CFG_GPTIM2_PINR_CH1_PIN   HPSYS_CFG_GPTIM2_PINR_CH1_PIN_Msk
#define HPSYS_CFG_GPTIM2_PINR_CH2_PIN_Pos  (8U)
#define HPSYS_CFG_GPTIM2_PINR_CH2_PIN_Msk  (0x3FUL << HPSYS_CFG_GPTIM2_PINR_CH2_PIN_Pos)
#define HPSYS_CFG_GPTIM2_PINR_CH2_PIN   HPSYS_CFG_GPTIM2_PINR_CH2_PIN_Msk
#define HPSYS_CFG_GPTIM2_PINR_CH3_PIN_Pos  (16U)
#define HPSYS_CFG_GPTIM2_PINR_CH3_PIN_Msk  (0x3FUL << HPSYS_CFG_GPTIM2_PINR_CH3_PIN_Pos)
#define HPSYS_CFG_GPTIM2_PINR_CH3_PIN   HPSYS_CFG_GPTIM2_PINR_CH3_PIN_Msk
#define HPSYS_CFG_GPTIM2_PINR_CH4_PIN_Pos  (24U)
#define HPSYS_CFG_GPTIM2_PINR_CH4_PIN_Msk  (0x3FUL << HPSYS_CFG_GPTIM2_PINR_CH4_PIN_Pos)
#define HPSYS_CFG_GPTIM2_PINR_CH4_PIN   HPSYS_CFG_GPTIM2_PINR_CH4_PIN_Msk

/*************** Bit definition for HPSYS_CFG_ETR_PINR register ***************/
#define HPSYS_CFG_ETR_PINR_ETR1_PIN_Pos  (0U)
#define HPSYS_CFG_ETR_PINR_ETR1_PIN_Msk  (0x3FUL << HPSYS_CFG_ETR_PINR_ETR1_PIN_Pos)
#define HPSYS_CFG_ETR_PINR_ETR1_PIN     HPSYS_CFG_ETR_PINR_ETR1_PIN_Msk
#define HPSYS_CFG_ETR_PINR_ETR2_PIN_Pos  (8U)
#define HPSYS_CFG_ETR_PINR_ETR2_PIN_Msk  (0x3FUL << HPSYS_CFG_ETR_PINR_ETR2_PIN_Pos)
#define HPSYS_CFG_ETR_PINR_ETR2_PIN     HPSYS_CFG_ETR_PINR_ETR2_PIN_Msk

/************* Bit definition for HPSYS_CFG_LPTIM1_PINR register **************/
#define HPSYS_CFG_LPTIM1_PINR_IN_PIN_Pos  (0U)
#define HPSYS_CFG_LPTIM1_PINR_IN_PIN_Msk  (0x3FUL << HPSYS_CFG_LPTIM1_PINR_IN_PIN_Pos)
#define HPSYS_CFG_LPTIM1_PINR_IN_PIN    HPSYS_CFG_LPTIM1_PINR_IN_PIN_Msk
#define HPSYS_CFG_LPTIM1_PINR_OUT_PIN_Pos  (8U)
#define HPSYS_CFG_LPTIM1_PINR_OUT_PIN_Msk  (0x3FUL << HPSYS_CFG_LPTIM1_PINR_OUT_PIN_Pos)
#define HPSYS_CFG_LPTIM1_PINR_OUT_PIN   HPSYS_CFG_LPTIM1_PINR_OUT_PIN_Msk
#define HPSYS_CFG_LPTIM1_PINR_ETR_PIN_Pos  (16U)
#define HPSYS_CFG_LPTIM1_PINR_ETR_PIN_Msk  (0x3FUL << HPSYS_CFG_LPTIM1_PINR_ETR_PIN_Pos)
#define HPSYS_CFG_LPTIM1_PINR_ETR_PIN   HPSYS_CFG_LPTIM1_PINR_ETR_PIN_Msk

/************* Bit definition for HPSYS_CFG_LPTIM2_PINR register **************/
#define HPSYS_CFG_LPTIM2_PINR_IN_PIN_Pos  (0U)
#define HPSYS_CFG_LPTIM2_PINR_IN_PIN_Msk  (0x3FUL << HPSYS_CFG_LPTIM2_PINR_IN_PIN_Pos)
#define HPSYS_CFG_LPTIM2_PINR_IN_PIN    HPSYS_CFG_LPTIM2_PINR_IN_PIN_Msk
#define HPSYS_CFG_LPTIM2_PINR_OUT_PIN_Pos  (8U)
#define HPSYS_CFG_LPTIM2_PINR_OUT_PIN_Msk  (0x3FUL << HPSYS_CFG_LPTIM2_PINR_OUT_PIN_Pos)
#define HPSYS_CFG_LPTIM2_PINR_OUT_PIN   HPSYS_CFG_LPTIM2_PINR_OUT_PIN_Msk
#define HPSYS_CFG_LPTIM2_PINR_ETR_PIN_Pos  (16U)
#define HPSYS_CFG_LPTIM2_PINR_ETR_PIN_Msk  (0x3FUL << HPSYS_CFG_LPTIM2_PINR_ETR_PIN_Pos)
#define HPSYS_CFG_LPTIM2_PINR_ETR_PIN   HPSYS_CFG_LPTIM2_PINR_ETR_PIN_Msk

/************* Bit definition for HPSYS_CFG_ATIM1_PINR1 register **************/
#define HPSYS_CFG_ATIM1_PINR1_CH1_PIN_Pos  (0U)
#define HPSYS_CFG_ATIM1_PINR1_CH1_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR1_CH1_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR1_CH1_PIN   HPSYS_CFG_ATIM1_PINR1_CH1_PIN_Msk
#define HPSYS_CFG_ATIM1_PINR1_CH2_PIN_Pos  (8U)
#define HPSYS_CFG_ATIM1_PINR1_CH2_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR1_CH2_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR1_CH2_PIN   HPSYS_CFG_ATIM1_PINR1_CH2_PIN_Msk
#define HPSYS_CFG_ATIM1_PINR1_CH3_PIN_Pos  (16U)
#define HPSYS_CFG_ATIM1_PINR1_CH3_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR1_CH3_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR1_CH3_PIN   HPSYS_CFG_ATIM1_PINR1_CH3_PIN_Msk
#define HPSYS_CFG_ATIM1_PINR1_CH4_PIN_Pos  (24U)
#define HPSYS_CFG_ATIM1_PINR1_CH4_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR1_CH4_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR1_CH4_PIN   HPSYS_CFG_ATIM1_PINR1_CH4_PIN_Msk

/************* Bit definition for HPSYS_CFG_ATIM1_PINR2 register **************/
#define HPSYS_CFG_ATIM1_PINR2_CH1N_PIN_Pos  (0U)
#define HPSYS_CFG_ATIM1_PINR2_CH1N_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR2_CH1N_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR2_CH1N_PIN  HPSYS_CFG_ATIM1_PINR2_CH1N_PIN_Msk
#define HPSYS_CFG_ATIM1_PINR2_CH2N_PIN_Pos  (8U)
#define HPSYS_CFG_ATIM1_PINR2_CH2N_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR2_CH2N_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR2_CH2N_PIN  HPSYS_CFG_ATIM1_PINR2_CH2N_PIN_Msk
#define HPSYS_CFG_ATIM1_PINR2_CH3N_PIN_Pos  (16U)
#define HPSYS_CFG_ATIM1_PINR2_CH3N_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR2_CH3N_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR2_CH3N_PIN  HPSYS_CFG_ATIM1_PINR2_CH3N_PIN_Msk

/************* Bit definition for HPSYS_CFG_ATIM1_PINR3 register **************/
#define HPSYS_CFG_ATIM1_PINR3_BK_PIN_Pos  (0U)
#define HPSYS_CFG_ATIM1_PINR3_BK_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR3_BK_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR3_BK_PIN    HPSYS_CFG_ATIM1_PINR3_BK_PIN_Msk
#define HPSYS_CFG_ATIM1_PINR3_BK2_PIN_Pos  (8U)
#define HPSYS_CFG_ATIM1_PINR3_BK2_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR3_BK2_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR3_BK2_PIN   HPSYS_CFG_ATIM1_PINR3_BK2_PIN_Msk
#define HPSYS_CFG_ATIM1_PINR3_ETR_PIN_Pos  (16U)
#define HPSYS_CFG_ATIM1_PINR3_ETR_PIN_Msk  (0x3FUL << HPSYS_CFG_ATIM1_PINR3_ETR_PIN_Pos)
#define HPSYS_CFG_ATIM1_PINR3_ETR_PIN   HPSYS_CFG_ATIM1_PINR3_ETR_PIN_Msk

/*************** Bit definition for HPSYS_CFG_PTA_PINR register ***************/
#define HPSYS_CFG_PTA_PINR_BT_ACTIVE_Pos  (0U)
#define HPSYS_CFG_PTA_PINR_BT_ACTIVE_Msk  (0x3FUL << HPSYS_CFG_PTA_PINR_BT_ACTIVE_Pos)
#define HPSYS_CFG_PTA_PINR_BT_ACTIVE    HPSYS_CFG_PTA_PINR_BT_ACTIVE_Msk
#define HPSYS_CFG_PTA_PINR_BT_COLLISION_Pos  (8U)
#define HPSYS_CFG_PTA_PINR_BT_COLLISION_Msk  (0x3FUL << HPSYS_CFG_PTA_PINR_BT_COLLISION_Pos)
#define HPSYS_CFG_PTA_PINR_BT_COLLISION  HPSYS_CFG_PTA_PINR_BT_COLLISION_Msk
#define HPSYS_CFG_PTA_PINR_BT_PRIORITY_Pos  (16U)
#define HPSYS_CFG_PTA_PINR_BT_PRIORITY_Msk  (0x3FUL << HPSYS_CFG_PTA_PINR_BT_PRIORITY_Pos)
#define HPSYS_CFG_PTA_PINR_BT_PRIORITY  HPSYS_CFG_PTA_PINR_BT_PRIORITY_Msk
#define HPSYS_CFG_PTA_PINR_WLAN_ACTIVE_Pos  (24U)
#define HPSYS_CFG_PTA_PINR_WLAN_ACTIVE_Msk  (0x3FUL << HPSYS_CFG_PTA_PINR_WLAN_ACTIVE_Pos)
#define HPSYS_CFG_PTA_PINR_WLAN_ACTIVE  HPSYS_CFG_PTA_PINR_WLAN_ACTIVE_Msk

/*************** Bit definition for HPSYS_CFG_ANAU_CR register ****************/
#define HPSYS_CFG_ANAU_CR_EN_BG_Pos     (0U)
#define HPSYS_CFG_ANAU_CR_EN_BG_Msk     (0x1UL << HPSYS_CFG_ANAU_CR_EN_BG_Pos)
#define HPSYS_CFG_ANAU_CR_EN_BG         HPSYS_CFG_ANAU_CR_EN_BG_Msk
#define HPSYS_CFG_ANAU_CR_EN_VBAT_MON_Pos  (1U)
#define HPSYS_CFG_ANAU_CR_EN_VBAT_MON_Msk  (0x1UL << HPSYS_CFG_ANAU_CR_EN_VBAT_MON_Pos)
#define HPSYS_CFG_ANAU_CR_EN_VBAT_MON   HPSYS_CFG_ANAU_CR_EN_VBAT_MON_Msk
#define HPSYS_CFG_ANAU_CR_EFUSE_VDD_EN_Pos  (2U)
#define HPSYS_CFG_ANAU_CR_EFUSE_VDD_EN_Msk  (0x1UL << HPSYS_CFG_ANAU_CR_EFUSE_VDD_EN_Pos)
#define HPSYS_CFG_ANAU_CR_EFUSE_VDD_EN  HPSYS_CFG_ANAU_CR_EFUSE_VDD_EN_Msk
#define HPSYS_CFG_ANAU_CR_EFUSE_VDD_PD_Pos  (3U)
#define HPSYS_CFG_ANAU_CR_EFUSE_VDD_PD_Msk  (0x1UL << HPSYS_CFG_ANAU_CR_EFUSE_VDD_PD_Pos)
#define HPSYS_CFG_ANAU_CR_EFUSE_VDD_PD  HPSYS_CFG_ANAU_CR_EFUSE_VDD_PD_Msk
#define HPSYS_CFG_ANAU_CR_DC_MR_Pos     (4U)
#define HPSYS_CFG_ANAU_CR_DC_MR_Msk     (0x7UL << HPSYS_CFG_ANAU_CR_DC_MR_Pos)
#define HPSYS_CFG_ANAU_CR_DC_MR         HPSYS_CFG_ANAU_CR_DC_MR_Msk

/************** Bit definition for HPSYS_CFG_ANAU_RSVD register ***************/
#define HPSYS_CFG_ANAU_RSVD_RESERVE0_Pos  (0U)
#define HPSYS_CFG_ANAU_RSVD_RESERVE0_Msk  (0xFFUL << HPSYS_CFG_ANAU_RSVD_RESERVE0_Pos)
#define HPSYS_CFG_ANAU_RSVD_RESERVE0    HPSYS_CFG_ANAU_RSVD_RESERVE0_Msk
#define HPSYS_CFG_ANAU_RSVD_RESERVE1_Pos  (8U)
#define HPSYS_CFG_ANAU_RSVD_RESERVE1_Msk  (0xFFUL << HPSYS_CFG_ANAU_RSVD_RESERVE1_Pos)
#define HPSYS_CFG_ANAU_RSVD_RESERVE1    HPSYS_CFG_ANAU_RSVD_RESERVE1_Msk
#define HPSYS_CFG_ANAU_RSVD_RESERVE2_Pos  (16U)
#define HPSYS_CFG_ANAU_RSVD_RESERVE2_Msk  (0xFFUL << HPSYS_CFG_ANAU_RSVD_RESERVE2_Pos)
#define HPSYS_CFG_ANAU_RSVD_RESERVE2    HPSYS_CFG_ANAU_RSVD_RESERVE2_Msk
#define HPSYS_CFG_ANAU_RSVD_RESERVE3_Pos  (24U)
#define HPSYS_CFG_ANAU_RSVD_RESERVE3_Msk  (0xFFUL << HPSYS_CFG_ANAU_RSVD_RESERVE3_Pos)
#define HPSYS_CFG_ANAU_RSVD_RESERVE3    HPSYS_CFG_ANAU_RSVD_RESERVE3_Msk

/**************** Bit definition for HPSYS_CFG_ANATR register *****************/
#define HPSYS_CFG_ANATR_DC_TE_ATEST0_Pos  (0U)
#define HPSYS_CFG_ANATR_DC_TE_ATEST0_Msk  (0x1UL << HPSYS_CFG_ANATR_DC_TE_ATEST0_Pos)
#define HPSYS_CFG_ANATR_DC_TE_ATEST0    HPSYS_CFG_ANATR_DC_TE_ATEST0_Msk
#define HPSYS_CFG_ANATR_DC_UR_ATEST0_Pos  (1U)
#define HPSYS_CFG_ANATR_DC_UR_ATEST0_Msk  (0x7UL << HPSYS_CFG_ANATR_DC_UR_ATEST0_Pos)
#define HPSYS_CFG_ANATR_DC_UR_ATEST0    HPSYS_CFG_ANATR_DC_UR_ATEST0_Msk
#define HPSYS_CFG_ANATR_DC_TE_ATEST1_Pos  (4U)
#define HPSYS_CFG_ANATR_DC_TE_ATEST1_Msk  (0x1UL << HPSYS_CFG_ANATR_DC_TE_ATEST1_Pos)
#define HPSYS_CFG_ANATR_DC_TE_ATEST1    HPSYS_CFG_ANATR_DC_TE_ATEST1_Msk
#define HPSYS_CFG_ANATR_DC_UR_ATEST1_Pos  (5U)
#define HPSYS_CFG_ANATR_DC_UR_ATEST1_Msk  (0x7UL << HPSYS_CFG_ANATR_DC_UR_ATEST1_Pos)
#define HPSYS_CFG_ANATR_DC_UR_ATEST1    HPSYS_CFG_ANATR_DC_UR_ATEST1_Msk

/*************** Bit definition for HPSYS_CFG_CAU2_CR register ****************/
#define HPSYS_CFG_CAU2_CR_HPBG_VDDPSW_EN_Pos  (0U)
#define HPSYS_CFG_CAU2_CR_HPBG_VDDPSW_EN_Msk  (0x1UL << HPSYS_CFG_CAU2_CR_HPBG_VDDPSW_EN_Pos)
#define HPSYS_CFG_CAU2_CR_HPBG_VDDPSW_EN  HPSYS_CFG_CAU2_CR_HPBG_VDDPSW_EN_Msk
#define HPSYS_CFG_CAU2_CR_HPBG_EN_Pos   (1U)
#define HPSYS_CFG_CAU2_CR_HPBG_EN_Msk   (0x1UL << HPSYS_CFG_CAU2_CR_HPBG_EN_Pos)
#define HPSYS_CFG_CAU2_CR_HPBG_EN       HPSYS_CFG_CAU2_CR_HPBG_EN_Msk
#define HPSYS_CFG_CAU2_CR_DC_TR_Pos     (4U)
#define HPSYS_CFG_CAU2_CR_DC_TR_Msk     (0x7UL << HPSYS_CFG_CAU2_CR_DC_TR_Pos)
#define HPSYS_CFG_CAU2_CR_DC_TR         HPSYS_CFG_CAU2_CR_DC_TR_Msk
#define HPSYS_CFG_CAU2_CR_DC_BR_Pos     (7U)
#define HPSYS_CFG_CAU2_CR_DC_BR_Msk     (0x7UL << HPSYS_CFG_CAU2_CR_DC_BR_Pos)
#define HPSYS_CFG_CAU2_CR_DC_BR         HPSYS_CFG_CAU2_CR_DC_BR_Msk
#define HPSYS_CFG_CAU2_CR_DC_MR_Pos     (10U)
#define HPSYS_CFG_CAU2_CR_DC_MR_Msk     (0x7UL << HPSYS_CFG_CAU2_CR_DC_MR_Pos)
#define HPSYS_CFG_CAU2_CR_DC_MR         HPSYS_CFG_CAU2_CR_DC_MR_Msk

/************** Bit definition for HPSYS_CFG_CAU2_RSVD register ***************/
#define HPSYS_CFG_CAU2_RSVD_RESERVE0_Pos  (0U)
#define HPSYS_CFG_CAU2_RSVD_RESERVE0_Msk  (0xFFUL << HPSYS_CFG_CAU2_RSVD_RESERVE0_Pos)
#define HPSYS_CFG_CAU2_RSVD_RESERVE0    HPSYS_CFG_CAU2_RSVD_RESERVE0_Msk
#define HPSYS_CFG_CAU2_RSVD_RESERVE1_Pos  (8U)
#define HPSYS_CFG_CAU2_RSVD_RESERVE1_Msk  (0xFFUL << HPSYS_CFG_CAU2_RSVD_RESERVE1_Pos)
#define HPSYS_CFG_CAU2_RSVD_RESERVE1    HPSYS_CFG_CAU2_RSVD_RESERVE1_Msk
#define HPSYS_CFG_CAU2_RSVD_RESERVE2_Pos  (16U)
#define HPSYS_CFG_CAU2_RSVD_RESERVE2_Msk  (0xFFUL << HPSYS_CFG_CAU2_RSVD_RESERVE2_Pos)
#define HPSYS_CFG_CAU2_RSVD_RESERVE2    HPSYS_CFG_CAU2_RSVD_RESERVE2_Msk

#endif
