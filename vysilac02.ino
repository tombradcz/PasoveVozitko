/*
* Arduino Wireless Communication Tutorial
*     Example 1 - Transmitter Code
*                
* by Dejan Nedelkovski, www.HowToMechatronics.com
* 
* Library: TMRh20/RF24, https://github.com/tmrh20/RF24/
*/

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

int joystick1;
int joystick2;
int array[2];

RF24 radio(6, 10); // CE, CSN

const byte address[6] = "00001";

void setup() {
  Serial.begin(9600);

  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();

  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
}

void loop() {

 joystick1 = analogRead(A4);
 joystick2 = analogRead(A5);

 array[0] = joystick1;
 array[1] = joystick2;
 
  radio.write(&array, sizeof(array));
  delay(1000);
  Serial.println(array[0]);
}