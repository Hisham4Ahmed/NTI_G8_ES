/**
 * @file   Led_Interface.h
 * @author Hesham Ahmed (Hisham4Ahmed@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-04
 * 
 * @copyright Copyright (c) 2025 , Gestell Company   
 * 
 */


#ifndef _LED_INTERFACE_H
#define _LED_INTERFACE_H
#include "Led_Config.h"

/**
 * @fn     hLED_Init
 * @brief  This Function is Responsible for Initializing the LED Driver
 * @param LedNumber : it's a number that represents the led number, Options From 1 to MaxNoOfLeds
 * @return void : This Function does not return anything
 */
void hLED_Init(uint8_t LedNumber);
/**
 * @fn     hLED_On
 * @brief  This Function is Responsible for Turning On the LED Driver
 * @param LedNumber : it's a number that represents the led number, Options From 1 to MaxNoOfLeds
 * @return void : This Function does not return anything
 */
void hLED_On(uint8_t LedNumber);
/**
 * @fn     hLED_On
 * @brief  This Function is Responsible for Turning On the LED Driver
 * @param LedNumber : it's a number that represents the led number, Options From 1 to MaxNoOfLeds
 * @return void : This Function does not return anything
*/
void hLED_Off(uint8_t LedNumber);
/**
 * @fn    hLED_Toggle
 * @brief This Function is Responsible for Toggling the LED Driver
 * @param LedNumber : it's a number that represents the led number, Options From 1 to MaxNoOfLeds
 * @return void : This Function does not return anything
 */
void hLED_Toggle(uint8_t LedNumber);

#endif /* _LED_INTERFACE_H */