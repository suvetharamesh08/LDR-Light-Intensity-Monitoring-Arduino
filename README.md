Project Overview

This project demonstrates the interfacing of a Light Dependent Resistor (LDR) sensor with an Arduino UNO to measure and monitor surrounding light intensity.

The LDR sensor detects variations in environmental lighting and provides corresponding analog values to the Arduino through analog pin A1.

Using the analogRead() function, the Arduino continuously collects light intensity readings and displays them in real time through the Serial Monitor.

This project demonstrates the fundamentals of analog sensor interfacing, data acquisition, and real-time monitoring in embedded systems.

🎯 Project Objectives
Understand the working principle of an LDR sensor.
Interface an LDR sensor with Arduino UNO.
Measure analog light intensity values through pin A1.
Understand analog input reading using Arduino.
Display real-time sensor readings through Serial Communication.
🛠️ Components Required
S.No	Component	Quantity
1	Arduino UNO	1
2	LDR Sensor Module	1
3	Breadboard	1
4	Jumper Wires	As required
5	USB Cable	1
🔌 Circuit Connections
LDR Sensor Module	Arduino UNO
VCC	5V
GND	GND
Analog Output (AO)	A1
⚙️ Working Principle

An LDR (Light Dependent Resistor) is a light-sensitive component whose resistance changes according to the intensity of light falling on its surface.

Bright Light: LDR resistance decreases.
Low Light: LDR resistance increases.

The sensor module converts the light variations into an analog voltage signal. Arduino reads this signal through pin A1 and converts it into a digital value ranging from 0 to 1023.

The readings are continuously displayed on the Serial Monitor with a delay of 500 milliseconds.

💻 Arduino Code
int ldrpin = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lightvalue = analogRead(ldrpin);

  Serial.print("light reading:");
  Serial.println(lightvalue);

  delay(500);
}
📸 Project Implementation
1. Hardware Implementation

The following image shows the practical interfacing of the LDR sensor module with the Arduino UNO using a breadboard and jumper wires.




2. Real-Time Serial Monitor Output

The Serial Monitor displays the analog light readings received from the LDR sensor continuously.




📊 Observed Output

Sample readings obtained during project testing:

light reading:194
light reading:195
light reading:196
light reading:196
light reading:195
light reading:194
