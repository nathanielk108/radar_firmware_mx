#include "platform.h"

#include "main.h"
#include "gpio.h"
#include "dma.h"
#include "spi.h"
#include "tim.h"
#include "i2c.h"
#include "sdmmc.h"
#include "fmc.h"
#include "dac.h"
#include "adc.h"
#include "dma2d.h"
#include "fatfs.h"
#include "usb_device.h"

static void enable_rf_rails(void) {
  HAL_GPIO_WritePin(RF_15V_EN_GPIO_Port, RF_15V_EN_Pin, GPIO_PIN_SET);
  HAL_Delay(100);
  HAL_GPIO_WritePin(RF_5V_EN_GPIO_Port, RF_5V_EN_Pin, GPIO_PIN_SET);
  HAL_Delay(100);
}

void platform_init(void) {
  /* MPU Configuration--------------------------------------------------------*/
  MPU_Config_Exp();

  /* Enable the CPU Cache */

  /* Enable I-Cache---------------------------------------------------------*/
  SCB_EnableICache();

  /* Enable D-Cache---------------------------------------------------------*/
  SCB_EnableDCache();

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config_Exp();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();

  MX_I2C4_Init();
  MX_SPI4_Init();
  MX_SPI5_Init();
  MX_TIM16_Init();

  // MX_SPI1_Init();
  // MX_SPI2_Init();
  // MX_TIM4_Init();
  // MX_TIM2_Init();

  // MX_FMC_Init();
  // MX_DMA2D_Init();

  // MX_DAC1_Init();
  // MX_ADC1_Init();

  // MX_SDMMC1_SD_Init();
  // MX_FATFS_Init();
  // MX_USB_DEVICE_Init();

  enable_rf_rails();
}

