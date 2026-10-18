const int moisturePin = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("PlantMind started.");
}

void loop() {
  int moisture = analogRead(moisturePin);
  Serial.print("Moisture level: ");
  Serial.println(moisture);
  delay(1000);
}