# Potentiometer LED Speed

LED blinking speed controlled by a potentiometer.

## Overview

This Arduino practice was developed in Tinkercad as part of a robotics learning sequence. It focuses on a specific concept and keeps the circuit simple so the behavior can be easily tested and understood.

## Tinkercad Project

[Open this project in Tinkercad](https://www.tinkercad.com/things/lf2B8biu3nL-practica-6-robotica?sharecode=Z8FOcVNiQWvkE5_2b9emTF4TxXy6PLcLm7ps-9Kype8)

## How It Works

The potentiometer value is read from analog pin A0 and used as the delay time for the LED blink cycle.

## Components

- Arduino Uno
- Potentiometer
- LED or built-in LED
- Resistor
- Jumper wires

## Pin Configuration

| Pin | Function |
|---|---|
| `A0` | Potentiometer analog input |
| `13` | LED output |

## Learning Objectives

- Read analog input values
- Use sensor values to control timing
- Connect analog data with visible output

## Source Code

The Arduino sketch is available in this folder:

```text
potentiometer_led_speed.ino
```

## How to Run

1. Open the Tinkercad project link.
2. Start the simulation.
3. Interact with the circuit if the practice uses a sensor, button or input component.
4. Observe the LED, buzzer, servo or Serial Monitor output.

## Notes

This project is intended for educational purposes and was created to practice basic Arduino and robotics concepts.
