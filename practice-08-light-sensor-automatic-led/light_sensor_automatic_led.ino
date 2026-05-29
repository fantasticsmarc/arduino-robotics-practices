// C++ code
//
int llum = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  llum = analogRead(A0);
  Serial.println(llum);
  delay(1000); // Wait for 1000 millisecond(s)
  if (llum < 500) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}