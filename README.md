# LED with Voice Control using Arduino and Bluetooth

## Introduction
This project demonstrates how to control an LED using voice commands via an Arduino and a Bluetooth module. By integrating an HC-05/HC-06 Bluetooth module with an Arduino, you can send voice commands from an Android smartphone to turn the LED on and off.

## Components Required
- Arduino Uno (or any compatible board)
- HC-05 or HC-06 Bluetooth Module
- LED
- Resistor (220Ω)
- Jumper Wires
- Android Smartphone with a Bluetooth terminal app (e.g., "Bluetooth Terminal" or "Arduino Bluetooth Controller")

## Circuit Diagram
Connect the components as follows:

| Arduino Pin | Component |
|------------|------------|
| 5V        | HC-05 VCC |
| GND       | HC-05 GND |
| TX (D1)   | HC-05 RX (through a 1KΩ resistor) |
| RX (D0)   | HC-05 TX |
| D13       | LED Anode |
| GND       | LED Cathode (via 220Ω resistor) |

## Software Requirements
- Arduino IDE
- Bluetooth Terminal App on Android

## Code
Upload the following Arduino sketch to your board:


## How It Works
1. Power on the Arduino and Bluetooth module.
2. Pair the Bluetooth module with your smartphone.
3. Open a Bluetooth terminal app and connect to the module.
4. Send 'light on' to turn on the LED and 'good night' to turn it off.

## Applications
- Home Automation
- Smart Lighting
- IoT-based projects

## Troubleshooting
- Ensure the correct baud rate (9600) is set for the Bluetooth module.
- Make sure the RX and TX connections are correctly wired.
- If using an HC-06, use software serial as hardware serial may conflict with USB communication.

## Future Enhancements
- Integrate voice recognition directly on the microcontroller.
- Expand to control multiple LEDs or appliances.
- Add Wi-Fi support for cloud-based control.

## License
This project is open-source. Feel free to modify and improve it.

For any queries mail at rudranarayansahu.tech@gmail.com

**Name** - Rudranarayan Sahu

**Website** - https://akash0101.pythonanywhere.com

Feel free to connect✨✨
