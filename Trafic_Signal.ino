byte R1 = 2;
byte Y1 = 3;
byte G1 = 4;

byte R2 = 5;
byte Y2 = 6;
byte G2 = 7;

byte R3 = 8;
byte Y3 = 9;
byte G3 = 10;

byte R4 = 11;
byte Y4 = 12;
byte G4 = 13;

int Lane_A[] = {R1, Y1, G1}; // Lane 1 Red, Yellow and Green   [0, 1, 2] respectively
int Lane_B[] = {R2, Y2, G2}; // Lane 2 Red, Yellow and Green
int Lane_C[] = {R3, Y3, G3}; // Lane 3 Red, Yellow and Green
int Lane_D[] = {R4, Y4, G4}; // Lane 4 Red, Yellow and Green

void setup()
{
  	for (int i = 0; i < 3; i++)
  	{
		pinMode(Lane_A[i], OUTPUT);
		pinMode(Lane_B[i], OUTPUT);   //pinMode
		pinMode(Lane_C[i], OUTPUT);
		pinMode(Lane_D[i], OUTPUT);
  	}
  	for (int i = 0; i < 3; i++)
  	{
		digitalWrite(Lane_A[i], LOW);
		digitalWrite(Lane_B[i], LOW);   //digitalWrite
		digitalWrite(Lane_C[i], LOW);
		digitalWrite(Lane_D[i], LOW);
  	}
}

void loop()
{ 	
	digitalWrite(Lane_A[0], LOW); //LaneA Red OFF     ...
    digitalWrite(Lane_A[2], HIGH);//LaneA Green ON    ....1 
    digitalWrite(Lane_C[0], HIGH);//LaneC Red ON
    digitalWrite(Lane_D[0], HIGH);//LaneD Red ON
    digitalWrite(Lane_B[0], HIGH);//LaneB Red ON
    delay(7000);

    digitalWrite(Lane_A[2], LOW); //LaneA Green OFF
    digitalWrite(Lane_A[1], HIGH);//LaneA Yellow ON
    delay(3000);

    digitalWrite(Lane_A[0], HIGH);//LaneA Red ON
    digitalWrite(Lane_A[1], LOW); //LaneA Yellow OFF
    digitalWrite(Lane_B[0], LOW); //LaneB Red OFF      ...
    digitalWrite(Lane_B[2], HIGH);//LaneB Green ON     ....2
    delay(7000);

    digitalWrite(Lane_B[2], LOW);  //LaneB Green OFF
    digitalWrite(Lane_B[1], HIGH); //LaneB Yellow ON
    delay(3000);

    digitalWrite(Lane_B[0], HIGH); //LaneB Red ON
    digitalWrite(Lane_B[1], LOW);  //LaneB Yellow OFF
    digitalWrite(Lane_C[0], LOW);  //LaneC Red OFF      ...
    digitalWrite(Lane_C[2], HIGH); //LaneC Green ON     ....3
    delay(7000);

    digitalWrite(Lane_C[2], LOW);  //LaneC Green OFF
    digitalWrite(Lane_C[1], HIGH); //LaneC Yellow ON
    delay(3000);

    digitalWrite(Lane_C[0], HIGH); //LaneC Red ON
    digitalWrite(Lane_C[1], LOW);  //LaneC Yellow OFF
    digitalWrite(Lane_D[0], LOW);  //LaneD Red OFF
    digitalWrite(Lane_D[2], HIGH); //LaneD Green ON     ....4
    delay(7000);

    digitalWrite(Lane_D[2], LOW);  //LaneD Green OFF
    digitalWrite(Lane_D[1], HIGH); //LaneD Yellow ON
    delay(3000);
    digitalWrite(Lane_D[1], LOW); //LaneD Yellow OFF
}