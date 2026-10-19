/**
 * @file   Led_Config.h
 * @author Hesham Ahmed (Hisham4Ahmed@gmail.com)
 * @brief  This file contains the configuration of the LEDs
 * @version 0.1
 * @date 2025-08-04
 * 
 * @copyright Copyright (c) 2025 , Gestell Company   
 * 
 */
 
#ifndef _LED_CONFIG_H
#define _LED_CONFIG_H

#include "../../Common/Macros.h"
#include "../../MCAL/DIO/DIO_Interface.h"

/**
 * @brief This Macro is used to Detect the Connection Type of the Led
 * @options SourceConnection / SinkConnection   
*/
#define ConnectionType         SourceConnection

/**
 * @brief For Each Led have 2 Macro to Detect the Group and Pin of this led & this Driver Support 8 Led 
 * @note If you Need More Than Leds Follow this Steps :  
 *       1- Edit the MaxNoOfLeds Macro to Increase the number of Led
 *       2- Add the New Macro For Each Led and Add the Group and Pin of this Led
 *          #define LEDn_Group  <GroupName>
 *          #define LEDn_Pin    <PinName>
 *          #define LEDn        <Number>
 *       3  Add LEDn_Group in the LEDGroups Macro & LEDn_Pin in the LEDPins Macro  
 *          
 */ 

#define MaxNoOfLeds          8 

#define LED1_Group       GroupA
#define LED1_Pin         Pin0
#define LED1             0

#define LED2_Group       GroupA
#define LED2_Pin         Pin1
#define LED2             1


#define LED3_Group       GroupA
#define LED3_Pin         Pin0
#define LED2             2

#define LED4_Group       GroupA
#define LED4_Pin         Pin1
#define LED2             3

#define LED5_Group       GroupA
#define LED5_Pin         Pin0
#define LED2             4

#define LED6_Group       GroupA
#define LED6_Pin         Pin1
#define LED2             5

#define LED7_Group       GroupA
#define LED7_Pin         Pin0
#define LED2             6

#define LED8_Group       GroupA
#define LED8_Pin         Pin0
#define LED2             7

/************************************************** */
#define LEDGroups {LED1_Group,LED2_Group,LED3_Group,LED4_Group,LED5_Group,LED6_Group,LED7_Group,LED8_Group}
#define LEDPins   {LED1_Pin,LED2_Pin,LED3_Pin,LED4_Pin,LED5_Pin,LED6_Pin,LED7_Pin,LED8_Pin}


#endif /* _LED_CONFIG_H */