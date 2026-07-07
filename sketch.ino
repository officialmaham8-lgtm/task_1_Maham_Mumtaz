#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
    dht.begin();
    }

    void loop() {
      float temperature = dht.readTemperature();
        float humidity = dht.readHumidity();

          Serial.print("Temperature: ");
            Serial.print(temperature);
              Serial.println(" C");

                Serial.print("Humidity: ");
                  Serial.print(humidity);
                    Serial.println(" %");

                      Serial.println("--------------------");

                        delay(2000);
                        }