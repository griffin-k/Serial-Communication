#include <ESP8266WiFi.h>

const char* ssid = "Robotics";
const char* password = "12345678";

void setup() {
  Serial.begin(115200);
  delay(100);

  Serial.println();
  Serial.println("Connecting to WiFi...");

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
}

void loop() {
  Serial.println("Hello from ESP8266");
  delay(1000);
}
