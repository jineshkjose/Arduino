
![ckt](https://github.com/jineshkjose/Arduino/blob/main/imgs/RGB%20LED.png)

[Tinkercad Link](https://www.tinkercad.com/embed/li7Vjhd9cQi?editbtn=1)

~~~
// C++ code
//
void setup()
{
  //RED COLOR
  analogWrite(11, 255);
  analogWrite(10, 0);
  analogWrite(9, 0);  
  delay(3000);
  
  //BLUE COLOR
  analogWrite(11, 0);
  analogWrite(10, 255);
  analogWrite(9, 0);  
  delay(3000);
  
  //GREEN COLOR
   analogWrite(11, 0);
  analogWrite(10, 0);
  analogWrite(9, 255);  
  delay(3000);
  
  //WHITE COLOR
   analogWrite(11, 255);
  analogWrite(10, 255);
  analogWrite(9, 255);  
  delay(3000);
  
  
}

void loop()
{
 analogWrite(11, random(0,255));
  analogWrite(10, random(0,255));
  analogWrite(9, random(0,255));
  
  delay(3000);
}
~~~
