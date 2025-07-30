
/**
 * 1- EXTI0  and Try This App By Use EXTI0
 * @return
 */
#include <stdint.h>
#include <util/delay.h>
#include "../Inc/MCAL/DIO/DIO_Interface.h"
#include "../Inc/MCAL/GIE/GIE_Interface.h"
#include "../Inc/MCAL/EXTI/EXTI_Interface.h"
int main()
{
	/*Lab:
	 * 	Action1 : Led1 Toggel Every 1Sec
	 * 	Action2 : Led2 Toggel when Button Pressed
	 * 	Action1 And Action Must be Working together*/
	/*Action1-> working as Background */
	mDIO_ChangeDirectionForPin(GroupA,Pin0,DIO_Output);
	/*
	 * Action2:
	 * 	1- Led  GroupA ,Pin 5
	 * 	2- Btn  EXTI2*/
	mDIO_ChangeDirectionForPin(GroupA,Pin5,DIO_Output); // for Led 2
	// Btn EXTI2 -> PB2
	mDIO_ChangeDirectionForPin(GroupB,Pin2,DIO_Input);
	mDIO_WriteValueForPin(GroupB,Pin2,DIO_High);
	mEXTI2_Enable(EXTI_Rising);
	mGIE_Enable();
	while(1)
	{
		mDIO_WriteValueForPin(GroupA,Pin0,DIO_High);
		_delay_ms(1000);
		mDIO_WriteValueForPin(GroupA,Pin0,DIO_Low);
		_delay_ms(1000);
	}
	return 0 ;
}

void __vector_3(void) __attribute__((signal)); // ISR For EXTI2 ;
void __vector_3()
{
	static uint8_t Status = 0 ;
	if(Status==0)
	{
		Status=1;
		mDIO_WriteValueForPin(GroupA,Pin5,DIO_High);
	}
	else if (Status==1)
	{
		Status=0;
		mDIO_WriteValueForPin(GroupA,Pin5,DIO_Low);
	}
}

void __vector_1()
{
	// Action
}
void __vector_2()
{
	// Action
}








