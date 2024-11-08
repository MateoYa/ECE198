/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define REQUEST_Pin GPIO_PIN_4
#define REQUEST_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define DENY_1_Pin GPIO_PIN_6
#define DENY_1_GPIO_Port GPIOA
#define ACCEPT_1_Pin GPIO_PIN_7
#define ACCEPT_1_GPIO_Port GPIOA
#define STUDENT_1_Pin GPIO_PIN_4
#define STUDENT_1_GPIO_Port GPIOC
#define STUDENT_1_EXTI_IRQn EXTI4_IRQn
#define DENY_Pin GPIO_PIN_5
#define DENY_GPIO_Port GPIOC
#define DENY_EXTI_IRQn EXTI9_5_IRQn
#define ACCEPT_Pin GPIO_PIN_8
#define ACCEPT_GPIO_Port GPIOC
#define ACCEPT_EXTI_IRQn EXTI9_5_IRQn
#define STUDENT_2_Pin GPIO_PIN_9
#define STUDENT_2_GPIO_Port GPIOC
#define STUDENT_2_EXTI_IRQn EXTI9_5_IRQn
#define ACCEPT_2_Pin GPIO_PIN_8
#define ACCEPT_2_GPIO_Port GPIOA
#define DENY_2_Pin GPIO_PIN_10
#define DENY_2_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */