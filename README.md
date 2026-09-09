# ESP32 GPIO and Serial Monitor

This project is an ESP32 simulation in Wokwi that reads a potentiometer and a pushbutton. The button controls an LED, while the sensor and device state are printed to the Serial Monitor once per second.

## Components

| Component | ESP32 connection | Purpose |
| --- | --- | --- |
| ESP32 DevKit | Main board | Runs the Arduino program |
| Red LED | GPIO 26, through a 1 kOhm resistor to GND | Turns on while the button is pressed |
| Pushbutton | 3V3 and GPIO 25 | Controls the LED input |
| Potentiometer | VCC to 3V3, GND to GND, SIG to GPIO 34 | Provides an analog sensor value |

## How to run

1. Open the [ESP32 project in Wokwi](https://wokwi.com/projects/new/esp32).
2. Add or open the project files from this repository, especially `diagram.json` and `sketch.ino`.
3. Start the simulation by clicking **Run**.
4. Press and release the pushbutton to check the LED behavior.
5. Turn the potentiometer to change the analog value.
6. Open the **Serial Monitor** at `115200` baud to see the output.

## Serial output

Example:

```text
sensor=2048,button=1,led=ON
```

- `sensor`: the potentiometer reading from 0 to 4095.
- `button`: `1` when the button is pressed and `0` when it is released.
- `led`: the current LED state, `ON` or `OFF`.

## Wokwi project

[Open the project in Wokwi](https://wokwi.com/projects/new/esp32)