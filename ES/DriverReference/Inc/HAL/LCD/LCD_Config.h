/**
 * @file LCD_Config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-08-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef _LCD_CONFIG_H
#define _LCD_CONFIG_H
#include "../../MCAL/DIO/DIO_Interface.h"
#include "LCD_Private.h"

/**
 * @def LCDMode
 * @brief This Macro define the Type of data connection 
 * @details 
 *  1. Lcd_4BitMode
 *  2. Lcd_8BitMode
 */
#define LCDMode        Lcd_8BitMode

/* Configuration the HW Pin */
#if LCDMode == Lcd_8BitMode
    /*HW Pin */
    #define LCD_RSGroup    GroupA
    #define LCD_RWGroup    GroupA
    #define LCD_EGroup     GroupA
    #define LCD_DataGroup  GroupC

    #define LCD_RSPin      Pin0
    #define LCD_RWPin      Pin1
    #define LCD_EPin       Pin2
    /*Initaliaztion Command for LCD */
    /**
    * @def FunctionSet
    * @brief This Macro define the Function Set Command
    * @details 
    *  1.Lcd_Set8Mode1Line5x8Size   
    *  2.Lcd_Set8Mode2Line5x8Size  
    *  3.Lcd_Set8Mode1Line5x11Size 
    *  4.Lcd_Set8Mode2Line5x11Size 
    *  5.Lcd_Restart
    */
    #define FunctionSet    Lcd_Set8Mode2Line5x8Size
    /**
     * @def DisplayControl
     * @brief This Macro define the Display Control Command
     * @details 
     *  1.Lcd_DisplayOff   	
     *  2.Lcd_DisplayOn    	
     *  3.Lcd_CursorOn     	
     *  4.Lcd_CursorBlinkMode
     */
    #define DisplayControl   Lcd_CursorOn
    /**
     * @def   EntryMode  
     * @brief This Macro define the Entry Mode Command
     * @details 
     *  1.Lcd_CursorLeftNoShift    
     *  2.Lcd_CursorRightNoShift   
     *  3.Lcd_CursorRightWithShift  
     *  4.Lcd_CursorLeftWithShift
     */
     #define EntryMode  Lcd_CursorRightNoShift


   
#elif LCDMode==Lcd_4BitMode

    #define LCD_RSGroup    GroupD
    #define LCD_RSPin      Pin0

    #define LCD_RWGroup    GroupD
    #define LCD_RWPin      Pin1

    #define LCD_EGroup     GroupD
    #define LCD_EPin       Pin2

    #define LCD_D4Group    GroupB
    #define LCD_D4Pin      Pin0

    #define LCD_D5Group    GroupB
    #define LCD_D5Pin      Pin1

    #define LCD_D6Group    GroupB
    #define LCD_D6Pin      Pin2

    #define LCD_D7Group    GroupB
    #define LCD_D7Pin      Pin3

    /*Initaliaztion Command for LCD */
    /**
    * @def FunctionSet
    * @brief This Macro define the Function Set Command
    * @details 
    *  1.Lcd_Set4Mode1Line5x8Size  
    *  2.Lcd_Set4Mode2Line5x8Size 
    *  3.Lcd_Set4Mode1Line5x11Size
    *  4.Lcd_Set4Mode2Line5x11Size
    *  5.Lcd_Restart
    */
    #define FunctionSet    Lcd_Set4Mode2Line5x8Size
    /**
     * @def DisplayControl
     * @brief This Macro define the Display Control Command
     * @details 
     *  1.Lcd_DisplayOff   	
     *  2.Lcd_DisplayOn    	
     *  3.Lcd_CursorOn     	
     *  4.Lcd_CursorBlinkMode
     */
    #define DisplayControl   Lcd_CursorOn
    /**
     * @def   EntryMode  
     * @brief This Macro define the Entry Mode Command
     * @details 
     *  1.Lcd_CursorLeftNoShift    
     *  2.Lcd_CursorRightNoShift   
     *  3.Lcd_CursorRightWithShift  
     *  4.Lcd_CursorRightWithShift
     */
     #define EntryMode  Lcd_CursorLeftNoShift    

#else
    #error "Invalid LCD Mode"
#endif /*_LCD_MODE_*/
















#endif /*_LCD_CONFIG_H*/






















