# Light Sensor Automatic LED

Automatic LED control based on light intensity.

## Overview

This Arduino practice was developed in Tinkercad as part of a robotics learning sequence. It focuses on a specific concept and keeps the circuit simple so the behavior can be easily tested and understood.

## Tinkercad Project

[Open this project in Tinkercad](https://www.tinkercad.com/things/17Pl5mzrWeQ-practica-8-robotica?sharecode=82R8jqcTWSIUm0zG9UomFcamuiMr19A7w0v6Mb2ZE3c)

## How It Works

The light value is read from A0 and printed to the Serial Monitor. If the value is below 500, the LED turns on; otherwise, it stays off.

## Components

- Arduino Uno
- Photoresistor or light sensor
- LED or built-in LED
- Resistor
- Jumper wires

## Pin Configuration

| Pin | Function |
|---|---|
| `A0` | Light sensor analog input |
| `13` | LED output |

## Learning Objectives

- Read light levels through an analog input
- Use thresholds to automate output behavior
- Create a simple automatic lighting system

## Source Code

The Arduino sketch is available in this folder:

```text
light_sensor_automatic_led.ino
```

## How to Run

1. Open the Tinkercad project link.
2. Start the simulation.
3. Interact with the circuit if the practice uses a sensor, button or input component.
4. Observe the LED, buzzer, servo or Serial Monitor output.

## Notes

This project is intended for educational purposes and was created to practice basic Arduino and robotics concepts.
