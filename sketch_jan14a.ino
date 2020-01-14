/* ____________________________
 *  Tiny Stop, Slow, Go Lights
 *  
 *  This code is written with intetion of making three links respond
 *  two blinking: green and red
 *  one fading in and out: yellow
 *  
 *  the fading code was derived following the example of File>Examples>Analog>Fading
 *  
 *  written 2020-01-14
 *  by Joshua Linton - 3174195
 *  for DIGF2002 - Professor L. Wilkins
 */
int ledPin = 11; //calling pin 11
  
void setup() {
  pinMode(13, OUTPUT); //calling pin 13
  pinMode(12, OUTPUT); //calling pin 12
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //turns on the GREEN light
  delay(1500); //turns on the GREEN light for 1500 miliseconds
  digitalWrite(13, LOW); //turns off the GREEN light
  delay(1000); //turns off the GREEN light for 1000 miliseconds
  digitalWrite(12, HIGH); //turns on the RED light
  delay(4000); //turns on the RED light for 4000 miliseconds
  digitalWrite(12, LOW); //turns off the RED light
  delay(1500); // turns off the RED light for 1500 miliseconds

  //setting the YELLOW light to fade in
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 15){
  analogWrite(ledPin, fadeValue);
  delay(40); //setting the fade in delay at 40 miliseconds
  //as I understand this is the delay between each incrimental decrease in the lights power
  }

  //setting the YELLOW light to fade out
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5){
  analogWrite (ledPin, fadeValue);
  delay(80); //setting the fade out delay double that of the fade in value
  }
}
