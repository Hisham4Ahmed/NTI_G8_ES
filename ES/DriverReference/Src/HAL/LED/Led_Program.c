/**
 * @file Led_Program.c
 * @author Hesham Ahmed (Hisham4Ahmed@gmail.com)
 * @brief  This file contains the implementation of the LED driver
 * @version 0.1
 * @date 2025-08-04
 * 
 * @copyright Copyright (c) 2025 , Gestell Company   
 * 
 */

#include "../../../Inc/Common/Macros.h"
#include "../../../Inc/HAL/LED/Led_Interface.h"
static LED_Group[MaxNoOfLeds] = LEDGroups;
static LED_Pin[MaxNoOfLeds] = LEDPins; 
void hLED_Init(uint8_t LedNumber)
{
    mDIO_ChangeDirectionForPin(LED_Group[LedNumber], LED_Pin[LedNumber], Output);
}

void hLED_On(uint8_t LedNumber)
{
    #if ConnectionType == SourceConnection
    mDIO_WriteValueForPin(LED_Group[LedNumber], LED_Pin[LedNumber], High);
    #elif ConnectionType == SinkConnection
    mDIO_WriteValueForPin(LED_Group[LedNumber], LED_Pin[LedNumber], Low);
    #else
        #error "ConnectionType is Not Defined in the LED_Config.h file"
    #endif
}

void hLED_Off(uint8_t LedNumber)
{
    #if ConnectionType == SourceConnection
    mDIO_WriteValueForPin(LED_Group[LedNumber], LED_Pin[LedNumber], Low);
    #elif ConnectionType == SinkConnection
    mDIO_WriteValueForPin(LED_Group[LedNumber], LED_Pin[LedNumber], High);
    #else
        #error "ConnectionType is Not Defined in the LED_Config.h file"
    #endif
}

void hLED_Toggle(uint8_t LedNumber)
{
    mDIO_ToggleValueForPin(LED_Group[LedNumber], LED_Pin[LedNumber]);
}
