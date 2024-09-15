## Smart-Home-System
## Project Name: Smart Home System (Embedded System Lab Project)

## Introduction

In recent years, smart home systems have gained significant popularity due to their ability to enhance comfort, convenience, and security in residential spaces. This project aims to develop a smart home system using an Arduino Uno R3, incorporating various sensors and actuators to automate door control, room lighting, temperature regulation, and fire alarm functionality.

## Objective

The primary objectives of this project are:

- To design a smart home system that automatically opens a door when a person is detected within 9 cm.
    
- To turn on a room LED when someone enters the room.
    
- To monitor room temperature using a DHT11 sensor and control a DC motor fan accordingly.
    
- To activate a buzzer as a fire alarm if the temperature exceeds 45°C.
    

## System Overview

The smart home system consists of:

- An ultrasonic sensor to detect the presence of a person near the door.
    
- A servo motor to control the door opening mechanism.
    
- A DHT11 sensor to measure room temperature.
    
- An LED to indicate the presence of a person in the room.
    
- A DC motor fan to provide cooling when the temperature is high.
    
- A buzzer to act as a fire alarm when the temperature exceeds a critical threshold.
    

## Components

### Arduino Uno R3

The Arduino Uno R3 is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins, 6 analog inputs, a 16 MHz quartz crystal, a USB connection, a power jack, and a reset button. It is the brain of our smart home system, controlling all sensors and actuators.

### Ultrasonic Sensor (HC-SR04)

The HC-SR04 ultrasonic sensor measures distance by sending out a burst of ultrasonic sound waves and measuring the time it takes for the echoes to return. It is used to detect if a person is within 9 cm of the door.

### Servo Motor (SG90)

The SG90 servo motor is used to open and close the door. It can rotate to a specific angle based on the input signal, allowing precise control of the door mechanism.

### DHT11 Temperature and Humidity Sensor

The DHT11 sensor measures the temperature and humidity of the room. In this project, it is used to monitor the temperature and control the fan and buzzer based on predefined thresholds.

### LED

An LED is used to indicate the presence of a person in the room. It is turned on when the door is open and someone enters the room.

### DC Motor Fan

The DC motor fan provides cooling whe on the room temperature is between 25°C and 45°C. It is controlled based on the temperature readings from the DHT11 sensor.

### Buzzer

The buzzer acts as a fire alarm, activated when the room temperature exceeds 45°C, indicating a potential fire hazard.

Software Components

- Arduino IDE
    
- Servo library
    
- DHT library
    
- DHT_U library
    
PROJECT PICTURE: 

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeJAzAQW13Jpun6QrGP44eLVNbwbqLeG1Tfvp9aiK5JRrvDo7Z3GUSLuLjT9ORFiZeI8DbhbxS4ObrkBbtBoEUfl5hSVQPtzIRKOYEKAgZcPJSsBLnBdopgzD5wSnMsip_SlyRTOwV3UW0Ntkfygd3ghK61?key=5RW_wwR5QkJXA8WqMaxdXQ)

## System Design

### Hardware Setup

1. Ultrasonic Sensor (HC-SR04):
    

- Connect the Trig pin to Arduino pin 9.
    
- Connect the Echo pin to Arduino pin 8.
    
- Connect VCC to the 5V pin and GND to the ground pin on the Arduino.
    

3. Servo Motor (SG90):
    

- Connect the control signal wire to Arduino pin 6.
    
- Connect the power wires to the 5V and GND pins on the Arduino.
    

5. DHT11 Sensor:
    

- Connect the data pin to Arduino pin 3.
    
- Connect the power and ground wires to the 5V and GND pins on the Arduino.
    

7. LED:
    

- Connect the positive terminal (longer leg) to Arduino pin 4.
    
- Connect the negative terminal to a 220-ohm resistor, and then to the GND pin on the Arduino.
    

9. DC Motor Fan:
    

- Connect the control signal wire to Arduino pin 12.
    
