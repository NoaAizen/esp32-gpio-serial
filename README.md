# ESP32 GPIO and Serial Monitor

This is an ESP32 project simulated in Wokwi.

The project has a pushbutton, an LED, and a potentiometer. The button controls the LED, and the potentiometer value and button state are sent to the Serial Monitor every second.

## Components

The project uses an ESP32 DevKit as the main board.

The LED is connected to GPIO 26 through a 1kOhm resistor to GND. It turns on when the button is pressed.

The pushbutton is connected to 3V3 and GPIO 25. It controls the LED.

The potentiometer is connected to 3V3, GND, and GPIO 34. It gives an analog value from 0 to 4095.

## How to Run

Open the Wokwi project using the link below.

https://wokwi.com/projects/474721956339119105

Click Run to start the simulation.

Press the button and check that the LED turns on.

Turn the potentiometer and see that the value changes.

Open the Serial Monitor to see the data sent by the ESP32.

## Serial Output

An example of the output:

text
sensor=3723,button=1,led=ON


sensor is the value from the potentiometer.

button shows the button state. 1 means the button is pressed and 0 means the button is not pressed.

led shows the LED state. ON means the LED is on and OFF means the LED is off.

## Wokwi Project

https://wokwi.com/projects/474721956339119105
