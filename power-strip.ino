#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define ON LOW
#define OFF HIGH
int Relay1 = D1;
char auth[] = "MLOmKsPuJuPKjVPrE_fu09Yqb7wScpr2";
char ssid[] = "";
char pass[] = "";

void setup()
{
  pinMode(Relay1, OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, "Ai", "12345678");
}

void loop()
{
  Blynk.run();
}
