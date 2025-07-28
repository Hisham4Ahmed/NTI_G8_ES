/*
 * main.c
 *
 *  Created on: Jul 28, 2025
 *      Author: hesham
 */


/**
 * 1- Change the Value of Direction Reg
 * 2- Change the Value for 1 Bit
 */


	/**
	 * 1 = 00000001;
	 *     00000010;
	 *     00000100;
	 *     00001000;
	 *     00010000;
	 *
	 */

/**
 *
 * SetBit
 * 	Reg  =  Reg  | (1<< NoOfBit);
 * 	ex  Reg = 0b1100 0000  NoOfBit = 4
 * 		Reg =  Reg | (1<<4);
 *
 * 			0b1100 0000
 * 						|
 * 			0b0001 0000
 * 			-------------
 * 			  1101 0000
 *
 * SetBit(Reg,Bit)   Reg = Reg|(1<<Bit)
 *  */

/**
 * (0 << 4)
 * 	0 => 0000 0000
 * 		 0000 0000
 * 		 0000 0000
 */
/**
 * Clear Bit
 *
 * Reg = Reg & ~ (1<<NoOfBit);   // Reg = Reg & (0 << NoOfBit);
 *
 * ex  Reg = 0b1100 0111   NoOfBit = 2
 *
 *
 * -> (1<<NoOfBit)  -> 0000 0100
 * -> ~(1<<NoOfBit) -> 1111 1011
 *
 *Reg =  				1100 0111
 * 							 		&
 *~(1<<NoOfBit)			1111 1011
 *				-----------------------
 *						1100 0011
 */
/**
 * GetBit
 * uint8_t Read = (Reg >> NoofBit) & 1 ;
 *
 * ex  Reg = 0b1100 0111   NoOfBit = 2 , 3
 *
 * 	Reg >> 2 => 1100 0111
 * 				0110 0011
 *
 * 			    0011 0001
 * 			   &0000 0001
 * 			   -----------
 * 			   Read = 0000 0001	-> Bit 1
 * 			---------------------------------
 * Reg >> 3 =>  1100 0111
 * 			1=  0110  0011
 * 			2=	0011  0001
 * 			3=  0001  1000
 *
 * 			0001  1000
 * 		 &  0000  0001
 * 		 -----------------
 * 		 Read= 	0000  0000
 */


#define SetBit(Reg,No)    Reg|=(1<<No)  // Reg= Reg|(1<<No)
#define ClearBit(Reg,No)  Reg&=~(1<<No)
#define GetBit(Reg,No)    ((Reg>>No)&1)

#define Output     1
#define High       1

#define Pin0  0
#define Pin1  1
#define Pin2  2
#define Pin3  3
#define Pin4  4
#define Pin5  5
#define Pin6  6
#define Pin7  7

/*
 * Control on Led
 * 1- Turn On for 3 Sec
 * 2- Turn OFF for 3 Sec
 * by two Connection
 *
 * */

/**
 * We need control on Led By Button
 * 	if Button Pressed  Led On
 * 	if Button Not Pressed Led off
 * 	Led    : Gourp = C   Pin = 5
 * 	Button : Gourp = D   Pin = 2
 * 	Connection Type : External Pull Up
 * 					  1- Not Pressed   0- Pressed
 */


/**
 * Task1:
 *  We need control on Led By Button
 * 	if Button Pressed  Led On
 * 	if Button Not Pressed Led off
 * 	Led    : Gourp =    PinNumberPin =
 * 	Button : Gourp =    Pin =
 * 	Button Connection Type : Internal  Pull Up   & External Pull Down
 * 	Led Connection Type : Source Connection & Sink Connection
 *
 * */

/**
 * Display for Number By Seven Segment */









#include "NTI_Atmega32Register.h"
#include <util/delay.h>
#include "SSD_Private.h"



int main()
{
	// SSD will connecntion on Group A
		// So Group A Must be Directio as Output
	uint8_t SSDNumber[10]=
	{		Cathod1_Zero,
			Cathod1_One,
			Cathod1_Two,
			Cathod1_Three,
			Cathod1_Four,
			Cathod1_Five,
			Cathod1_Six,
			Cathod1_Seven,
			Cathod1_Eight,
			Cathod1_Nine
	};
	DDRA_Reg = 0xFF;
	uint8_t Count = 0 ;
	while(1)
	{
		for(Count=0;Count<10;Count++)
		{
			PORTA_Reg = SSDNumber[Count];
			_delay_ms(1000);
		}
	}
//		DDRA_Reg = 0xFF ;
//		PORTA_Reg= Cathod1_Zero;
//		_delay_ms(1000);
//		PORTA_Reg= Cathod1_One;
//		_delay_ms(1000);
//		PORTA_Reg= Cathod1_Two;
//		_delay_ms(1000);
//		PORTA_Reg= Cathod1_Three;
//		_delay_ms(1000);
//		PORTA_Reg= Cathod1_Four;
//		_delay_ms(1000);
//		PORTA_Reg= Cathod1_Five;
//		_delay_ms(1000);
//		PORTA_Reg= Cathod1_Six;
//		_delay_ms(1000);
//		PORTA_Reg= Cathod1_Seven;
//		_delay_ms(1000);
//		PORTA_Reg= Cathod1_Eight;
//		_delay_ms(1000);
//		PORTA_Reg= Cathod1_Nine;
//		_delay_ms(1000);
		// Direction
//		SetBit(DDRC_Reg,Pin5); //Led
//		ClearBit(DDRD_Reg,Pin2); //Button
//		uint8_t ButtonStatus  = 1;
//		while(1)
//		{
//			// Read Buton
//				ButtonStatus=GetBit(PIND_Reg,Pin2);
//			//Check on Button
//				if(ButtonStatus==0)//Button Pressed
//				 {
//					// Action Led On
//					SetBit(PORTC_Reg,Pin5);
//				 }
//
//				else if (ButtonStatus==1) //Not Pressed
//				{
//					//Action Led Off
//					ClearBit(PORTC_Reg,Pin5);
//				}
//			// if Button Not Pressed -> Action Led Off
//		}





//		/*
//		 * Source Connention Group A  :  0
//		 * Sink  Connection Group A   :  3 */
//
//		// Direction : as OutPut
//		SetBit(DDRA_Reg,Pin0);
//		// Direction : as OutPut
//		SetBit(DDRA_Reg,Pin3);
//		while(1)
//		{
//			//Source Connection*/
//			//* 1- Turn On for 3 Sec
//			SetBit(PORTA_Reg,Pin0);
//			_delay_ms(3000);
//			//* 1- Turn Off for 3 Sec
//			ClearBit(PORTA_Reg,Pin0);
//			_delay_ms(3000);
//
//
//			//Sink Connection*/
//			//* 1- Turn On for 3 Sec
//			ClearBit(PORTA_Reg,Pin3);
//			_delay_ms(3000);
//			//* 2- Turn Off for 3 Sec
//			SetBit(PORTA_Reg,Pin3);
//			_delay_ms(3000);
//
//
//		}



//	// Size for this 1 Byte (8Bits)
//	DDRA_Reg = 0xFF;
//////	DDRB_Reg = 70 ;
//////	DDRC_Reg = 0b11110001;
//	PORTA_Reg = 0xFF;
//
//
//
//	ClearBit(PORTA_Reg,Pin2);
//
//
}
