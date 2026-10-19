/**
 * @file DIO_Interface.h
 * @author Hesham Ahmed (Hisham4Ahmed@gmail.com)
 * @brief  This file contains the interface for the DIO module.
 * @version 0.1
 * @date 2025-08-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include <stdint.h>
#include "DIO_Private.h"

/**
 * @fn     mDIO_ChangeDirectionForPin
 * @brief  This function is Responsible for Select Direction for Specific Pin
 * @param GroupName  : it's the group name of the pin you want to change its direction. (GroupA,GroupB,GroupC,GroupD)
 * @param PinNumber  : it's the pin number you want to change its direction. (Pin0,Pin1,Pin2,Pin3,Pin4,Pin5,Pin6,Pin7)
 * @param DirectionState : it's the direction state you want to change it to. (Input , Output)
 * @return void : This Function does not return any value.
 */
void mDIO_ChangeDirectionForPin(uint8_t GroupName , uint8_t PinNumber , uint8_t DirectionState);
/**
 * @fn    mDIO_WriteValueForPin
 * @brief This function is Responsible for Outputing Value to Specific Pin as High Value Or Low Value
 * @param GroupName  : it's the group name of the pin you want to change its value. (GroupA,GroupB,GroupC,GroupD)
 * @param PinNumber  : it's the pin number you want to change its value. (Pin0,Pin1,Pin2,Pin3,Pin4,Pin5,Pin6,Pin7)
 * @param OutputType : it's the output type you want to change it to. (High , Low)
 * @return void      : This Function does not return any value.
 */
void mDIO_WriteValueForPin(uint8_t GroupName ,  uint8_t PinNumber , uint8_t OutputType);
/**
 * @fn    mDIO_WriteValueForPin
 * @brief This Function is Responsible for Toggling Value to Specific Pin
 * @param GroupName : it's the group name of the pin you want to change its value. Options (GroupA,GroupB,GroupC,GroupD)
 * @param PinNumber : it's the pin number you want to change its value.Options (Pin0,Pin1,Pin2,Pin3,Pin4,Pin5,Pin6,Pin7)
 * @return void : This Function does not return any value.
 */
void mDIO_ToggleValueForPin(uint8_t GroupName ,  uint8_t PinNumber);
/**
 * @fn    mDIO_ReadValueFromPin
 * @brief This Function is Responsible for Reading Value from Specific Pin 
 * @param GroupName : it's the group name of the pin you want to read its value. Options (GroupA,GroupB,GroupC,GroupD)
 * @param PinNumber : it's the group name of the pin you want to read its value. Options (Pin0,Pin1,Pin2,Pin3,Pin4,Pin5,Pin6,Pin7)
 * @return uint8_t  : it's the value you read from the pin. (High , Low)
 */
uint8_t mDIO_ReadValueFromPin(uint8_t  GroupName, uint8_t PinNumber);


/**
 * @fn     mDIO_ChangeDirectionforGroup
 * @brief  This function is Responsible for Select Direction for All Pins in Specific Group
 * @param GroupName  : it's the group name you want to change its direction. Options (GroupA,GroupB,GroupC,GroupD)
 * @param DirectionState : it's the direction state you want to change it to. Options from 0x00 to 0xFF
 * @return void : This Function does not return any value.
 */
void mDIO_ChangeDirectionforGroup(uint8_t GroupName , uint8_t DirecationValue);
/**
 * @fn     mDIO_ChangeDirectionforGroup
 * @brief  This function is Responsible for Outputing Value to All Pins in Specific Group
 * @param GroupName  : it's the group name you want to change its value. Options (GroupA,GroupB,GroupC,GroupD)
 * @param OutputType : it's the output type you want to change it to.Options from 0x00 to 0xFF
 * @return void : This Function does not return any value. 
 */
void mDIO_WriteValueForGroup(uint8_t GroupName ,  uint8_t OutputValue);
/**
 * @fn     mDIO_ChangeDirectionforGroup
 * @brief  This function is Responsible for Toggling Value to All Pins in Specific Group    
 * @param GroupName : it's the group name you want to change its value. Options (GroupA,GroupB,GroupC,GroupD)
 * @return void : This Function does not return any value. 
 */
void mDIO_ToggleValueForGroup(uint8_t GroupName);
/**
 * 
 * @fn     mDIO_ReadValueFromGroup
 * @brief This function is Responsible for Reading Value from Specific Group 
 * @param GroupName : it's the group name you want to read its value. Options (GroupA,GroupB,GroupC,GroupD)
 * @return uint8_t  : it's the value you read from the group. reading from group is Options (0x00 to 0xFF)
 */
uint8_t mDIO_ReadValueFromGroup(uint8_t  GroupName);



#endif /* DIO_INTERFACE_H_ */
