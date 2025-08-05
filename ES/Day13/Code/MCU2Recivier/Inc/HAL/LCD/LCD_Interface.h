/*
 * LCD_Interface.h
 *
 *  Created on: Jul 29, 2025
 *      Author: hesham
 */

#ifndef INC_HAL_LCD_LCD_INTERFACE_H_
#define INC_HAL_LCD_LCD_INTERFACE_H_
#include "../../MCAL/DIO/DIO_Interface.h"

#include <stdint.h>
/**
 * ClearDisplay  -> 0x01 -> 1.53ms
 * fontSize
 * 	 0 0 1 DL N F 0 0
 * 	 	DL: Data Length : (Mode 8bit mode or 4bit mode )
 * 	 		8BitMode = 1
 * 	 		4BitMode = 0
 * 	 	N : No Of Display
 * 	 		1 Line  = 0
 * 	 		2 Line  = 1
 * 	 	F: Font
 * 	 		5*8     = 0
 * 	 		5*11    = 1
 * 	 0 0 1 1 1 0 0 0 -> 0x38 -> 39us
 *
 * DisplayOn OF
 * 	 0 0 0 0  1 D C B
 * 	 	D-> Display On Or Display Off
 * 	 	 Display Off = 0
 * 	 	 Display On  = 1
 * 	   C-> Cursor On or Cursor Off
 * 	   	Cursor Off  = 0
 * 	   	Cursor On   = 1
 * 	   B -> Blink
 * 	   	Blink Off - 0
 * 	   	Blink on  - 1
 *
 * 	 0000 1110 -> 0x0E -> 39us
 *
 * 	Entry Mode Set
 * 	   ID -> Right SHift
 * 	   S  -> No Screen Shifiting
 * 	    0000 0 1 1 0 -> 0x06
 *
 */
/*Configuration -> Specific File (LCD_Config.h)*/
//      LCD Pin        MC Pin
#define LCD_RSGroup    GroupA
#define LCD_RWGroup    GroupA
#define LCD_EGroup     GroupA
#define LCD_DataGroup  GroupC

#define LCD_RSPin      Pin0
#define LCD_RWPin      Pin1
#define LCD_EPin       Pin2

//void hLCD_SendCommand(uint8_t Command,uint8_t RSGroup,uint8_t RSPin,uint8_t RWGroup,uint8_t RWPin,uint8_t EGroup,uint8_t EPin, uint8_t DataGroup);
void hLCD_SendCommand(uint8_t Command); //
void hLCD_SendChar(uint8_t Character);
void hLCD_Init();
void hLCD_SendString(uint8_t Str[]);
void hLCD_SendNumber(uint32_t Number);//Task1
void hLCD_StoreSpecialChar(uint8_t *Pattern , uint8_t Location);//Task2
void hLCD_MoveCursor(uint8_t Line ,uint8_t Digit);

#endif /* INC_HAL_LCD_LCD_INTERFACE_H_ */
