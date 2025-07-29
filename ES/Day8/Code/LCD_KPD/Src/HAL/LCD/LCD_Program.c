/*
 * LCD_Program.c
 *
 *  Created on: Jul 29, 2025
 *      Author: hesham
 */

#include "../../../Inc/MCAL/DIO/DIO_Interface.h"
#include "../../../Inc/HAL/LCD/LCD_Interface.h"
#include "../../../Inc/BitMath.h"
#include <util/delay.h>
void hLCD_Init()
{
	// Set Dirtection
	mDIO_ChangeDirectionForPin(LCD_RSGroup,LCD_RSPin,DIO_Output);
	mDIO_ChangeDirectionForPin(LCD_RWGroup,LCD_RWPin,DIO_Output);
	mDIO_ChangeDirectionForPin(LCD_EGroup,LCD_EPin,DIO_Output);
	//	mDIO_ChangeDirectionforGroup(LCD_DataGroup,DIO_Output); 0000 0001
	mDIO_ChangeDirectionforGroup(LCD_DataGroup,0xFF);

	/*Initaliaztion 8Bit Mode */
	//Delay More Than 30ms
	_delay_ms(35);
	// Function Set
	hLCD_SendCommand(0x38);
	//Delay More than 39us -> 1ms
	_delay_ms(1);
	//Display ON/OFF Control
	hLCD_SendCommand(0x0E);
	//Delay More than 39us -> 1ms
	_delay_ms(1);
	//Display Clear
	hLCD_SendCommand(0x01);
	//Delay More than 1.53ms ->2ms
	_delay_ms(2);
	//	Entry Mode Set
	hLCD_SendCommand(0x06);
	_delay_ms(1);



}
void hLCD_SendCommand(uint8_t Command)
{
	// RS -> 0
	mDIO_WriteValueForPin(LCD_RSGroup,LCD_RSPin,DIO_Low);
	// RW -> 0
	mDIO_WriteValueForPin(LCD_RWGroup,LCD_RWPin,DIO_Low);
	// E  -> 1
	mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,DIO_High);
	// UpdateCommand
	mDIO_WriteValueForGroup(LCD_DataGroup,Command);
	// E  -> 0
	mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,DIO_Low);
}

void hLCD_SendChar(uint8_t Character)
{
	//	RS ->1
	mDIO_WriteValueForPin(LCD_RSGroup,LCD_RSPin,DIO_High);
	//RW -> 0
	mDIO_WriteValueForPin(LCD_RWGroup,LCD_RWPin,DIO_Low);
	// E -1
	mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,DIO_High);
	//Updata data
	mDIO_WriteValueForGroup(LCD_DataGroup,Character);
	//E - 0
	mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,DIO_Low);

}

//void hLCD_SendString(uint8_t Str[], uint8_t size)
//{
//	if(Str!=NULL)
//	{
//		for(uint8_t Count=0; Count<size;Count++)
//		{
//			hLCD_SendChar(Str[Count]);
//		}
//	}
//}

void hLCD_SendString(uint8_t Str[])
{
	uint8_t Index = 0 ;
	if(Str!=NULL)
	{
		while(Str[Index]!=NULLChar)
		{
			hLCD_SendChar(Str[Index]);
			Index++;
		}
	}
}



#define FirstLine 1
#define SecondeLine 2
#define FirstLineAddress  0x00
#define SecondeLineAddress  0x40
#define SetDDRAMCommand     0x80


void hLCD_MoveCursor(uint8_t Line ,uint8_t Digit)
{
	// Need know How Sent to LCD Move in DDRM
	// Line Option
	 // Line1 : Address For Line 1 = 0x00
     // Line2 : Address for Line 2 = 0x40

	uint8_t DDRAM_Address = 0 ;
	switch(Line)
	{
	case 1 :  DDRAM_Address = 0x00 + Digit ;break;
	case 2 :  DDRAM_Address = 0x40 + Digit ;break;
	default:
			break;
	}
//		DDRAM_Address -> Bit7 =1 ;
//	Command   1 A6 A5 A4 A3 A2 A1 A0
//	SetBit(DDRAM_Address,7);
//	hLCD_SendCommand(DDRAM_Address);

//	DDRAM_Address => 	0x09  0 0 0 0 1 0 0 1
//						0x80  1 0 0 0 0 0 0 0
//						--------------------------
//	                          1 0 0 0 1 0 0 1

//	DDRAM_Address => 	0x09  0 0 0 0 1 0 0 1
//						128   1 0 0 0 0 0 0 0
//						--------------------------
//	                          1 0 0 0 1 0 0 1



	hLCD_SendCommand(128+DDRAM_Address);
//	hLCD_SendCommand(0x80+DDRAM_Address);
//	hLCD_SendCommand(0x80|DDRAM_Address);
	_delay_ms(1);
}


