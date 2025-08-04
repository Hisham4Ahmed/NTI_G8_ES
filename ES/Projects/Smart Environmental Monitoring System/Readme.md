## Smart Environmental Monitoring System

### Objective:

Build a basic smart environmental system to simulate monitoring ambient light and temperature levels using simple analog sensors (e.g., LDR and thermistor), with live feedback displayed on an LCD and corresponding actuator responses like fan and light control.

### Concepts Covered:

- Analog Sensor Reading (ADC)
- Digital Output Control (LED, Fan)
- LCD Display Interface
- System Clock and Timing
- GPIO Configuration
- Software Layered Architecture (MCAL, HAL, APP)

### Components Used:

- ATmega32 Microcontroller
- LDR (Light Dependent Resistor)
- Thermistor (for temperature simulation)
- LCD 16x2
- DC Fan or LED (as actuator)
- Push Buttons (to simulate modes)
- LEDs (status indicators)

### Hardware Pin Mapping:

- LDR → ADC0 (PA0)
- Thermistor → ADC1 (PA1)
- LCD Data → PORTC (PC0–PC3), Control → PC4 (RS), PC5 (EN)
- Fan Control → PD0
- Light LED → PD1
- Mode Button → PD2
- Status LED (Green/Red) → PD3/PD4

### System Behavior:

1. Read analog value from LDR and Thermistor using ADC.
2. Display light level and temperature estimation on LCD.
3. Turn ON/OFF light and fan based on sensor thresholds.
4. Provide user input via buttons to toggle modes or reset values.
