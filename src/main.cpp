#include <Arduino.h>
#include <DHT.h>
#define DHTPIN 2
DHT dht(DHTPIN, DHT11);

// Digital pin connected to the DHT sensor

void setup() {
    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 initialized");
// write your initialization code here
}

void loop() {
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Failed to read from DHT sensor!");
        delay(2000);

        return;

    }
    Serial.print("humidity: ");
    Serial.print(humidity);
    Serial.print(" % | ");
    Serial.print("temperature: ");
    Serial.print(temperature);
    Serial.println(" *C");
    delay(2000);

// write your code here
}