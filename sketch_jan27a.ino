/* ___________________________________
 * Subconscious Illumination Metronome
 * -----------------------------------
 * ___________________________________
 *  
 *  This code is written with the intention to softly emulate a metronome with cycling blinking LED lights
 *  
 *  the code was derived following the lessons/examples/lectures of DIGF2002 - Winter 2020 - Professor Wilkins - OCADU
 *  
 *  written 2020-01-27
 *  by Joshua Linton - 3174195
 *  for DIGF2002 - Professor L. Wilkins
 *  OCADU
 *  
 */

void setup() {
  // put your setup code here, to run once:
  //noInterrupts(); {
  pinMode(13, OUTPUT);  //calling forth the red LED
  pinMode(12, OUTPUT);  //calling forth the green LED
  pinMode(11, OUTPUT);  //calling forth the blue LED
  pinMode(10, OUTPUT);  //calling forth the blue II LED
  }
  
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);     //calling to turn on the red LED
  delay(80);                  //ON for 80 milliseconds
  digitalWrite (13, LOW);     //calling to turn off the red LED
  delay(105);                 //OFF for 105 milliseconds
  digitalWrite(10, HIGH);     //calling to turn on the blue II LED
  delay(360);                 //ON for 360 milliseconds
  digitalWrite(10, LOW);      //calling to turn off the blue II LED
  delay(205);                 //OFF for 205 milliseconds
  digitalWrite(12, HIGH);     //calling to turn on the green LED
  delay(240);                 //ON for 240 milliseconds
  digitalWrite(12, LOW);      //calling to turn off the green LED
  delay(105);                 //OFF for 840 milliseconds
  digitalWrite(11, HIGH);     //calling to turn on the blue LED
  delay(120);                 //ON for 120 millisconds
  digitalWrite(11, LOW);      //calling to turn off the blue LED
  delay(205);                 //OFF for 205 milliseconds
}

/* the code was derived following the lessons/examples/lectures of DIGF2002 - Winter 2020 - Professor Wilkins
