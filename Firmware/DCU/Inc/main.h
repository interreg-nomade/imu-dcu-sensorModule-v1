/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#define USER_BUTTON_Pin GPIO_PIN_2
#define USER_BUTTON_GPIO_Port GPIOF
#define USER_BUTTON_EXTI_IRQn EXTI2_IRQn
#define STCC_CHARGING_Pin GPIO_PIN_3
#define STCC_CHARGING_GPIO_Port GPIOF
#define STCC_FAULT_Pin GPIO_PIN_4
#define STCC_FAULT_GPIO_Port GPIOF
#define STCC_EN_Pin GPIO_PIN_5
#define STCC_EN_GPIO_Port GPIOF
#define LED_GOOD_Pin GPIO_PIN_0
#define LED_GOOD_GPIO_Port GPIOB
#define LED_ERROR_Pin GPIO_PIN_14
#define LED_ERROR_GPIO_Port GPIOB
#define SD_ON_OFF_Pin GPIO_PIN_8
#define SD_ON_OFF_GPIO_Port GPIOA
#define SD_DETECT_Pin GPIO_PIN_9
#define SD_DETECT_GPIO_Port GPIOA
#define I2C1_INT_Pin GPIO_PIN_5
#define I2C1_INT_GPIO_Port GPIOB
#define I2C1_INT_EXTI_IRQn EXTI9_5_IRQn
#define LED_BUSY_Pin GPIO_PIN_7
#define LED_BUSY_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
