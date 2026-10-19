/**
 * @file LCD_Private.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef _LCD_PRIVATE_H
#define _LCD_PRIVATE_H


/* LCD Mode Options*/
#define Lcd_4BitMode       0 
#define Lcd_8BitMode       1

/* Lines Number & Address */
#define FirstLine        0 
#define SecondLine       1 

#define FirstLineAddress   0x00
#define SecondLineAddress  0x40 

/*------------------------------------------*/
/* LCD Command  */

/*Clear Display
 * DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
 * 0   0   0   0   0   0   0   1
 * */
#define Lcd_ClearDisplay    0x01
/*-----------------------------------------------------------------------------*/
/* Return Home
 * DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
 * 0   0   0   0   0   0   1    x
 * */
#define Lcd_ReturnHome     0x02
/*------------------------------------------------------------------------------*/
/* Entry Mode
 * DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
 * 0   0   0   0   0   1  I/D  S
 * */
#define Lcd_CursorLeftNoShift     0x04  // Move cursor left after write, don't shift display
#define Lcd_CursorRightNoShift    0x06  // Move cursor right after write, don't shift display
#define Lcd_CursorRightWithShift  0x07  // Move cursor right after write, shift entire display left
#define Lcd_CursorLeftWithShift   0x05  // Move cursor left after write, shift entire display right
/*------------------------------------------------------------------------------*/
/*Display option
 * DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
 * 0   0   0   0   1   D   C   B */
#define Lcd_DisplayOff   	0x08    //D = 0 , C = 0 , B = 0
#define Lcd_DisplayOn    	0x0C    //D = 1 , C = 0 , B = 0
#define Lcd_CursorOn     	0x0E    //D = 1 , C = 1 , B = 0
#define Lcd_CursorBlinkMode 0x0F    //D = 1 , C = 1 , B = 1
/*-----------------------------------------------------------------------------*/
/*
 * Cursor Or Display Shift
 * DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
 *  0   0   0   1  S/C R/L  x   x
 *	S/C = 0  Move Cursor   S/C = 1  Screen Cursor
 *	R/L = 0  Left          R/L = 1  Right
 * */
#define Lcd_MoveCursorLeft       0x10 // Move cursor one position to the left
#define Lcd_MoveCursorRight      0x14 // Move cursor one position to the right
#define Lcd_ShiftScreenLeft      0x18 // Shift entire display to the left
#define Lcd_ShiftScreenRight     0x1C // Shift entire display to the right
/*-----------------------------------------------------------------------------*/
/*Function Set
 * DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
 *  0   0   1   DL  N   F   *   *
 *  DL => Data lenght = 0  4bit mode  // DL =1 8bit mode
 *  N  => No of Line  = 0  1 line     // N  =1 2 Line
 *  F  => Font size   = 0  5x8 size   // F  =1 5x11 size
 * */
#define Lcd_Set4Mode1Line5x8Size      0x20 // 0b 0010 0000
#define Lcd_Set4Mode2Line5x8Size      0x28 // 0b 0010 1000
#define Lcd_Set4Mode1Line5x11Size     0x24 // 0b 0010 0100
#define Lcd_Set4Mode2Line5x11Size     0x2C // 0b 0010 1100

#define Lcd_Set8Mode1Line5x8Size      0x30 // 0b 0011 0000 // restart
#define Lcd_Set8Mode2Line5x8Size      0x38 // 0b 0011 1000
#define Lcd_Set8Mode1Line5x11Size     0x34 // 0b 0011 0100
#define Lcd_Set8Mode2Line5x11Size     0x3C // 0b 0011 1100

#define Lcd_Restart                   0x30 // 0b 0011 0000 // restart
/*-----------------------------------------------------------------------------*/
/* Set CGRAM
 * DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
 * 0    1   A   A   A   A   A   A
 * 0    1   0   0   0   0   0   0
 * */
#define Lcd_SetCGRAM    0x40    //ex Lcd_SendCommand(Lcd_SetCGRAM+Location)
/*-----------------------------------------------------------------------------*/
/* Set DDRAM
 * DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
 * 1    A   A   A   A   A   A   A
 * 1    0   0   0   0   0   0   0
 * */
#define Lcd_SetDDRAM    0x80    //ex Lcd_SendCommand(Lcd_SetDDRAM+Location)
/*-------------------------------------------------------------------------------*/
/* Macro function for LCD */
#define hLCD_ClearFirstLine       hLCD_MoveCursor(FirstLine,0);\
                                  hLCD_SendString((uint8_t*)"                ")   

#define hLCD_ClearSecondLine      hLCD_MoveCursor(SecondLine,0);\
                                  hLCD_SendString((uint8_t*)"                ")   

#endif /*_LCD_PRIVATE_H */