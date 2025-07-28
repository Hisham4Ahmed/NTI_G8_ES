/*
 * DIO_Program.c
 *
 *  Created on: Jul 28, 2025
 *      Author: hesham
 */


#include "DIO_Interface.h"
#include "BitMath.h"
#include "NTI_Atmega32Register.h"

void mDIO_ChangeDirectionForPin(uint8_t GroupName , uint8_t PinNumber , uint8_t DirectionState)
{
	if(PinNumber>= Pin0 && PinNumber <=Pin7)
	{
		if (DirectionState==DIO_Output)
		{
			switch(GroupName)
			{
			case GroupA: SetBit(DDRA_Reg,PinNumber);break;
			case GroupB: SetBit(DDRB_Reg,PinNumber);break;
			case GroupC: SetBit(DDRC_Reg,PinNumber);break;
			case GroupD: SetBit(DDRD_Reg,PinNumber);break;
			default :  // GroupName Outof Rang
				break;
			}
		}
		else if (DirectionState==DIO_Input)
		{
			switch(GroupName)
			{
			case GroupA: ClearBit(DDRA_Reg ,PinNumber);break;
			case GroupB: ClearBit(DDRB_Reg,PinNumber);break;
			case GroupC: ClearBit(DDRC_Reg,PinNumber);break;
			case GroupD: ClearBit(DDRD_Reg,PinNumber);break;
			default :  // GroupName Outof Rang
				break;
			}
		}
		else
		{
			//DirectionState NotVaild
		}
	}
	else
	{
		// Pin Number Outof Range
	}

}
void mDIO_WriteValueForPin(uint8_t GroupName ,  uint8_t PinNumber , uint8_t OutputType)
{
//	Task2
}
uint8_t mDIO_ReadValueFromPin(uint8_t  GroupName, uint8_PinNumber)
{
	// Task3
	uint8_t InputValue ;
	return  InputValue;
}



void mDIO_ChangeDirectionforGroup(uint8_t GroupName , uint8_t Direcation)
{
	//Task 4

}
void mDIO_WriteValueForGroup(uint8_t GroupName ,  uint8_t OutputValue)
{
	if(OutputValue>=0x00 && OutputValue<=0xFF)
	{
		switch(GroupName)
		{
		case GroupA: PORTA_Reg=OutputValue;break;
		case GroupB: PORTB_Reg=OutputValue;break;
		case GroupC: PORTC_Reg=OutputValue;break;
		case GroupD: PORTD_Reg=OutputValue;break;
		default: // GroupName Not Vaild
			break ;
		}
	}
	else
	{
		// Output value out of Range
	}

}
uint8_t mDIO_ReadValueFromGroup(uint8_t  GroupName)
{
	// Task 5
}
