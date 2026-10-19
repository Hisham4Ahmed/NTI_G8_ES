## Smart Library Book Locker System


### Objective

Develop a secure book locker system using keypad-based access and motor-controlled locker doors with visual LCD feedback.


### Features Covered

* Keypad Input for Code Entry
* Servo Motor for Locker Opening
* LCD Status Display
* UART for Optional Data Exchange
* Layered Architecture (MCAL, HAL, APP)


### Hardware Components

* ATmega32 Microcontroller
* 4x4 Keypad
* 16x2 LCD
* Servo Motor (Locker Door)
* UART Interface (optional for expansion)



### Pin Mapping

* Keypad Rows → PB0–PB3
* Keypad Columns → PB4–PB7
* LCD Data → PC0–PC3
* LCD Control: RS → PC4, EN → PC5
* Servo Signal → PD4
* UART TX/RX → PD0/PD1 (optional)


### System Workflow

1. User enters locker code via keypad
2. If code matches predefined value:
   * Servo opens the corresponding locker
   * LCD shows "Access Granted" or "Open Locker"
3. After timeout, locker closes automatically
4. Optional UART: display logs or send access data to PC
