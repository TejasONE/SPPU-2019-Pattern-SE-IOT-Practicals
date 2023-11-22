/*
Write  a  program  so  it  displays  the  temperature  in  Fahrenheit  as  well  as 
the maximum and minimum temperatures it has seen 
*/

#include<DHT.h>
#include<limits.h>

float min = INT_MAX,max=INT_MIN,temp; //#define INT_MIN, Expands to:(-2147483647-1)

DHT dht(11,DHT11);

void setup() 
{
	// put your setup code here, to run once:
	dht.begin();
	Serial.begin(9600);

	while(!Serial.available()) 
	{
		temp = (dht.readTemperature()*9/5)+32;
		Serial.print("Temp in farenheit : ");
		Serial.println(temp);
		delay(1000);    ////......
	
	
		if(min>temp) 
		{
			min = temp;
		}
	
		if(max<temp)
		{
			max = temp;
		}
	}
	
	Serial.print("\n\n\nMin and max temperatures are ");
	Serial.print(min);
	Serial.print(" and ");
	Serial.println(max);
}

void loop() 
{
  // put your main code here, to run repeatedly:
}
