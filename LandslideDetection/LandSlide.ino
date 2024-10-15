/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// constants won't change. They're used here to set pin numbers:
const int RainWater = 2;     // the number of the pushbutton pin
const int Moister = 3;     // the number of the pushbutton pin
const int Vibration = 4;  
const int ledRain =  13;      // the number of the LED pin
const int ledVibraion =  12; 
const int ledDanger =  11; 
const int Buzz =  10; 


// variables will change:
int  RainWaterState = 0;         // variable for reading the pushbutton status
int  MoisterState = 0;         // variable for reading the pushbutton status
int  VibrationState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledRain, OUTPUT);
    pinMode(ledVibraion , OUTPUT);
      pinMode(ledDanger, OUTPUT);
       pinMode(Buzz, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(RainWater, INPUT);
  pinMode(Moister, INPUT);
   pinMode(Vibration, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  RainWaterState = digitalRead(RainWater);
MoisterState=digitalRead(Moister);
VibrationState=digitalRead(Vibration);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if ((RainWaterState == LOW)||(MoisterState == LOW))
  
  {
    // turn LED on:
    digitalWrite(ledRain, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledRain, LOW);
  }

  if(VibrationState==HIGH)
  {
    // turn LED on:
    digitalWrite(ledVibraion, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledVibraion, LOW);
  }

  if ((MoisterState == LOW)&&(RainWaterState == LOW)&&(VibrationState==HIGH))
  {
    digitalWrite(ledDanger, HIGH);
    digitalWrite(Buzz, HIGH);
    delay(200);
    digitalWrite(ledDanger, LOW);
    digitalWrite(Buzz, LOW);
    delay(200);
  }
  else
  {

    digitalWrite(ledDanger, LOW);
    digitalWrite(Buzz, LOW);
  }
  
}
