# TEST PLAN
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
