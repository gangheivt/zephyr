/**
  ******************************************************************************
  * @file   bsp_pinmux.c
  * @author Sifli software development team
  ******************************************************************************
*/
/**
 * @attention
 * Copyright (c) 2019 - 2022,  Sifli Technology
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Sifli integrated circuit
 *    in a product or a software update for such product, must reproduce the above
 *    copyright notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Sifli nor the names of its contributors may be used to endorse
 *    or promote products derived from this software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Sifli integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY SIFLI TECHNOLOGY "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL SIFLI TECHNOLOGY OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#include "bsp_board.h"
#include "bf0_hal_pinmux.h"


void BSP_PIN_Init(void)
{
#ifdef SOC_BF0_HCPU
    // HCPU pins

    // PSRAM1
    HAL_PIN_Set(PAD_SA04, MPI1_DIO0, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA05, MPI1_DIO1, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA06, MPI1_DIO2, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA07, MPI1_DIO3, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA09, MPI1_CS,   PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_SA10, MPI1_CLK,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_SA11, MPI1_DIO4, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA12, MPI1_DIO5, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA13, MPI1_DIO6, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA14, MPI1_DIO7, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA15, MPI1_DQS0, PIN_PULLDOWN, 1);

    // PSRAM2
    HAL_PIN_Set(PAD_SB04, MPI2_DIO0, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB05, MPI2_DIO1, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB06, MPI2_DIO2, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB07, MPI2_DIO3, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB09, MPI2_CS,   PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_SB10, MPI2_CLK,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_SB11, MPI2_DIO4, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB12, MPI2_DIO5, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB13, MPI2_DIO6, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB14, MPI2_DIO7, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB15, MPI2_DQS0, PIN_PULLDOWN, 1);



    // I2C1 for touch panel
    HAL_PIN_Set(PAD_PA16, I2C1_SDA, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA17, I2C1_SCL, PIN_PULLUP, 1);
    // I2C3 for PA
    HAL_PIN_Set(PAD_PA93, I2C3_SDA, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA92, I2C3_SCL, PIN_PULLUP, 1);

    //PA
    HAL_PIN_Set(PAD_PA88, GPIO_A88, PIN_PULLDOWN, 1);

#ifdef BSP_ENABLE_MPI4
    HAL_PIN_Set(PAD_PA39, MPI4_CLK, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA30, MPI4_CS, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA40, MPI4_DIO0, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA37, MPI4_DIO1, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA36, MPI4_DIO2, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA38, MPI4_DIO3, PIN_PULLUP, 1);
#endif
#ifdef BSP_ENABLE_MPI3
    //TODO: power pin
    //BSP_GPIO_Set(MPI1_POWER_PIN, 1, 1);
    //BSP_GPIO_Set(MPI2_POWER_PIN, 1, 1);
    //BSP_GPIO_Set(MPI3_POWER_PIN, 1, 1);

    HAL_PIN_Set(PAD_PA46, MPI3_CLK, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA44, MPI3_CS, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA50, MPI3_DIO0, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA48, MPI3_DIO1, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA47, MPI3_DIO2, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA45, MPI3_DIO3, PIN_PULLUP, 1);
#endif

    // UART1
    HAL_PIN_Set(PAD_PA31, USART1_TXD, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA32, USART1_RXD, PIN_PULLUP, 1);

    // I2S2
#if defined(BSP_ENABLE_I2S_CODEC)
    HAL_PIN_Set(PAD_PA82, I2S2_SDO, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA91, I2S2_BCK, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA84, I2S2_LRCK, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA86, I2S2_SDI, PIN_PULLDOWN, 1);
#endif
    // I2S3
#if defined(BSP_ENABLE_I2S3)
    HAL_PIN_Set(PAD_PB24, I2S3_SDO, PIN_NOPULL, 0);
    HAL_PIN_Set(PAD_PB30, I2S3_BCK, PIN_NOPULL, 0);
    HAL_PIN_Set(PAD_PB31, I2S3_LRCK, PIN_NOPULL, 0);
    HAL_PIN_Set(PAD_PB27, I2S3_SDI, PIN_PULLDOWN, 0);
#endif

#ifdef BSP_USING_PDM1
    // PDM1
    HAL_PIN_Set(PAD_PA24, GPIO_A24, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA23, PDM1_CLK, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA18, PDM1_DATA, PIN_PULLDOWN, 1);
    //I2S1
#elif defined(BSP_ENABLE_I2S_MIC)
    HAL_PIN_Set(PAD_PA14, I2S1_LRCK, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA23, I2S1_BCK, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA18, I2S1_SDI, PIN_PULLDOWN, 1);
#endif

    // UART2
    HAL_PIN_Set(PAD_PA28, USART2_TXD, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA29, USART2_RXD, PIN_PULLUP, 1);

    // SDIO
#ifdef BSP_USING_SDIO
    HAL_PIN_Set(PAD_PA09, SD1_CLK, PIN_NOPULL, 1); // SDIO1
    HAL_PIN_Set(PAD_PA10, SD1_CMD, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA05, SD1_DIO0, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA04, SD1_DIO1, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA01, SD1_DIO2, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA06, SD1_DIO3, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA07, SD1_DIO4, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA03, SD1_DIO5, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA08, SD1_DIO6, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA00, SD1_DIO7, PIN_PULLUP, 1);

    HAL_PIN_Set(PAD_PA02, GPIO_A2, PIN_PULLUP, 1);     // SD1 EN
    //BSP_GPIO_Set(2, 1, 1);
    HAL_PIN_Set(PAD_PA11, GPIO_A11, PIN_PULLUP, 1);     // SD1 RESET, need set 0 first?
    //BSP_GPIO_Set(11, 1, 1);
#else

    // LCDC1
#ifdef BSP_LCDC_USING_DBI
    HAL_PIN_Set(PAD_PA20, LCDC1_8080_WR, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA31, LCDC1_8080_CS, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA34, LCDC1_8080_RD, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA36, LCDC1_8080_DC, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA38, LCDC1_8080_DIO0, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA42, LCDC1_8080_DIO1, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA44, LCDC1_8080_DIO2, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA45, LCDC1_8080_DIO3, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA47, LCDC1_8080_DIO4, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA49, LCDC1_8080_DIO5, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA51, LCDC1_8080_DIO6, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA55, LCDC1_8080_DIO7, PIN_PULLUP, 1);

    HAL_PIN_Set(PAD_PA77, LCDC1_8080_TE, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA78, LCDC1_8080_RSTB, PIN_PULLUP, 1);
#elif 0//defined(BSP_LCDC_USING_JDI_PARALLEL) Always use LPSYS JDI
    HAL_PIN_Set(PAD_PA19, LCDC1_JDI_VCK, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA22, LCDC1_JDI_VST, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA25, LCDC1_JDI_XRST, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA43, LCDC1_JDI_HCK, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA44, LCDC1_JDI_HST, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA45, LCDC1_JDI_ENB, PIN_PULLUP, 1);
    //HAL_PIN_Set(PAD_PA42, LCDC1_JDI_DIO1, PIN_PULLUP, 1);
    //HAL_PIN_Set(PAD_PA44, LCDC1_JDI_FRP, PIN_PULLUP, 1);
    //HAL_PIN_Set(PAD_PA45, LCDC1_JDI_XFRP, PIN_PULLUP, 1);
    //HAL_PIN_Set(PAD_PA47, LCDC1_JDI_VCOM, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA46, LCDC1_JDI_R1, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA47, LCDC1_JDI_R2, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA48, LCDC1_JDI_G1, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA50, LCDC1_JDI_G2, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA65, LCDC1_JDI_B1, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA67, LCDC1_JDI_B2, PIN_PULLUP, 1);
#elif defined(BSP_LCDC_USING_DPI)
    HAL_PIN_Set(PAD_PA12, LCDC1_DPI_CLK,    PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA13, LCDC1_DPI_DE,     PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA14, LCDC1_DPI_HSYNC,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA15, LCDC1_DPI_VSYNC,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA18, LCDC1_DPI_SD,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA22, LCDC1_DPI_R0,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA23, LCDC1_DPI_R1,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA24, LCDC1_DPI_R2,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA25, LCDC1_DPI_R3,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA26, LCDC1_DPI_R4,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA27, LCDC1_DPI_R5,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA43, LCDC1_DPI_R6,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA44, LCDC1_DPI_R7,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA45, LCDC1_DPI_G0,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA46, LCDC1_DPI_G1,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA47, LCDC1_DPI_G2,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA48, LCDC1_DPI_G3,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA50, LCDC1_DPI_G4,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA53, LCDC1_DPI_G5,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA54, LCDC1_DPI_G6,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA55, LCDC1_DPI_G7,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA56, LCDC1_DPI_B0,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA57, LCDC1_DPI_B1,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA58, LCDC1_DPI_B2,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA61, LCDC1_DPI_B3,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA62, LCDC1_DPI_B4,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA63, LCDC1_DPI_B5,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA65, LCDC1_DPI_B6,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA67, LCDC1_DPI_B7,  PIN_NOPULL, 1);
    //HAL_PIN_Set(PAD_PA67, LCDC1_DPI_CM,  PIN_NOPULL, 1);
#else
#if 0
    //TODO: need to be disabled
    HAL_PIN_Set(PAD_PA46, LCDC1_SPI_CLK, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA44, LCDC1_SPI_CS, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA50, LCDC1_SPI_DIO0, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA48, LCDC1_SPI_DIO1, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA47, LCDC1_SPI_DIO2, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA45, LCDC1_SPI_DIO3, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA43, LCDC1_SPI_TE, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA24, LCDC1_SPI_RSTB, PIN_PULLUP, 1);
#endif
#endif

#endif// SDIO


#endif

    // LCPU pins
    HAL_PIN_Set(PAD_PB14, USART6_TXD, PIN_NOPULL, 0);
    HAL_PIN_Set(PAD_PB13, USART6_RXD, PIN_PULLUP, 0);

    // PTC debug pin
    HAL_PIN_Set(PAD_PB18, GPIO_B18, PIN_NOPULL, 0);

    HAL_PIN_Set(PAD_PB32, ANA_PIN_FUNC, PIN_NOPULL, 0); // AUD RESET USED AS ADC 0 , remove it if audio i2s3 use reset
    HAL_PIN_Set(PAD_PB34, ANA_PIN_FUNC, PIN_NOPULL, 0); // AUD MCLK, USED AS GPADC CH2
    HAL_PIN_Set(PAD_PB33, ANA_PIN_FUNC, PIN_NOPULL, 0); // NTC GPADC CH1
    HAL_PIN_Set(PAD_PB35, ANA_PIN_FUNC, PIN_NOPULL, 0); // VBAT GPADC CH3
#if defined(SOC_BF0_LCPU)
    HAL_PIN_Set_Analog(PAD_PB32, 0);
    HAL_PIN_Set_Analog(PAD_PB33, 0);
    HAL_PIN_Set_Analog(PAD_PB34, 0);
    HAL_PIN_Set_Analog(PAD_PB35, 0);

#endif


    // Key1
    HAL_PIN_Set(PAD_PB54, GPIO_B43, PIN_NOPULL, 0);

    HAL_PIN_Set(PAD_PB37, USART4_TXD, PIN_NOPULL, 0);
    HAL_PIN_Set(PAD_PB36, USART4_RXD, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB18, USART5_TXD, PIN_NOPULL, 0);
    HAL_PIN_Set(PAD_PB17, USART5_RXD, PIN_PULLUP, 0);

    // I2C5
    HAL_PIN_Set(PAD_PB48, I2C5_SCL, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB47, I2C5_SDA, PIN_PULLUP, 0);

    // I2C6
    HAL_PIN_Set(PAD_PB28, I2C6_SCL, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB29, I2C6_SDA, PIN_PULLUP, 0);

#if 0
    //TODO:
    HAL_PIN_Set(PAD_PB12, SPI4_CLK, PIN_NOPULL, 0);
    HAL_PIN_Set(PAD_PB19, SPI4_CS, PIN_NOPULL, 0);
    HAL_PIN_Set(PAD_PB15, SPI4_DI, PIN_PULLDOWN, 0);
    HAL_PIN_Set(PAD_PB16, SPI4_DO, PIN_NOPULL, 0);
#endif

#if defined(BSP_LCDC_USING_JDI_PARALLEL)
    HAL_PIN_Set(PAD_PB15, LCDC2_JDI_VCK, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB19, LCDC2_JDI_VST, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB16, LCDC2_JDI_XRST, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB05, LCDC2_JDI_HCK, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB10, LCDC2_JDI_HST, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB12, LCDC2_JDI_ENB, PIN_PULLUP, 0);
    //HAL_PIN_Set(PAD_PB42, LCDC2_JDI_DIO1, PIN_PULLUP, 0);
    //HAL_PIN_Set(PAD_PB44, LCDC2_JDI_FRP, PIN_PULLUP, 0);
    //HAL_PIN_Set(PAD_PB45, LCDC2_JDI_XFRP, PIN_PULLUP, 0);
    //HAL_PIN_Set(PAD_PB47, LCDC2_JDI_VCOM, PIN_PULLUP, 0);
    /*
        lcdc_jdi_frp  ---- PBR3
        lcdc_jdi_xfrp ---- PBR4
        lcdc_jdi_vcom ---- PBR5
    */
    HAL_PIN_Set(PAD_PB09, LCDC2_JDI_R1, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB06, LCDC2_JDI_R2, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB08, LCDC2_JDI_G1, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB04, LCDC2_JDI_G2, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB02, LCDC2_JDI_B1, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB03, LCDC2_JDI_B2, PIN_PULLUP, 0);