- Connect the power wires to an external power supply appropriate for the motor.
    

11. Buzzer:
    

- Connect the positive terminal to Arduino pin 2.
    
- Connect the negative terminal to the GND pin on the Arduino.
    

### Software Design

The software design involves writing the Arduino code to control all the components based on sensor inputs. The main tasks include:

- Measuring distance using the ultrasonic sensor.
    
- Controlling the servo motor to open and close the door.
    
- Monitoring temperature with the DHT11 sensor.
    
- Turning the LED on or off based on the door state.
    
- Controlling the fan and buzzer based on temperature thresholds.

## Working Principle

### Ultrasonic Distance Measurement

The ultrasonic sensor emits a burst of ultrasonic waves through the Trig pin. When these waves hit an object, they reflect back and are received by the Echo pin. The Arduino calculates the distance based on the time taken for the waves to return.

### Temperature Monitoring and Control

The DHT11 sensor continuously monitors the room temperature. The Arduino processes this data to:

- Turn on the fan if the temperature is between 25°C and 45°C.
    
- Activate the buzzer if the temperature exceeds 45°C, indicating a potential fire hazard.
    

## Implementation and Testing

### Hardware Assembly

1. Connect all components as described in the hardware setup section.
    
2. Ensure all connections are secure and correct to avoid damage to components.
    

### Code Deployment

1. Upload the provided Arduino code to the Arduino Uno R3 using the Arduino IDE.
    
2. Monitor the serial output for debugging and verification of sensor readings and actuator responses.
    

### Testing Procedure

1. Ultrasonic Sensor and Servo Motor: Place an object within 9 cm of the sensor and verify that the servo motor rotates to open the door.
    
2. LED: Ensure the LED turns on when the door is opened.
    
3. DHT11 Sensor and Fan: Adjust the room temperature and verify that the fan turns on when the temperature is between 25°C and 45°C.
    
4. Buzzer: Increase the temperature above 45°C and verify that the buzzer activates.
    

## Results

The smart home system successfully performs the following functions:

- The door opens automatically when an object is detected within 9 cm.
    
- The LED turns on when the door is opened.
    
- The fan operates within the specified temperature range.
    
- The buzzer activates as a fire alarm when the temperature exceeds 45°C.
    

  

Motivation

The increasing demand for smart home solutions has led to a growing interest in home automation technologies. With the rise of the Internet of Things (IoT), devices can now communicate with each other and be controlled remotely, providing greater convenience and energy efficiency. The Smart Home System presented in this project is a practical example of how these technologies can be used to create an intelligent home environment.

## Conclusion

This project demonstrates a basic smart home system using an Arduino Uno R3. By integrating multiple sensors and actuators, the system enhances home automation, providing convenience and safety. The project also highlights the potential for further expansion and customization to meet specific user needs.

  

## References

- [Arduino.cc](http://arduino.cc/). (2022). Arduino Uno.  
    [https://www.arduino.cc/en/Main/ArduinoBoardUno](https://www.arduino.cc/en/Main/ArduinoBoardUno)
    
- SparkFun Electronics. (2022). HC-SR04 Ultrasonic Distance Sensor. [https://www.sparkfun.com/products/15569](https://www.sparkfun.com/products/15569)
    
- Adafruit Industries. (2022). DHT11 Temperature & Humidity Sensor. [https://www.adafruit.com/product/385](https://www.adafruit.com/product/385)
    
- Adafruit Industries. (2022). Servo Motors.  
    [https://www.adafruit.com/category/158](https://www.adafruit.com/category/158)
    
- Adafruit Industries. (2022). DC Motors.  
    [https://www.adafruit.com/category/8](https://www.adafruit.com/category/8)
    
- Fritzing. (2022). Fritzing.  
    [https://fritzing.org/](https://fritzing.org/)
    
- Autodesk Eagle. (2022). Autodesk Eagle. [https://www.autodesk.com/products/eagle/overview](https://www.autodesk.com/products/eagle/overview)

