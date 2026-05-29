// C++ code
//
int n = 0;

void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
  n = 0;
}

void loop()
{
  if (digitalRead(7) == HIGH) {
  n += 1;
  Serial.println("Persones que accedeixen");
  Serial.println(n);
  delay(100);}
}