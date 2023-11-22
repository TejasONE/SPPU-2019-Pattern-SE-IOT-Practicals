/*
6. Create a program that illuminates the green LED if the counter is less than 100, illuminates the 
   yellow LED if the counter is between 101 and 200 and illuminates the red LED if the counter is 
   greater than 200
*/


int counter = 0;

void setup() 
{
    // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() 
{
	// put your main code here, to run repeatedly:
	if(++counter <100)
	{
		digitalWrite(4,1);
	}
	else
	{
		digitalWrite(4,0);
		digitalWrite(6,1);
	}
	Serial.println(counter);
	delay(100); 
}
