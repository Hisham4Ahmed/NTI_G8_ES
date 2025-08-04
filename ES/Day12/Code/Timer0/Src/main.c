#include <util/delay.h>
#include <stdlib.h>

#include "../Inc/HAL/LCD/LCD_Interface.h"
#include "../Inc/MCAL/ADC/ADC_Interface.h"
#include "../Inc/MCAL/DIO/DIO_Interface.h"
#include "../Inc/MCAL/Timer0/Timer0_Interface.h"
int main()
{
	// /*Toggel Led When Button Pressed */
	// mDIO_ChangeDirectionForPin(GroupB,Pin0,DIO_Input);
	// mDIO_WriteValueForPin(GroupB,Pin0,DIO_High);
	// mDIO_ChangeDirectionForPin(GroupA,Pin0,DIO_Output);

	// /*Direction led2 */
	// mDIO_ChangeDirectionForPin(GroupA,Pin5,DIO_Output);

	// /*Toggel Led Every 1 Sec By timer */
	// /*
	//  * Req = 1 Sec
	//  * System Frequnce = 1Mhz
	//  * PreScaller = 1
	//  * Clk Time =  1uSec
	//  * OverFlowTime = 256 uSec
	//  * NoOfOVFCount = 3906.25 => 3907
	//  * PreLoad Value  = 256 *(1-0.25)=> 192
	//  * */
	// //mTimer0_InitNormalMode();

	// /**
	//  * Require Time = 1 Sec
	//  * System Frequnce = 1Mhz
	//  * PreScaller = 1
	//  * Clk Time = 1 us
	//  * compare value = 1000000 uSec / 4000 * 1usec
	//  */
	// mTimer0_InitCTCMode();
	// mGIE_Enable();
	// uint8_t BtnState =1 ;
	mTimer0_InitFastPWMMode();

	while(1)
	{
		// BtnState= mDIO_ReadValueFromPin(GroupB,Pin0);
		// if(BtnState==0)
		// {
		// 	mDIO_WriteValueForPin(GroupA,Pin0,DIO_High);
		// }
		// else
		// {
		// 	mDIO_WriteValueForPin(GroupA,Pin0,DIO_Low);

		// }
	}
}


void aLed_Action1()
{


	// static uint8_t State = 0 ;

	// if(State==0)
	// {
	// 	State=1;
	// 	mDIO_WriteValueForPin(GroupA,Pin5,DIO_High);
	// }
	// else
	// {
	// 	State=0;
	// 	mDIO_WriteValueForPin(GroupA,Pin5,DIO_Low);
	// }








}



























