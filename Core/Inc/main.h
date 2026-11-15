/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

#include "stm32h7xx_ll_rcc.h"
#include "stm32h7xx_ll_spi.h"
#include "stm32h7xx_ll_tim.h"
#include "stm32h7xx_ll_bus.h"
#include "stm32h7xx_ll_cortex.h"
#include "stm32h7xx_ll_system.h"
#include "stm32h7xx_ll_utils.h"
#include "stm32h7xx_ll_pwr.h"
#include "stm32h7xx_ll_gpio.h"
#include "stm32h7xx_ll_dma.h"
#include "stm32h7xx_ll_hsem.h"

#include "stm32h7xx_ll_exti.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_CMD_ADDR 0x60000000UL
#define LCD_DATA_ADDR 0x60080000UL
#define ADCB_SCK_Pin GPIO_PIN_2
#define ADCB_SCK_GPIO_Port GPIOE
#define ADCB_CS_Pin GPIO_PIN_4
#define ADCB_CS_GPIO_Port GPIOE
#define ADCB_MOSI_Pin GPIO_PIN_6
#define ADCB_MOSI_GPIO_Port GPIOE
#define RF_15V_EN_Pin GPIO_PIN_14
#define RF_15V_EN_GPIO_Port GPIOC
#define FREQ_SDO_Pin GPIO_PIN_0
#define FREQ_SDO_GPIO_Port GPIOF
#define FREQ_SCK_Pin GPIO_PIN_1
#define FREQ_SCK_GPIO_Port GPIOF
#define ADCA_CS_Pin GPIO_PIN_6
#define ADCA_CS_GPIO_Port GPIOF
#define ADCA_SCK_Pin GPIO_PIN_7
#define ADCA_SCK_GPIO_Port GPIOF
#define ADCA_MISO_Pin GPIO_PIN_8
#define ADCA_MISO_GPIO_Port GPIOF
#define ADCA_MOSI_Pin GPIO_PIN_9
#define ADCA_MOSI_GPIO_Port GPIOF
#define HSE_IN_Pin GPIO_PIN_0
#define HSE_IN_GPIO_Port GPIOH
#define HSE_OUT_Pin GPIO_PIN_1
#define HSE_OUT_GPIO_Port GPIOH
#define FREQ_TXDATA_Pin GPIO_PIN_0
#define FREQ_TXDATA_GPIO_Port GPIOA
#define FREQ_LE_Pin GPIO_PIN_3
#define FREQ_LE_GPIO_Port GPIOA
#define GAIN_DAC_Pin GPIO_PIN_4
#define GAIN_DAC_GPIO_Port GPIOA
#define IMU1_SCK_Pin GPIO_PIN_5
#define IMU1_SCK_GPIO_Port GPIOA
#define IMU1_MISO_Pin GPIO_PIN_6
#define IMU1_MISO_GPIO_Port GPIOA
#define IMU1_MOSI_Pin GPIO_PIN_7
#define IMU1_MOSI_GPIO_Port GPIOA
#define IMU1_CS_Pin GPIO_PIN_4
#define IMU1_CS_GPIO_Port GPIOC
#define IMU1_INT2_Pin GPIO_PIN_5
#define IMU1_INT2_GPIO_Port GPIOC
#define CC2_ADC_Pin GPIO_PIN_11
#define CC2_ADC_GPIO_Port GPIOF
#define CC1_ADC_Pin GPIO_PIN_12
#define CC1_ADC_GPIO_Port GPIOF
#define BATT__CE_Pin GPIO_PIN_13
#define BATT__CE_GPIO_Port GPIOF
#define BATT_SCL_Pin GPIO_PIN_14
#define BATT_SCL_GPIO_Port GPIOF
#define BATT_SDA_Pin GPIO_PIN_15
#define BATT_SDA_GPIO_Port GPIOF
#define BATT_NINT_Pin GPIO_PIN_0
#define BATT_NINT_GPIO_Port GPIOG
#define BATT_NPG_Pin GPIO_PIN_1
#define BATT_NPG_GPIO_Port GPIOG
#define DISPLAY_D4_Pin GPIO_PIN_7
#define DISPLAY_D4_GPIO_Port GPIOE
#define DISPLAY_D5_Pin GPIO_PIN_8
#define DISPLAY_D5_GPIO_Port GPIOE
#define DISPLAY_D6_Pin GPIO_PIN_9
#define DISPLAY_D6_GPIO_Port GPIOE
#define DISPLAY_D7_Pin GPIO_PIN_10
#define DISPLAY_D7_GPIO_Port GPIOE
#define DISPALY_D8_Pin GPIO_PIN_11
#define DISPALY_D8_GPIO_Port GPIOE
#define DISPLAY_D9_Pin GPIO_PIN_12
#define DISPLAY_D9_GPIO_Port GPIOE
#define DISPLAY_D10_Pin GPIO_PIN_13
#define DISPLAY_D10_GPIO_Port GPIOE
#define DISPLAY_D11_Pin GPIO_PIN_14
#define DISPLAY_D11_GPIO_Port GPIOE
#define DISPLAY_D12_Pin GPIO_PIN_15
#define DISPLAY_D12_GPIO_Port GPIOE
#define IMU2_CS_Pin GPIO_PIN_12
#define IMU2_CS_GPIO_Port GPIOB
#define IMU2_SCK_Pin GPIO_PIN_13
#define IMU2_SCK_GPIO_Port GPIOB
#define IMU2_MISO_Pin GPIO_PIN_14
#define IMU2_MISO_GPIO_Port GPIOB
#define IMU2_MOSI_Pin GPIO_PIN_15
#define IMU2_MOSI_GPIO_Port GPIOB
#define DISPLAY_D13_Pin GPIO_PIN_8
#define DISPLAY_D13_GPIO_Port GPIOD
#define DISPLAY_D14_Pin GPIO_PIN_9
#define DISPLAY_D14_GPIO_Port GPIOD
#define DISPLAY_D15_Pin GPIO_PIN_10
#define DISPLAY_D15_GPIO_Port GPIOD
#define DISPLAY_NRST_Pin GPIO_PIN_11
#define DISPLAY_NRST_GPIO_Port GPIOD
#define DISPLAY_BL_Pin GPIO_PIN_12
#define DISPLAY_BL_GPIO_Port GPIOD
#define DISPLAY_A__Pin GPIO_PIN_13
#define DISPLAY_A__GPIO_Port GPIOD
#define DISPLAY_D0_Pin GPIO_PIN_14
#define DISPLAY_D0_GPIO_Port GPIOD
#define DISPLAY_D1_Pin GPIO_PIN_15
#define DISPLAY_D1_GPIO_Port GPIOD
#define IMU2_INT2_Pin GPIO_PIN_3
#define IMU2_INT2_GPIO_Port GPIOG
#define IMU2_INT1_Pin GPIO_PIN_4
#define IMU2_INT1_GPIO_Port GPIOG
#define FUSE_PG_Pin GPIO_PIN_5
#define FUSE_PG_GPIO_Port GPIOG
#define STORAGE_D0_Pin GPIO_PIN_8
#define STORAGE_D0_GPIO_Port GPIOC
#define STORAGE_D1_Pin GPIO_PIN_9
#define STORAGE_D1_GPIO_Port GPIOC
#define USB_VBUS_Pin GPIO_PIN_9
#define USB_VBUS_GPIO_Port GPIOA
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define DEBUG_SDIO_Pin GPIO_PIN_13
#define DEBUG_SDIO_GPIO_Port GPIOA
#define DEBUG_SWCLK_Pin GPIO_PIN_14
#define DEBUG_SWCLK_GPIO_Port GPIOA
#define STORAGE_CD_Pin GPIO_PIN_15
#define STORAGE_CD_GPIO_Port GPIOA
#define STORAGE_D2_Pin GPIO_PIN_10
#define STORAGE_D2_GPIO_Port GPIOC
#define STORAGE_D3_Pin GPIO_PIN_11
#define STORAGE_D3_GPIO_Port GPIOC
#define STORAGE_CLK_Pin GPIO_PIN_12
#define STORAGE_CLK_GPIO_Port GPIOC
#define DISPLAY_D2_Pin GPIO_PIN_0
#define DISPLAY_D2_GPIO_Port GPIOD
#define DISPLAY_D3_Pin GPIO_PIN_1
#define DISPLAY_D3_GPIO_Port GPIOD
#define STORAGE_CMD_Pin GPIO_PIN_2
#define STORAGE_CMD_GPIO_Port GPIOD
#define DISPLAY_NOE_Pin GPIO_PIN_4
#define DISPLAY_NOE_GPIO_Port GPIOD
#define DISPLAY_NWE_Pin GPIO_PIN_5
#define DISPLAY_NWE_GPIO_Port GPIOD
#define DISPLAY_NE1_Pin GPIO_PIN_7
#define DISPLAY_NE1_GPIO_Port GPIOD
#define DEBUG_SWO_Pin GPIO_PIN_3
#define DEBUG_SWO_GPIO_Port GPIOB
#define RF_5V_EN_Pin GPIO_PIN_5
#define RF_5V_EN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
