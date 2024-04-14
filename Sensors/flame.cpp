void setup()
{
  pinMode(2, INPUT); //initialize Flame sensor output pin connected pin as input.
  pinMode(LED_BUILTIN, OUTPUT);// initialize digital pin LED_BUILTIN as an output.
}
void loop()
{
  if (digitalRead(2) == 1 )
  {
    digitalWrite(LED_BUILTIN, HIGH); // Led ON
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW); // Led OFF
  }
  delay(100);
}