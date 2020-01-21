/* and/if statements and logic
Week 3
Joshua Linton - 3174195
DIGF2002 - 20200121 - OCADU
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);  //calling forth the red LED
  pinMode(12, OUTPUT);  //calling forth the yellow LED
  pinMode(8, OUTPUT);   //calling forth the green LED
  Serial.begin(9600);   //connecting the computer to the Arduino for log purposes
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(5));    //asking for the Arduino to read analog pin 5
  if(analogRead(5) < 800){          //CONDITION if the light sensor is reading less than 800
    digitalWrite(13, HIGH);         //turn on the red LED
    digitalWrite(12, LOW);          //shut the yellow LED off/keep it off
    digitalWrite(8, LOW);           //shut the green LED off/keep it off
  }else if(analogRead(5) < 900){    //CONDITION if the light sensor is reading less than 900
    digitalWrite(13, LOW);          //shut the red LED off/keep it off
    digitalWrite(12, HIGH);         //turn on the yellow LED
    digitalWrite(8, LOW);           //shut the green LED off/keep it off
  }else{                            //if none of the other conditions
    digitalWrite(13, LOW);          //shut the red LED off/keep it off
    digitalWrite(12, LOW);          //shut the yellow LED off/keep it off
    digitalWrite(8, HIGH);          //turn on the green LED
   }
}
//code derived from following instruction and examples in the 2020-01-21 class lecture
