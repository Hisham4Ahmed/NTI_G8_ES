/*//Action
 * Timer0_Interface.h
 *
 *  Created on: Aug 3, 2025
 *      Author: hesham
 */

#ifndef INC_MCAL_TIMER0_TIMER0_INTERFACE_H_
#define INC_MCAL_TIMER0_TIMER0_INTERFACE_H_

#include "../../../Inc/MCAL/Timer0/Timer0_Private.h"


/*this Macro Must be inside Timer0_Config.h*/

#define Timer0_Prescaller          Timer0Prescaller_1
#define Timer0_PreLoadValue        192
#define Timer0_NoOfOverFlowCount   3907

#define Timer0_CompareValue             250
#define Timer0_NoOFCompateMatchCount    4000

#define Timer0_InitDutyCycle             80
#define Timer0_FPWMOutputType            nin_inverting
/*********************************************/



void mTimer0_InitFastPWMMode();
void mTimer0_InitPasheCorrectPWMMode();

void mTimer0_InitNormalMode();
/*ISR For OverFlow */
void __vector_11(void)  __attribute__((signal));

void mTimer0_InitCTCMode();
/*ISR For CompareMatch  */
void __vector_10(void)  __attribute__((signal));

#endif /* INC_MCAL_TIMER0_TIMER0_INTERFACE_H_ */
