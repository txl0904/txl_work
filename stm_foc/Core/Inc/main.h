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
#define STM_ALIVE_Pin GPIO_PIN_2
#define STM_ALIVE_GPIO_Port GPIOE
#define M2_SDA_Pin GPIO_PIN_0
#define M2_SDA_GPIO_Port GPIOF
#define M2_SCL_Pin GPIO_PIN_1
#define M2_SCL_GPIO_Port GPIOF
#define M1_IU_Pin GPIO_PIN_0
#define M1_IU_GPIO_Port GPIOC
#define M1_IV_Pin GPIO_PIN_1
#define M1_IV_GPIO_Port GPIOC
#define M2_IU_Pin GPIO_PIN_2
#define M2_IU_GPIO_Port GPIOC
#define M2_IV_Pin GPIO_PIN_3
#define M2_IV_GPIO_Port GPIOC
#define MT2_IN1_Pin GPIO_PIN_0
#define MT2_IN1_GPIO_Port GPIOA
#define MT2_IN2_Pin GPIO_PIN_1
#define MT2_IN2_GPIO_Port GPIOA
#define MT2_IN3_Pin GPIO_PIN_2
#define MT2_IN3_GPIO_Port GPIOA
#define MT2_EN_Pin GPIO_PIN_3
#define MT2_EN_GPIO_Port GPIOA
#define MT2_CS_Pin GPIO_PIN_4
#define MT2_CS_GPIO_Port GPIOA
#define MT2_NFAULT_Pin GPIO_PIN_5
#define MT2_NFAULT_GPIO_Port GPIOA
#define MT2_NSLEEP_Pin GPIO_PIN_6
#define MT2_NSLEEP_GPIO_Port GPIOA
#define MT2_NRST_Pin GPIO_PIN_7
#define MT2_NRST_GPIO_Port GPIOA
#define MT1_EN_Pin GPIO_PIN_13
#define MT1_EN_GPIO_Port GPIOF
#define MT1_NRST_Pin GPIO_PIN_14
#define MT1_NRST_GPIO_Port GPIOF
#define MT1_NSLEEP_Pin GPIO_PIN_15
#define MT1_NSLEEP_GPIO_Port GPIOF
#define MT1_NFAULT_Pin GPIO_PIN_0
#define MT1_NFAULT_GPIO_Port GPIOG
#define MT1_CS_Pin GPIO_PIN_1
#define MT1_CS_GPIO_Port GPIOG
#define MT1_IN1_Pin GPIO_PIN_9
#define MT1_IN1_GPIO_Port GPIOE
#define MT1_IN2_Pin GPIO_PIN_11
#define MT1_IN2_GPIO_Port GPIOE
#define MT1_IN3_Pin GPIO_PIN_13
#define MT1_IN3_GPIO_Port GPIOE
#define OLED_SCL_Pin GPIO_PIN_13
#define OLED_SCL_GPIO_Port GPIOB
#define OLED_SDA_Pin GPIO_PIN_15
#define OLED_SDA_GPIO_Port GPIOB
#define OLED_RES_Pin GPIO_PIN_8
#define OLED_RES_GPIO_Port GPIOD
#define OLED_DC_Pin GPIO_PIN_9
#define OLED_DC_GPIO_Port GPIOD
#define OLED_CS_Pin GPIO_PIN_10
#define OLED_CS_GPIO_Port GPIOD
#define U_TX_DBG_Pin GPIO_PIN_9
#define U_TX_DBG_GPIO_Port GPIOA
#define U_RX_DBG_Pin GPIO_PIN_10
#define U_RX_DBG_GPIO_Port GPIOA
#define EC11A1_Pin GPIO_PIN_0
#define EC11A1_GPIO_Port GPIOD
#define EC11B1_Pin GPIO_PIN_1
#define EC11B1_GPIO_Port GPIOD
#define KEY1_Pin GPIO_PIN_2
#define KEY1_GPIO_Port GPIOD
#define EC11A2_Pin GPIO_PIN_3
#define EC11A2_GPIO_Port GPIOD
#define EC11B2_Pin GPIO_PIN_4
#define EC11B2_GPIO_Port GPIOD
#define U_TX_LOG_Pin GPIO_PIN_5
#define U_TX_LOG_GPIO_Port GPIOD
#define U_RX_LOG_Pin GPIO_PIN_6
#define U_RX_LOG_GPIO_Port GPIOD
#define KEY4_Pin GPIO_PIN_9
#define KEY4_GPIO_Port GPIOG
#define KEY2_Pin GPIO_PIN_10
#define KEY2_GPIO_Port GPIOG
#define KEY3_Pin GPIO_PIN_11
#define KEY3_GPIO_Port GPIOG
#define KEY5_Pin GPIO_PIN_12
#define KEY5_GPIO_Port GPIOG
#define KEY6_Pin GPIO_PIN_13
#define KEY6_GPIO_Port GPIOG
#define M1_SCL_Pin GPIO_PIN_8
#define M1_SCL_GPIO_Port GPIOB
#define M1_SDA_Pin GPIO_PIN_9
#define M1_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
