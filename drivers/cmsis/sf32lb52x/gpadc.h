#ifndef __GPADC_H
#define __GPADC_H

typedef struct
{
    __IO uint32_t ADC_CFG_REG1;
    __IO uint32_t ADC_SLOT0_REG;
    __IO uint32_t ADC_SLOT1_REG;
    __IO uint32_t ADC_SLOT2_REG;
    __IO uint32_t ADC_SLOT3_REG;
    __IO uint32_t ADC_SLOT4_REG;
    __IO uint32_t ADC_SLOT5_REG;
    __IO uint32_t ADC_SLOT6_REG;
    __IO uint32_t ADC_SLOT7_REG;
    __IO uint32_t ADC_RDATA0;
    __IO uint32_t ADC_RDATA1;
    __IO uint32_t ADC_RDATA2;
    __IO uint32_t ADC_RDATA3;
    __IO uint32_t ADC_DMA_RDATA;
    __IO uint32_t ADC_CTRL_REG;
    __IO uint32_t ADC_CTRL_REG2;
    __IO uint32_t GPADC_STATUS;
    __IO uint32_t GPADC_IRQ;
} GPADC_TypeDef;


/*************** Bit definition for GPADC_ADC_CFG_REG1 register ***************/
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CMREF_FAST_EN_Pos  (0U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CMREF_FAST_EN_Msk  (0x1UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_CMREF_FAST_EN_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CMREF_FAST_EN  GPADC_ADC_CFG_REG1_ANAU_GPADC_CMREF_FAST_EN_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_P_INT_EN_Pos  (2U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_P_INT_EN_Msk  (0x1UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_P_INT_EN_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_P_INT_EN  GPADC_ADC_CFG_REG1_ANAU_GPADC_P_INT_EN_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CL_DLY_Pos  (3U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CL_DLY_Msk  (0x7UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_CL_DLY_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CL_DLY  GPADC_ADC_CFG_REG1_ANAU_GPADC_CL_DLY_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_EN_V18_Pos  (6U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_EN_V18_Msk  (0x1UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_EN_V18_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_EN_V18  GPADC_ADC_CFG_REG1_ANAU_GPADC_EN_V18_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_SE_Pos  (7U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_SE_Msk  (0x1UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_SE_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_SE  GPADC_ADC_CFG_REG1_ANAU_GPADC_SE_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_MUTE_Pos  (8U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_MUTE_Msk  (0x1UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_MUTE_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_MUTE  GPADC_ADC_CFG_REG1_ANAU_GPADC_MUTE_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_NCH_Pos  (9U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_NCH_Msk  (0x7UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_NCH_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_NCH  GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_NCH_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_PCH_Pos  (12U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_PCH_Msk  (0x7UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_PCH_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_PCH  GPADC_ADC_CFG_REG1_ANAU_GPADC_SEL_PCH_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOVREF_SEL_Pos  (15U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOVREF_SEL_Msk  (0xFUL << GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOVREF_SEL_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOVREF_SEL  GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOVREF_SEL_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOREF_EN_Pos  (19U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOREF_EN_Msk  (0x1UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOREF_EN_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOREF_EN  GPADC_ADC_CFG_REG1_ANAU_GPADC_LDOREF_EN_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_VSP_Pos  (20U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_VSP_Msk  (0x3UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_VSP_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_VSP  GPADC_ADC_CFG_REG1_ANAU_GPADC_VSP_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CMPCL_Pos  (22U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CMPCL_Msk  (0x7UL << GPADC_ADC_CFG_REG1_ANAU_GPADC_CMPCL_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CMPCL  GPADC_ADC_CFG_REG1_ANAU_GPADC_CMPCL_Msk
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CMM_Pos  (25U)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CMM_Msk  (0x1FUL << GPADC_ADC_CFG_REG1_ANAU_GPADC_CMM_Pos)
#define GPADC_ADC_CFG_REG1_ANAU_GPADC_CMM  GPADC_ADC_CFG_REG1_ANAU_GPADC_CMM_Msk

/************** Bit definition for GPADC_ADC_SLOT0_REG register ***************/
#define GPADC_ADC_SLOT0_REG_SLOT_EN_Pos  (0U)
#define GPADC_ADC_SLOT0_REG_SLOT_EN_Msk  (0x1UL << GPADC_ADC_SLOT0_REG_SLOT_EN_Pos)
#define GPADC_ADC_SLOT0_REG_SLOT_EN     GPADC_ADC_SLOT0_REG_SLOT_EN_Msk
#define GPADC_ADC_SLOT0_REG_PCHNL_SEL_Pos  (8U)
#define GPADC_ADC_SLOT0_REG_PCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT0_REG_PCHNL_SEL_Pos)
#define GPADC_ADC_SLOT0_REG_PCHNL_SEL   GPADC_ADC_SLOT0_REG_PCHNL_SEL_Msk
#define GPADC_ADC_SLOT0_REG_NCHNL_SEL_Pos  (11U)
#define GPADC_ADC_SLOT0_REG_NCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT0_REG_NCHNL_SEL_Pos)
#define GPADC_ADC_SLOT0_REG_NCHNL_SEL   GPADC_ADC_SLOT0_REG_NCHNL_SEL_Msk
#define GPADC_ADC_SLOT0_REG_ACC_NUM_Pos  (17U)
#define GPADC_ADC_SLOT0_REG_ACC_NUM_Msk  (0x3UL << GPADC_ADC_SLOT0_REG_ACC_NUM_Pos)
#define GPADC_ADC_SLOT0_REG_ACC_NUM     GPADC_ADC_SLOT0_REG_ACC_NUM_Msk

/************** Bit definition for GPADC_ADC_SLOT1_REG register ***************/
#define GPADC_ADC_SLOT1_REG_SLOT_EN_Pos  (0U)
#define GPADC_ADC_SLOT1_REG_SLOT_EN_Msk  (0x1UL << GPADC_ADC_SLOT1_REG_SLOT_EN_Pos)
#define GPADC_ADC_SLOT1_REG_SLOT_EN     GPADC_ADC_SLOT1_REG_SLOT_EN_Msk
#define GPADC_ADC_SLOT1_REG_PCHNL_SEL_Pos  (8U)
#define GPADC_ADC_SLOT1_REG_PCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT1_REG_PCHNL_SEL_Pos)
#define GPADC_ADC_SLOT1_REG_PCHNL_SEL   GPADC_ADC_SLOT1_REG_PCHNL_SEL_Msk
#define GPADC_ADC_SLOT1_REG_NCHNL_SEL_Pos  (11U)
#define GPADC_ADC_SLOT1_REG_NCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT1_REG_NCHNL_SEL_Pos)
#define GPADC_ADC_SLOT1_REG_NCHNL_SEL   GPADC_ADC_SLOT1_REG_NCHNL_SEL_Msk
#define GPADC_ADC_SLOT1_REG_ACC_NUM_Pos  (17U)
#define GPADC_ADC_SLOT1_REG_ACC_NUM_Msk  (0x3UL << GPADC_ADC_SLOT1_REG_ACC_NUM_Pos)
#define GPADC_ADC_SLOT1_REG_ACC_NUM     GPADC_ADC_SLOT1_REG_ACC_NUM_Msk

/************** Bit definition for GPADC_ADC_SLOT2_REG register ***************/
#define GPADC_ADC_SLOT2_REG_SLOT_EN_Pos  (0U)
#define GPADC_ADC_SLOT2_REG_SLOT_EN_Msk  (0x1UL << GPADC_ADC_SLOT2_REG_SLOT_EN_Pos)
#define GPADC_ADC_SLOT2_REG_SLOT_EN     GPADC_ADC_SLOT2_REG_SLOT_EN_Msk
#define GPADC_ADC_SLOT2_REG_PCHNL_SEL_Pos  (8U)
#define GPADC_ADC_SLOT2_REG_PCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT2_REG_PCHNL_SEL_Pos)
#define GPADC_ADC_SLOT2_REG_PCHNL_SEL   GPADC_ADC_SLOT2_REG_PCHNL_SEL_Msk
#define GPADC_ADC_SLOT2_REG_NCHNL_SEL_Pos  (11U)
#define GPADC_ADC_SLOT2_REG_NCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT2_REG_NCHNL_SEL_Pos)
#define GPADC_ADC_SLOT2_REG_NCHNL_SEL   GPADC_ADC_SLOT2_REG_NCHNL_SEL_Msk
#define GPADC_ADC_SLOT2_REG_ACC_NUM_Pos  (17U)
#define GPADC_ADC_SLOT2_REG_ACC_NUM_Msk  (0x3UL << GPADC_ADC_SLOT2_REG_ACC_NUM_Pos)
#define GPADC_ADC_SLOT2_REG_ACC_NUM     GPADC_ADC_SLOT2_REG_ACC_NUM_Msk

/************** Bit definition for GPADC_ADC_SLOT3_REG register ***************/
#define GPADC_ADC_SLOT3_REG_SLOT_EN_Pos  (0U)
#define GPADC_ADC_SLOT3_REG_SLOT_EN_Msk  (0x1UL << GPADC_ADC_SLOT3_REG_SLOT_EN_Pos)
#define GPADC_ADC_SLOT3_REG_SLOT_EN     GPADC_ADC_SLOT3_REG_SLOT_EN_Msk
#define GPADC_ADC_SLOT3_REG_PCHNL_SEL_Pos  (8U)
#define GPADC_ADC_SLOT3_REG_PCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT3_REG_PCHNL_SEL_Pos)
#define GPADC_ADC_SLOT3_REG_PCHNL_SEL   GPADC_ADC_SLOT3_REG_PCHNL_SEL_Msk
#define GPADC_ADC_SLOT3_REG_NCHNL_SEL_Pos  (11U)
#define GPADC_ADC_SLOT3_REG_NCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT3_REG_NCHNL_SEL_Pos)
#define GPADC_ADC_SLOT3_REG_NCHNL_SEL   GPADC_ADC_SLOT3_REG_NCHNL_SEL_Msk
#define GPADC_ADC_SLOT3_REG_ACC_NUM_Pos  (17U)
#define GPADC_ADC_SLOT3_REG_ACC_NUM_Msk  (0x3UL << GPADC_ADC_SLOT3_REG_ACC_NUM_Pos)
#define GPADC_ADC_SLOT3_REG_ACC_NUM     GPADC_ADC_SLOT3_REG_ACC_NUM_Msk

/************** Bit definition for GPADC_ADC_SLOT4_REG register ***************/
#define GPADC_ADC_SLOT4_REG_SLOT_EN_Pos  (0U)
#define GPADC_ADC_SLOT4_REG_SLOT_EN_Msk  (0x1UL << GPADC_ADC_SLOT4_REG_SLOT_EN_Pos)
#define GPADC_ADC_SLOT4_REG_SLOT_EN     GPADC_ADC_SLOT4_REG_SLOT_EN_Msk
#define GPADC_ADC_SLOT4_REG_PCHNL_SEL_Pos  (8U)
#define GPADC_ADC_SLOT4_REG_PCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT4_REG_PCHNL_SEL_Pos)
#define GPADC_ADC_SLOT4_REG_PCHNL_SEL   GPADC_ADC_SLOT4_REG_PCHNL_SEL_Msk
#define GPADC_ADC_SLOT4_REG_NCHNL_SEL_Pos  (11U)
#define GPADC_ADC_SLOT4_REG_NCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT4_REG_NCHNL_SEL_Pos)
#define GPADC_ADC_SLOT4_REG_NCHNL_SEL   GPADC_ADC_SLOT4_REG_NCHNL_SEL_Msk
#define GPADC_ADC_SLOT4_REG_ACC_NUM_Pos  (17U)
#define GPADC_ADC_SLOT4_REG_ACC_NUM_Msk  (0x3UL << GPADC_ADC_SLOT4_REG_ACC_NUM_Pos)
#define GPADC_ADC_SLOT4_REG_ACC_NUM     GPADC_ADC_SLOT4_REG_ACC_NUM_Msk

/************** Bit definition for GPADC_ADC_SLOT5_REG register ***************/
#define GPADC_ADC_SLOT5_REG_SLOT_EN_Pos  (0U)
#define GPADC_ADC_SLOT5_REG_SLOT_EN_Msk  (0x1UL << GPADC_ADC_SLOT5_REG_SLOT_EN_Pos)
#define GPADC_ADC_SLOT5_REG_SLOT_EN     GPADC_ADC_SLOT5_REG_SLOT_EN_Msk
#define GPADC_ADC_SLOT5_REG_PCHNL_SEL_Pos  (8U)
#define GPADC_ADC_SLOT5_REG_PCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT5_REG_PCHNL_SEL_Pos)
#define GPADC_ADC_SLOT5_REG_PCHNL_SEL   GPADC_ADC_SLOT5_REG_PCHNL_SEL_Msk
#define GPADC_ADC_SLOT5_REG_NCHNL_SEL_Pos  (11U)
#define GPADC_ADC_SLOT5_REG_NCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT5_REG_NCHNL_SEL_Pos)
#define GPADC_ADC_SLOT5_REG_NCHNL_SEL   GPADC_ADC_SLOT5_REG_NCHNL_SEL_Msk
#define GPADC_ADC_SLOT5_REG_ACC_NUM_Pos  (17U)
#define GPADC_ADC_SLOT5_REG_ACC_NUM_Msk  (0x3UL << GPADC_ADC_SLOT5_REG_ACC_NUM_Pos)
#define GPADC_ADC_SLOT5_REG_ACC_NUM     GPADC_ADC_SLOT5_REG_ACC_NUM_Msk

/************** Bit definition for GPADC_ADC_SLOT6_REG register ***************/
#define GPADC_ADC_SLOT6_REG_SLOT_EN_Pos  (0U)
#define GPADC_ADC_SLOT6_REG_SLOT_EN_Msk  (0x1UL << GPADC_ADC_SLOT6_REG_SLOT_EN_Pos)
#define GPADC_ADC_SLOT6_REG_SLOT_EN     GPADC_ADC_SLOT6_REG_SLOT_EN_Msk
#define GPADC_ADC_SLOT6_REG_PCHNL_SEL_Pos  (8U)
#define GPADC_ADC_SLOT6_REG_PCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT6_REG_PCHNL_SEL_Pos)
#define GPADC_ADC_SLOT6_REG_PCHNL_SEL   GPADC_ADC_SLOT6_REG_PCHNL_SEL_Msk
#define GPADC_ADC_SLOT6_REG_NCHNL_SEL_Pos  (11U)
#define GPADC_ADC_SLOT6_REG_NCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT6_REG_NCHNL_SEL_Pos)
#define GPADC_ADC_SLOT6_REG_NCHNL_SEL   GPADC_ADC_SLOT6_REG_NCHNL_SEL_Msk
#define GPADC_ADC_SLOT6_REG_ACC_NUM_Pos  (17U)
#define GPADC_ADC_SLOT6_REG_ACC_NUM_Msk  (0x3UL << GPADC_ADC_SLOT6_REG_ACC_NUM_Pos)
#define GPADC_ADC_SLOT6_REG_ACC_NUM     GPADC_ADC_SLOT6_REG_ACC_NUM_Msk

/************** Bit definition for GPADC_ADC_SLOT7_REG register ***************/
#define GPADC_ADC_SLOT7_REG_SLOT_EN_Pos  (0U)
#define GPADC_ADC_SLOT7_REG_SLOT_EN_Msk  (0x1UL << GPADC_ADC_SLOT7_REG_SLOT_EN_Pos)
#define GPADC_ADC_SLOT7_REG_SLOT_EN     GPADC_ADC_SLOT7_REG_SLOT_EN_Msk
#define GPADC_ADC_SLOT7_REG_PCHNL_SEL_Pos  (8U)
#define GPADC_ADC_SLOT7_REG_PCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT7_REG_PCHNL_SEL_Pos)
#define GPADC_ADC_SLOT7_REG_PCHNL_SEL   GPADC_ADC_SLOT7_REG_PCHNL_SEL_Msk
#define GPADC_ADC_SLOT7_REG_NCHNL_SEL_Pos  (11U)
#define GPADC_ADC_SLOT7_REG_NCHNL_SEL_Msk  (0x7UL << GPADC_ADC_SLOT7_REG_NCHNL_SEL_Pos)
#define GPADC_ADC_SLOT7_REG_NCHNL_SEL   GPADC_ADC_SLOT7_REG_NCHNL_SEL_Msk
#define GPADC_ADC_SLOT7_REG_ACC_NUM_Pos  (17U)
#define GPADC_ADC_SLOT7_REG_ACC_NUM_Msk  (0x3UL << GPADC_ADC_SLOT7_REG_ACC_NUM_Pos)
#define GPADC_ADC_SLOT7_REG_ACC_NUM     GPADC_ADC_SLOT7_REG_ACC_NUM_Msk

/**************** Bit definition for GPADC_ADC_RDATA0 register ****************/
#define GPADC_ADC_RDATA0_SLOT0_RDATA_Pos  (0U)
#define GPADC_ADC_RDATA0_SLOT0_RDATA_Msk  (0xFFFUL << GPADC_ADC_RDATA0_SLOT0_RDATA_Pos)
#define GPADC_ADC_RDATA0_SLOT0_RDATA    GPADC_ADC_RDATA0_SLOT0_RDATA_Msk
#define GPADC_ADC_RDATA0_SLOT1_RDATA_Pos  (16U)
#define GPADC_ADC_RDATA0_SLOT1_RDATA_Msk  (0xFFFUL << GPADC_ADC_RDATA0_SLOT1_RDATA_Pos)
#define GPADC_ADC_RDATA0_SLOT1_RDATA    GPADC_ADC_RDATA0_SLOT1_RDATA_Msk

/**************** Bit definition for GPADC_ADC_RDATA1 register ****************/
#define GPADC_ADC_RDATA1_SLOT2_RDATA_Pos  (0U)
#define GPADC_ADC_RDATA1_SLOT2_RDATA_Msk  (0xFFFUL << GPADC_ADC_RDATA1_SLOT2_RDATA_Pos)
#define GPADC_ADC_RDATA1_SLOT2_RDATA    GPADC_ADC_RDATA1_SLOT2_RDATA_Msk
#define GPADC_ADC_RDATA1_SLOT3_RDATA_Pos  (16U)
#define GPADC_ADC_RDATA1_SLOT3_RDATA_Msk  (0xFFFUL << GPADC_ADC_RDATA1_SLOT3_RDATA_Pos)
#define GPADC_ADC_RDATA1_SLOT3_RDATA    GPADC_ADC_RDATA1_SLOT3_RDATA_Msk

/**************** Bit definition for GPADC_ADC_RDATA2 register ****************/
#define GPADC_ADC_RDATA2_SLOT4_RDATA_Pos  (0U)
#define GPADC_ADC_RDATA2_SLOT4_RDATA_Msk  (0xFFFUL << GPADC_ADC_RDATA2_SLOT4_RDATA_Pos)
#define GPADC_ADC_RDATA2_SLOT4_RDATA    GPADC_ADC_RDATA2_SLOT4_RDATA_Msk
#define GPADC_ADC_RDATA2_SLOT5_RDATA_Pos  (16U)
#define GPADC_ADC_RDATA2_SLOT5_RDATA_Msk  (0xFFFUL << GPADC_ADC_RDATA2_SLOT5_RDATA_Pos)
#define GPADC_ADC_RDATA2_SLOT5_RDATA    GPADC_ADC_RDATA2_SLOT5_RDATA_Msk

/**************** Bit definition for GPADC_ADC_RDATA3 register ****************/
#define GPADC_ADC_RDATA3_SLOT6_RDATA_Pos  (0U)
#define GPADC_ADC_RDATA3_SLOT6_RDATA_Msk  (0xFFFUL << GPADC_ADC_RDATA3_SLOT6_RDATA_Pos)
#define GPADC_ADC_RDATA3_SLOT6_RDATA    GPADC_ADC_RDATA3_SLOT6_RDATA_Msk
#define GPADC_ADC_RDATA3_SLOT7_RDATA_Pos  (16U)
#define GPADC_ADC_RDATA3_SLOT7_RDATA_Msk  (0xFFFUL << GPADC_ADC_RDATA3_SLOT7_RDATA_Pos)
#define GPADC_ADC_RDATA3_SLOT7_RDATA    GPADC_ADC_RDATA3_SLOT7_RDATA_Msk

/************** Bit definition for GPADC_ADC_DMA_RDATA register ***************/
#define GPADC_ADC_DMA_RDATA_DMA_RDATA_Pos  (0U)
#define GPADC_ADC_DMA_RDATA_DMA_RDATA_Msk  (0x1FFFUL << GPADC_ADC_DMA_RDATA_DMA_RDATA_Pos)
#define GPADC_ADC_DMA_RDATA_DMA_RDATA   GPADC_ADC_DMA_RDATA_DMA_RDATA_Msk
#define GPADC_ADC_DMA_RDATA_DMA_RDATA_RAW_Pos  (16U)
#define GPADC_ADC_DMA_RDATA_DMA_RDATA_RAW_Msk  (0x1FFFUL << GPADC_ADC_DMA_RDATA_DMA_RDATA_RAW_Pos)
#define GPADC_ADC_DMA_RDATA_DMA_RDATA_RAW  GPADC_ADC_DMA_RDATA_DMA_RDATA_RAW_Msk

/*************** Bit definition for GPADC_ADC_CTRL_REG register ***************/
#define GPADC_ADC_CTRL_REG_ADC_OP_MODE_Pos  (0U)
#define GPADC_ADC_CTRL_REG_ADC_OP_MODE_Msk  (0x1UL << GPADC_ADC_CTRL_REG_ADC_OP_MODE_Pos)
#define GPADC_ADC_CTRL_REG_ADC_OP_MODE  GPADC_ADC_CTRL_REG_ADC_OP_MODE_Msk
#define GPADC_ADC_CTRL_REG_ADC_START_Pos  (1U)
#define GPADC_ADC_CTRL_REG_ADC_START_Msk  (0x1UL << GPADC_ADC_CTRL_REG_ADC_START_Pos)
#define GPADC_ADC_CTRL_REG_ADC_START    GPADC_ADC_CTRL_REG_ADC_START_Msk
#define GPADC_ADC_CTRL_REG_ADC_STOP_Pos  (2U)
#define GPADC_ADC_CTRL_REG_ADC_STOP_Msk  (0x1UL << GPADC_ADC_CTRL_REG_ADC_STOP_Pos)
#define GPADC_ADC_CTRL_REG_ADC_STOP     GPADC_ADC_CTRL_REG_ADC_STOP_Msk
#define GPADC_ADC_CTRL_REG_INIT_TIME_Pos  (3U)
#define GPADC_ADC_CTRL_REG_INIT_TIME_Msk  (0xFUL << GPADC_ADC_CTRL_REG_INIT_TIME_Pos)
#define GPADC_ADC_CTRL_REG_INIT_TIME    GPADC_ADC_CTRL_REG_INIT_TIME_Msk
#define GPADC_ADC_CTRL_REG_DMA_EN_Pos   (7U)
#define GPADC_ADC_CTRL_REG_DMA_EN_Msk   (0x1UL << GPADC_ADC_CTRL_REG_DMA_EN_Pos)
#define GPADC_ADC_CTRL_REG_DMA_EN       GPADC_ADC_CTRL_REG_DMA_EN_Msk
#define GPADC_ADC_CTRL_REG_GPIO_TRIG_EN_Pos  (8U)
#define GPADC_ADC_CTRL_REG_GPIO_TRIG_EN_Msk  (0x1UL << GPADC_ADC_CTRL_REG_GPIO_TRIG_EN_Pos)
#define GPADC_ADC_CTRL_REG_GPIO_TRIG_EN  GPADC_ADC_CTRL_REG_GPIO_TRIG_EN_Msk
#define GPADC_ADC_CTRL_REG_TIMER_TRIG_EN_Pos  (9U)
#define GPADC_ADC_CTRL_REG_TIMER_TRIG_EN_Msk  (0x1UL << GPADC_ADC_CTRL_REG_TIMER_TRIG_EN_Pos)
#define GPADC_ADC_CTRL_REG_TIMER_TRIG_EN  GPADC_ADC_CTRL_REG_TIMER_TRIG_EN_Msk
#define GPADC_ADC_CTRL_REG_CHNL_SEL_FRC_EN_Pos  (10U)
#define GPADC_ADC_CTRL_REG_CHNL_SEL_FRC_EN_Msk  (0x1UL << GPADC_ADC_CTRL_REG_CHNL_SEL_FRC_EN_Pos)
#define GPADC_ADC_CTRL_REG_CHNL_SEL_FRC_EN  GPADC_ADC_CTRL_REG_CHNL_SEL_FRC_EN_Msk
#define GPADC_ADC_CTRL_REG_FRC_EN_ADC_Pos  (11U)
#define GPADC_ADC_CTRL_REG_FRC_EN_ADC_Msk  (0x1UL << GPADC_ADC_CTRL_REG_FRC_EN_ADC_Pos)
#define GPADC_ADC_CTRL_REG_FRC_EN_ADC   GPADC_ADC_CTRL_REG_FRC_EN_ADC_Msk
#define GPADC_ADC_CTRL_REG_TIMER_TRIG_SRC_SEL_Pos  (12U)
#define GPADC_ADC_CTRL_REG_TIMER_TRIG_SRC_SEL_Msk  (0x7UL << GPADC_ADC_CTRL_REG_TIMER_TRIG_SRC_SEL_Pos)
#define GPADC_ADC_CTRL_REG_TIMER_TRIG_SRC_SEL  GPADC_ADC_CTRL_REG_TIMER_TRIG_SRC_SEL_Msk
#define GPADC_ADC_CTRL_REG_TIMER_TRIG_TYP_Pos  (15U)
#define GPADC_ADC_CTRL_REG_TIMER_TRIG_TYP_Msk  (0x1UL << GPADC_ADC_CTRL_REG_TIMER_TRIG_TYP_Pos)
#define GPADC_ADC_CTRL_REG_TIMER_TRIG_TYP  GPADC_ADC_CTRL_REG_TIMER_TRIG_TYP_Msk
#define GPADC_ADC_CTRL_REG_DMA_DATA_SEL_Pos  (16U)
#define GPADC_ADC_CTRL_REG_DMA_DATA_SEL_Msk  (0x1UL << GPADC_ADC_CTRL_REG_DMA_DATA_SEL_Pos)
#define GPADC_ADC_CTRL_REG_DMA_DATA_SEL  GPADC_ADC_CTRL_REG_DMA_DATA_SEL_Msk
#define GPADC_ADC_CTRL_REG_DATA_SAMP_DLY_Pos  (17U)
#define GPADC_ADC_CTRL_REG_DATA_SAMP_DLY_Msk  (0xFUL << GPADC_ADC_CTRL_REG_DATA_SAMP_DLY_Pos)
#define GPADC_ADC_CTRL_REG_DATA_SAMP_DLY  GPADC_ADC_CTRL_REG_DATA_SAMP_DLY_Msk

/************** Bit definition for GPADC_ADC_CTRL_REG2 register ***************/
#define GPADC_ADC_CTRL_REG2_SAMP_WIDTH_Pos  (0U)
#define GPADC_ADC_CTRL_REG2_SAMP_WIDTH_Msk  (0xFFFFFFUL << GPADC_ADC_CTRL_REG2_SAMP_WIDTH_Pos)
#define GPADC_ADC_CTRL_REG2_SAMP_WIDTH  GPADC_ADC_CTRL_REG2_SAMP_WIDTH_Msk
#define GPADC_ADC_CTRL_REG2_CONV_WIDTH_Pos  (24U)
#define GPADC_ADC_CTRL_REG2_CONV_WIDTH_Msk  (0xFFUL << GPADC_ADC_CTRL_REG2_CONV_WIDTH_Pos)
#define GPADC_ADC_CTRL_REG2_CONV_WIDTH  GPADC_ADC_CTRL_REG2_CONV_WIDTH_Msk

/*************** Bit definition for GPADC_GPADC_STATUS register ***************/
#define GPADC_GPADC_STATUS_ADC_DONE_Pos  (0U)
#define GPADC_GPADC_STATUS_ADC_DONE_Msk  (0x1UL << GPADC_GPADC_STATUS_ADC_DONE_Pos)
#define GPADC_GPADC_STATUS_ADC_DONE     GPADC_GPADC_STATUS_ADC_DONE_Msk
#define GPADC_GPADC_STATUS_SLOT_DONE_Pos  (1U)
#define GPADC_GPADC_STATUS_SLOT_DONE_Msk  (0xFFUL << GPADC_GPADC_STATUS_SLOT_DONE_Pos)
#define GPADC_GPADC_STATUS_SLOT_DONE    GPADC_GPADC_STATUS_SLOT_DONE_Msk
#define GPADC_GPADC_STATUS_CUR_SLOT_Pos  (9U)
#define GPADC_GPADC_STATUS_CUR_SLOT_Msk  (0x7UL << GPADC_GPADC_STATUS_CUR_SLOT_Pos)
#define GPADC_GPADC_STATUS_CUR_SLOT     GPADC_GPADC_STATUS_CUR_SLOT_Msk

/**************** Bit definition for GPADC_GPADC_IRQ register *****************/
#define GPADC_GPADC_IRQ_GPADC_ICR_Pos   (0U)
#define GPADC_GPADC_IRQ_GPADC_ICR_Msk   (0x1UL << GPADC_GPADC_IRQ_GPADC_ICR_Pos)
#define GPADC_GPADC_IRQ_GPADC_ICR       GPADC_GPADC_IRQ_GPADC_ICR_Msk
#define GPADC_GPADC_IRQ_GPADC_IMR_Pos   (1U)
#define GPADC_GPADC_IRQ_GPADC_IMR_Msk   (0x1UL << GPADC_GPADC_IRQ_GPADC_IMR_Pos)
#define GPADC_GPADC_IRQ_GPADC_IMR       GPADC_GPADC_IRQ_GPADC_IMR_Msk
#define GPADC_GPADC_IRQ_GPADC_IRSR_Pos  (2U)
#define GPADC_GPADC_IRQ_GPADC_IRSR_Msk  (0x1UL << GPADC_GPADC_IRQ_GPADC_IRSR_Pos)
#define GPADC_GPADC_IRQ_GPADC_IRSR      GPADC_GPADC_IRQ_GPADC_IRSR_Msk
#define GPADC_GPADC_IRQ_GPADC_ISR_Pos   (3U)
#define GPADC_GPADC_IRQ_GPADC_ISR_Msk   (0x1UL << GPADC_GPADC_IRQ_GPADC_ISR_Pos)
#define GPADC_GPADC_IRQ_GPADC_ISR       GPADC_GPADC_IRQ_GPADC_ISR_Msk

#endif
