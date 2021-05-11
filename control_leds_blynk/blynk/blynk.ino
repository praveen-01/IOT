#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include<Servo.h>
Servo servo;
char auth[] = "authid";
char ssid[] = "networkname";
char pass[] = "networkpass";
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  servo.attach(D8);
}
void loop()
{
  Blynk.run();
}
BLYNK_WRITE(V3){  
  servo.write(param.asInt());
}
