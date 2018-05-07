# HC-SR04--x2--WeMos-D1-Mini-Shield
Shield to attach up to two HC-SR04 ultrasonic distance sensors to a Wemos D1 Mini ESP8266 module.

![Assembled Board with SENSE1, mounted to a Wemos D1 Mini](https://raw.githubusercontent.com/aaronjasso/HC-SR04--x2--WeMos-D1-Mini-Shield/master/extras/Assembled_and_mounted.jpg)

Sensor data sheet:  http://www.micropik.com/PDF/HCSR04.pdf

Works with one or two sensors. The first is mounted to the shield, the second is intended to be mounted elsewhere and connected with a four-conductor cable. It could also be mounted directly to the board facing the opposite direction as the first sensor.

Utilizes a BS138DW SOT-363 chip (which is just two BSS138 N-channel enhanced mode MOSFETs in one package) for level switching the ESP8266's 3.3V trigger pulse up to 5V for the sensors (ref: https://learn.sparkfun.com/tutorials/retired---using-the-logic-level-converter). The down-convert is a simple voltage divider.

All resistors are 0805 size. Resistors on top of board (with the IC) are 10K, resistors on bottom are 20K.

SENSE1 is mounted to the board  
Trigger pin:  D3  
Echo pin:  D4

SENSE2 (optional) can be located off-board  
Trigger pin:  D7  
Echo pin:  D8

The board and SENSE1 have been tested. Example Arduino sketches are in work. Boards available from OSH Park here: https://oshpark.com/shared_projects/YeCIIDGi
