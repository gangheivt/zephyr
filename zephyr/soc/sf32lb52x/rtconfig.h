#ifndef RT_CONFIG_H
#define RT_CONFIG_H

#define KCONFIG_V2 1
#define BSP_USING_NO_OS 1
#define RT_USING_SERIAL 1
#define RT_USING_HWTIMER 1
#define RT_USING_I2C 1
#define RT_USING_PIN 1
#define RT_USING_ADC 1
#define RT_USING_PWM 1
#define RT_USING_RTC 1
#define RT_USING_SPI 1
#define RT_USING_AUDIO 1
#define RT_USING_LIBC 1
#define RT_CONSOLE_DEVICE_NAME "uart1"
#define BSP_USING_EMPTY_ASSERT 1
#define ROM_ATT_BUF_SIZE 3084
#define ROM_LOG_SIZE 4096
#define BT_DUAL_HOST_MEM 1
#define MB_PORT 1
#define UART_PORT1 1
#define UART_PORT1_PORT "uart4"
#define USING_PARTITION_TABLE 1
#define OPT_LEVEL_SIZE 1
#define OPT_LEVEL "-Oz"
#define KCONFIG_BOARD_V2 1
#define SOC_SF32LB52X 1
#define BF0_HCPU 1
#define CORE "HCPU"
#define CPU "Cortex-M33"
#define LXT_FREQ 32768
#define LXT_LP_CYCLE 200
#define BT_TX_POWER_VAL 1
#define BT_TX_POWER_VAL_MAX 10
#define BT_TX_POWER_VAL_MIN 0
#define BT_TX_POWER_VAL_INIT 0
#define SF32LB52X_REV_AUTO 1
#define BSP_USING_GPIO 1
#define BSP_GPIO_HANDLE 2
#define BSP_USING_DMA 1
#define BSP_USING_UART 1
#define BSP_USING_UART1 1
#define BSP_UART1_RX_USING_DMA 1
#define BSP_USING_SPI 1
#define BSP_USING_I2C 1
#define BSP_USING_I2C1 1
#define BSP_USING_I2C2 1
#define BSP_USING_I2C4 1
#define BSP_USING_TIM 1
#define BSP_USING_BTIM1 1
#define BSP_USING_LPTIM1 1
#define BSP_USING_PWM 1
#define BSP_USING_PWM3 1
#define BSP_USING_ADC 1
#define BSP_USING_MPI 1
#define BSP_USING_SPI_FLASH 1
#define BSP_ENABLE_MPI1 1
#define BSP_ENABLE_QSPI1 1
#define BSP_MPI1_MODE_3 1
#define BSP_QSPI1_MODE 3
#define BSP_USING_PSRAM1 1
#define BSP_QSPI1_MEM_SIZE 8
#define BSP_ENABLE_MPI2 1
#define BSP_ENABLE_QSPI2 1
#define BSP_MPI2_MODE_0 1
#define BSP_QSPI2_MODE 0
#define BSP_USING_NOR_FLASH2 1
#define BSP_QSPI2_USING_DMA 1
#define BSP_QSPI2_MEM_SIZE 32
#define BSP_USING_EXT_DMA 1
#define BSP_USING_HW_AES 1
#define BSP_USING_PSRAM 1
#define BSP_USING_ONCHIP_RTC 1
#define BSP_RTC_PPM 0
#define BSP_USING_EPIC 1
#define BSP_USING_LCDC 1
#define BSP_USING_PINMUX 1
#define BSP_USING_LCPU_PATCH 1
#define BSP_ENABLE_AUD_PRC 1
#define BSP_AUDPRC_TX0_DMA 1
#define BSP_AUDPRC_RX0_DMA 1
#define BSP_ENABLE_AUD_CODEC 1
#define BSP_USING_LCD 1
#define LCD_USING_TFT_NV3041A 1
#define LCD_NV3041A_VSYNC_ENABLE 1
#define LCD_HOR_RES_MAX 480
#define LCD_VER_RES_MAX 272
#define LCD_DPI 315
#define BSP_USING_TOUCHD 1
#define TOUCH_DEVICE_NAME "i2c1"
#define TSC_USING_GT911 1
#define LCD_USING_NV3041A 1
#define BSP_LCDC_USING_QADSPI 1
#define LCD_USING_PWM_AS_BACKLIGHT 1
#define BSP_USING_KEY1 1
#define BSP_KEY1_PIN 34
#define BSP_KEY1_ACTIVE_HIGH 1
#define PA_USING_AW8155 1
#define CONSOLE_UART1 1
#define BSP_USING_LED1 1
#define BSP_LED1_PIN 26
#define BSP_LED1_ACTIVE_HIGH 1
#define BSP_USING_BOARD_EM_LB525XXX 1
#define ASIC 1
#define TOUCH_IRQ_PIN 31
#define LCD_PWM_BACKLIGHT_INTERFACE_NAME "pwm3"
#define LCD_PWM_BACKLIGHT_CHANEL_NUM 4
#define LCD_BACKLIGHT_CONTROL_PIN 1
#define RGBLED_CONTROL_PIN 32
#define CUSTOM_MEM_MAP 1


#define HAL_SECTION(x)
#include "autoconf.h"

#endif