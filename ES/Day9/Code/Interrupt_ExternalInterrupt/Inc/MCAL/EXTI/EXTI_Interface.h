/*
 * EXTI_Interface.h
 *
 *  Created on: Jul 30, 2025
 *      Author: hesham
 */

#ifndef INC_MCAL_EXTI_EXTI_INTERFACE_H_
#define INC_MCAL_EXTI_EXTI_INTERFACE_H_


/**
 * SensControl:
 * 	LowLevel  = 0
 * 	AnyChange = 1
 * 	Falling   = 2
 * 	Rising    = 3
 * 	 Sudo Code for mEXTI0_Enable (uint8_t SensControl)
 * 	 {
 * 	 	1- Check on the SensControl  Option
 * 	 		if SensControl == 0
 * 	 			Bit1  And Bit 0 in MCUCR Register must be zero
 * 	 		if SensControl == 1
 * 	 			Bit 1 in MCUCR Register must be Zero    And
 * 	 			Bit 0  in MCUCR Register must be One
 * 	 		if SensControl == 2
 * 	 			Bit 1 in MCUCR Register must be One    And
 * 	 			Bit 0  in MCUCR Register must be Zero
 * 	 		if SensControl == 3
 * 	 			Bit 1 in MCUCR Register must be One    And
 * 	 			Bit 0  in MCUCR Register must be One
 * 	 	2- Enable the SIE For EXTI0
 * 	 		Bit 6 in GICR Register Must be one
 * 	 }
 * 	 */
void mEXTI0_Enable(uint8_t SensControl);
void mEXTI1_Enable(uint8_t SensControl);
void mEXTI2_Enable(uint8_t SensControl);
void
//ISR
void __vector_1(void) __attribute__((signal)); // ISR For EXTI0 ;
void __vector_2(void) __attribute__((signal)); // ISR For EXTI1 ;
void __vector_3(void) __attribute__((signal)); // ISR For EXTI2 ;


#endif /* INC_MCAL_EXTI_EXTI_INTERFACE_H_ */
