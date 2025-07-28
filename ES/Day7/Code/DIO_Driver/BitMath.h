/*
 * BitMath.h
 *
 *  Created on: Jul 28, 2025
 *      Author: hesham
 */

#ifndef BITMATH_H_
#define BITMATH_H_

#define SetBit(Reg,No)    Reg|=(1<<No)  // Reg= Reg|(1<<No)
#define ClearBit(Reg,No)  Reg&=~(1<<No)
#define GetBit(Reg,No)    ((Reg>>No)&1)


#endif /* BITMATH_H_ */
