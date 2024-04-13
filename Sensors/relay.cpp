//Control relays with arduino

#define relay  8; //Relay pin = 8

void setup() {
  pinMode(relay, OUTPUT); //Set relay as output

}

void loop() {
  digitalWrite(relay, LOW); //Turn lamp on
  delay(10000); //Wait for 10 sec
  digitalWrite(relay, HIGH); //Turn lamp off
  delay(10000); //waiting for 10 sec

}