/**
 * @file TWI_Program.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#include "../../../Inc/Common/Macros.h"
#include "../../../Inc/MCAL/NTI_Atmega32Register.h"
#include "../../../Inc/MCAL/TWI/TWI_Private.h"
#include "../../../Inc/MCAL/TWI/TWI_Config.h"
#include "../../../Inc/MCAL/TWI/TWI_Interface.h"



void mTWI_MasterInit()
{
    // Set PreScaller -> 
        TWSR_Reg &=0b11111100; // 0xFC;
        TWSR_Reg |= TWI_PrescallerSelected;
    // Set Bit Rate  ->
        TWBR_Reg = TWI_BitRate ; 
    // Set MCU Address 
        // TWAR -> 7 6 5 4 3 2 1  
        // Address->7 6 5 4 3 2 1 0              
        TWAR_Reg =  TWI_MCUAddress<<1 ; 
    // Enable ACK 
        SetBit(TWCR_Reg,TWEA_Bit);
    // Disable Interrupt 
        ClearBit(TWCR_Reg,TWIE_Bit);
    // Enable TWI 
        SetBit(TWCR_Reg,TWEN_Bit);
}

/**
 * Start 
 * SLA/WR
 * Data
 * Stop
 */
int8_t mTWI_StartCondition()
{
    // wait Untill Flag Set 
        while(GetBit(TWCR_Reg,TWINT_Bit)==0);
    // start condition 
        SetBit(TWCR_Reg,TWSTA_Bit);
    // Clear Flag 
        SetBit(TWCR_Reg,TWINT_Bit);
    // Wait untill Flag Set
        while(GetBit(TWCR_Reg,TWINT_Bit)==0);
    // check on the Status code 
        // TWSR        -> 7 6 5 4 3     
        // Status_Code ->7 6 5 4 3            
        uint8_t TWSR_Temp  =  TWSR_Reg>>3;
                //    0 1 2 3 4 
        if(TWSR_Temp == StartCondition >>3 )
        {
            // Clear the Start Bit 
            ClearBit (TWCR_Reg,TWSTA_Bit);
            return 0 ;
        }
        else 
        {
            return -1 ; 
        }

}



int8_t mTWI_SLAWithWriteWithACK(uint8_t SlaveAddress)
{
    //wait untill Flag set 
    while(GetBit(TWCR_Reg,TWINT_Bit)==0);
    //Write the Slave Address in TWDR and Bit 0 -> 0(W)
    TWDR_Reg = SlaveAddress <<1 ;
    ClearBit(TWDR_Reg,0); //Write 
    //TWDR    7 6 5 4 3 2 1 0 
    //        A A A A A A A W 
    //Clear Flag 
    SetBit(TWCR_Reg,TWINT_Bit);
    // Wait untill Flag set 
    while(GetBit(TWCR_Reg,TWINT_Bit)==0);
    // Check the Status Code  
    // if((TWSR_Reg & 0b11111000)==SLA_W_ACKCondition)
    if((TWSR_Reg & 0xF8)==SLA_W_ACKCondition)
    {
        return 0 ; 
    }
    else 
    {
        return -1 ;  
    }
}



int8_t mTWI_SentDataPacketWithACK(uint8_t Data)
{
    //wait untill Flag set 
    while(GetBit(TWCR_Reg,TWINT_Bit)==0);
    // Write Data in TWDR
    TWDR_Reg = Data;
    // Clear Flag 
    SetBit(TWCR_Reg,TWINT_Bit);
    //wait untill Flag set 
    while(GetBit(TWCR_Reg,TWINT_Bit)==0);
    //Check the Status Code 
    if((TWSR_Reg&0xF8)==TxDataPacket_ACKCondition)
    {
        return 0 ;
    }
    else 
    {
        return -1 ;         
    }
}



void mTWI_StopCondition()
{
    //wait untill Flag set 
    while(GetBit(TWCR_Reg,TWINT_Bit)==0);
    //Stop Condition 
    SetBit(TWCR_Reg,TWSTO_Bit);
    // Clear flag 
    SetBit(TWCR_Reg,TWINT_Bit);

}
