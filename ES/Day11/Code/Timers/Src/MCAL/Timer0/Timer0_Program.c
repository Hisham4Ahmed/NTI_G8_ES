/*
 * Timer0_Program.c
 *
 *  Created on: Aug 3, 2025
 *      Author: hesham
 */
#include "../../../../Timers/Inc/Common/BitMath.h"
#include "../../../../Timers/Inc/MCAL/NTI_Atmega32Register.h"
#include "../../../../Timers/Inc/MCAL/Timer0/Timer0_Interface.h"

/**
 * Clock Time      = PreScaller / SystemFrequence
 * OverFlow Time   = 2^n(CLK Time);
 * Number of Count =  Require time / OverFlow Time
 * PreLoad Value   = 2^n(1-0.y)
 */
void mTimer0_InitNormalMode()
{
	// must be Select Normal Mode
		// 1- Bit WGM00 must be Clear
	  	// 2- Bit WGM01 must be Clear
		ClearBit(TCCR0_Reg,WGM00_Bit);
		ClearBit(TCCR0_Reg,WGM01_Bit);
	// PreLoad Value
		 TCNT0_Reg = Timer0_PreLoadValue ;
    // Enable the Interrupt
		 	// it TOIE0: must be 1
		 SetBit(TIMSK_Reg,TOIE0_Bit);
	//Select PreScaller Must be Last Line
		// TCCR0 :  7 6 5 4 3 2 1 0
		//TCCR0_Reg = TCCR0_Reg & (0b11111000);
		TCCR0_Reg = TCCR0_Reg & (0xF8);
		TCCR0_Reg =TCCR0_Reg | Timer0_Prescaller ;
}

void __vector_11(void)
{
	static uint32_t Count = 0 ;
	Count++;
	if (Count==Timer0_NoOfOverFlowCount)
	{
		//Action
		aLed_Action1();
		//PreLoad Update
		TCNT0_Reg = Timer0_PreLoadValue;
		//Clear Count
		Count = 0 ;
	}
}




/**
 * Clock Time      = PreScaller / SystemFrequence
 * Compare Time    = Compare Value * (CLK Time);
 * Number of Count =  Require time / Compare Time
 * Compare Value   =  Require time / (No Of Count * Clk Time)
 * PreLoad Value   = 2^n(1-0.y)
 */


void mTimer0_InitCTCMode()
{

	// must be Select CTC Mode
		// 1- Bit WGM00 must be Clear
	  	// 2- Bit WGM01 must be Set
	ClearBit(TCCR0_Reg,WGM00_Bit);
	SetBit(TCCR0_Reg,WGM01_Bit);
	// Compare Value
		// Update the OCR0 By Compare Value
		OCR0_Reg = Timer0_CompareValue;
    // Enable the Interrupt
		 	// it OCIE0: must be 1
		SetBit(TIMSK_Reg,OCIE0_Bit);
	//Select PreScaller Must be Last Line
		// TCCR0 :  7 6 5 4 3 2 1 0
		//TCCR0_Reg = TCCR0_Reg & (0b11111000);
		TCCR0_Reg &=(0xF8);
		TCCR0_Reg |=(Timer0_Prescaller);

}


void __vector_10(void)
{
	static uint32_t Count = 0 ;
	Count++;
	if(Count==Timer0_NoOFCompateMatchCount)
	{
		//Action
		aLed_Action1();
		//Clear Counter
		Count=0;
	}
}


void mTimer0_InitFastPWMMode()
{

}
































