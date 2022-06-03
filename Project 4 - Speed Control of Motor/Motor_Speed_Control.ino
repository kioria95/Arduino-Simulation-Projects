int POT = A0;
int MTR = 9;
int A_Readings,results;


void setup() 
{
pinMode(MTR, OUTPUT);
}

void loop()
{
  A_Readings = analogRead(A0);

  results = map(A_Readings,0,1024,0,255);

  analogWrite(MTR,results);

}
