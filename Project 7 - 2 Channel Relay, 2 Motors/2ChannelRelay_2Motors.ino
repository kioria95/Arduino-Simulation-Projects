int Btn = 8;
int Mtr1 = 9;
int Mtr2 = 10;

void setup() 
{
  pinMode(Btn, INPUT);
  pinMode(Mtr1, OUTPUT);
  pinMode(Mtr2, OUTPUT);
}

void loop() 
{
if(digitalRead(Btn) == HIGH )
{
  digitalWrite(Mtr1, HIGH);
  digitalWrite(Mtr2, HIGH );
}

else
{
  digitalWrite(Mtr1, LOW);
  digitalWrite(Mtr2, LOW);
}

}
