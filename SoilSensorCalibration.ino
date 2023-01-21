#include <Wire.h>
#include <Adafruit_ADS1X15.h>

Adafruit_ADS1115 ads;

void setup() {
  Serial.begin(115200);
  ads.begin();
}

void loop() {
  int16_t value = ads.readADC_SingleEnded(0);  // read the analog value from sensor

  Serial.print("Moisture: ");
  Serial.println(value);

  delay(500);
}
