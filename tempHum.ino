#include<DHT.h>
DHT dht(2,DHT11);

void setup() 
{
    // put your setup code here, to run once:
    dht.begin();
    Serial.begin(9600);
}

void loop() 
{
    // put your main code here, to run repeatedly:
    float temp = dht.readTemperature();
    float hum = dht.readHumidity();
    Serial.print("Temperature is : ");
    Serial.println(temp);
    Serial.print("Humidity is : ");
    Serial.println(hum);
    delay(1000);
}
