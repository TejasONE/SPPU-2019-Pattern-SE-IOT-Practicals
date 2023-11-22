void setup() 
{
	// put your setup code here, to run once:
	pinMode(4,INPUT);// A4
	pinMode(6,OUTPUT);// D6  -> to buzzer -> led
	Serial.begin(9600);
}

void loop() 
{
	if(analogRead(4)>20) 
	{
		Serial.println("knock detected");
		digitalWrite(6,1); //lightup  and  buzzer 
	} 
	else 
	{
		digitalWrite(6,0);
	}
	delay(10);
	Serial.println(analogRead(4));  //prints val at A4 pin
}
