## Smart Access and Energy Control System


### Objective

Build a smart embedded system that integrates user access authentication with real-time energy control based on presence detection.


### Features Covered

* Keypad-based Access Control
* IR Sensor for Motion Detection
* Automatic Lighting/Fan Activation
* LCD Display Interface
* Layered Software Architecture (MCAL, HAL, APP)
* Timers & Interrupts


### Hardware Components

* ATmega32 Microcontroller
* IR Sensor
* 4x4 Keypad
* 16x2 LCD
* LED (Light)
* Fan (or Second LED for simulation)
* Buzzer (optional)



### Pin Mapping

* IR Sensor → PD2
* Keypad Rows → PB0–PB3
* Keypad Columns → PB4–PB7
* LCD Data → PC0–PC3
* LCD Control: RS → PC4, EN → PC5
* Light LED → PD3
* Fan Control → PD4
* Buzzer → PD5 (optional)



### System Workflow

1. User enters access code via keypad.
2. If access is granted, system enters monitoring mode.
3. When IR sensor detects presence, LED and Fan are activated.
4. If no motion is detected for a period, devices are deactivated.
5. LCD shows system status messages.
