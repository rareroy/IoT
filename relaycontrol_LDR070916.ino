
#include<math.h>
int sensepin = 0;
int ledpin=10;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() {
int val=analogRead(sensepin);
/*double lig;
 lig = log(10000.0*((1024.0/val-1))); 
 lig = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * lig * lig ))* lig );*/

  if (val >= 800){
    digitalWrite(ledpin, LOW);
  }
  else {
    digitalWrite(ledpin, HIGH);
  }
  Serial.println(analogRead(sensepin));
     delay(500);        
}

