    int PirVal;

    int PirPin = 2;

    int ledPin1 = 3;
    int ledPin2 = 4;
    int ledPin3 = 5;      //1,2,3  ->  4,5,6
    int ledPin4 = 6;

    int bzrdata = 7;

    int relay1Pin = 8;
    int relay2Pin = 9;
    int relay3Pin = 10;

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(PirPin, INPUT);   // only pir input
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(bzrdata, OUTPUT);
    pinMode(relay1Pin, OUTPUT);
    pinMode(relay2Pin, OUTPUT);
    pinMode(relay3Pin, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    PirVal = digitalRead(PirPin);
    Serial.print("PIR Value is : ");
    Serial.println(PirVal);
    delay(100);

    if (PirVal == 1)
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        digitalWrite(bzrdata, HIGH);
        digitalWrite(relay1Pin, HIGH);
        digitalWrite(relay2Pin, HIGH);
        digitalWrite(relay3Pin, HIGH);
    }

    else
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        digitalWrite(bzrdata, LOW);
        digitalWrite(relay1Pin, LOW);
        digitalWrite(relay2Pin, LOW);
        digitalWrite(relay3Pin, LOW);
    }
}