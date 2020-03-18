#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define ON LOW
#define OFF HIGH
int Relay1 = Port that use delay;
char auth[] = "Token that recieve from blink app";
char ssid[] = "";
char pass[] = "";

void setup()
{
  pinMode(Relay1, OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, "Name of wifi", "password");
}

void loop()
{
  Blynk.run();
}
