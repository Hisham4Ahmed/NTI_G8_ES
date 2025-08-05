/**
 * @file Uart_Interface.h
 * @author Hesham Ahmed (Hisham4Ahmed@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-05
 * 
 * @copyright Copyright (c) 2025 , Gestell Company   
 * 
 */

#ifndef _UART_INTERFACE_H
#define _UART_INTERFACE_H
#include <stdint.h>
#include "Uart_Private.h"
#include "Uart_Config.h"

/* Polling Type */
void mUART_Init();
void mUART_Send(uint16_t Data);
uint16_t mUART_Recivie();

#endif /*_UART_INTERFACE_H*/