/*
 * NTI_Atmega32Register.h
 *
 *  Created on: Jul 28, 2025
 *      Author: hesham
 */

#ifndef NTI_ATMEGA32REGISTER_H_
#define NTI_ATMEGA32REGISTER_H_
#include <stdint.h>

#define SREG_Reg 					*((volatile uint8_t *)0x5F)
/*EXTI*/
#define MCUCR_Reg 	*((volatile uint8_t *)0x55)
#define MCUCSR_Reg 	*((volatile uint8_t *)0x54)
#define GICR_Reg 	*((volatile uint8_t *)0x5B)
#define GIFR_Reg 	*((volatile uint8_t *)0x5A)






/*Direction DIO*/
#define DDRA_Reg *((volatile uint8_t*)0x3A)
#define DDRB_Reg *((volatile uint8_t*)0x37)
#define DDRC_Reg *((volatile uint8_t*)0x34)
#define DDRD_Reg *((volatile uint8_t*)0x31)

/*Output DIO*/
#define PORTA_Reg *((volatile uint8_t*)0x3B)
#define PORTB_Reg *((volatile uint8_t*)0x38)
#define PORTC_Reg *((volatile uint8_t*)0x35)
#define PORTD_Reg *((volatile uint8_t*)0x32)

/*Input DIO*/
#define PINA_Reg *((volatile uint8_t*)0x39)
#define PINB_Reg *((volatile uint8_t*)0x36)
#define PINC_Reg *((volatile uint8_t*)0x33)
#define PIND_Reg *((volatile uint8_t*)0x30)




//#define SPH_Reg 					*((volatile uint8_t *)0x5E)
//#define SPL_Reg 					*((volatile uint8_t *)0x5D)
//#define _Reg 						*((volatile uint8_t *)0x)
//#define _Reg 						*((volatile uint8_t *)0x)
//#define _Reg 						*((volatile uint8_t *)0x)
//#define _Reg 						*((volatile uint8_t *)0x)

//#define _Reg *((volatile uint8_t *)0x)
//#define OSCCAL_Reg *((volatile uint8_t *)0x51)
//#define OCDR_Reg *((volatile uint8_t *)0x51)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//#define _Reg *((volatile uint8_t *)0x)
//
//
//
//
//
//


#endif /* NTI_ATMEGA32REGISTER_H_ */
