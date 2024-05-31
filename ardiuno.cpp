void setup() {
  Serial.begin(9600);
  Serial1.begin(115200); // Initialize Serial1 for communication with ESP8266
}

void loop() {
  if (Serial1.available()) {
    char receivedChar = Serial1.read();
    Serial.print("Received from ESP8266: ");
    Serial.println(receivedChar);
  }
}
