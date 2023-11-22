/*
Create a program so that when the user enters "b" the green light blinks, "g" 
the green light is illuminated "y" the yellow light is illuminated and "r" the red light is illuminated. 
*/

void setup() 
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);  //The pinMode() function is used to configure a specific pin 
    pinMode(12,OUTPUT);  // to behave either as an input or an output.
}

void loop() 
{
    // put your main code here, to run repeatedly:
    
    int ch = Serial.read(); //read out the first available byte from the serial receive buffer.

    if(ch==114 or ch==82) 
    {
        digitalWrite(10,0);
    } 
    else if(ch==103 or ch==71)      //32 is difference betn two ASSCI values
    {
        digitalWrite(11,0);
    } 
    else if(ch==98 or ch==66) 
    {
        digitalWrite(12,0);
    } 
    else 
    {
        digitalWrite(10,1);
        digitalWrite(11,1);
        digitalWrite(12,1); 
    }
}
