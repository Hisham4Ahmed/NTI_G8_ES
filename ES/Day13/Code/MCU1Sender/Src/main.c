
#include "../Inc/MCAL/DIO/DIO_Interface.h"
#include "../Inc/MCAL/Uart/Uart_Interface.h"
#define InternalPull
#include "../Inc/Common/Macros.h"

/*
    We have 2 Button 
    Button1 is Pressed  Send 'A' By Uart 
    Button2 is Pressed  Send 'G' By Uart 
    no Button Pressed Send 'C' 
*/
/* 
    Button-> DIO 
        Button1 -> A0
        Button2 -> A6
    Uart -> D1 
*/
/**
 * Uart Parameters 
 *  Asynch 
 *  1 StopBit 
 *  No Pairty 
 *  NormalMode 
 *  9600 BitperSec 
 *  Tx Enable 
 *  Character size 
 *  PD 1 as OutPut 
 * 
 */

void main()
{
    /*Buttons Configuration*/
    //Button As Input 
    mDIO_ChangeDirectionForPin(GroupA,Pin0,Input);
    mDIO_ChangeDirectionForPin(GroupA,Pin6,Input);
    //Button Internal Pull Up
    mDIO_WriteValueForPin(GroupA,Pin0,High);
    mDIO_WriteValueForPin(GroupA,Pin6,High);
    
    /*UART Init */
    mDIO_ChangeDirectionForPin(GroupD,Pin1,Output);
    mUART_Init();

    uint8_t Button1State = NotPressed ; 
    uint8_t Button2State = NotPressed ; 
    
    while(1)
    {
        Button1State = mDIO_ReadValueFromPin(GroupA,Pin0);
        Button2State = mDIO_ReadValueFromPin(GroupA,Pin6);
        if(Button1State==Pressed&&Button2State==NotPressed)
        {
            // Send 'A'
            mUART_Send((uint8_t)'A');
        }
        else if (Button1State==NotPressed&&Button2State==Pressed)
        {
            //Send 'G'
            mUART_Send((uint8_t)'G');
        }
        else 
        {
            // Send 'C' 
            mUART_Send((uint8_t)'C');
        }
    }
}