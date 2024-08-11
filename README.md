# Face Detection LED with HuskyLens and Arduino

This project demonstrates how to use the HuskyLens AI camera with an Arduino Uno to control an LED. The LED will turn on when the HuskyLens detects a face and turn off when no face is detected.

<img width="686" alt="HuskyLens Detec" src="https://github.com/user-attachments/assets/cc1d15d0-0a1a-49c2-bf34-eaf3e727364f">


## Components Required
- HuskyLens AI Camera
- Arduino Uno
- LED
- 220-ohm resistor

## Circuit Diagram

| Component | Arduino Pin | HuskyLens Pin | LED Pin |
|-----------|-------------|---------------|---------|
| TX        | 0 (RX)      | RX            |         |
| RX        | 1 (TX)      | TX            |         |
| VCC       | 5V          | VCC           |         |
| GND       | GND         | GND           | GND (LED Cathode via Resistor) |
| LED       | Pin 7       |               | Anode  |

### Code:
You can find the complete code in the [`code.ino`](./code.ino) file.

### Setup:
- The HuskyLens AI camera is connected to the Arduino Uno using SoftwareSerial.
- The LED is connected to a digital pin on the Arduino with a 220-ohm resistor to limit current.

### Operation:
The Arduino constantly checks for face detection using the HuskyLens
- If a face is detected, the LED turns on
- If no face is detected, the LED remains off

### Usage
1. Connect the Arduino to a power source via USB or an external power supply
2. Face Detection: The LED will light up when a face is detected and turn off when no face is in view
