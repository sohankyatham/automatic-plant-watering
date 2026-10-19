const int moisturePin = A0;
const int relayPin    = 7;
const int ledPin      = 13;

const int dryThreshold  = 700;
const int pumpDuration  = 3000;
const int checkInterval = 10000;

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(relayPin, HIGH);
  Serial.begin(9600);
  Serial.println("Started.");
}

void loop() {
  int moisture = analogRead(moisturePin);

  Serial.print("Moisture level: ");
  Serial.println(moisture);

  if (moisture > dryThreshold) {
    Serial.println("Soil is dry - watering now...");
    digitalWrite(ledPin, HIGH);
    digitalWrite(relayPin, HIGH);
    delay(pumpDuration);
    digitalWrite(relayPin, HIGH);
    digitalWrite(ledPin, LOW);
    Serial.println("Done watering.");
  } else {
    Serial.println("Soil is moist - no watering needed.");
  }

  delay(checkInterval);
}