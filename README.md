This is a Home Automation Project which is implemented on Proteus.
In this project, LM35 and Passive Infra Red sensor is used.
LM35 is used to detect temperature of the room.
Passive Infra Red sensor is used to detect the motion of human inside room.
Main part of this project is Arduino Uno which is used to control all sensor and to control fan.
In this Project, LCD is also used to display whether someone is inside the room or not.
For connecting LCD with Arduino PCF8574 is used which is a 8-bit input/output (I/O) expander for the two-line bidirectional bus.
The PCF8574 device provides general-purpose remote I/O expansion for most microcontroller families by way of the I2C interface [serial clock (SCL), serial data (SDA)].
This device use I2C communication with Arduino to transfer data from Arduino to LCD.
In Arduino only analog pin A4 and A5 pin can be used for I2C communication.  
