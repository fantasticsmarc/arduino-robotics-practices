# Temperature LED Indicator

Temperature indicator using three LEDs.

## Overview

This Arduino practice was developed in Tinkercad as part of a robotics learning sequence. It focuses on a specific concept and keeps the circuit simple so the behavior can be easily tested and understood.

## Tinkercad Project

[Open this project in Tinkercad](https://www.tinkercad.com/things/eAZ74UQwUoP-practica-9-robotica?sharecode=zSuLkaQ3gszYfMcUdzG2SQjcu1lDJXrcellMEUhaLSA)

## How It Works

The temperature is calculated from the analog reading. One LED indicates low temperature, another medium temperature, and another high temperature.

## Components

- Arduino Uno
- Temperature sensor
- 3 LEDs
- 3 resistors
- Jumper wires

## Pin Configuration

| Pin | Function |
|---|---|
| `A0` | Temperature sensor analog input |
| `7` | High temperature LED |
| `6` | Medium temperature LED |
| `5` | Low temperature LED |

## Learning Objectives

- Convert analog sensor data into temperature
- Use conditions to classify ranges
- Represent sensor values using LEDs

## Source Code

The Arduino sketch is available in this folder:

```text
temperature_led_indicator.ino
```

## How to Run

1. Open the Tinkercad project link.
2. Start the simulation.
3. Interact with the circuit if the practice uses a sensor, button or input component.
4. Observe the LED, buzzer, servo or Serial Monitor output.

## Notes

This project is intended for educational purposes and was created to practice basic Arduino and robotics concepts.
