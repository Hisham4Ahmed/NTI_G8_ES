/*
 * KPD_Program.c
 *
 *  Created on: Jul 29, 2025
 *      Author: hesham
 */


#include "../../../Inc/MCAL/DIO/DIO_Interface.h"
#include "../../../Inc/BitMath.h"
#include "../../../Inc/HAL/KPD/KPD_Interface.h"
#include <util/delay.h>
static uint8_t KPD_ColoumGroup[KPD_Coloum]={KPD_C0Group,KPD_C1Group,KPD_C2Group};
static uint8_t KPD_ColoumPin[KPD_Coloum]={KPD_C0Pin,KPD_C1Pin,KPD_C2Pin};

static uint8_t KPD_RowGroup[KPD_Row]={KPD_R0Group,KPD_R1Group,KPD_R2Group};
static uint8_t KPD_RowPin[KPD_Row]={KPD_R0Pin,KPD_R1Pin,KPD_R2Pin};



static uint8_t KPDName[KPD_Row][KPD_Coloum]=
{
		{'1','2','3'},//R0
		{'4','5','6'},//R1
		{'7','8','9'},//R2
};


void hKPD_Init()
{
	//Set Dirction
	mDIO_ChangeDirectionForPin(KPD_R0Group,KPD_R0Pin,DIO_Input);
	mDIO_ChangeDirectionForPin(KPD_R1Group,KPD_R1Pin,DIO_Input);
	mDIO_ChangeDirectionForPin(KPD_R2Group,KPD_R2Pin,DIO_Input);

	//Enable Pull
	mDIO_WriteValueForPin(KPD_R0Group,KPD_R0Pin,DIO_High);
	mDIO_WriteValueForPin(KPD_R1Group,KPD_R1Pin,DIO_High);
	mDIO_WriteValueForPin(KPD_R2Group,KPD_R2Pin,DIO_High);

	//Set Direction for Coloum
	mDIO_ChangeDirectionForPin(KPD_C0Group,KPD_C0Pin,DIO_Output);
	mDIO_ChangeDirectionForPin(KPD_C1Group,KPD_C1Pin,DIO_Output);
	mDIO_ChangeDirectionForPin(KPD_C2Group,KPD_C2Pin,DIO_Output);

	//Set Dafulat Value for Coloum
	mDIO_WriteValueForPin(KPD_C0Group,KPD_C0Pin,DIO_High);
	mDIO_WriteValueForPin(KPD_C1Group,KPD_C1Pin,DIO_High);
	mDIO_WriteValueForPin(KPD_C2Group,KPD_C2Pin,DIO_High);

}
uint8_t hKPD_GetButton()
{
	int8_t ButtonState = -1 ;
	for(uint8_t C = 0 ; C <KPD_Coloum;C++)
	{
		mDIO_WriteValueForPin(KPD_ColoumGroup[C],KPD_ColoumPin[C],DIO_Low);
		for(uint8_t R = 0 ; R<KPD_Row;R++)
		{
				ButtonState=mDIO_ReadValueFromPin(KPD_RowGroup[R],KPD_RowPin[R]);
				_delay_ms(100);// Solve Bug s
				if(ButtonState==Pressed)
				{
					mDIO_WriteValueForPin(KPD_ColoumGroup[C],KPD_ColoumPin[C],DIO_High);
					return KPDName[R][C];
				}
		}
		mDIO_WriteValueForPin(KPD_ColoumGroup[C],KPD_ColoumPin[C],DIO_High);
	}
	return 0xFF;
}
