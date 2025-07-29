/*
 * main.c
 *
 *  Created on: Jul 29, 2025
 *      Author: hesham
 */
#include "../Inc/HAL/LCD/LCD_Interface.h"
#include "../Inc/HAL/KPD/KPD_Interface.h"
#include <util/delay.h>
void main()
{
	hLCD_Init();
	hKPD_Init();
	uint8_t Button =0xFF;
	//	hLCD_SendChar('A');
//	hLCD_MoveCursor(1,4);
//	hLCD_SendString((uint8_t * )"NTI");
//	hLCD_MoveCursor(2,0);
//	hLCD_SendString((uint8_t * )"Group 8");



	while(1)
	{
		Button=hKPD_GetButton();
		if(Button!=0xFF )
		{
			hLCD_SendChar(Button);

		}
	}
}
