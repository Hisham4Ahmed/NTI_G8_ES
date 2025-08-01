#include "../Inc/MCAL/ADC/ADC_Interface.h"
#include "../Inc/MCAL/DIO/DIO_Interface.h"
#include <util/delay.h>
#include <stdlib.h>
#include "../Inc/HAL/LCD/LCD_Interface.h"
int main()
{
	mDIO_ChangeDirectionForPin(GroupA,Pin2,DIO_Input);
	mADC_Init();
	hLCD_Init();
	uint16_t DigitalVolt = 0 ;
	uint16_t  AnalogVolt  = 0 ;
	uint8_t String[5];
	uint8_t LastTemp=0;
	uint8_t Temp = 0 ;
	while(1)
	{
		DigitalVolt = mADC_SignleEndedConversion(2);
		// AnalogVolt     = DigitalVolt * Step
		//                = DigitalVolt * 5/1024
		//                = (DigitalVolt * 5 ) / 1024
		// AnalogVolt(mv) = (DigiralVolt * 5000)/1024 ;

		AnalogVolt = (((uint32_t )DigitalVolt*5000)/(float)1024);
		Temp = AnalogVolt/10 ;
		/**
		 * 1- (DigitalVolt*5000) , R1 -> size for R1 Must Be Equale DigitalVolt (uint16_t )
		 * 		0000 0011 1111 1111 -> 0x03FF  * 5000 = 5115000 > 65500
		 */
		if(Temp!=LastTemp)
		{
			hLCD_SendCommand(0x01);
			_delay_ms(2);
			itoa(Temp,String,10);
			hLCD_SendString(String);
		}
		LastTemp=Temp;
	}
}
