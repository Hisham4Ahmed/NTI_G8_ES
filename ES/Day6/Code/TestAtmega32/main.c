/*
 * main.c
 *
 *  Created on: Jul 27, 2025
 *      Author: hesham
 */

/**
 * Task :
 * 	1- Complete the NTI_Atmega32Register.h File
 * 	2- BitWise Operation
 * 		1-SetBit     (Write 1 for Specific Bit)
 * 		2-ClearBit   (Write 0 for Specific Bit)
 * 		3-ToggleBit  (Change the Value for Specific Bit )
 * 		4-GetBit     (Read the Value for Specific Bit )
 */



#include <stdint.h>
// $3B ($5B) GICR  -> 1 byte


#define GICR_REG      *((volatile uint8_t *)0x5B)


void main()
{
//	uint8_t *GICR_Ptr =  (uint8_t *) 0x5B;
//	*GICR_Ptr = 0xAA;
//	*((volatile uint8_t *)0x5B) = 0x03; // ->
	GICR_REG = 0x50;

}
