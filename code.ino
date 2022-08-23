#include <ESP8266WiFi.h>

const char *ssid = "Dialog_4G";
const char *password = "darshana$123";

WiFiServer server(80);
String header;

String output4State = "off";

const int output4 = 4;

unsigned long currentTime = millis();
unsigned long previousTime = 0;
const long timeoutTime = 2000;

void setup()
{
    Serial.begin(115200);
    pinMode(output4, OUTPUT);
    digitalWrite(output4, LOW);
    Serial.print("Connecting to ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    server.begin();
}
