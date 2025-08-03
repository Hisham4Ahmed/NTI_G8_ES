# 🏠 Smart Home Entry System

## 🎯 Project Goal
Design a simple smart home access control system that allows entry using a password. The system is activated by a motion sensor, unlocks the door using a motor (DC/Servo) upon valid password entry, and supports communication via UART, SPI, or I2C.

**Note:** This project does **not** use EEPROM for password storage — all data is handled in RAM.

---

## 📚 Educational Concepts Covered

- Embedded System Components (Processor, Memory, Buses, Clock)
- Microcontroller internals (Registers, Stack Pointer, Program Counter)
- Memory types: Flash, SRAM
- Sensor interfacing (PIR/IR)
- Motor control (DC or Servo)
- Communication Protocols (UART / SPI / I2C)
- Keypad input handling
- LCD display interfacing
- Layered software architecture: 
  - **MCAL** (Hardware drivers)
  - **HAL** (Logic abstraction)
  - **APP** (Application logic)

---
## 🧠 System Workflow

1. Motion is detected by IR or PIR sensor.
2. The system wakes up and displays "Enter Password" on the LCD.
3. User enters a password using the Keypad.
4. If password is correct:
   - LCD shows "Access Granted"
   - Door opens via Motor (DC or Servo)
   - Communication protocol (UART/SPI/I2C) sends log message
5. If password is incorrect:
   - LCD shows "Access Denied"
   - Red LED turns on
6. After 3 failed attempts:
   - System locks for a short delay (stored in RAM)
7. Admin button allows system reset or override access.
---

## 🛠️ Required Components

| Component           | Purpose                             |
|---------------------|-------------------------------------|
| ATmega32 MCU        | Core processor                      |
| 4x4 Keypad          | Password input                      |
| 16x2 LCD Display     | Status messages                    |
| PIR or IR Sensor    | Motion detection                    |
| DC or Servo Motor   | Door control                        |
| UART/SPI/I2C lines  | Communication (optional log/report) |
| LEDs (Red/Green)    | Status indication                   |
| Push Button         | Admin/reset control                 |
| Buzzer (Optional)   | Sound alert                         |

---


## 🧩 Software Architecture

### 🔸 MCAL Layer (Drivers)
- GPIO
- LCD
- Keypad
- Motor (DC/Servo)
- Sensor (PIR/IR)
- UART/SPI/I2C

### 🔸 HAL Layer (Modules)
- Password verification (RAM only)
- Movement detection logic
- Motor activation
- Communication interface

### 🔸 APP Layer (Application)
- State machine: idle, active, verified, locked
- Admin override logic
- LCD screen update manager

---