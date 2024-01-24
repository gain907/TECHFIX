#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4; 
Servo s5;
Servo s6;


void setup() {
  // put your setup code here, to run once:
  s1.attach(4);
  s2.attach(5);
  s3.attach(6);
  s4.attach(7);
  s5.attach(8);
  s6.attach(9);  
        
  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(90);      
  s5.write(90);
  s6.write(90);        
  
 

}

void loop() {
  // put your main code here, to run repeatedly:


//s1.write(30);
//delay(1000);
//s1.write(150);
//delay(1000);

}
