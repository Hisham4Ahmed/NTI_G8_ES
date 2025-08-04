## Smart Traffic Light Control System with Pedestrian Mode



### Objective

Design a smart traffic light system that includes pedestrian crossing functionality with button-triggered control and timed light phases.


### Features Covered

* Traffic Light Signal Logic
* Pedestrian Push Button Input
* Timer Interrupts for State Management
* LCD Display for Status or Countdown
* Layered Software Design (MCAL, HAL, APP)



### Hardware Components

* ATmega32 Microcontroller
* 6x LEDs (Red, Yellow, Green for 2 directions)
* Push Button (Pedestrian)
* 16x2 LCD Display
* Buzzer (optional for crossing alert)


### Pin Mapping

* LEDs (Direction A): Red → PD0, Yellow → PD1, Green → PD2
* LEDs (Direction B): Red → PD3, Yellow → PD4, Green → PD5
* Pedestrian Button → PD6
* LCD Data → PC0–PC3
* LCD Control: RS → PC4, EN → PC5
* Buzzer → PD7 (optional)



### System Workflow

1. Default state alternates traffic lights between directions A and B.
2. When the pedestrian button is pressed:
   * System waits for safe timing
   * Stops traffic and activates pedestrian crossing
3. LCD displays countdown or messages like "Wait", "Cross Now"
4. System resumes normal operation after crossing time
