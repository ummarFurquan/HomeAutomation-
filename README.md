# Home Automation with Arduino Uno and HC-05 Bluetooth Module

## Overview

This project demonstrates a basic home automation system using Arduino Uno and HC-05 Bluetooth module. The system allows you to control up to four devices (e.g., lights, fans) remotely using a smartphone with a Bluetooth connection.

## Components

- Arduino Uno
- HC-05 Bluetooth Module
- 4-channel Relay Module
- Jumper Wires
- Devices to control (e.g., lights, fans)

## Wiring

- Connect the HC-05 Bluetooth module to the Arduino Uno:

  - VCC to 5V
  - GND to GND
  - TXD to RX (pin 0)
  - RXD to TX (pin 1)

- Connect the 4-channel Relay Module to the Arduino Uno:

  - Relay 1 to Digital Pin 2
  - Relay 2 to Digital Pin 3
  - Relay 3 to Digital Pin 4
  - Relay 4 to Digital Pin 5

- Connect the devices (lights, fans) to the relay module.
Now install https://content.instructables.com/FOU/ICB0/JCGK9EQI/FOUICB0JCGK9EQI.apk this application on to your mobile device and connect with the HC-05 bluetooth module with the default password 0000


