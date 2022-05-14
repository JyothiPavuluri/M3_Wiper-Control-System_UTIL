# Table of content
## About the Wiper Control System
1. Abstract
    1. Objective
1. Requirements
    1. Introduction
    1. Benefits 
    1. Basic Requirements
    1. Used components
    1. Features
    1. 5W’s & 1H and S.W.O.T analysis
    1. High level requirements
    1. Low level requirements
1. Architecture
    1. Block Diagram
    1. Flowchart
    1. Data flow transistion  
    1. State-transistion 
    1. Behavioural Diagram
        1. High Level Flow chart Behavioural Diagram
        1. Low Level Flow chart Behavioural Diagram
    1. Structural Diagram
        1. High Level UML Use Case Structural Diagram
        1. Low Level UML Use Case Structural Diagram
1. Test plan and Output
    1. High level test plan
    1. Low level test plan



# 1. Abstract

## Objective

 Wiper is an essential component that used to wipe raindrops or any water from the vehicle’s windscreen. The previous system
used to activate the wiper manually and the process of pulling up the wiper is difficult to be handled. Thus, this system is
proposed to solve these problems. The objectives of this project are to upgrade the older cars system by providing automatic
wiping system, to improve the system by using sensor with actuator and to design a basic program that will fully operate with
the system. The concept of this proposed wiper system is similar with other existing conventional wiper. In spite of removing
water from windscreen, this system also will be upgraded to an automatic control system by using a STM32
controller and water sensor. As the conclusion for the project, the results shows all the aim
objectives are successfully achieved. The wiper system was well functionally according the water condition from the outside of a
car. 

# 2.REQUIREMENTS:

##  Introduction:

Scenario: Wiper Control System.
Ignition Key Position at ACC: The Red LED is ON, if the user button is pressed and held for 2 secs
Wiper ON: Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz
Wiper OFF: Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
Ignition Key Position at Lock: The Red LED is OFF, if the user button is pressed and held for 2 secs


