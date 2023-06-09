/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    usart.h
  * @brief   This file contains all the function prototypes for
  *          the usart.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#ifndef __USART_H__
#define __USART_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Variables */
extern char uartTransmit[200]; // Buffer de transmisión
extern char recieved[20]; //Buffer para recibir datos por uart
extern UART_HandleTypeDef huart1; // Estructura de configuración de la UART

/* Interrupciones */
void MX_USART1_UART_Init(void);

/* Funciones */
void imprimir_mensaje(void);

#ifdef __cplusplus
}
#endif

#endif /* __USART_H__ */