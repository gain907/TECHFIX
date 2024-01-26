#include <SoftwareSerial.h>
#include <Servo.h>

int datain;

SoftwareSerial BTSerial(2, 3); //Arduino D2,D3  //bluetooth module Rx:3 Tx:2


void setup() {
  // put your setup code here, to run once:

  BTSerial.begin(9600); // Default baud rate of the Bluetooth module
  Serial.begin(9600);
  BTSerial.setTimeout(1);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Check for incoming data
  if (BTSerial.available() > 0) {
       Serial.println("통신"); 
    datain = BTSerial.read();  // Read the data

    if (datain == 1) {
       
      Serial.println("1");
    }
    if (datain == 2) {
   
      Serial.println("2");
      
    }
    if (datain == 3) {
        
      Serial.println("3");
      
    }
    if (datain == 4) {
            
      Serial.println("4");
      
    }   
    if (datain == 5) {
          
    Serial.println("5");
      
    }  
    if (datain == 6) {
          
    Serial.println("6");
      
    }         
  }
}
