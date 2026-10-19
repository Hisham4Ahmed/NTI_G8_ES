#include <util/delay.h>
#include <stdlib.h>

#include "../Inc/HAL/LCD/LCD_Interface.h"
#include "../Inc/MCAL/ADC/ADC_Interface.h"
#include "../Inc/MCAL/DIO/DIO_Interface.h"
#include "../Inc/MCAL/Timer0/Timer0_Interface.h"
int main()
{

	// PB3 Must be Output 
	mDIO_ChangeDirectionForPin(GroupB,Pin3,DIO_Output);
	mTimer0_InitFastPWMMode();
	
	while(1)
	{
		for(uint8_t Brightness = 0;Brightness < 101 ; Brightness+=10)
		{
			mTimer0_ChangeDutyCycle(Brightness,nin_inverting);
			_delay_ms(1000);
		}
	}
}





























