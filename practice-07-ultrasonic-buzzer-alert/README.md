# Ultrasonic Buzzer Alert

Distance alert system using an ultrasonic sensor and a buzzer.

## Overview

This Arduino practice was developed in Tinkercad as part of a robotics learning sequence. It focuses on a specific concept and keeps the circuit simple so the behavior can be easily tested and understood.

## Tinkercad Project

[Open this project in Tinkercad](https://www.tinkercad.com/things/eXYyNlCTd3f-practica-7-robotica?sharecode=bWbYR4uOoBUEi7Ayi2TaakdSQDW00-16M16ga_zqpJk)

## How It Works

The ultrasonic sensor measures distance. If an object is closer than 150 cm, the buzzer plays a tone with a delay based on the measured distance.

## Components

- Arduino Uno
- Ultrasonic distance sensor
- Piezo buzzer
- Jumper wires

## Pin Configuration

| Pin | Function |
|---|---|
| `5` | Ultrasonic trigger |
| `4` | Ultrasonic echo |
| `7` | Buzzer output |

## Learning Objectives

- Measure distance with an ultrasonic sensor
- Convert echo time into centimeters
- Create an acoustic alert based on distance

## Source Code

The Arduino sketch is available in this folder:

```text
ultrasonic_buzzer_alert.ino
```

## How to Run

1. Open the Tinkercad project link.
2. Start the simulation.
3. Interact with the circuit if the practice uses a sensor, button or input component.
4. Observe the LED, buzzer, servo or Serial Monitor output.

## Notes

This project is intended for educational purposes and was created to practice basic Arduino and robotics concepts.
