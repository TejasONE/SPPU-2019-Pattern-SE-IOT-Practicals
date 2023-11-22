/*
IR SENSOR
*/

int SensorState = 0;

void setup()
{
    pinMode(2,INPUT);
    pinMode(3,OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    SensorState = digitalRead(2);

    if(SensorState == 0)
    {
        digitalWrite(3,HIGH);
        Serial.println("Object Detected");
    }

    else
    {
        Serial.println("Object Not Detected");
        digitalWrite(3,LOW);
    }
    delay(100);
}