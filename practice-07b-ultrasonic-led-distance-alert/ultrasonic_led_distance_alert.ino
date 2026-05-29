// C++ code
//
int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  distancia = 0.01723 * readUltrasonicDistance(5, 4);
  Serial.println(distancia);
  delay(500); // Wait for 500 millisecond(s)
  if (distancia < 150) {
    if (distancia >= 100 && distancia <= 150) {
      digitalWrite(6, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
    }
    if (distancia >= 50 && distancia <= 100) {
      digitalWrite(6, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, LOW);
    }
    if (distancia >= 0 && distancia <= 50) {
      digitalWrite(6, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, HIGH);
    }
    tone(7, 523, 100); // play tone 60 (C5 = 523 Hz)
    delay((distancia * 5)); // Wait for (distancia * 5) millisecond(s)
  }
}