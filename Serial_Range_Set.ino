#include <Servo.h>
#include <SoftwareSerial.h>


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
  
  Serial.begin(9600);
}

void loop() {
    ///////////// 시리얼 데이터 처리
      if(Serial.available()){
        char in_data;
        in_data = Serial.read();
          if (in_data == '1') {
            s1.write(20);
            Serial.println("s1 20");
          } else if (in_data == '2') {
            s1.write(160);
            Serial.println("s1 120");
          } else if (in_data == '3') {
            s1.write(90);
            Serial.println("s1 90");      
          } else if (in_data == '4') {
            s2.write(20);
            Serial.println("s2 20");
          } else if (in_data == '5') {
            s2.write(120);
            Serial.println("s2 120");   
           } else if (in_data == '6') {
            s2.write(90);
            Serial.println("s2 90");   
           } else if (in_data == '7') {
            s3.write(30);
            Serial.println("s3 30");
          } else if (in_data == '8') {
            s3.write(120);
            Serial.println("s3 120");   
           } else if (in_data == '9') {
            s3.write(90);
            Serial.println("s3 90");   
           } else if (in_data == 'q') {
            s4.write(30);
            Serial.println("s4 30");
          } else if (in_data == 'w') {
            s4.write(140);
            Serial.println("s4 120");   
           } else if (in_data == 'e') {
            s4.write(90);
            Serial.println("s4 90");  
           } else if (in_data == 'r') {
            s5.write(60);
            Serial.println("s5 60");
          } else if (in_data == 't') {
            s5.write(120);
            Serial.println("s5 120");   
           } else if (in_data == 'y') {
            s5.write(90);
            Serial.println("s5 90"); 
           } else if (in_data == 'u') {
            s6.write(30);
            Serial.println("s6 30");
          } else if (in_data == 'i') {
            s6.write(120);
            Serial.println("s6 120");   
           } else if (in_data == 'o') {
            s6.write(90);
            Serial.println("s6 90");                                     
           } else if (in_data == 'a') {
            s1.write(90);
            s2.write(90);
            s3.write(90);
            s4.write(90);
            s5.write(90);
            s6.write(90);                                    
            Serial.println("All 90");   
           }                            
      } 

}
