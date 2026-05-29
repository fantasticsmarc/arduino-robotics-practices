// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int temps = analogRead(A0);
  digitalWrite(13, HIGH);
  delay(temps);
  digitalWrite(13, LOW);
  delay(temps);
}