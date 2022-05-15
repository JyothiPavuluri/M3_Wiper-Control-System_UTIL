#  REQUIREMENTS

##  Introduction

*  wipers keep the windshield of a vehicle clear from rain water, snow, dust and road spray. The first windshield wipers were operated manually by moving a lever inside the car. Later wiper designs were powered by the engine's manifold vacuum. Virtually all wipers today employ an electric motor coupled with a linkage mechanism and are actuated by a knob beside the steering wheel. The wiper blade speed can be adjusted by the driver.


* Modern windshield wipers may also be run intermittently. The intermittent wiper option cycles the wipers on and off every few seconds rather than running constantly. Intermittent control first appeared in automobiles in the 1970's. The original intermittent wipers were controlled by a constant power source that was routed through a series of switches. Now, virtually all automotive wipers are controlled by a microprocessor.

![working of wiper](https://user-images.githubusercontent.com/101269692/168426614-4e1e6023-b1c2-4e23-ae34-be1ab9928928.jpg)


* Many wiper systems in cars today use a rain sensor to detect the speed at which the raindrops are falling on the windshield. A microprocessor evaluates the signals from the sensor to calculate the speed at which the wipers should move.

## Working

 Wiper Control System.
 
* Ignition Key Position at ACC: The Red LED is ON, if the user button is pressed and held for 2 secs.
* Wiper ON: Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz.

* Wiper OFF: Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2.

* Ignition Key Position at Lock: The Red LED is OFF, if the user button is pressed and held for 2 secs.


## Benefits of Wiper Control System

Automatic Wipers can be understood as smart wipers that automatically turn on sensing rain, and adjust their speed as per the intensity of rainfall. Most automatic wipers use a sensor that is placed behind the windshield. When it rains, the sensor beams out infrared light that is reflected back at different angles based upon the intensity of water droplets falling on the windshield. The more the rain, the less the light is reflected. Based on the amount of light reflected, the system activates the wiper and controls its speed as well.

## Basic Requirements


*  Hardware Equipment

*  Software

## Used components

The Following are the important components to build Wiper Control System

* STM32F4 Microcontroller

* 4 LEDs

* 1 Push Button or Switch

* 1 Timer

* power Supply

* USB Cable

## Features

 * Wiper Control System controls up to 9 windshield wipers. 
 
 * Each wiper has its own on/off  button.
 
 * Blue,Green,Orange LEDs,Come ON and OFF alternately for set frequency State A, RED led will be ON and after wipers are grouped together for simultaneous on/off control.
 
 * buttons are available for Low/High Speed, Heating and Washing functions. 
 
 * In Low speed mode the interval can be varied with the Interval+/Interval- pushbuttons.
 
 * The wipers are synchronized with each other.
 
 *  The washing function includes spraying, wiping and purging. 
 

## SWOT Analysis- Strengths, and Weakness, Opportunities threats

## Strengths

* It is possible to operate manually/automatically by providing ON/OFF switch.

* Easy usage of features with a user press button.

* You can make your own.

* Cost Effective.

## Weakness

* This system applied in the case of water falling on the class only.

* Alert will be start when rain is there,sometimes it disturbs human.

*  Limited usage range


## Opportunities

*  It improved visibility of car windshield during rain.

* This mechanism can be applied to heavy automation like buses,trucks etc., with little modification.

* It can be implemented at house window for cleaning.

## Threats

* It is totally dependent on timer circuit.

* A slight modification in it leads to a bettrt cleaning system.

## 4W's and 1'H

## Who

* The car wiper control system can be used by people who are all having car.

## What

* Wiper Control System is build to clean or wipe the raindrops or any water from the windscreen. 

## When

* The rain sensor based system functions when water falls on the sensor directly.

## Where

* This system applied in the case of water falling on the class only.

## How

* The Project is going to be implemented in  STM32F4 Microcontroller through a single Button.

## Detail requirements

## High Level Requirements

| ID  | Component| Description  |
|------|-------------|---------|
|HLR01|LED |to represent the operation of Microcontroller |  
|HLR02|Timer|For Setting Delay|
|HLR03|Power Supply|The power supply make the working of hardware |
|HLR04|Frequency|Come on and OFF alternately for set frequency in HZ|
|HLR05|Switch|To make on and off Conditions|

## Low Level Requirements

| ID | Low Level Requirements for HLR1 | ID	| Low Level Requirements for HLR2 |
| :---: | :---: | :---: | :---: |
| LLR1.1 |If the user Button is pressed and held for 2 secs,the Red LED is ON | LLR2.1 |	If the user Button is pressed and held for 2 secs,the Red LED is OFF |
| LLR1.2  |The system shall ON the LED's |	LLR2.2 | The system shall OFF the LED's  |
| **ID** |**Low Level Requirements for HLR3** |	**ID** | **Low Level Requirements for HLR4** |
| LLR3.1 | On press of the user input all LEDs come ON at a time |	LLR4.1 | Again, On press of the user input all LEDs come OFF at a time |
| LLR3.2 | All LEDs come ON one at changes on every alternate key press |	LLR4.2 | The LED glow pattern stops on the 4th press |
| LLR3.3 | then 3 frequency levels with 1,4 and 8HZ | LLR4.3 | then wiper action starts next press |





