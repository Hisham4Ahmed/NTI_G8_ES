/*
 * Timer0_Private.h
 *
 *  Created on: Aug 3, 2025
 *      Author: hesham
 */

#ifndef INC_MCAL_TIMER0_TIMER0_PRIVATE_H_
#define INC_MCAL_TIMER0_TIMER0_PRIVATE_H_


#define CS00_Bit  0
#define CS01_Bit  1
#define CS02_Bit  2

#define COM00_Bit 4
#define COM01_Bit 5

#define WGM01_Bit  3
#define WGM00_Bit  6


#define TOIE0_Bit   0
#define OCIE0_Bit   1

#define TOV0_Bit   0
#define OCF0_Bit   1
/***************************************/
#define Timer0Disabled               0
#define Timer0Prescaller_1           1
#define Timer0Prescaller_8           2
#define Timer0Prescaller_64          3
#define Timer0Prescaller_256         4
#define Timer0Prescaller_1024        5
#define Timer0ExternalCLK_Falling	 6
#define Timer0ExternalCLK_Rising 	 7

/***************************************/
#define nin_inverting        1
#define inverting            2



















#endif /* INC_MCAL_TIMER0_TIMER0_PRIVATE_H_ */
