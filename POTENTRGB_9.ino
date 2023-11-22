void setup() 
{
  	// put your setup code here, to run once:
	pinMode(A0, INPUT);
	pinMode(3, OUTPUT);
	pinMode(A1, INPUT);
	pinMode(5, OUTPUT);
	pinMode(A2, INPUT);
	pinMode(6, OUTPUT);
}

void loop() 
{
	analogWrite(3, analogRead(A0));	 // analogRead() Reads the value from the specified analog pin
	analogWrite(5, analogRead(A1));  // analogWrite() used to light LED at varying brightness or motar at various speed
	analogWrite(6, analogRead(A2));
	delay(100); // Delay a little bit to improve simulation performance
}
