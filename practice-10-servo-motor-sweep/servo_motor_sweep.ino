// C++ code
//
#include <Servo.h>

Servo servo_3;

void setup()
{
  servo_3.attach(3, 500, 2500);
}

void loop()
{
  servo_3.write(0);
  delay(2000); // Wait for 2000 millisecond(s)
  servo_3.write(45);
  delay(2000); // Wait for 2000 millisecond(s)
  servo_3.write(90);
  delay(2000); // Wait for 2000 millisecond(s)
  servo_3.write(135);
  delay(2000); // Wait for 2000 millisecond(s)
  servo_3.write(180);
  delay(2000); // Wait for 2000 millisecond(s)
}