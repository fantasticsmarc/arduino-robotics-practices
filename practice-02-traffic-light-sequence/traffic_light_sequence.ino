// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(5, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
}