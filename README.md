# LINE FOLLOWER BOT PROJECT

## Overview

This project showcases a Line Follower Bot, a 3-wheel differential drive robot, built using Arduino Uno. The bot is equipped with 5 IR sensors, a 12V rechargeable lead-acid battery, 2 DC motors, and 1 caster wheel. Additionally, it includes a low-cost in-house motor driver circuit using the L293D IC for enhanced control and stability.
The repository contains multiple versions of code while keeping in mind different arenas in the college-level competition.

## Components Used

- Arduino Uno
- 5 IR Sensors
- 12V Rechargeable Lead-Acid Battery
- 2 DC Motors
- 1 Caster Wheel
- Chassis
- L293D Motor Driver IC
- Voltage Regulator(L7805)
- Capacitors(1uF and 10uF)
- Resistor(10Kohm)
- GCB Board
- Wheels

## Project Description

The Line Follower Bot uses infrared sensors to detect a white line on a black surface. Based on the sensor readings, the Arduino Uno controls the DC motors through the L293D motor driver, providing precise control over the motor movements. The voltage regulator ensures stable power distribution to the components for reliable performance.

## How It Works

1. **Sensor Array:** The 5 IR sensors are positioned on the bottom of the bot to detect the contrast between the white line and the black surface.
   
2. **Arduino Uno Control:** The Arduino Uno processes the sensor data and determines the direction in which the bot should move to stay on the line.

3. **Motor Control:** The L293D motor driver circuit is employed to control the DC motors. The Arduino adjusts the motor speeds to achieve differential drive motion for line following.

4. **Power Source:** The 12V rechargeable lead-acid battery powers the bot, and the voltage regulator ensures stable power distribution to all components.

## Use of Motor Driver (L293D)

The L293D motor driver is crucial for this project as it allows the Arduino to control the direction and speed of the DC motors independently. It amplifies the control signals from the Arduino, providing the necessary current and voltage to drive the motors efficiently.

## How to Use

1. Assemble the Line Follower Bot according to the provided schematic in the diagram.

2. Load the Arduino code from the directories onto the Arduino Uno using the Arduino IDE.

3. Connect the motors, sensors, L293D motor driver circuit, voltage regulator, and other components according to the schematic.

4. Place the bot on a surface with a visible white line on a black background, and the bot will autonomously follow the line.

## Schematic

Refer to the schematic diagram in the image for proper wiring of components.
