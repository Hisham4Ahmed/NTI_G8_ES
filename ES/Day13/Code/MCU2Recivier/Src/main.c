#include "../Inc/MCAL/Uart/Uart_Interface.h"
#include "../Inc/MCAL/DIO/DIO_Interface.h"
#include "../Inc/Common/Macros.h"
#include "../Inc/HAL/LCD/LCD_Interface.h"
/*UART Will Recive Data  and Display this Data on LCD 
    if Data is 'A' -> Display 
    if Data is 'G  -> Display 
    else Display String (No Reicive Char)    
*/
/**
 * Uart Parameters 
 *  Asynch 
 *  1 StopBit 
 *  No Pairty 
 *  NormalMode 
 *  9600 BitperSec 
 *  RX Enable 
 *  Character size 8
 *  PD 0 as InPut 
 * 
 */
int main()
{
    hLCD_Init();
    /*UART*/
    mUART_Init();
    mDIO_ChangeDirectionForPin(GroupD,Pin0,Input);
    uint16_t UartRxData=0;
    hLCD_MoveCursor(1,0);
    hLCD_SendString((uint8_t*)"Rx Data :");
    while(1)
    {
        UartRxData=mUART_Recivie();
        if(UartRxData=='A')
        {
            //Display 'A'
            hLCD_MoveCursor(2,0);
            hLCD_SendString((uint8_t*)"                ");
            hLCD_MoveCursor(2,8);
            hLCD_SendChar('A');

        }
        else if(UartRxData=='G')
        {
            //Display 'G'
            hLCD_MoveCursor(2,0);
            hLCD_SendString((uint8_t*)"                ");
            hLCD_MoveCursor(2,8);
            hLCD_SendChar('G');

        }
        else 
        {
            // String No Rx Char 
            hLCD_MoveCursor(2,0);
            hLCD_SendString((uint8_t*)"                ");
            hLCD_MoveCursor(2,3);
            hLCD_SendString((uint8_t*)"No Rx Char");
        }
    }
}