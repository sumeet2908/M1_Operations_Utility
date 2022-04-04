# Introduction 
Smart switches be controlled remotely, smartphone app, or via a remote control by connecting to the home's WiFi network. Smart switches are available in different shapes and sizes. 
In the present scenario every human being is attracted with modern technology and everyone is willing to use the new technology in every aspect. So according to the recent times of india survey we are the one who are using high production of smart bulbs and smart fans in our country. So on addition to it we are adding some extra features which will have many benfits to the users.

# Resources to execute the code
* Visual Code Studio 
* Linux (Compiler)
* Github


## High level Requirements
|Id|Description |category|
|--|--|---|
|HLR_01|Check the availability of Power| Technical|
|HLR_02|Control the state of switch|Technical|
|HLR_03|Mapping the regulator_values to user defined states|Technical|
|HLR_04|Generate an unique Id for each device|Technical |


## Low level requirements
## HLR_01
|LLR|Descripton|
|---|----------|
| LLR_01|It shall check and display whether the power is available or not available|

## HLR_02
|LLR|Descripton|
|---|----------|
|LLR_01|It shall control the ON/OFF state of light bulb|
|LLR_02|It shall control the ON/OFF state of fan|
|LLR_03|It shall control the ON/OFF state of fridge|

## HLR_03
|LLR|Descripton|
|---|----------|
|LLR_01|It shall regulate the intensity of light bulb|
|LLR_02| It shall regulate the speed of fan|
|LLR_03|It shall regulate the temperature of fridge|
|LLR_04|It shall regulate the values of intensity,speed and temperature from 0 to 100 where 0 is totally off and 100 is full brightness/speed/temperature respectively|

|LLR|Descripton|
|---|----------|
|LLR_01|It shall have data packets which will have an unique ID of switch, status of switch and timestamp|
|LLR_02|It shall be controlled through the smart phone|

# SWOT analysis 
![SWOT-Analysis-Template-12-TemplateLab com](https://user-images.githubusercontent.com/98872208/160234604-b85f71ed-dbf1-4305-b405-ba9df52c2682.jpg)
# 5W's and 1 H
  ![78330-5-whys-template-powerpoint-free-_1_](https://user-images.githubusercontent.com/98872208/160100298-5edf8856-1acb-450c-a46f-141aa635ceba.jpeg)

# Identifying the Features
* Smart switches can be controlled at any time and from anywhere  for example if a homeowner is out for the day or is traveling, lights or appliances can be turned off to save on energy. Similarly, lights can be turned on remotely at night for added security.  
* A smart switch can be set to adjust based on activity. For example, the switch may be programmed to gradually increase the brightness of lights during the morning make-up time and gradually dim them at bedtime.
* As part of smart home automation, most smart switches can integrate several devices for a more convenient living experience
* Using smart switches to efficiently regulate the intensity of light, temperature of refrigrator, and speed of fan can result in significant savings in energy costs.
# Applications
* In street lighting automation makes public assets more secure, smarter and also helps in saving power.
* It is best  applicable for home automation, that is to control any devices to makes your home smarter and saves power.
* The system automates public places like hospital, bus stands and offices and along with power optimization.

# Best Methods to be follow
* In our project we are using a latest version of switch which can operate from the android applications. 
* We are devloping a code which will generate a unique ID for each device and the user is asked to enter an Id and if it matches a device  then that device can be controlled through smart phone. 
* We are providing the options to the user to select  the  devices.
 



# Architecture
# Behavioural
## High Level Block Diagram
![HLR_Block_diagram](https://user-images.githubusercontent.com/98839182/160225523-f603a2f9-5f98-4ea8-a483-5cae9bcfdff3.PNG)
## Low Level Block Diagram
![lowlevel smart switch](https://user-images.githubusercontent.com/82767035/160238235-de9d2eeb-9de0-4645-99bd-584542f8a0ba.png)
# Structural Diagram
## UML Diagram
![SMART SWITCH UML](https://user-images.githubusercontent.com/98894505/160232851-f90f5d16-829b-40d9-b157-949a32acf192.png)

## Class Diagram
![Class_Diagram](https://user-images.githubusercontent.com/98839182/160234024-12a572d8-0d73-424e-b030-7754b2d3677e.PNG)

## Flow chart
![SMART SWITCH FLOW](https://user-images.githubusercontent.com/98815485/160603229-de83ba62-ac74-4be1-849c-b3e9827fc14c.png)

# Test plan and output

# High level test plan

| Test ID | Description | Input | Expected output | Actual Output | Status |
| --- | --- | --- | --- | --- | --- |
| 1 | Power Status | 1-Available, 0-Not available | Available if input is 1 and  Not- Available if input is 0 |  Available if input is 1 and    Not-Available if input is 0 |:heavy_check_mark: |
| 2 | Fan | 01 | Select Fan  |Fan is Selected  |  :heavy_check_mark: |
| 3 | Bulb | 02 |  Select Bulb   | Bulb is Selected |  :heavy_check_mark: |
| 4 | Fridge | 03 |  Select Fridge  | Fridge is Selected | :heavy_check_mark: |
