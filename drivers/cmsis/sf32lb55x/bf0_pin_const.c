#include "bf0_pin_const.h"
#ifdef PIN_DEBUG
const char pin_function_str[][20] =
{
    "UNDEF",
    "PSRAM_CLK",
    "PSRAM_CLKB",
    "PSRAM_CS",
    "PSRAM_DM0",
    "PSRAM_DM1",
    "PSRAM_DQS0",
    "PSRAM_DQS1",
    "PSRAM_DQ0",
    "PSRAM_DQ1",
    "PSRAM_DQ2",
    "PSRAM_DQ3",
    "PSRAM_DQ4",
    "PSRAM_DQ5",
    "PSRAM_DQ6",
    "PSRAM_DQ7",
    "PSRAM_DQ8",
    "PSRAM_DQ9",
    "PSRAM_DQ10",
    "PSRAM_DQ11",
    "PSRAM_DQ12",
    "PSRAM_DQ13",
    "PSRAM_DQ14",
    "PSRAM_DQ15",
    "QSPI1_CLK",
    "QSPI1_CS",
    "QSPI1_DIO0",
    "QSPI1_DIO1",
    "QSPI1_DIO2",
    "QSPI1_DIO3",
    "QSPI1_DIO4",
    "QSPI1_DIO5",
    "QSPI1_DIO6",
    "QSPI1_DIO7",
    "QSPI2_CLK",
    "QSPI2_CS",
    "QSPI2_DIO0",
    "QSPI2_DIO1",
    "QSPI2_DIO2",
    "QSPI2_DIO3",
    "QSPI2_DIO4",
    "QSPI2_DIO5",
    "QSPI2_DIO6",
    "QSPI2_DIO7",
    "QSPI3_CLK",
    "QSPI3_CS",
    "QSPI3_DIO0",
    "QSPI3_DIO1",
    "QSPI3_DIO2",
    "QSPI3_DIO3",
    "QSPI3_DIO4",
    "QSPI3_DIO5",
    "QSPI3_DIO6",
    "QSPI3_DIO7",
    "QSPI4_CLK",
    "QSPI4_CS",
    "QSPI4_DIO0",
    "QSPI4_DIO1",
    "QSPI4_DIO2",
    "QSPI4_DIO3",
    "QSPI4_DIO4",
    "QSPI4_DIO5",
    "QSPI4_DIO6",
    "QSPI4_DIO7",
    "GPIO_A0",
    "GPIO_A1",
    "GPIO_A2",
    "GPIO_A3",
    "GPIO_A4",
    "GPIO_A5",
    "GPIO_A6",
    "GPIO_A7",
    "GPIO_A8",
    "GPIO_A9",
    "GPIO_A10",
    "GPIO_A11",
    "GPIO_A12",
    "GPIO_A13",
    "GPIO_A14",
    "GPIO_A15",
    "GPIO_A16",
    "GPIO_A17",
    "GPIO_A18",
    "GPIO_A19",
    "GPIO_A20",
    "GPIO_A21",
    "GPIO_A22",
    "GPIO_A23",
    "GPIO_A24",
    "GPIO_A25",
    "GPIO_A26",
    "GPIO_A27",
    "GPIO_A28",
    "GPIO_A29",
    "GPIO_A30",
    "GPIO_A31",
    "GPIO_A32",
    "GPIO_A33",
    "GPIO_A34",
    "GPIO_A35",
    "GPIO_A36",
    "GPIO_A37",
    "GPIO_A38",
    "GPIO_A39",
    "GPIO_A40",
    "GPIO_A41",
    "GPIO_A42",
    "GPIO_A43",
    "GPIO_A44",
    "GPIO_A45",
    "GPIO_A46",
    "GPIO_A47",
    "GPIO_A48",
    "GPIO_A49",
    "GPIO_A50",
    "GPIO_A51",
    "GPIO_A52",
    "GPIO_A53",
    "GPIO_A54",
    "GPIO_A55",
    "GPIO_A56",
    "GPIO_A57",
    "GPIO_A58",
    "GPIO_A59",
    "GPIO_A60",
    "GPIO_A61",
    "GPIO_A62",
    "GPIO_A63",
    "GPIO_A64",
    "GPIO_A65",
    "GPIO_A66",
    "GPIO_A67",
    "GPIO_A68",
    "GPIO_A69",
    "GPIO_A70",
    "GPIO_A71",
    "GPIO_A72",
    "GPIO_A73",
    "GPIO_A74",
    "GPIO_A75",
    "GPIO_A76",
    "GPIO_A77",
    "GPIO_A78",
    "GPIO_A79",
    "GPIO_A80",
    "GPIO_A81",
    "GPIO_A82",
    "GPIO_A83",
    "GPIO_A84",
    "GPIO_A85",
    "GPIO_A86",
    "GPIO_A87",
    "GPIO_B0",
    "GPIO_B1",
    "GPIO_B2",
    "GPIO_B3",
    "GPIO_B4",
    "GPIO_B5",
    "GPIO_B6",
    "GPIO_B7",
    "GPIO_B8",
    "GPIO_B9",
    "GPIO_B10",
    "GPIO_B11",
    "GPIO_B12",
    "GPIO_B13",
    "GPIO_B14",
    "GPIO_B15",
    "GPIO_B16",
    "GPIO_B17",
    "GPIO_B18",
    "GPIO_B19",
    "GPIO_B20",
    "GPIO_B21",
    "GPIO_B22",
    "GPIO_B23",
    "GPIO_B24",
    "GPIO_B25",
    "GPIO_B26",
    "GPIO_B27",
    "GPIO_B28",
    "GPIO_B29",
    "GPIO_B30",
    "GPIO_B31",
    "GPIO_B32",
    "GPIO_B33",
    "GPIO_B34",
    "GPIO_B35",
    "GPIO_B36",
    "GPIO_B37",
    "GPIO_B38",
    "GPIO_B39",
    "GPIO_B40",
    "GPIO_B41",
    "GPIO_B42",
    "GPIO_B43",
    "GPIO_B44",
    "GPIO_B45",
    "GPIO_B46",
    "GPIO_B47",
    "GPIO_B48",
    "GPIO_B49",
    "GPIO_B50",
    "GPIO_B51",
    "GPIO_B52",
    "GPIO_B53",
    "GPIO_B54",
    "GPIO_B55",
    "GPIO_B56",
    "GPIO_B57",
    "GPIO_B58",
    "GPIO_B59",
    "GPIO_B60",
    "GPIO_B61",
    "GPIO_B62",
    "GPIO_B63",
    "USART1_RXD",
    "USART1_TXD",
    "USART1_CTS",
    "USART1_RTS",
    "USART2_RXD",
    "USART2_TXD",
    "USART2_CTS",
    "USART2_RTS",
    "USART3_RXD",
    "USART3_TXD",
    "USART3_CTS",
    "USART3_RTS",
    "USART4_RXD",
    "USART4_TXD",
    "USART4_CTS",
    "USART4_RTS",
    "USART5_RXD",
    "USART5_TXD",
    "USART5_CTS",
    "USART5_RTS",
    "I2C1_SCL",
    "I2C1_SDA",
    "I2C2_SCL",
    "I2C2_SDA",
    "I2C3_SCL",
    "I2C3_SDA",
    "I2C4_SCL",
    "I2C4_SDA",
    "I2C5_SCL",
    "I2C5_SDA",
    "I2C6_SCL",
    "I2C6_SDA",
    "SPI1_CLK",
    "SPI1_CS",
    "SPI1_DI",
    "SPI1_DO",
    "SPI1_DIO",
    "SPI2_CLK",
    "SPI2_CS",
    "SPI2_DI",
    "SPI2_DO",
    "SPI2_DIO",
    "SPI3_CLK",
    "SPI3_CS",
    "SPI3_DI",
    "SPI3_DO",
    "SPI3_DIO",
    "SPI4_CLK",
    "SPI4_CS",
    "SPI4_DI",
    "SPI4_DO",
    "SPI4_DIO",
    "SPI5_CLK",
    "SPI5_CS",
    "SPI5_DI",
    "SPI5_DO",
    "SPI5_DIO",
    "LCDC1_SPI_CS",
    "LCDC1_SPI_CLK",
    "LCDC1_SPI_DIO0",
    "LCDC1_SPI_DIO1",
    "LCDC1_SPI_DIO2",
    "LCDC1_SPI_DIO3",
    "LCDC1_SPI_RSTB",
    "LCDC1_SPI_TE",
    "LCDC2_SPI_CS",
    "LCDC2_SPI_CLK",
    "LCDC2_SPI_DIO0",
    "LCDC2_SPI_DIO1",
    "LCDC2_SPI_DIO2",
    "LCDC2_SPI_DIO3",
    "LCDC2_SPI_RSTB",
    "LCDC2_SPI_TE",
    "LCDC1_8080_WR",
    "LCDC1_8080_CS",
    "LCDC1_8080_DIO0",
    "LCDC1_8080_DIO1",
    "LCDC1_8080_DIO2",
    "LCDC1_8080_DIO3",
    "LCDC1_8080_DIO4",
    "LCDC1_8080_DIO5",
    "LCDC1_8080_DIO6",
    "LCDC1_8080_DIO7",
    "LCDC1_8080_RD",
    "LCDC1_8080_DC",
    "LCDC1_8080_RSTB",
    "LCDC1_8080_TE",
    "LCDC1_DPI_CLK",
    "LCDC1_DPI_DE",
    "LCDC1_DPI_SD",
    "LCDC1_DPI_CM",
    "LCDC1_DPI_HSYNC",
    "LCDC1_DPI_VSYNC",
    "LCDC1_DPI_R7",
    "LCDC1_DPI_R6",
    "LCDC1_DPI_R5",
    "LCDC1_DPI_R4",
    "LCDC1_DPI_R3",
    "LCDC1_DPI_R2",
    "LCDC1_DPI_R1",
    "LCDC1_DPI_R0",
    "LCDC1_DPI_G7",
    "LCDC1_DPI_G6",
    "LCDC1_DPI_G5",
    "LCDC1_DPI_G4",
    "LCDC1_DPI_G3",
    "LCDC1_DPI_G2",
    "LCDC1_DPI_G1",
    "LCDC1_DPI_G0",
    "LCDC1_DPI_B7",
    "LCDC1_DPI_B6",
    "LCDC1_DPI_B5",
    "LCDC1_DPI_B4",
    "LCDC1_DPI_B3",
    "LCDC1_DPI_B2",
    "LCDC1_DPI_B1",
    "LCDC1_DPI_B0",
    "LCDC1_JDI_SCLK",
    "LCDC1_JDI_SCS",
    "LCDC1_JDI_SO",
    "LCDC1_JDI_DISP",
    "LCDC1_JDI_EXTCOMIN",
    "LCDC1_JDI_XRST",
    "LCDC1_JDI_VCK",
    "LCDC1_JDI_VST",
    "LCDC1_JDI_ENB",
    "LCDC1_JDI_HCK",
    "LCDC1_JDI_HST",
    "LCDC1_JDI_R1",
    "LCDC1_JDI_R2",
    "LCDC1_JDI_G1",
    "LCDC1_JDI_G2",
    "LCDC1_JDI_B1",
    "LCDC1_JDI_B2",
    "LCDC1_JDI_FRP",
    "LCDC1_JDI_XFRP",
    "LCDC1_JDI_VCOM",
    "SD1_CLK",
    "SD1_CMD",
    "SD1_DIO0",
    "SD1_DIO1",
    "SD1_DIO2",
    "SD1_DIO3",
    "SD1_DIO4",
    "SD1_DIO5",
    "SD1_DIO6",
    "SD1_DIO7",
    "SD2_CLK",
    "SD2_CMD",
    "SD2_DIO0",
    "SD2_DIO1",
    "SD2_DIO2",
    "SD2_DIO3",
    "I2S1_BCK",
    "I2S1_LRCK",
    "I2S1_SDI",
    "I2S2_BCK",
    "I2S2_LRCK",
    "I2S2_SDI",
    "I2S2_SDO",
    "PDM1_CLK",
    "PDM1_DATA",
    "PDM2_CLK",
    "PDM2_DATA",
    "GPTIM1_CH1",
    "GPTIM1_CH2",
    "GPTIM1_CH3",
    "GPTIM1_CH4",
    "GPTIM1_ETR",
    "GPTIM2_CH1",
    "GPTIM2_CH2",
    "GPTIM2_CH3",
    "GPTIM2_CH4",
    "GPTIM2_ETR",
    "GPTIM3_CH1",
    "GPTIM3_CH2",
    "GPTIM3_CH3",
    "GPTIM3_CH4",
    "GPTIM3_ETR",
    "GPTIM4_CH1",
    "GPTIM4_CH2",
    "GPTIM4_CH3",
    "GPTIM4_CH4",
    "GPTIM4_ETR",
    "GPTIM5_CH1",
    "GPTIM5_CH2",
    "GPTIM5_CH3",
    "GPTIM5_CH4",
    "GPTIM5_ETR",
    "IR_OUT",
    "LPTIM1_IN",
    "LPTIM1_OUT",
    "LPTIM1_ETR",
    "LPTIM2_IN",
    "LPTIM2_OUT",
    "LPTIM2_ETR",
    "LPTIM3_IN",
    "LPTIM3_OUT",
    "LPTIM3_ETR",
    "LPCOMP1_OUT",
    "LPCOMP2_OUT",
    "SWCLK",
    "SWDIO",
    "SCAN_CLK",
    "SCAN_RSTB",
    "SCAN_EN",
    "EDT_CLK",
    "EDT_UPDATE",
    "EDT_BYPASS",
    "EDT_CHANNEL_IN0",
    "EDT_CHANNEL_IN1",
    "EDT_CHANNEL_IN2",
    "EDT_CHANNEL_IN3",
    "EDT_CHANNEL_IN4",
    "EDT_CHANNEL_IN5",
    "EDT_CHANNEL_IN6",
    "EDT_CHANNEL_IN7",
    "EDT_CHANNEL_OUT0",
    "EDT_CHANNEL_OUT1",
    "EDT_CHANNEL_OUT2",
    "EDT_CHANNEL_OUT3",
    "EDT_CHANNEL_OUT4",
    "EDT_CHANNEL_OUT5",
    "EDT_CHANNEL_OUT6",
    "EDT_CHANNEL_OUT7",
    "BIST_CLK",
    "BIST_RST",
    "BIST_FAIL",
    "BIST_DONE",
    "DBG_DO0",
    "DBG_DO1",
    "DBG_DO2",
    "DBG_DO3",
    "DBG_DO4",
    "DBG_DO5",
    "DBG_DO6",
    "DBG_DO7",
    "DBG_DO8",
    "DBG_DO9",
    "DBG_DO10",
    "DBG_DO11",
    "DBG_DO12",
    "DBG_DO13",
    "DBG_DO14",
    "DBG_DO15",
    "DBG_CLK",
    "EXT_S_TX_EN",
    "EXT_S_RX_EN",
    "EXT_S_LE_2M",
    "EXT_S_TX_BIT",
    "EXT_S_TX_FLAG",
    "EXT_S_SYNC_CLK",
    "EXT_S_SYNC_DAT",
    "EXT_S_SCLK",
    "EXT_S_SDO",
    "EXT_S_RX_BIT",
    "EXT_S_RX_FLAG",
    "EXT_S_PHY_CLK",
    "EXT_S_PHY_DAT0",
    "EXT_S_PHY_DAT1",
    "EXT_S_PHY_DAT2",
    "EXT_S_PHY_DAT3",
    "EXT_S_PHY_DAT4",
    "EXT_S_PHY_DAT5",
    "EXT_S_PHY_DAT6",
    "EXT_S_PHY_DAT7",
    "EXT_S_PHY_DAT8",
    "EXT_S_PHY_DAT9",
    "EXT_S_PHY_DAT10",
    "LPCOMP1_P",
    "LPCOMP1_N",
    "LPCOMP2_P",
    "LPCOMP2_N",
    "GPADC_CH0",
    "GPADC_CH1",
    "GPADC_CH2",
    "GPADC_CH3",
    "GPADC_CH4",
    "GPADC_CH5",
    "GPADC_CH6",
    "GPADC_CH7",
    "SDADC_CH0",
    "SDADC_CH1",
    "SDADC_CH2",
    "SDADC_CH3",
};
const char pin_pad_str_hcpu[][20] =
{
    "UNDEF",
    "PAD_SIP00",
    "PAD_SIP01",
    "PAD_SIP02",
    "PAD_SIP03",
    "PAD_SIP04",
    "PAD_SIP05",
    "PAD_SIP06",
    "PAD_SIP07",
    "PAD_SIP08",
    "PAD_SIP09",
    "PAD_SIP10",
    "PAD_SIP11",
    "PAD_SIP12",
    "PAD_SIP13",
    "PAD_SIP14",
    "PAD_SIP15",
    "PAD_SIP16",
    "PAD_SIP17",
    "PAD_SIP18",
    "PAD_PA00",
    "PAD_PA01",
    "PAD_PA02",
    "PAD_PA03",
    "PAD_PA04",
    "PAD_PA05",
    "PAD_PA06",
    "PAD_PA07",
    "PAD_PA08",
    "PAD_PA09",
    "PAD_PA10",
    "PAD_PA11",
    "PAD_PA12",
    "PAD_PA13",
    "PAD_PA14",
    "PAD_PA15",
    "PAD_PA16",
    "PAD_PA17",
    "PAD_PA18",
    "PAD_PA19",
    "PAD_PA20",
    "PAD_PA21",
    "PAD_PA22",
    "PAD_PA23",
    "PAD_PA24",
    "PAD_PA25",
    "PAD_PA26",
    "PAD_PA27",
    "PAD_PA28",
    "PAD_PA29",
    "PAD_PA30",
    "PAD_PA31",
    "PAD_PA32",
    "PAD_PA33",
    "PAD_PA34",
    "PAD_PA35",
    "PAD_PA36",
    "PAD_PA37",
    "PAD_PA38",
    "PAD_PA39",
    "PAD_PA40",
    "PAD_PA41",
    "PAD_PA42",
    "PAD_PA43",
    "PAD_PA44",
    "PAD_PA45",
    "PAD_PA46",
    "PAD_PA47",
    "PAD_PA48",
    "PAD_PA49",
    "PAD_PA50",
    "PAD_PA51",
    "PAD_PA52",
    "PAD_PA53",
    "PAD_PA54",
    "PAD_PA55",
    "PAD_PA56",
    "PAD_PA57",
    "PAD_PA58",
    "PAD_PA59",
    "PAD_PA60",
    "PAD_PA61",
    "PAD_PA62",
    "PAD_PA63",
    "PAD_PA64",
    "PAD_PA65",
    "PAD_PA66",
    "PAD_PA67",
    "PAD_PA68",
    "PAD_PA69",
    "PAD_PA70",
    "PAD_PA71",
    "PAD_PA72",
    "PAD_PA73",
    "PAD_PA74",
    "PAD_PA75",
    "PAD_PA76",
    "PAD_PA77",
    "PAD_PA78",
    "PAD_PA79",
    "PAD_PA80",
};
const char pin_pad_str_lcpu[][20] =
{
    "UNDEF",
    "PAD_PB00",
    "PAD_PB01",
    "PAD_PB02",
    "PAD_PB03",
    "PAD_PB04",
    "PAD_PB05",
    "PAD_PB06",
    "PAD_PB07",
    "PAD_PB08",
    "PAD_PB09",
    "PAD_PB10",
    "PAD_PB11",
    "PAD_PB12",
    "PAD_PB13",
    "PAD_PB14",
    "PAD_PB15",
    "PAD_PB16",
    "PAD_PB17",
    "PAD_PB18",
    "PAD_PB19",
    "PAD_PB20",
    "PAD_PB21",
    "PAD_PB22",
    "PAD_PB23",
    "PAD_PB24",
    "PAD_PB25",
    "PAD_PB26",
    "PAD_PB27",
    "PAD_PB28",
    "PAD_PB29",
    "PAD_PB30",
    "PAD_PB31",
    "PAD_PB32",
    "PAD_PB33",
    "PAD_PB34",
    "PAD_PB35",
    "PAD_PB36",
    "PAD_PB37",
    "PAD_PB38",
    "PAD_PB39",
    "PAD_PB40",
    "PAD_PB41",
    "PAD_PB42",
    "PAD_PB43",
    "PAD_PB44",
    "PAD_PB45",
    "PAD_PB46",
    "PAD_PB47",
    "PAD_PB48",
};
#endif
const unsigned short pin_pad_func_hcpu[][16] =
{
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, QSPI1_CS,   0,  PSRAM_DM0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, QSPI1_DIO5, 0,  PSRAM_DQ0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, QSPI1_DIO6, 0,  PSRAM_DQ1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, 0,  0,  PSRAM_DQ2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, 0,  QSPI2_DIO0, PSRAM_DQ3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, 0,  QSPI2_DIO2, PSRAM_CS,   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, 0,  QSPI2_DIO1, PSRAM_CLKB, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, 0,  QSPI2_CS,   PSRAM_CLK,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, 0,  QSPI2_CLK,  PSRAM_DQ4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, 0,  QSPI2_DIO3, PSRAM_DQ5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, QSPI1_DIO4, 0,  PSRAM_DQ6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, QSPI1_CLK,  0,  PSRAM_DQ7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {0, QSPI1_DIO7, 0,  PSRAM_DQS0, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {QSPI1_CS,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {QSPI1_DIO1,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {QSPI1_DIO2,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {QSPI1_DIO0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {QSPI1_CLK, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {QSPI1_DIO3,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A0,   QSPI3_CLK,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A1,   QSPI3_CS,   0,  LPTIM1_IN,  PDM1_CLK,   I2S1_BCK,   0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A2,   0,  PSRAM_DQ0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A3,   QSPI3_DIO0, 0,  LPTIM1_OUT, PDM1_DATA,  I2S1_SDI,   0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A4,   0,  PSRAM_DQ1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A5,   QSPI3_DIO1, PSRAM_DQ2,  USART2_RXD, PDM1_DATA,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A6,   0,  PSRAM_DQ3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A7,   QSPI3_DIO2, PSRAM_CS,   USART2_TXD, PDM1_CLK,   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A8,   QSPI3_DIO3, PSRAM_CLK,  USART2_CTS, PSRAM_CLKB, I2S1_LRCK,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A9,   0,  PSRAM_DQ4,  USART2_RTS, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A10,  0,  0,  I2C1_SCL,   0,  0,  0,  0,  0,  0,  0,  0,  DBG_DO0,    BIST_DONE,  EDT_CLK,    0},
    {GPIO_A11,  0,  PSRAM_DQ5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A12,  0,  PSRAM_DQ6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A13,  0,  PSRAM_DQ7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A14,  0,  0,  I2C1_SDA,   0,  0,  0,  0,  0,  0,  GPTIM2_CH4, 0,  DBG_DO1,    BIST_FAIL,  EDT_UPDATE, 0},
    {GPIO_A15,  0,  PSRAM_DQS0, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A17,  0,  0,  USART1_TXD, 0,  0,  0,  0,  0,  LCDC1_DPI_CLK,  0,  0,  0,  0,  0,  0},
    {GPIO_A18,  0,  PSRAM_DQ8,  SPI2_DO,    SPI2_DIO,   0,  0,  LCDC1_SPI_DIO1, 0,  LCDC1_DPI_DE,   0,  0,  0,  0,  0,  0},
    {GPIO_A19,  0,  0,  USART1_RXD, 0,  0,  0,  0,  0,  LCDC1_DPI_R0,   0,  0,  0,  0,  0,  0},
    {GPIO_A20,  0,  PSRAM_CLK,  SPI2_CLK,   0,  0,  0,  LCDC1_SPI_CLK,  LCDC1_8080_WR,  0,  LCDC1_JDI_SCLK, LCDC1_JDI_VCK,  0,  0,  0,  0},
    {GPIO_A21,  0,  0,  0,  0,  I2S2_SDO,   0,  0,  0,  LCDC1_DPI_R1,   0,  0,  0,  0,  0,  0},
    {GPIO_A22,  0,  PSRAM_DQ9,  0,  0,  SD2_DIO0,   SD1_DIO6,   LCDC1_SPI_CS,   0,  LCDC1_DPI_R2,   0,  0,  0,  0,  0,  0},
    {GPIO_A23,  0,  0,  0,  PDM2_CLK,   I2S2_BCK,   0,  0,  0,  LCDC1_DPI_R3,   0,  0,  0,  0,  0,  0},
    {GPIO_A24,  0,  PSRAM_DQ10, 0,  0,  SD2_DIO2,   SD1_DIO7,   0,  0,  LCDC1_DPI_R4,   0,  0,  0,  0,  0,  0},
    {GPIO_A25,  0,  0,  0,  0,  I2S2_LRCK,  0,  0,  0,  LCDC1_DPI_R5,   0,  0,  0,  0,  0,  0},
    {GPIO_A26,  0,  PSRAM_DQS1, 0,  0,  SD2_CLK,    0,  0,  0,  LCDC1_DPI_R6,   0,  0,  0,  0,  0,  0},
    {GPIO_A27,  0,  0,  0,  PDM2_DATA,  I2S2_SDI,   0,  0,  0,  LCDC1_DPI_R7,   0,  0,  0,  0,  0,  0},
    {GPIO_A28,  0,  PSRAM_DQ0,  0,  0,  0,  SD1_DIO0,   0,  0,  LCDC1_DPI_G0,   0,  0,  0,  0,  0,  0},
    {GPIO_A29,  0,  PSRAM_DQ1,  0,  0,  0,  SD1_DIO1,   0,  0,  LCDC1_DPI_G1,   0,  0,  0,  0,  0,  0},
    {GPIO_A30,  0,  PSRAM_DQ2,  0,  0,  0,  SD1_DIO2,   0,  0,  LCDC1_DPI_G2,   0,  0,  0,  0,  0,  0},
    {GPIO_A31,  0,  PSRAM_DQ3,  0,  0,  0,  SD1_DIO3,   LCDC1_SPI_CS,   LCDC1_8080_CS,  LCDC1_DPI_G3,   LCDC1_JDI_SCS,  LCDC1_JDI_VST,  DBG_DO2,    0,  0,  0},
    {GPIO_A32,  0,  PSRAM_DQ11, SPI2_DI,    0,  0,  0,  LCDC1_SPI_DIO0, 0,  LCDC1_DPI_G4,   0,  0,  0,  0,  0,  0},
    {GPIO_A33,  0,  PSRAM_DQ12, SPI2_CS,    0,  0,  0,  LCDC1_SPI_DIO2, 0,  LCDC1_DPI_G5,   0,  0,  0,  0,  0,  0},
    {GPIO_A34,  0,  PSRAM_DQ4,  0,  0,  0,  SD1_CLK,    LCDC1_SPI_DIO0, LCDC1_8080_RD,  LCDC1_DPI_G6,   LCDC1_JDI_SO,   LCDC1_JDI_XRST, 0,  0,  0,  0},
    {GPIO_A35,  0,  PSRAM_DQS0, 0,  PDM1_CLK,   I2S1_BCK,   0,  LCDC1_SPI_TE,   LCDC1_8080_TE,  LCDC1_DPI_G7,   0,  0,  0,  0,  0,  0},
    {GPIO_A36,  0,  PSRAM_DQ5,  0,  0,  0,  SD1_CMD,    LCDC1_SPI_DIO1, LCDC1_8080_DC,  LCDC1_DPI_B0,   LCDC1_JDI_DISP, LCDC1_JDI_HCK,  0,  0,  0,  0},
    {GPIO_A37,  0,  PSRAM_CS,   SPI2_CLK,   0,  I2S1_LRCK,  0,  LCDC1_SPI_RSTB, LCDC1_8080_RSTB,    0,  0,  0,  0,  0,  0,  0},
    {GPIO_A38,  0,  PSRAM_DQ6,  0,  0,  0,  0,  LCDC1_SPI_DIO2, LCDC1_8080_DIO0,    LCDC1_DPI_B1,   LCDC1_JDI_EXTCOMIN, LCDC1_JDI_HST,  DBG_DO3,    0,  0,  0},
    {GPIO_A39,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A41,  0,  0,  0,  SPI2_DI,    0,  0,  0,  0,  LCDC1_DPI_B2,   0,  0,  0,  0,  0,  0},
    {GPIO_A42,  0,  PSRAM_DQ7,  0,  0,  0,  0,  LCDC1_SPI_DIO3, LCDC1_8080_DIO1,    LCDC1_DPI_B3,   0,  LCDC1_JDI_ENB,  DBG_DO4,    0,  0,  0},
    {GPIO_A43,  0,  0,  0,  0,  0,  0,  0,  0,  LCDC1_DPI_B4,   GPTIM1_ETR, 0,  0,  0,  0,  0},
    {GPIO_A44,  QSPI3_CLK,  0,  0,  SPI2_CLK,   I2S2_BCK,   SD2_CLK,    0,  LCDC1_8080_DIO2,    LCDC1_DPI_B5,   GPTIM1_CH1, LCDC1_JDI_FRP,  DBG_DO5,    0,  0,  0},
    {GPIO_A45,  QSPI3_CS,   0,  0,  SPI2_CS,    I2S2_LRCK,  SD2_CMD,    0,  LCDC1_8080_DIO3,    LCDC1_DPI_B6,   GPTIM1_CH2, LCDC1_JDI_XFRP, DBG_DO6,    0,  EDT_BYPASS, 0},
    {GPIO_A46,  0,  0,  I2C2_SCL,   USART1_CTS, 0,  0,  0,  0,  LCDC1_DPI_B7,   GPTIM1_CH3, 0,  0,  0,  0,  0},
    {GPIO_A47,  QSPI3_DIO0, QSPI2_DIO4, 0,  SPI2_DI,    I2S2_SDI,   SD2_DIO0,   SD1_DIO4,   LCDC1_8080_DIO4,    0,  GPTIM1_CH4, LCDC1_JDI_VCOM, DBG_DO7,    0,  EDT_CHANNEL_IN0,    0},
    {GPIO_A48,  0,  0,  USART2_TXD, USART1_RTS, I2C2_SDA,   0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A49,  QSPI3_DIO1, QSPI2_DIO5, USART2_RXD, SPI2_DO,    SPI2_DIO,   SD2_DIO1,   SD1_DIO5,   LCDC1_8080_DIO5,    0,  0,  LCDC1_JDI_R1,   DBG_DO8,    0,  EDT_CHANNEL_IN1,    0},
    {GPIO_A50,  0,  0,  I2C3_SCL,   USART1_TXD, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A51,  QSPI3_DIO2, QSPI2_DIO6, 0,  USART1_RXD, 0,  SD2_DIO2,   SD1_DIO6,   LCDC1_8080_DIO6,    0,  0,  LCDC1_JDI_R2,   DBG_DO9,    0,  EDT_CHANNEL_IN2,    0},
    {GPIO_A52,  0,  QSPI2_DIO4, SPI1_CLK,   0,  0,  0,  0,  0,  0,  GPTIM2_CH1, 0,  0,  0,  0,  0},
    {GPIO_A53,  0,  QSPI2_DIO5, SPI1_CS,    USART1_TXD, 0,  0,  0,  0,  0,  GPTIM2_CH2, 0,  0,  0,  0,  0},
    {GPIO_A54,  0,  QSPI2_DIO6, SPI1_DI,    USART1_RXD, 0,  0,  0,  0,  0,  GPTIM2_CH3, 0,  0,  0,  0,  0},
    {GPIO_A55,  QSPI3_DIO3, QSPI2_DIO7, 0,  0,  0,  SD2_DIO3,   SD1_DIO7,   LCDC1_8080_DIO7,    0,  0,  LCDC1_JDI_G1,   DBG_DO10,   0,  EDT_CHANNEL_IN3,    0},
    {GPIO_A56,  0,  QSPI2_DIO7, SPI1_DO,    SPI1_DIO,   0,  0,  0,  0,  0,  GPTIM2_CH4, 0,  0,  0,  0,  0},
    {GPIO_A57,  0,  0,  I2C3_SDA,   0,  0,  0,  0,  0,  0,  GPTIM2_ETR, 0,  0,  0,  0,  0},
    {GPIO_A58,  0,  0,  0,  LPTIM1_ETR, 0,  0,  0,  0,  0,  0,  0,  DBG_DO11,   0,  SCAN_EN,    0},
    {GPIO_A59,  0,  PSRAM_DQ13, 0,  0,  SD2_CMD,    0,  LCDC1_SPI_DIO3, 0,  LCDC1_DPI_HSYNC,    0,  0,  0,  0,  0,  0},
    {GPIO_A60,  QSPI2_CLK,  0,  0,  0,  0,  SD1_CLK,    0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A61,  QSPI2_CS,   0,  0,  0,  0,  SD1_CMD,    0,  0,  0,  0,  0,  0,  BIST_RST,   SCAN_RSTB,  0},
    {GPIO_A62,  0,  PSRAM_DQ14, 0,  0,  SD2_DIO1,   SD1_DIO4,   0,  0,  LCDC1_DPI_VSYNC,    0,  0,  0,  0,  0,  0},
    {GPIO_A63,  QSPI2_DIO0, 0,  SPI2_CS,    0,  0,  SD1_DIO0,   0,  0,  0,  GPTIM1_ETR, 0,  0,  0,  0,  0},
    {GPIO_A64,  0,  PSRAM_DQ15, 0,  0,  SD2_DIO3,   SD1_DIO5,   0,  0,  LCDC1_DPI_SD,   0,  0,  0,  0,  0,  0},
    {GPIO_A65,  QSPI2_DIO1, 0,  SPI2_DI,    0,  0,  SD1_DIO1,   0,  0,  0,  GPTIM1_CH1, 0,  0,  0,  0,  0},
    {GPIO_A66,  QSPI2_DIO2, 0,  SPI2_DO,    SPI2_DIO,   0,  SD1_DIO2,   0,  0,  0,  GPTIM1_CH2, 0,  0,  0,  0,  0},
    {GPIO_A67,  0,  0,  0,  0,  0,  0,  0,  0,  LCDC1_DPI_CM,   0,  0,  0,  0,  0,  0},
    {GPIO_A68,  QSPI2_DIO3, 0,  0,  0,  0,  SD1_DIO3,   0,  0,  0,  GPTIM1_CH3, 0,  0,  0,  0,  0},
    {GPIO_A69,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A70,  0,  PSRAM_CLKB, 0,  PDM1_DATA,  I2S1_SDI,   0,  0,  0,  0,  GPTIM1_CH4, 0,  DBG_CLK,    BIST_CLK,   SCAN_CLK,   0},
    {GPIO_A71,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A72,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A73,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A74,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A75,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A76,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_A77,  0,  0,  I2C3_SCL,   SPI2_CLK,   0,  0,  LCDC1_SPI_TE,   LCDC1_8080_TE,  0,  GPTIM2_ETR, LCDC1_JDI_G2,   DBG_DO12,   0,  EDT_CHANNEL_OUT0,   0},
    {GPIO_A78,  0,  0,  I2C3_SDA,   SPI2_CS,    0,  0,  LCDC1_SPI_RSTB, LCDC1_8080_RSTB,    0,  GPTIM2_CH1, LCDC1_JDI_B1,   DBG_DO13,   0,  EDT_CHANNEL_OUT1,   0},
    {GPIO_A79,  0,  0,  I2C2_SCL,   SPI2_DO,    SPI2_DIO,   0,  0,  0,  0,  GPTIM2_CH2, LCDC1_JDI_B2,   DBG_DO14,   0,  EDT_CHANNEL_OUT2,   0},
    {GPIO_A80,  0,  0,  I2C2_SDA,   0,  0,  0,  0,  0,  0,  GPTIM2_CH3, 0,  DBG_DO15,   0,  EDT_CHANNEL_OUT3,   0},
};
const unsigned short pin_pad_func_lcpu[][16] =
{
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {GPIO_B0,   0,  0,  0,  SPI4_CLK,   0,  0,  QSPI4_CLK,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B1,   0,  0,  0,  SPI4_CS,    LPTIM3_IN,  0,  QSPI4_CS,   0,  DBG_CLK,    LPCOMP1_P,  0,  0,  0,  0,  0},
    {GPIO_B2,   0,  0,  0,  SPI4_DI,    0,  0,  QSPI4_DIO0, 0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B3,   GPTIM4_CH1, 0,  0,  SPI4_DO,    SPI4_DIO,   0,  QSPI4_DIO1, 0,  DBG_DO0,    LPCOMP1_N,  0,  0,  0,  0,  0},
    {GPIO_B4,   GPTIM4_CH2, I2C4_SCL,   0,  0,  0,  0,  0,  0,  DBG_DO1,    LPCOMP2_P,  0,  0,  0,  0,  0},
    {GPIO_B5,   GPTIM4_CH3, I2C4_SDA,   0,  0,  0,  0,  0,  0,  DBG_DO2,    LPCOMP2_N,  0,  0,  0,  0,  0},
    {GPIO_B6,   0,  0,  USART5_TXD, SPI3_DI,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B7,   0,  0,  USART5_RXD, 0,  0,  LCDC2_SPI_DIO3, QSPI4_DIO3, 0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B8,   GPTIM4_ETR, 0,  0,  SPI3_DO,    SPI3_DIO,   0,  0,  0,  DBG_DO3,    GPADC_CH0,  0,  0,  0,  0,  0},
    {GPIO_B9,   GPTIM5_CH1, 0,  USART3_CTS, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B10,  0,  I2C4_SDA,   0,  0,  LPTIM3_OUT, 0,  0,  0,  DBG_DO4,    GPADC_CH1,  0,  0,  0,  0,  0},
    {GPIO_B11,  0,  I2C4_SCL,   USART5_RXD, 0,  LPTIM3_ETR, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B12,  GPTIM3_CH1, 0,  USART4_TXD, SPI3_CLK,   0,  0,  0,  0,  0,  GPADC_CH2,  0,  0,  0,  0,  0},
    {GPIO_B13,  GPTIM3_CH2, 0,  0,  SPI3_CLK,   0,  0,  0,  0,  DBG_DO5,    GPADC_CH3,  0,  0,  0,  0,  0},
    {GPIO_B14,  GPTIM3_CH3, 0,  USART4_RXD, SPI3_CS,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B15,  GPTIM3_CH4, 0,  USART4_CTS, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B16,  0,  0,  USART3_RTS, SPI3_DO,    SPI3_DIO,   0,  0,  EXT_S_TX_EN,    DBG_DO6,    GPADC_CH4,  0,  0,  0,  0,  0},
    {GPIO_B17,  GPTIM5_CH2, 0,  USART5_RTS, 0,  0,  LCDC2_SPI_RSTB, 0,  EXT_S_RX_EN,    0,  GPADC_CH5,  0,  0,  0,  0,  0},
    {GPIO_B18,  0,  0,  USART5_CTS, 0,  0,  LCDC2_SPI_TE,   0,  EXT_S_LE_2M,    0,  GPADC_CH6,  0,  0,  0,  0,  0},
    {GPIO_B19,  GPTIM5_ETR, 0,  0,  SPI3_DI,    0,  0,  0,  EXT_S_TX_BIT,   DBG_DO7,    GPADC_CH7,  0,  0,  0,  0,  0},
    {GPIO_B20,  GPTIM3_ETR, 0,  0,  0,  0,  0,  0,  EXT_S_TX_FLAG,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B21,  GPTIM4_CH4, 0,  0,  0,  0,  0,  QSPI4_DIO2, EXT_S_SYNC_CLK, 0,  0,  0,  0,  0,  0,  0},
    {GPIO_B22,  0,  0,  USART4_RTS, 0,  0,  0,  0,  EXT_S_SYNC_DAT, 0,  0,  0,  0,  0,  0,  0},
    {GPIO_B23,  GPTIM5_CH1, 0,  0,  SPI3_CS,    0,  0,  0,  EXT_S_SCLK, DBG_DO8,    SDADC_CH0,  0,  0,  0,  0,  0},
    {GPIO_B24,  GPTIM5_CH2, 0,  0,  0,  LPCOMP1_OUT,    0,  0,  EXT_S_SDO,  DBG_DO9,    SDADC_CH1,  0,  0,  0,  0,  0},
    {GPIO_B25,  GPTIM5_CH3, 0,  0,  0,  LPCOMP2_OUT,    0,  0,  EXT_S_RX_BIT,   DBG_DO10,   SDADC_CH2,  0,  0,  0,  0,  0},
    {GPIO_B26,  GPTIM5_CH4, 0,  USART5_CTS, 0,  0,  0,  0,  EXT_S_RX_FLAG,  0,  SDADC_CH3,  0,  0,  0,  0,  0},
    {GPIO_B27,  0,  0,  USART5_RTS, 0,  0,  0,  0,  EXT_S_PHY_CLK,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B28,  0,  0,  USART3_CTS, 0,  0,  0,  0,  EXT_S_PHY_DAT0, 0,  0,  0,  0,  0,  0,  0},
    {GPIO_B29,  0,  I2C6_SCL,   USART3_RTS, 0,  0,  0,  0,  EXT_S_PHY_DAT1, DBG_DO11,   0,  0,  0,  0,  0,  0},
    {GPIO_B30,  0,  I2C6_SDA,   0,  0,  0,  0,  0,  EXT_S_PHY_DAT2, 0,  0,  0,  0,  0,  0,  0},
    {SWCLK, GPIO_B31,   0,  USART3_TXD, 0,  0,  0,  0,  EXT_S_PHY_DAT3, 0,  0,  0,  0,  0,  0,  0},
    {GPIO_B32,  0,  0,  0,  SPI4_CLK,   0,  LCDC2_SPI_CLK,  QSPI4_CLK,  EXT_S_PHY_DAT4, 0,  0,  0,  0,  0,  0,  0},
    {GPIO_B33,  0,  0,  0,  SPI4_CS,    0,  LCDC2_SPI_CS,   QSPI4_CS,   EXT_S_PHY_DAT5, 0,  0,  0,  0,  0,  0,  0},
    {SWDIO, GPIO_B34,   0,  USART3_RXD, 0,  0,  0,  0,  EXT_S_PHY_DAT6, 0,  0,  0,  0,  0,  0,  0},
    {GPIO_B35,  0,  0,  0,  SPI4_DI,    0,  LCDC2_SPI_DIO0, QSPI4_DIO0, EXT_S_PHY_DAT7, 0,  0,  0,  0,  0,  0,  0},
    {GPIO_B36,  0,  0,  0,  SPI4_DO,    SPI4_DIO,   LCDC2_SPI_DIO1, QSPI4_DIO1, EXT_S_PHY_DAT8, 0,  0,  0,  0,  0,  0,  0},
    {GPIO_B37,  0,  0,  USART5_TXD, 0,  0,  LCDC2_SPI_DIO2, QSPI4_DIO2, EXT_S_PHY_DAT9, 0,  0,  0,  0,  0,  0,  0},
    {GPIO_B38,  0,  0,  0,  0,  0,  0,  0,  EXT_S_PHY_DAT10,    0,  0,  0,  0,  0,  0,  0},
    {GPIO_B39,  0,  I2C5_SCL,   USART4_TXD, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B40,  0,  I2C5_SDA,   USART4_RXD, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B41,  0,  0,  0,  0,  0,  0,  QSPI4_DIO3, 0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B42,  GPTIM5_ETR, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B43,  GPTIM5_CH3, I2C5_SCL,   0,  0,  0,  0,  0,  0,  DBG_DO12,   0,  0,  0,  0,  0,  0},
    {GPIO_B44,  GPTIM5_CH4, I2C5_SDA,   0,  0,  0,  0,  0,  0,  DBG_DO13,   0,  0,  0,  0,  0,  0},
    {GPIO_B45,  0,  I2C6_SCL,   USART3_TXD, 0,  0,  0,  0,  0,  DBG_DO14,   0,  0,  0,  0,  0,  0},
    {GPIO_B46,  0,  I2C6_SDA,   USART3_RXD, 0,  0,  0,  0,  0,  DBG_DO15,   0,  0,  0,  0,  0,  0},
    {GPIO_B47,  0,  0,  USART3_CTS, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    {GPIO_B48,  0,  0,  USART3_RTS, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
};
