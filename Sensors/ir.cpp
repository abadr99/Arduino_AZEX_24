#define IRSensor 9  // connect IR sensor module to Arduino pin D9
#define LED      13 // connect LED to Arduino pin 13

void setup(){
  pinMode(IRSensor, INPUT); // IR Sensor pin INPUT
  pinMode(LED, OUTPUT); // LED Pin Output
}

void loop(){
  int sensorStatus = digitalRead(IRSensor); // Set the GPIO as Input
  if (sensorStatus == 1) // Check if the pin high or not
  {
    // if the pin is high turn off the onboard Led
    digitalWrite(LED, LOW); // LED LOW
  }
  else  {
    //else turn on the onboard LED
    digitalWrite(LED, HIGH); // LED High
  }
}