# Ultrasonic LED Distance Alert

Distance indicator using an ultrasonic sensor, LEDs and a buzzer.

## Overview

This Arduino practice was developed in Tinkercad as part of a robotics learning sequence. It focuses on a specific concept and keeps the circuit simple so the behavior can be easily tested and understood.

## Tinkercad Project

[Open this project in Tinkercad](https://www.tinkercad.com/things/2xAOUI3cH77-practica-7b-robotica?sharecode=A5Xdmsx_0Nmjk4FeSwrMH4zQhnOoQMUyhsLvbzBQDHg)

## How It Works

Depending on the measured distance, one, two or three LEDs turn on. A buzzer also sounds when an object is within 150 cm.

## Components

- Arduino Uno
- Ultrasonic distance sensor
- 3 LEDs
- 3 resistors
- Piezo buzzer
- Jumper wires

## Pin Configuration

| Pin | Function |
|---|---|
| `5` | Ultrasonic trigger |
| `4` | Ultrasonic echo |
| `6` | Distance LED 1 |
| `3` | Distance LED 2 |
| `2` | Distance LED 3 |
| `7` | Buzzer output |

## Learning Objectives

- Use distance ranges to trigger different outputs
- Combine LEDs and sound alerts
- Build a simple proximity warning system

## Source Code

The Arduino sketch is available in this folder:

```text
ultrasonic_led_distance_alert.ino
```

## How to Run

1. Open the Tinkercad project link.
2. Start the simulation.
3. Interact with the circuit if the practice uses a sensor, button or input component.
4. Observe the LED, buzzer, servo or Serial Monitor output.

## Notes

This project is intended for educational purposes and was created to practice basic Arduino and robotics concepts.
