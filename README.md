# DESIGN-625-1
Week 3
interesting Arduino project I found
This project use the arduino to control the layout and automate the model trains and the turnouts. A driver board, motor driver and  sensors are connectted to arduino board. Through the sensors, Arduino detect the positions of train and power the driver board to adjust the turnouts and move train.
https://create.arduino.cc/projecthub/Tech_build/automated-model-railway-layout-with-passing-siding-7c6033?ref=platform&ref_id=424_trending___&offset=1

Smart Flowerpot. It is used to measure soil moisture and air temperature. LCD display shows temperature and humidity in real time. Under normal circumstances, the LED light is green. When the environment is abnormal (humidity is lower than 17% or higher than 44%, temperature is higher than 35 degrees or lower than 10 degrees), the LED light will turn red.

Input sensor: Moisture sensor https://www.adafruit.com/product/4026
			  High accuracy temperature sensor https://www.adafruit.com/product/4089
Output: LCD display, LED lights

1) Make two sensor work with arduino sperately. Detect their output value
2) Make LCD display work and display any random value
3) Display temperature and moisture value in LCD display.
4) Compute the threhold based on tempoeratue and mositure value to light LED

Nice to have: Make LCD display all info, and display health condition of plant periodically 