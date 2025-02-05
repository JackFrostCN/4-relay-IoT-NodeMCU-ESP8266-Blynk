#define BLYNK_TEMPLATE_ID "TMPL6fXlVSUNW"
#define BLYNK_TEMPLATE_NAME "Home"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Wi-Fi credentials
char ssid[] = "Your_SSID";
char pass[] = "Your_Password";

// Relay Pins
#define RELAY1_PIN D1
#define RELAY2_PIN D2
#define RELAY3_PIN D3
#define RELAY4_PIN D4

BlynkTimer timer;

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi!");

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  pinMode(RELAY1_PIN, OUTPUT);
  pinMode(RELAY2_PIN, OUTPUT);
  pinMode(RELAY3_PIN, OUTPUT);
  pinMode(RELAY4_PIN, OUTPUT);

  digitalWrite(RELAY1_PIN, LOW);
  digitalWrite(RELAY2_PIN, LOW);
  digitalWrite(RELAY3_PIN, LOW);
  digitalWrite(RELAY4_PIN, LOW);
}

void loop() {
  Blynk.run();
  timer.run();
}

// Relay control via virtual pins
BLYNK_WRITE(V1) { digitalWrite(RELAY1_PIN, param.asInt()); }
BLYNK_WRITE(V2) { digitalWrite(RELAY2_PIN, param.asInt()); }
BLYNK_WRITE(V3) { digitalWrite(RELAY3_PIN, param.asInt()); }
BLYNK_WRITE(V4) { digitalWrite(RELAY4_PIN, param.asInt()); }