#else
    /*LCD SPI*/
    HAL_PIN_Set(PAD_PB02, LCDC2_SPI_TE,   PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB03, LCDC2_SPI_DIO1, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB04, LCDC2_SPI_DIO2, PIN_PULLUP, 0);
    //HAL_PIN_Set(PAD_PB05, LCDC2_SPI_RSTB, PIN_PULLUP, 0); Use default gpio mode
    HAL_PIN_Set(PAD_PB06, LCDC2_SPI_DIO3, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB08, LCDC2_SPI_CS,   PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB09, LCDC2_SPI_DIO0, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB10, LCDC2_SPI_CLK,  PIN_PULLUP, 0);
#endif

#if !defined(BSP_LCDC_USING_JDI_PARALLEL)
    HAL_PIN_Set(PAD_PB12, SPI4_CLK, PIN_PULLDOWN, 0);             // SPI4 (GSensor)
    HAL_PIN_Set(PAD_PB15, SPI4_DI, PIN_PULLDOWN, 0);
    HAL_PIN_Set(PAD_PB16, SPI4_DO, PIN_PULLDOWN, 0);
    HAL_PIN_Set(PAD_PB19, SPI4_CS, PIN_PULLUP, 0);
#endif
    HAL_PIN_Set(PAD_PB59, GPIO_B59, PIN_NOPULL, 0);             // SPI4_EN



    HAL_PIN_Set(PAD_PB28, I2C6_SCL, PIN_PULLUP, 0);             // I2C6 (Heart rate sensor)
    HAL_PIN_Set(PAD_PB29, I2C6_SDA, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB39, GPIO_B39, PIN_NOPULL, 0);              // Heart power
    HAL_PIN_Set(PAD_PB57, GPIO_B57, PIN_NOPULL, 0);              // hrt INT

    HAL_PIN_Set(PAD_PB53, GPIO_B53, PIN_PULLUP, 0);     //BSP_CHARGER_EN_PIN
    HAL_PIN_Set(PAD_PB47, GPIO_B47, PIN_PULLUP, 0);     //BSP_CHARGE_FULL_PIN
    HAL_PIN_Set(PAD_PB48, GPIO_B48, PIN_PULLUP, 0);     //BSP_CHARGING_PIN
    HAL_PIN_Set(PAD_PB56, GPIO_B56, PIN_PULLDOWN, 0);     //BSP_CHARGER_INT_PIN   INT
}


/************************ (C) COPYRIGHT Sifli Technology *******END OF FILE****/
