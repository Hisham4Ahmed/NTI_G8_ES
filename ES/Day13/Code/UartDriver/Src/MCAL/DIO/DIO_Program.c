/**
 * @file DIO_Program.c
 * @author Hesham Ahmed (Hisham4Ahmed@gmail.com)
 * @brief  This file contains the implementation of the DIO (Digital Input/Output) functions.
 * @version 0.1
 * @date 2025-08-04
 * @copyright Copyright (c) 2025 , Gestell Company   
 */




#include "../../../Inc/Common/Macros.h"
#include "../../../Inc/MCAL/DIO/DIO_Interface.h"
#include "../../../Inc/MCAL/NTI_Atmega32Register.h"

void mDIO_ChangeDirectionForPin(uint8_t GroupName , uint8_t PinNumber , uint8_t DirectionState)
{
	if(PinNumber>= Pin0 && PinNumber <=Pin7)
	{
		if (DirectionState==Output)
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
		else if (DirectionState==Input)
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
	if(PinNumber>= Pin0 && PinNumber <=Pin7)
	{
		if (OutputType==Output)
		{
			switch(GroupName)
			{
			case GroupA: SetBit(PORTA_Reg,PinNumber);break;
			case GroupB: SetBit(PORTB_Reg,PinNumber);break;
			case GroupC: SetBit(PORTC_Reg,PinNumber);break;
			case GroupD: SetBit(PORTD_Reg,PinNumber);break;
			default :  // GroupName Outof Rang
				break;
			}
		}
		else if (OutputType==Input)
		{
			switch(GroupName)
			{
			case GroupA: ClearBit(PORTA_Reg ,PinNumber);break;
			case GroupB: ClearBit(PORTB_Reg,PinNumber);break;
			case GroupC: ClearBit(PORTC_Reg,PinNumber);break;
			case GroupD: ClearBit(PORTD_Reg,PinNumber);break;
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
uint8_t mDIO_ReadValueFromPin(uint8_t  GroupName, uint8_t PinNumber)
{
	// Task3
	uint8_t InputValue ;
	if(PinNumber>= Pin0 && PinNumber <=Pin7)
	{
		switch(GroupName)
		{
		case GroupA:InputValue=GetBit(PINA_Reg ,PinNumber);break;
		case GroupB:InputValue=GetBit(PINB_Reg,PinNumber);break;
		case GroupC:InputValue=GetBit(PINC_Reg,PinNumber);break;
		case GroupD:InputValue=GetBit(PIND_Reg,PinNumber);break;
		default :  // GroupName Outof Rang
			break;
		}
	}
	return  InputValue;
}
void mDIO_ToggleValueForPin(uint8_t GroupName ,  uint8_t PinNumber)
{
	if(PinNumber>= Pin0 && PinNumber <=Pin7)
	{
			switch(GroupName)
			{
			case GroupA: ToggleBit(PORTA_Reg,PinNumber);break;
			case GroupB: ToggleBit(PORTB_Reg,PinNumber);break;
			case GroupC: ToggleBit(PORTC_Reg,PinNumber);break;
			case GroupD: ToggleBit(PORTD_Reg,PinNumber);break;
			default :  // GroupName Outof Rang
				break;
			}
	}
}



void mDIO_ChangeDirectionforGroup(uint8_t GroupName , uint8_t DirecationValue)
{
	//Task 4 // DDR
	if(DirecationValue>=0x00 && DirecationValue<=0xFF)
	{
		switch(GroupName)
		{
		case GroupA: DDRA_Reg=DirecationValue;break;
		case GroupB: DDRB_Reg=DirecationValue;break;
		case GroupC: DDRC_Reg=DirecationValue;break;
		case GroupD: DDRD_Reg=DirecationValue;break;
		default: // GroupName Not Vaild
			break ;
		}
	}
	else
	{
		// Output value out of Range
	}


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
void mDIO_ToggleValueForGroup(uint8_t GroupName)
{
		switch(GroupName)
		{
		case GroupA: PORTA_Reg=~PORTA_Reg;break;
		case GroupB: PORTB_Reg=~PORTB_Reg;break;
		case GroupC: PORTC_Reg=~PORTC_Reg;break;
		case GroupD: PORTD_Reg=~PORTD_Reg;break;
		default :  // GroupName Outof Rang
			break;
		}
}
uint8_t mDIO_ReadValueFromGroup(uint8_t  GroupName)
{
	uint8_t InputValue ;
	switch(GroupName)
	{
	case GroupA:InputValue=PINA_Reg;break;
	case GroupB:InputValue=PINB_Reg;break;
	case GroupC:InputValue=PINC_Reg;break;
	case GroupD:InputValue=PIND_Reg;break;
	default :  // GroupName Outof Rang
		break;
	}
	return InputValue;

}
