#include <Servo.h>

Servo s1;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  s1.attach(4);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  // 0도에서 180까지 1도씩 증가
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  // 180도에서 1까지 1도씩 감소
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}

