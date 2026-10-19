/**
 * @file GIE_Program.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#include "../../../Inc/Common/Macros.h"
#include "../../../Inc/MCAL/GIE/GIE_Interface.h"


void mGIE_Enable()
{
	SetBit(SREG_Reg,GIE_Bit);
}
void mGIE_Disable()
{
	ClearBit(SREG_Reg,GIE_Bit);
}
