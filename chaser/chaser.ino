
// code modified by Antony Therattil
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  

  delay(1000);                 // wait for a second

  
     // wait for a second

  digitalWrite(12, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(11, HIGH);    // turn the LED off by making the voltage LOW
    digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  

  delay(1000);                 // wait for a second

   digitalWrite(12, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(10, HIGH);    // turn the LED off by making the voltage LOW
      digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  

  delay(1000);                 // wait for a second

   digitalWrite(12, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(9, HIGH);    // turn the LED off by making the voltage LOW
  

  delay(1000);                 // wait for a second


}
