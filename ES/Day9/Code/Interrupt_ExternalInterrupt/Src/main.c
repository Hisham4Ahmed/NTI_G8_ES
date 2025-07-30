
#include <stdint.h>
#include <util/delay.h>
#include "../Inc/MCAL/DIO/DIO_Interface.h"
#include "../Inc/MCAL/GIE/GIE_Interface.h"
#include "../Inc/MCAL/EXTI/EXTI_Interface.h"
int main()
{
	mEXTI0_Enable();
	mGIE_Enable();

	//	/**
	//	 * Led 1 >GroupA Pin 0
	//	 */
	//	mDIO_ChangeDirectionForPin(GroupA,Pin0,DIO_Output);
	//	/**
	//	 * led 2 > GroupA Pin 5*/
	//	mDIO_ChangeDirectionForPin(GroupA,Pin5,DIO_Output);
	//	/**
	//	 * Btn-> GroupB , Pin0 */
	//	mDIO_ChangeDirectionForPin(GroupB,Pin0,DIO_Input);
	//	mDIO_WriteValueForPin(GroupB,Pin0,DIO_High);
	//	uint8_t Btn = 1;
	//	while(1)
	//	{
	//		mDIO_WriteValueForPin(GroupA,Pin0,DIO_High);//-> 5ms
	//		_delay_ms(1000);//->1s
	//		mDIO_WriteValueForPin(GroupA,Pin0,DIO_Low);//->5ms
	//		_delay_ms(1000);//->1S
	//		Btn=mDIO_ReadValueFromPin(GroupB,Pin0);//3ms
	//		if(Btn==0)//1ms
	//		{
	//			mDIO_WriteValueForPin(GroupA,Pin5,DIO_High);//5ms
	//		}
	//		else if(Btn==1)
	//		{
	//			mDIO_WriteValueForPin(GroupA,Pin5,DIO_Low);//5ms
	//
	//		}
	//	}


	return 0 ;
}




void __vector_1()
{
	// Action
}
void __vector_2()
{
	// Action
}
void __vector_3()
{
	// Action
}
