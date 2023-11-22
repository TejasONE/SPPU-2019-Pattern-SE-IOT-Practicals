/*
Write  a  program  that  asks  the  user  for  a  number  and  outputs  the  number 
squared that is entered
*/

int ans;

void setup()
{
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop()
{
    // send data only when you receive data, otherwise it will give 0 0 0 0 till u give any number to square
    if (Serial.available() > 0)
    {
        // read the incoming byte:
        int var = Serial.readString().toInt(); //if not used it'll take asscai value

        // say what you got:
        Serial.print("Entered Number: ");
        Serial.println(var);
        ans = var*var;
        Serial.print("Sq of Number: ");  
        Serial.println(ans);
    }
}
/*The println("...") method prints the string "..." and moves the cursor to a new line. 
The print("...") method instead prints just the string "...", but does not move the cursor to a new line.*/