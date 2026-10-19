/**
 * @file TWI_Config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef _TWI_CONFIG_H
#define _TWI_CONFIG_H

/*   
    Prescaller1, -> 4^TWPS = 1 
    Prescaller4, -> 4^TWPS = 4 
    Prescaller16,-> 4^TWPS = 16 
    Prescaller64,-> 4^TWPS = 64
*/
#define TWI_PrescallerSelected   Prescaller1

/*
    SCLFrequence = F_CPU / 16 + 2(TWBR) * (4^TWPS)
    TWBR  =  
    SCL -> 400KHZ    F_CPU = 8MHz 4^TWPS -> 1  
    TWBR  = 2 
    SCL -> 200KHZ F_CPU = 8MHz    4^TWPS -> 1  
    TWBR  = 12
    SCL -> 100KHZ F_CPU = 8MHz    4^TWPS -> 1  
    TWBR  = 32
    SCL -> 50KHZ F_CPU = 8MHz    4^TWPS -> 1  
    TWBR  = 72
    SCL -> 30KHZ F_CPU = 8MHz    4^TWPS -> 1  
    TWBR  = 125
    SCL -> 30KHZ F_CPU = 8MHz    4^TWPS -> 1  
    TWBR  = 192
    ------------------------------------------------------
    SCL -> 15KHZ F_CPU = 8MHz    4^TWPS -> 1  
    TWBR  = 285  // Out of Range 
    SCL -> 10KHZ F_CPU = 8MHz    4^TWPS -> 1  
    TWBR  = 392// Out of Range 
    ------------------------------------------------------------------
    Prescaller 4 
    SCL -> 400KHZ    F_CPU = 8MHz 4^TWPS -> 4  
    TWBR  = 2 
    SCL -> 200KHZ F_CPU = 8MHz    4^TWPS -> 4  
    TWBR  = 12
    SCL -> 100KHZ F_CPU = 8MHz    4^TWPS -> 4  
    TWBR  = 32
    SCL -> 50KHZ F_CPU = 8MHz    4^TWPS -> 4 
    TWBR  = 72
    SCL -> 30KHZ F_CPU = 8MHz    4^TWPS -> 4  
    TWBR  = 125
    SCL -> 30KHZ F_CPU = 8MHz    4^TWPS -> 4  
    TWBR  = 192
    ------------------------------------------------------
    SCL -> 15KHZ F_CPU = 8MHz    4^TWPS -> 1  
    TWBR  = 285  // Out of Range 
    SCL -> 10KHZ F_CPU = 8MHz    4^TWPS -> 1  
    TWBR  = 392// Out of Range 

*/
#define TWI_BitRate   2 

/* 
    Notes :
        the Address Range Between 0 : 127
        0 for General Call 
        1111 xxx
        1111 000
        1111 001 
        1111 010 
        1111 011
        1111 100
        
        1111 111 
        Correct Range for Address 
        0 : 6 
        
*/
#define TWI_MCUAddress   0x26 

/*
TWI_MasterMode
TWI_SlaveMode 
*/

#define TWI_Mode      TWI_MasterMode







#endif 
