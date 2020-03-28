
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor



void setup() {
 Serial.begin(9600);
}


void loop() {
 sensorValue = analogRead(sensorPin);
 Serial.print("lightvalue =");
 Serial.println(sensorValue);
 delay(2000);

 if (sensorValue < 250)
{
  digitalWrite(7, LOW);
  delay(2000);
}
  else
{
  digitalWrite(7, HIGH);
}
}

