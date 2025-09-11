/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define Traffic_ON_OFF_Pin GPIO_PIN_1
#define Traffic_ON_OFF_GPIO_Port GPIOA
#define Traffic_ON_OFF_EXTI_IRQn EXTI1_IRQn
#define Ergency_Button_Pin GPIO_PIN_2
#define Ergency_Button_GPIO_Port GPIOA
#define Ergency_Button_EXTI_IRQn EXTI2_IRQn
#define Red_led_Pin GPIO_PIN_3
#define Red_led_GPIO_Port GPIOA
#define Yellow_Led_Pin GPIO_PIN_4
#define Yellow_Led_GPIO_Port GPIOA
#define Green_Led_Pin GPIO_PIN_5
#define Green_Led_GPIO_Port GPIOA
#define e_Pin GPIO_PIN_7
#define e_GPIO_Port GPIOA
#define RS_Pin GPIO_PIN_0
#define RS_GPIO_Port GPIOB
#define D4_Pin GPIO_PIN_1
#define D4_GPIO_Port GPIOB
#define D5_Pin GPIO_PIN_2
#define D5_GPIO_Port GPIOB
#define D6_Pin GPIO_PIN_10
#define D6_GPIO_Port GPIOB
#define D7_Pin GPIO_PIN_11
#define D7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
