/**
 * @file TWI_Private.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef _TWI_PRIVATE_H
#define _TWI_PRIVATE_H 

typedef enum 
{
    /*TWCR*/
    TWIE_Bit,    
    TWEN_Bit=2,
    TWWC_Bit,
    TWSTO_Bit,
    TWSTA_Bit,
    TWEA_Bit,
    TWINT_Bit,
    /*TWSR*/
    TWPS0_Bit=0,
    TWPS1_Bit,
    TWSBase = 3 ,
    /*TWAR */
    TWGCE_Bit=0// General Call 
}TWI_BitName_t;


/*Options*/
typedef enum 
{
    Prescaller1,
    Prescaller4,
    Prescaller16,
    Prescaller64,
}TWI_PrescallerOptios_t;

/* Status Code 
    1- Common Used 
    2- Master Mode 
    3- Slave  Mode 
*/

typedef enum 
{
    StartCondition=0x08,
    ReStartCondition=0x10,
    ArbitionLostCondition=0x38,
}TWI_StatusCodeCommon_t;



typedef enum 
{
    /*Tx*/
    SLA_W_ACKCondition=0x18,
    SLA_W_NoACKCondition=0x20,
    TxDataPacket_ACKCondition=0x28,
    TxDataPacket_NoACKCondition=0x30,
    /*Rx*/
    SLA_R_ACKCondition=0x40,
    SLA_R_NoACKCondition=0x48,
    RxDataPacket_ACKCondition=0x50,
    RxDataPacket_NoACKCondition=0x58,
}TWI_MasterModeStatusMode_t;




// typedef enum 
// {

// }TWI_SlaveModeStatusMode_t;




/*TWI Mode*/
#define TWI_MasterMode       1 
#define TWI_SlaveMode        2 
 





#endif 
