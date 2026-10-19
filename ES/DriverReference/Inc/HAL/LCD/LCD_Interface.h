/**
 * @file LCD_Interface.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#include <stdint.h>
#include "LCD_Config.h"

void hLCD_Init();
void hLCD_SendCommand(uint8_t Command); 
void hLCD_SendChar(uint8_t Character);
void hLCD_MoveCursor(uint8_t Line ,uint8_t Digit);
void hLCD_SendString(uint8_t Str[]);

void hLCD_SendNumber(float Number);
void hLCD_StoreSpecialChar(uint8_t *Pattern , uint8_t Location);


#endif /* INC_HAL_LCD_LCD_INTERFACE_H_ */
