#include <TinyWireM.h>
#include <Tiny4kOLED.h>
#include <TinyDHT.h>        // lightweit DHT sensor library
// ============================================================================

#define DHTTYPE DHT22     // DHT 22  (AM2302)
#define TEMPTYPE 0        // (0 for celsius)

// Trinket GPIO #1 would be better but LED prevents digital talk with DHT sensor
#define DHTPIN 4          // Sensor connected to GPIO #4

DHT dht(DHTPIN, DHTTYPE);  // Define Temp Sensor

int  Delay_time_ms = 10000;

void setup() {
  dht.begin();  // Initialize DHT Teperature Sensor
  oled.begin();
  oled.setFont(FONT8X16); // 2 lines of 16 characters exactly fills 128x32
  oled.clear();
  oled.on();
}

void loop() {
 
  int8_t h = dht.readHumidity();               // Read humidity
  int16_t t = dht.readTemperature(TEMPTYPE);   // read temperature

    
  oled.setCursor(0, 0);
  oled.print("Temperature:");  
  oled.setCursor(110, 0);
  oled.print(t);
    
  oled.setCursor(0, 2);
  oled.print("Humidity:");
  oled.setCursor(110, 2);
  oled.print(h);  

  delay(Delay_time_ms); //Change the delay to how often read the data.
}

 
