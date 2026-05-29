// C++ code
//
int temp = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  temp = (-40 + 0.488155 * (analogRead(A0) - 20));
  if (temp < 28) {
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
  }
  if (28 < temp && temp < 32) {
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
  }
  if (32 < temp) {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}