/**
 * @file SPI_Program.c
 * @author Hesham Ahmed (Hisham4Ahmed@gmail.com)
 * @brief  
 * @version 0.1
 * @date 2025-08-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "../../../Inc/Common/Macros.h"
#include "../../../Inc/MCAL/SPI/SPI_Interface.h"





 #if   SPI_SelectMode==MasterMode    
    void mSPI_MasterInit()
    {
        // Disable Interrupt 
            ClearBit(SPCR_Reg,SPIE_Bit);
        // Select Master Bit 
            SetBit(SPCR_Reg,MSTR_Bit);
        // Select Data Order 
            if(SPI_DataOrder==SendMSB_First)
            {
                ClearBit(SPCR_Reg,DORD_Bit);
            }
            else if(SPI_DataOrder==SendLSB_First)
            {
                SetBit(SPCR_Reg,DORD_Bit);
            }
        // Select Clock POL 
            if(SPI_ClkPOL==IdelLow)
            {
                ClearBit(SPCR_Reg,CPOL_Bit);
            }
            else if(SPI_ClkPOL==IdelHigh)
            {
                SetBit(SPCR_Reg,CPOL_Bit);
            }
        // Select Clock PHA 
            if (SPI_ClkPHA==MasterRxFirst)
            {
                ClearBit(SPCR_Reg,CPHA_Bit);
            }
            else if(SPI_ClkPHA==MasterTxFirst)
            {
                SetBit(SPCR_Reg,CPHA_Bit);
            }  
        // Select Clock Rate
            if(SPI_CLKRate<SPI_FCPU_2)
            {
                /*SPI2X_Bit = Must Be Zero */
                ClearBit(SPSR_Reg,SPI2X_Bit);
                // SPR0_Bit  & SPR1_Bit
                /**
                 *       7 6 5 4 3 2 1 0   SPCR-> 
                 *       1 1 1 0 0 0 1 0
                 *       1 1 1 1 1 1 0 0
                 * | 
                 *       0 0 0 0 0 0 0 0    SPI_FCPU_4
                 * -----------------------------------------
                 *       1 1 1 0 0 0 1 0 
                 * 
                 */
                SPCR_Reg = SPCR_Reg & 0b11111100; // 0xFC
                SPCR_Reg = SPCR_Reg | SPI_CLKRate ;
            }
            else if (SPI_CLKRate>=SPI_FCPU_2)
            {
                /*SPI2X_Bit = Must Be One */
                SetBit(SPSR_Reg,SPI2X_Bit);
                SPCR_Reg = SPCR_Reg & 0b11111100; // 0xFC
                SPCR_Reg = SPCR_Reg | (SPI_CLKRate-4) ;

            }
        // Enable SPI 
            SetBit(SPCR_Reg,SPE_Bit);
    }
    uint8_t mSPI_MasterTrnsiever(uint8_t Data)
    {
        // Update the SPI Data Register 
            SPDR_Reg = Data;
        // Wait until Communication Finish 
            while(GetBit(SPSR_Reg,SPIF_Bit)==0);
        // Clear Flag 
            SetBit(SPSR_Reg,SPIF_Bit);
        // return Value 
            return SPDR_Reg ; 
    }
    /*For Usage 
     1-For Master Send Only 
        uint8_t TxData;
        mSPI_MasterTrnsiever(TxData);
     2- For Master Rx Only
        Shall By Sent Dummy Data
        uint8_t RxData = mSPI_MasterTrnsiever(0xFF);
     3- For Master Tx& RX 
        uint8_t TxData;
        uint8_t RxData=mSPI_MasterTrnsiever(TxData);
     */

#elif SPI_SelectMode==SlaveMode 
    void mSPI_SlaveInit();
    uint8_t mSPI_SlaveTrnsiever(uint8_t Data);
#endif /**/