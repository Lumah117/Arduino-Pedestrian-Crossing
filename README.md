# Arduino Pedestrian Crossing Controller

A simple Arduino Uno pedestrian crossing controller developed as one of my first university programming and embedded-systems projects.

The project combines basic embedded C++ programming with a physical breadboard circuit to control vehicle traffic lights, pedestrian crossing signals, a push-button input, and an audible crossing indicator.

## Project Overview

The system was designed to simulate a pedestrian-controlled road crossing using an Arduino Uno.

During normal operation, vehicles are shown a green signal while pedestrians are shown a red signal. When the pedestrian push button is pressed, the Arduino initiates a crossing sequence that changes the vehicle signals, activates the pedestrian green light, and enables an audible indicator.

After the crossing period has elapsed, the system returns control to vehicle traffic.

## Original Prototype

![Original Arduino pedestrian crossing prototype](docs/original_prototype.jpeg)

The physical prototype was constructed using an Arduino Uno, breadboard, LEDs, resistors, a push button, and an audible indicator.

## Circuit Schematic

![Arduino pedestrian crossing schematic](docs/traffic_light_schematic.png)

The circuit incorporates:

- Red, amber and green vehicle traffic signals
- Red and green pedestrian crossing signals
- Pedestrian request push button
- Audible crossing indicator
- Arduino Uno microcontroller

## System Behaviour

Under normal operating conditions:

- Vehicle green is ON.
- Pedestrian red is ON.
- The pedestrian push button is monitored for a crossing request.

When the pedestrian button is pressed:

1. The vehicle green signal is switched off.
2. The amber signal flashes to indicate the transition.
3. The vehicle red signal is activated.
4. The pedestrian red signal is switched off.
5. The pedestrian green signal and audible indicator are activated.
6. After the crossing period, the pedestrian signal returns to red.
7. The vehicle signals transition back toward normal operation.

## Hardware

- Arduino Uno
- Breadboard
- Red, amber and green LEDs
- Push button
- Audible indicator
- Current-limiting resistors
- Jumper wires

## Software

The original implementation was written using the Arduino programming environment and demonstrates:

- Digital GPIO input and output
- `INPUT_PULLUP` button configuration
- Push-button event detection
- Sequential control logic
- Timing using `delay()`
- Hardware/software integration

## Pin Configuration

| Function | Arduino Pin |
|---|---:|
| Vehicle Red            | 12 |
| Vehicle Amber          | 11 |
| Vehicle Green          | 10 |
| Pedestrian Red         | 9 |
| Pedestrian Green       | 8 |
| Audible Indicator      | 7 |
| Pedestrian Push Button | 2 |

## Original Source Code

The original university implementation has been preserved in:

`original/traffic_lights_original.ino`

The source has intentionally been retained as an example of my early embedded programming work rather than rewritten to reflect my current coding practices.

## Retrospective

This was one of my first programming projects at university and provided an introduction to embedded software and the interaction between software and physical electronics.

The implementation uses blocking `delay()` calls and direct sequential GPIO control, which were appropriate for learning the fundamentals but limit the responsiveness and extensibility of the system.

With my current experience, I would approach the same problem using a finite-state machine and non-blocking timing based on `millis()`, allowing the controller to monitor inputs continuously while managing signal transitions independently.

This project is retained in my portfolio to demonstrate the starting point of my embedded and robotics software development experience.
