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

void BSP_PIN_Init(void)
{
#ifdef SOC_BF0_HCPU
    // HCPU pins
#ifdef BSP_USING_PSRAM
#ifdef BSP_ENABLE_MPI1
    // PSRAM
    HAL_PIN_Set(PAD_SA01, MPI1_DIO0, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA02, MPI1_DIO1, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA03, MPI1_DIO2, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA04, MPI1_DIO3, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA08, MPI1_DIO4, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA09, MPI1_DIO5, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA10, MPI1_DIO6, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA11, MPI1_DIO7, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SA07, MPI1_CLK,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_SA06, MPI1_CS,   PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_SA12, MPI1_DQSDM, PIN_PULLDOWN, 1);
#else
    // PSRAM
    // MPI2 PSRAM
    HAL_PIN_Set(PAD_SB01, MPI2_DIO0, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB02, MPI2_DIO1, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB03, MPI2_DIO2, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB04, MPI2_DIO3, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB05, MPI2_DIO4, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB06, MPI2_DIO5, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB07, MPI2_DIO6, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB08, MPI2_DIO7, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_SB11, MPI2_CLK,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_SB12, MPI2_CS,   PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_SB09, MPI2_DQSDM, PIN_PULLDOWN, 1);
#endif
#endif

    HAL_PIN_Set(PAD_PA72, GPIO_A72, PIN_PULLUP, 1);               // SB_EN/MPI2_EN
    HAL_PIN_Set(PAD_PA74, GPIO_A74, PIN_PULLUP, 1);               // SA_EN/MPI1_EN

    HAL_PIN_Set(PAD_PA00, WLAN_ACTIVE, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA01, BT_ACTIVE, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA02, GPIO_A2,  PIN_PULLDOWN, 1);               // WLAN_RST
    HAL_PIN_Set(PAD_PA04, GPIO_A4,  PIN_PULLDOWN, 1);               // MCU_WLAN_GPIO

    HAL_PIN_Set(PAD_PA03, GPIO_A3,  PIN_PULLUP, 1);                 // MPI3_SD2_EN
#ifdef BSP_ENABLE_MPI3
    // MPI3
    HAL_PIN_Set(PAD_PA06, MPI3_CS,  PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA07, MPI3_DIO1, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA08, MPI3_DIO2, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA09, MPI3_DIO0, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA10, MPI3_CLK, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA11, MPI3_DIO3, PIN_PULLUP, 1);
#endif

#ifdef BSP_USING_SDIO
    HAL_PIN_Set(PAD_PA05, GPIO_A5,  PIN_PULLUP, 1);   // SD1_EN

    HAL_PIN_Set(PAD_PA12, SD1_DIO2, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA13, SD1_DIO6, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA14, SD1_DIO7, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA15, SD1_DIO1, PIN_PULLDOWN, 1);

    HAL_PIN_Set(PAD_PA19, SD1_DIO5, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA20, SD1_DIO3, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA21, SD1_DIO4, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA22, SD1_DIO0, PIN_PULLUP, 1);

    HAL_PIN_Set(PAD_PA23, GPIO_A23, PIN_PULLUP, 1);    // SD1 Reset
#endif
    HAL_PIN_Set(PAD_PA16, GPIO_A16, PIN_NOPULL, 1);     // Motor_PWM_Ctrl

#ifdef BSP_USING_USBD
    HAL_PIN_Set_Analog(PAD_PA17, 1);
    HAL_PIN_Set_Analog(PAD_PA18, 1);
#endif

    HAL_PIN_Set(PAD_PA24, I2C4_SCL, PIN_PULLDOWN, 1);   // I2C4 SCL
    HAL_PIN_Set(PAD_PA25, I2C4_SDA, PIN_PULLDOWN, 1);   // I2C4 SDA
    HAL_PIN_Set(PAD_PA77, GPIO_A77, PIN_PULLDOWN, 1);   // I2C4 INT

#ifdef BSP_USING_SDIO
    HAL_PIN_Set(PAD_PA26, SD1_CLK, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA27, SD1_CMD, PIN_PULLUP, 1);
#endif

    // UART2
    HAL_PIN_Set(PAD_PA28, USART2_TXD, PIN_NOPULL, 1);   // UART2_TXD
    HAL_PIN_Set(PAD_PA29, USART2_RXD, PIN_PULLUP, 1);   // UART2_RXD

    HAL_PIN_Set(PAD_PA30, USART1_RXD, PIN_PULLUP, 1);   // UART1_RXD
    HAL_PIN_Set(PAD_PA34, USART1_TXD, PIN_PULLUP, 1);   // UART1_TXD

    HAL_PIN_Set(PAD_PA31, GPIO_A31, PIN_NOPULL, 1);     // LCD_VIO_EN
    HAL_PIN_Set(PAD_PA33, LCDC1_SPI_TE, PIN_NOPULL, 1);
#if defined(LCD_USING_PWM_AS_BACKLIGHT)
    HAL_PIN_Set(PAD_PA35, GPTIM1_CH4, PIN_NOPULL, 1);     // LCD backlight PWM
#else
    HAL_PIN_Set(PAD_PA35, GPIO_A35, PIN_NOPULL, 1);     // LCD backlight Control pin
#endif
    HAL_PIN_Set(PAD_PA36, LCDC1_SPI_CS, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA37, LCDC1_SPI_CLK, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA38, LCDC1_SPI_DIO0, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA39, LCDC1_SPI_DIO1, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA40, LCDC1_SPI_DIO2, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA41, LCDC1_SPI_DIO3, PIN_NOPULL, 1);
    HAL_PIN_Set(PAD_PA43, GPIO_A43, PIN_PULLDOWN, 1); // LCDC1 Reset pin
    HAL_PIN_Set(PAD_PA47, GPIO_A47, PIN_PULLDOWN, 1);       // LCDC1 VDD_EN

    HAL_PIN_Set(PAD_PA32, GPIO_A32, PIN_PULLDOWN, 1);   // MOTOR_EN

    // I2C1 for touch panel
    HAL_PIN_Set(PAD_PA44, GPIO_A44, PIN_PULLDOWN, 1);     // I2C1 Reset
    HAL_PIN_Set(PAD_PA45, GPIO_A45, PIN_PULLDOWN, 1);     // I2C1 VIO_EN
    HAL_PIN_Set(PAD_PA46, GPIO_A46, PIN_PULLDOWN, 1);     // I2C1 VDD_EN
    HAL_PIN_Set(PAD_PA48, I2C1_SCL, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA49, I2C1_SDA, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA50, GPIO_A50, PIN_PULLDOWN, 1);     // CTP_WKUP_INT, WKUP_PIN5

    HAL_PIN_Set(PAD_PA51, GPIO_A51, PIN_PULLDOWN, 1);     // WLAN_WKUP_INT, WKUP_PIN6
    HAL_PIN_Set(PAD_PA52, GPIO_A52, PIN_PULLDOWN, 1);     // NFC_INT, WKUP_PIN7
    HAL_PIN_Set(PAD_PA53, GPIO_A53, PIN_PULLDOWN, 1);     // LTE_INT, WKUP_PIN8
    HAL_PIN_Set(PAD_PA54, GPIO_A54, PIN_PULLDOWN, 1);     // WKUP_PIN9, RESERVED

    // PAD_PA55   XTAL32K_XI
    // PAD_PA56   XTAL32K_XO

    HAL_PIN_Set(PAD_PA42, GPIO_A32, PIN_PULLDOWN, 1);   // SPI1_EN
    HAL_PIN_Set(PAD_PA57, SPI1_CLK, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA58, SPI1_CS, PIN_PULLUP, 1);
    HAL_PIN_Set(PAD_PA59, SPI1_DI, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA60, GPIO_A60, PIN_PULLDOWN, 1);   // SP1_RST
    HAL_PIN_Set(PAD_PA61, SPI1_DO, PIN_PULLDOWN, 1);

    HAL_PIN_Set(PAD_PA62, I2C3_SDA, PIN_PULLUP, 1);     // I2C3, Audio PA
    HAL_PIN_Set(PAD_PA63, I2C3_SCL, PIN_PULLUP, 1);

    HAL_PIN_Set(PAD_PA65, GPIO_A65, PIN_PULLDOWN, 1);   // DAC_RST
    HAL_PIN_Set(PAD_PA66, GPIO_A66, PIN_PULLDOWN, 1);   // LTE_GPIO
    HAL_PIN_Set(PAD_PA67, GPIO_A67, PIN_PULLDOWN, 1);   // NFC_DWL_REQ
    HAL_PIN_Set(PAD_PA68, GPIO_A68, PIN_PULLDOWN, 1);   // NFC_VEN
    HAL_PIN_Set(PAD_PA70, GPIO_A70, PIN_PULLDOWN, 1);   // NFC_EN

    // I2S1
    HAL_PIN_Set(PAD_PA64, I2S1_SDO, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA69, I2S1_SDI, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA71, I2S1_LRCK, PIN_PULLDOWN, 1);
    HAL_PIN_Set(PAD_PA73, I2S1_BCK, PIN_PULLDOWN, 1);

    // I2C2
    HAL_PIN_Set(PAD_PA75, I2C2_SCL, PIN_PULLUP, 1);     //NFC_I2C2_SCL
    HAL_PIN_Set(PAD_PA76, I2C2_SDA, PIN_PULLUP, 1);     //NFC_I2C2_SDA

    HAL_PIN_Set(PAD_PA72, GPIO_A72, PIN_PULLUP, 1);     // MPI2_EN
    HAL_PIN_Set(PAD_PA78, GPIO_A78, PIN_PULLDOWN, 1);   // DAC_VCC_EN

#endif

    // I2C7
    HAL_PIN_Set(PAD_PB00, I2C7_SDA, PIN_PULLUP, 0);     // Charger I2C
    HAL_PIN_Set(PAD_PB01, I2C7_SCL, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB36, GPIO_B36, PIN_PULLDOWN, 0);   // Charger plug-in interrupt  WKUP4_CHARGER_INT
    HAL_PIN_Set(PAD_PB22, GPIO_B22, PIN_PULLDOWN, 0);   // Charger status

    HAL_PIN_Set(PAD_PB03, GPIO_B3,  PIN_PULLDOWN, 0);   // FUEL_GAUGE_INT

    HAL_PIN_Set(PAD_PB04, GPIO_B4, PIN_PULLUP, 0);    // Connect SF30147C
    HAL_PIN_Set(PAD_PB05, GPIO_B5, PIN_PULLUP, 0);
//    HAL_PIN_Set(PAD_PB04, TWI_CLK, PIN_PULLUP, 0);    // Connect SF30147C
//    HAL_PIN_Set(PAD_PB05, TWI_DIO, PIN_PULLUP, 0);

    // UART6
    HAL_PIN_Set(PAD_PB06, USART6_TXD, PIN_PULLDOWN, 0);
    HAL_PIN_Set(PAD_PB07, USART6_RXD, PIN_PULLDOWN, 0);

    // UART5
    HAL_PIN_Set(PAD_PB08, USART5_RTS,   PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB10, USART5_RXD,   PIN_PULLDOWN, 0);
    HAL_PIN_Set(PAD_PB12, USART5_CTS,   PIN_PULLDOWN, 0);
    HAL_PIN_Set(PAD_PB14, USART5_TXD,   PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB35, GPIO_B35,    PIN_PULLDOWN, 0); // WKUP3_UART5_INT

    HAL_PIN_Set(PAD_PB09, GPIO_B9,  PIN_PULLDOWN, 0);     // NTC_EN
    HAL_PIN_Set(PAD_PB11, GPIO_B11, PIN_PULLDOWN, 0);     // GPS_EN
    // PAD_B13 SWDIO
    // PAD_B15 SWDCLK

    // UART4, LCPU default console
    HAL_PIN_Set(PAD_PB16, USART4_RXD,  PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB17, USART4_TXD,  PIN_PULLUP, 0);


    // SPI3, Acc sensor
    HAL_PIN_Set(PAD_PB02, GPIO_B2,  PIN_PULLDOWN, 0);   // SPI3_EN
    HAL_PIN_Set(PAD_PB33, GPIO_B33, PIN_PULLDOWN, 0);   // WKUP1_SPI3_INT
    HAL_PIN_Set(PAD_PB18, SPI3_CS,  PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB19, SPI3_CLK, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB20, SPI3_DI,  PIN_PULLDOWN, 0);
    HAL_PIN_Set(PAD_PB21, SPI3_DO,  PIN_PULLDOWN, 0);


    // I2C5 Heartrate/Environment light/Magnatic sensor
    HAL_PIN_Set(PAD_PB23, I2C5_SDA, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB24, I2C5_SCL, PIN_PULLUP, 0);
    HAL_PIN_Set(PAD_PB28, GPIO_B28, PIN_PULLDOWN, 0);  //I2C5_EN
    HAL_PIN_Set(PAD_PB34, GPIO_B34, PIN_PULLDOWN, 0);  //WKUP2_I2C5_INT

    // TODO: Check analog pin config.
    //HAL_PIN_Set_Analog(PAD_PB26,0);                   // #GPADC_CH4, NTC_GPADC_CH4, Battery temperature
    //HAL_PIN_Set_Analog(PAD_PB27,0);                   // #GPADC_CH5, VBAT_GPADC_CH5, Battery voltage

    HAL_PIN_Set(PAD_PB29, GPIO_B29, PIN_PULLDOWN, 0);   // ANT_SW
    HAL_PIN_Set(PAD_PB30, GPIO_B30, PIN_PULLDOWN, 0);   // MCU_WKUP_GPS
    HAL_PIN_Set(PAD_PB31, GPIO_B31, PIN_PULLDOWN, 0);   // GPS_EXT_PWR_EN
    HAL_PIN_Set(PAD_PB32, GPIO_B32, PIN_PULLDOWN, 0);   // KEY_LONGPRESS_RESET

    // TODO: set following pin
    // PAD_PBR0 SIP_PSW/32K_CLK_OUTPUT,
    // PAD_PBR1 LPTIM0
    // PAD_PBR2 LPTIM1
    // PAD_PBR3 32K_OUT0

}


/************************ (C) COPYRIGHT Sifli Technology *******END OF FILE****/