![wiper system](https://user-images.githubusercontent.com/101269692/168070454-9a4ae7e7-fda1-4cef-be70-17ebf78016eb.png)


## Benefits of Wiper Control System

Automatic Wipers can be understood as smart wipers that automatically turn on sensing rain, and adjust their speed as per the intensity of rainfall. Most automatic wipers use a sensor that is placed behind the windshield. When it rains, the sensor beams out infrared light that is reflected back at different angles based upon the intensity of water droplets falling on the windshield. The more the rain, the less the light is reflected. Based on the amount of light reflected, the system activates the wiper and controls its speed as well.

# Basic Requirements
* Hardware Equipment
* Software

# Used components

The Following are the important components to build Wiper Control System
* STM32F4 Microcontroller
* 4 LEDs
* 1 Push Button or Switch
* 1 Timer
* power Supply
* USB Cable

# Features:
 * Wiper Control System controls up to 9 windshield wipers. 
 * Each wiper has its own on/off  button.
 * Blue,Green,Orange LEDs,Come ON and OFF alternately for set frequency State A, RED led will be ON and after wipers are grouped together for simultaneous on/off control.
 * buttons are available for Low/High Speed, Heating and Washing functions. 
 * In Low speed mode the interval can be varied with the Interval+/Interval- pushbuttons.
 * The wipers are synchronized with each other.
 *  The washing function includes spraying, wiping and purging. 


# SWOT Analysis- Strengths, and Weakness, Opportunities threats

## Strengths

* It is possible to operate manually/automatically by providing ON/OFF switch.
* Easy usage of features with a user press button
* You can make your own.
* Cost Effective

## Weakness

* This system applied in the case of water falling on the class only.
* Alert will be start when rain is there,sometimes it disturbs human.
* Limited usage range

## Opportunities

* It improved visibility of car windshield during rain.
* This mechanism can be applied to heavy automation like buses,trucks etc., with little modification.
* It can be implemented at house window for cleaning.

## Threats

* It is totally dependent on timer circuit.
* A slight modification in it leads to a bettrt cleaning system.


# 4W's and 1'H

## Who:
* The car wiper control system can be used by people who are all having car.

## What?
* Wiper Control System is build to clean or wipe the raindrops or any water from the windscreen. 

## When:
* The rain sensor based system functions when water falls on the sensor directly.

## Where:
* This system applied in the case of water falling on the class only.

## How:
* The Project is going to be implemented in  STM32F4 Microcontroller through a single Button.

# Detail requirements

## High Level Requirements:
| ID  | Component| Description  |
|------|-------------|---------|
|HLR01|LED |to represent the operation of Microcontroller |  
|HLR02|Timer|For Setting Delay|
|HLR03|Power Supply|The power supply make the working of hardware |
|HLR04|Frequency|Come on and OFF alternately for set frequency in HZ|
|HLR05|Switch|To make on and off Conditions|

## Low Level Requirements:
| ID | Low Level Requirements for HLR1 | ID	| Low Level Requirements for HLR2 |
| :---: | :---: | :---: | :---: |
| LLR1.1 |	If the user Button is pressed and held for 2 secs,the Red LED is ON | LLR2.1 |	If the user Button is pressed and held for 2 secs,the Red LED is OFF |
| LLR1.2  |	The system shall ON the LED's |	LLR2.2 | The system shall OFF the LED's  |
| **ID** |	**Low Level Requirements for HLR3** |	**ID** | **Low Level Requirements for HLR4** |
| LLR3.1 | On press of the user input all LEDs come ON at a time |	LLR4.1 | Again, On press of the user input all LEDs come OFF at a time |
| LLR3.2 | All LEDs come ON one at changes on every alternate key press |	LLR4.2 | The LED glow pattern stops on the 4th press |
| LLR3.3 | then 3 frequency levels with 1,4 and 8HZ | LLR4.3 | then wiper action starts next press |


# 3.Architecture
## Block Diagram
![Block-diagram-of-the-windshield-wiper-system](https://user-images.githubusercontent.com/101269692/168418998-7d8159a1-0b16-4cb5-8c91-f489d57ed2f7.png)

 ## Flowchart
 ![Flowchart Diagram](https://user-images.githubusercontent.com/101269692/168419015-421cc3a4-0b4c-41f8-b070-d039891cfc42.png)

 ## Data flow transistion  
 ![Data flow transistion](https://user-images.githubusercontent.com/101269692/168419061-00297ca9-92c7-4ff5-91f6-2848de97fb23.png)

  ## State-transistion 
![State-transistion](https://user-images.githubusercontent.com/101269692/168419030-69964a6e-3f6d-4817-802b-454d1ef3ea83.png)

# 1.Test plan and Output

   ## High level test plan
   |Test ID|Description|Input|Expected Output|Actual Output|Pass/Fail|
|:----:|:----:|:----:|:----:|:----:|:---:|
|HLT1| Start | User press  button 2Secs| Ignition at ACC | Displayed Ignition at ACC |Pass|
|HLT2| Wiper ON |User press button Once |Wiper Status ON-1Hz|Displayed Wiper ON Status|Pass|
|HLT3| Wiper ON |User press button Twice |Wiper Status ON-4Hz|Displayed Wiper ON Status|Pass|
|HLT3| Wiper ON |User press button  Thrice |Wiper Status ON-8Hz|Displayed Wiper ON Status|Pass|
|HLT3| Wiper OFF |User press  button 4th time | Wiper Status OFF |Displayed Wiper OFF Status|Pass|
|HLT4| Stop | User press  button 2Secs | Ignition at LOCK | Displayed Ignition at LOCK|Pass|
   ## Low level test plan
   
   |ID|Description|Input|Expected Output|Actual Output|Status|
|:----:|:---:|:---:|:------:|:----:|:---:|
|LLT1| Check for Ignition at ACC |user button is pressed for 2Secs| Red Led is ON | Red Led is ON |✔|
|LLT2| Check for All LED's ON | on press the user input |All LED's shall ON at the same time|All LED's ON at the same time|✔|
|LLT3| Check for All LED's OFF | on next press of the user input |All LED's shall OFF |All LED's OFF |✔|
|LLT4|Check for Ignition at LOCK |user button is pressed for 2Secs| Red Led is OFF | Red Led is OFF |✔|

# The Test Plan Of The Project Is:
* To know the importance of the project.
* The working conditions of the project.
* The working principle and architecture of sensors.
* The microcontroller chip.
* The sensors interfacing with the microcontroller.
