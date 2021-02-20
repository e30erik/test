int sensorPin = A5;
int sensorPin2 = A4;
int sensorValue = 0;
int sensorValue2 = 0;

// This is a new comment
// Second comment

void setup() {
  Serial.begin(1200);

}

void loop() {
  sensorValue = analogRead(sensorPin);
  sensorValue2 = analogRead(sensorPin2)/2;
  Serial.print(sensorValue);
  Serial.print(",");
  Serial.println(sensorValue2);
  delay(200);
  Serial.println("done");

}
