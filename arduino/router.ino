#include <ESP8266WiFi.h>

const char *ssid = "ESP8266Net";
const char *password = "polygonever";

void setup() {
  WiFi.softAP(ssid, password);
  Serial.begin(115200);
  Serial.println("Access Point Started");
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // maybe I'll add something here later
}
