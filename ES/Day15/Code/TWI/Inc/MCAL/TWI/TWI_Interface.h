/**
 * @file TWI_Interface.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef _TWI_INTERFACE_H
#define _TWI_INTERFACE_H

#include <stdint.h>
#include "TWI_Private.h"
#include "TWI_Config.h"
/*Master Functions */

void mTWI_MasterInit(); // Done 

int8_t mTWI_StartCondition();

void mTWI_StopCondition(); // Done 

void mTWI_ReStartCondition();


int8_t mTWI_SLAWithWriteWithACK(uint8_t SlaveAddress); // Done 
void mTWI_SLAWithReadWithACK(uint8_t SlaveAddress);


int8_t mTWI_SentDataPacketWithACK(uint8_t Data); // Done 

uint8_t mTWI_RecivieDataPacketWithACK();





#endif