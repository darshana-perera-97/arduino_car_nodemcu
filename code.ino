#include <ESP8266WiFi.h>

const char* ssid     = "Dialog_4G";
const char* password = "darshana$123";

WiFiServer server(80);
String header;

String output4State = "off";

const int output4 = 4;

unsigned long currentTime = millis();
unsigned long previousTime = 0; 
const long timeoutTime = 2000;


