# Arduino-with-Ultrasonic-Sensor
how to use an ultrasonic sensor with an Arduino Atmega 328p board?

so basically an ultraonic sensor has 4 pins. VCC,GND,TRIG,ECHO.the trig pin emits a soundwave of 40kHz which bounces back if there is any 
obstacle or it just passes away. now the bounced back soundwave is received by the echo pin. so using a function called "pulseIn" we can 
know the time elapsed between when the wave was sent and when it is received.

