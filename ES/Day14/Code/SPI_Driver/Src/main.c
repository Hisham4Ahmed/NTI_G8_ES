/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */



// Master 
//     1- Sent the Number to Slave  From 1 to 100 
//     2- Display Sent Number To Slvale 
//     3- Display Recivie Number From Slave 

//     MCU1Number :  
//     MCU2Number : 
    
    
// void main()
// {
//     mSPI_MasterInit();
//     hLCD_Init();

//     uint8_t SentNumber = 1  ;
//     uint8_t RecivieNumber =0  ;
    
//     while (1)
//     {
//        RecivieNumber = mSPI_MasterTrnsiever(SentNumber);
//        hLCD_MoveCursor(1,0);
//        hLCD_SendString((uint8_t 8)"MCU1Number:");
//        hLCD_WriteNumber(SentNumber);
//        hLCD_MoveCursor(2,0);
//        hLCD_SendString((uint8_t 8)"MCU2Number:");
//        hLCD_WriteNumber(RecivieNumber);
//        SentNumber++;
//        if(SentNumber>=100)
//        {
//         SentNumber=1;
//        }
//     }
    
// }




//Slave 
    1- MCU2 Recivie Number From MCU1 
    2- MCU2 Sent Number To MCU1
    3- Display the Recivie Number From MCU1 to MCU2 
    3- Display the Sent    Number From MCU2 to MCU1


int main()
{
    mSPI_SlaveInit();
    hLCD_Init(); 

    uint8_t SentNumber = 101 ;
    uint8_t RecivieNumber = 0 ; 
    
    while(1)
    {
        RecivieNumber = mSPI_SlaveTrnsiever(SentNumber);
        hLCD_MoveCursor(1,0);
        hLCD_SendString((uint8_t 8)"MCU2Number:");
        hLCD_WriteNumber(SentNumber);
        hLCD_MoveCursor(2,0);
        hLCD_SendString((uint8_t 8)"MCU1Number:");
        hLCD_WriteNumber(RecivieNumber);
        SentNumber++;
        if(SentNumber>=200)
        {
         SentNumber = 101 ;
        }

    }
}