/* DC Motor and Servo Motor by Button
 *  Week 5
 *  Joshua Linton - 3174195
 *  DIGF2002 - 20200204 - OCADU
 */
 
#include <Servo.h>    //calling forth Servo

Servo iservo;        //naming Servo

int pos = 0;         //iservo origin degree

void setup() {
  // put your setup code here, to run once:
  iservo.attach(9);  //attaching iservo to pin 9
  pinMode(11, OUTPUT);    //calling forth pin 11
  pinMode(12, OUTPUT);    //calling forth pin 12
  pinMode(10, INPUT);     //calling forth pin 10
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);       //button power

  /*if/else statement sourced from Week 3 slides*/
  if(digitalRead(10) == LOW) {  //if button is pushed
    digitalWrite(11, LOW);      //button is off

  /*for loop sourced from File>Examples>Servo>Sweep*/
    
  for (pos =0; pos <= 270; pos += 1)  { 
    //tells iservo to move from 0 to 270 degrees in incrimental steps of 1
    iservo.write(pos);    //tells iservo to read move according to stated 'pos'
    delay(1);            //wait for 1ms for iservo to reach position
  }
  for (pos = 270; pos >= 0; pos-= 1) {
    //tells iservo to move from 270 backwards to the origin point of 0 degrees
    iservo.write(pos);    //tells iservo to read move according to stated 'pos'
    delay(10);            //wait for 10ms for iservo to reach postion
  }
  /*for loop sourced from File>Examples>Servo>Sweep*/
  
  }else{
  
  digitalWrite(11, HIGH);       //make the motor go forward
  digitalWrite(12, LOW);        //motor backward don't go
  }
}
/*code is dervied from class lecture and examples of Week 3 and 5
 *along with derived code from File>Examples>Servo>Sweep*/
 */
