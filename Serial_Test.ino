
//Define SENSE1 pins
const int T1=D3, E1=D4; //T for trigger, E for echo of the HC-SR04

//Define SENSE2 pins
const int T2=D7, E2=D8;

//Define how often to check distance (in ms)
int t=100;

unsigned long prevTime;
unsigned long E1T, E2T; //time of echoes

void setup() {
  
  // put your setup code here, to run once:

Serial.begin(115200);
delay(100);
prevTime = millis();
Serial.print(T1);
Serial.println();

pinMode(T1, OUTPUT);
digitalWrite(T1, LOW);
pinMode(E1, INPUT);
pinMode(T2, OUTPUT);
pinMode(E2, INPUT);
/*
pinMode(D3, OUTPUT);
digitalWrite(D3, LOW);
pinMode(E1, INPUT);
pinMode(D7, OUTPUT);
pinMode(D8, INPUT);
*/
}

void loop() {
  // put your main code here, to run repeatedly:


if((millis()-prevTime) >= t){
  digitalWrite(D3, HIGH);
  delayMicroseconds(1);
  //Serial.print("here");
  digitalWrite(D3, LOW);

  E1T = pulseIn(E1, HIGH);
  //Serial.print(prevTime);
  //Serial.println();
  Serial.print(E1T/148);
  Serial.print(" in");
  Serial.println();
  Serial.println();
  Serial.println();

  prevTime=millis();
}







}


