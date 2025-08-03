/*
 * GIE_Program.c
 *
 *  Created on: Jul 30, 2025
 *      Author: hesham
 */


#include "../../../../Timers/Inc/Common/BitMath.h"
#include "../../../../Timers/Inc/MCAL/GIE/GIE_Interface.h"



void mGIE_Enable()
{
	SetBit(SREG_Reg,GIE_Bit);
}
void mGIE_Disable()
{
	ClearBit(SREG_Reg,GIE_Bit);
}
