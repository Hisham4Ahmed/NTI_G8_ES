/*
 * LCD_Program.c
 *
 *  Created on: Jul 29, 2025
 *      Author: hesham
 */

#include <util/delay.h>

#include "../../../Inc/Common/Macros.h"
#include "../../../Inc/MCAL/DIO/DIO_Interface.h"
#include "../../../Inc/HAL/LCD/LCD_Interface.h"

void hLCD_Init()
{
	#if LCDMode == Lcd_8BitMode
		// Set Dirtection
		mDIO_ChangeDirectionForPin(LCD_RSGroup,LCD_RSPin,Output);
		mDIO_ChangeDirectionForPin(LCD_RWGroup,LCD_RWPin,Output);
		mDIO_ChangeDirectionForPin(LCD_EGroup,LCD_EPin,Output);
		mDIO_ChangeDirectionforGroup(LCD_DataGroup,0xFF);
		/*Initaliaztion 8Bit Mode */
		//Delay More Than 30ms
		_delay_ms(35);
		// Function Set
		hLCD_SendCommand(FunctionSet);
		//Display ON/OFF Control
		hLCD_SendCommand(DisplayControl);
		//Display Clear
		hLCD_SendCommand(Lcd_ClearDisplay);
		//	Entry Mode Set
		hLCD_SendCommand(EntryMode);
	#elif LCDMode==Lcd_4BitMode
		mDIO_ChangeDirectionForPin(LCD_RSGroup,LCD_RSPin,Output);
		mDIO_ChangeDirectionForPin(LCD_RWGroup,LCD_RWPin,Output);
		mDIO_ChangeDirectionForPin(LCD_EGroup,LCD_EPin,Output);
		mDIO_ChangeDirectionForPin(LCD_D4Group,LCD_D4Pin,Output);
		mDIO_ChangeDirectionForPin(LCD_D5Group,LCD_D5Pin,Output);
		mDIO_ChangeDirectionForPin(LCD_D6Group,LCD_D6Pin,Output);
		mDIO_ChangeDirectionForPin(LCD_D7Group,LCD_D7Pin,Output);
		/*Initaliaztion 4Bit Mode */
		hLCD_SendCommand(0x02);
		// Function Set
		hLCD_SendCommand(FunctionSet);
		//Display ON/OFF Control
		hLCD_SendCommand(DisplayControl);
		//Display Clear
		hLCD_SendCommand(Lcd_ClearDisplay);
		//	Entry Mode Set
		hLCD_SendCommand(EntryMode);
	#else
    	#error "Invalid LCD Mode"
	#endif 
}
void hLCD_SendCommand(uint8_t Command)
{
	#if LCDMode == Lcd_8BitMode
		mDIO_WriteValueForPin(LCD_RSGroup,LCD_RSPin,Low);
		mDIO_WriteValueForPin(LCD_RWGroup,LCD_RWPin,Low);
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,High);
		mDIO_WriteValueForGroup(LCD_DataGroup,Command);
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,Low);
	#elif LCDMode==Lcd_4BitMode
		mDIO_WriteValueForPin(LCD_RSGroup,LCD_RSPin,Low);
		mDIO_WriteValueForPin(LCD_RWGroup,LCD_RWPin,Low);
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D4Pin,GetBit(Command,4));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D5Pin,GetBit(Command,5));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D6Pin,GetBit(Command,6));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D7Pin,GetBit(Command,7));
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,High);
		_delay_ms(1);
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,Low);
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D4Pin,GetBit(Command,0));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D5Pin,GetBit(Command,1));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D6Pin,GetBit(Command,2));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D7Pin,GetBit(Command,3));
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,High);
		_delay_ms(1);
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,Low);
		
	#else
		#error "Invalid LCD Mode"
	#endif
	_delay_ms(2);

}

void hLCD_SendChar(uint8_t Character)
{
	#if LCDMode == Lcd_8BitMode
		mDIO_WriteValueForPin(LCD_RSGroup,LCD_RSPin,High);
		mDIO_WriteValueForPin(LCD_RWGroup,LCD_RWPin,Low);
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,High);
		mDIO_WriteValueForGroup(LCD_DataGroup,Character);
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,Low);
	#elif LCDMode==Lcd_4BitMode
		mDIO_WriteValueForPin(LCD_RSGroup,LCD_RSPin,Low);
		mDIO_WriteValueForPin(LCD_RWGroup,LCD_RWPin,Low);
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D4Pin,GetBit(Character,4));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D5Pin,GetBit(Character,5));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D6Pin,GetBit(Character,6));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D7Pin,GetBit(Character,7));
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,High);
		_delay_ms(1);
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,Low);
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D4Pin,GetBit(Character,0));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D5Pin,GetBit(Character,1));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D6Pin,GetBit(Character,2));
		mDIO_WriteValueForPin(LCD_D4Group,LCD_D7Pin,GetBit(Character,3));
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,High);
		_delay_ms(1);
		mDIO_WriteValueForPin(LCD_EGroup,LCD_EPin,Low);
	#else
		#error "Invalid LCD Mode"
	#endif
}

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

void hLCD_MoveCursor(uint8_t Line ,uint8_t Digit)
{
	uint8_t DDRAM_Address = 0 ;
	switch(Line)
	{
	case FirstLine   :  DDRAM_Address = FirstLineAddress  + Digit ;break;
	case SecondLine  :  DDRAM_Address = SecondLineAddress + Digit ;break;
	default:
			break;
	}

	hLCD_SendCommand(Lcd_SetDDRAM|DDRAM_Address);
}


void hLCD_SendNumber(float Number)
{

}
void hLCD_StoreSpecialChar(uint8_t *Pattern , uint8_t Location)
{
	uint8_t CGRAM_Address = 0 ;
	CGRAM_Address = Location  * 8 ;
	hLCD_SendCommand(Lcd_SetCGRAM| CGRAM_Address);
	uint8_t Count = 0 ;
	for(Count = 0 ; Count < 8 ; Count++)
	{
		hLCD_SendChar(Pattern[Count]);
	}
	hLCD_MoveCursor(FirstLine,0);
}
