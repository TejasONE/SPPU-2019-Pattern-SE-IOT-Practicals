/*
Write a program to show the temperature and shows a graph of the recent 
measurements 
*/

#include<DHT.h>
DHT dht(11,DHT11);

float temp;

void setup() 
{
	// put your setup code here, to run once:
	dht.begin();
	Serial.begin(9600);

	while(!Serial.available()) 
	{
		temp = (dht.readTemperature()*9/5)+32;
		Serial.print("Temp in farenheit ");
		Serial.println(temp);
	}
}

void loop() 
{
  	// put your main code here, to run repeatedly:
}
