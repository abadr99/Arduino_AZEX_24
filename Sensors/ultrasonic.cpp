// defines pins numbers
#define TRIG_PIN 9
#define ECHO_PIN 10

// defines variables
long duration;
int distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT); // Sets the TRIG_PIN as an Output
  pinMode(ECHO_PIN, INPUT); // Sets the ECHO_PIN as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // 1) Clears the TRIG_PIN
  digitalWrite(TRIG_PIN, LOW);
  
  // 2) Wait for 2us
  delayMicroseconds(2);
  
  // 3) Sets the TRIG_PIN on HIGH state for 10 micro seconds
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  
 // 4) Clears the TRIG_PIN 
  digitalWrite(TRIG_PIN, LOW);
  
  // 5) Reads the ECHO_PIN, returns the sound wave travel time in microseconds
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // 6) Calculating the distance
  distance = duration * 0.034 / 2;
  
  // 7) Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
}