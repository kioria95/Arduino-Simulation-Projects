int Btn = 5;
int Mtr1 = 6;
int Mtr2 = 7;
int Mtr3 = 8;
int Mtr4 = 9;

void setup() 
{
  pinMode(Btn, INPUT);
  pinMode(Mtr1, OUTPUT);
  pinMode(Mtr2, OUTPUT);
  pinMode(Mtr3, OUTPUT);
  pinMode(Mtr4, OUTPUT);
}

void loop() 
{
if(digitalRead(Btn) == HIGH)
{
  digitalWrite(Mtr1, HIGH);
  digitalWrite(Mtr2, HIGH);
  digitalWrite(Mtr3, HIGH);
  digitalWrite(Mtr4, HIGH);
}
else
{
  digitalWrite(Mtr1, LOW);
  digitalWrite(Mtr2, LOW);
  digitalWrite(Mtr3, LOW);
  digitalWrite(Mtr4, LOW);
}

}
