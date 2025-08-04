## Smart Parking Gate System

### Objective:

Simulate an automated parking gate using IR sensors and keypad-based access control. Display messages on LCD and use a motor to open/close the gate based on valid authentication.

### Concepts Covered:

- Digital Sensors (IR)
- LCD Display Interface
- Keypad Interface
- DC/Servo Motor Control
- UART Communication (optional)
- System Clock and Timing
- Software Layered Architecture (MCAL, HAL, APP)

### Components Used:

- ATmega32 Microcontroller
- IR Sensor (Car Detection)
- 4x4 Keypad
- LCD 16x2
- DC Motor / Servo Motor
- LEDs (Green/Red)
- Buzzer (optional)

### Hardware Pin Mapping:

- IR Sensor → PD2
- Keypad Rows → PB0–PB3, Columns → PB4–PB7
- LCD Data → PORTC (PC0–PC3), Control → PC4 (RS), PC5 (EN)
- Motor Control → PD3 (PWM or digital control)
- Green LED → PD4
- Red LED → PD5
- Buzzer → PD6 (optional)

### System Behavior:

1. Detect car presence using IR sensor.
2. Prompt user to enter access code via Keypad.
3. If code is correct:
   - Open gate using Motor
   - Show success message on LCD
   - Light green LED
4. If code is wrong:
   - Show error on LCD
   - Light red LED and buzz (optional)
5. Auto-close gate after timeout.
