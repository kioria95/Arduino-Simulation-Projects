int Btn = 3;

int Mtr1 = 4;
int Mtr2 = 5;
int Mtr3 = 6;
int Mtr4 = 7;
int Mtr5 = 8;
int Mtr6 = 9;
int Mtr7 = 10;
int Mtr8 = 11;

void setup() 
{
  pinMode(Btn, INPUT);
  pinMode(Mtr1, OUTPUT);
  pinMode(Mtr2, OUTPUT);
  pinMode(Mtr3, OUTPUT);
  pinMode(Mtr4, OUTPUT);
  pinMode(Mtr5, OUTPUT);
  pinMode(Mtr6, OUTPUT);
  pinMode(Mtr7, OUTPUT);
  pinMode(Mtr8, OUTPUT);
}

void loop() 
{
  if(digitalRead(Btn) == HIGH) 
  {
    digitalWrite(Mtr1, HIGH);
    digitalWrite(Mtr2, HIGH);
    digitalWrite(Mtr3, HIGH);
    digitalWrite(Mtr4, HIGH);
    digitalWrite(Mtr5, HIGH);
    digitalWrite(Mtr6, HIGH);
    digitalWrite(Mtr7, HIGH);
    digitalWrite(Mtr8, HIGH);
  }
  
  else
  {
    digitalWrite(Mtr1, LOW);
    digitalWrite(Mtr2, LOW);
    digitalWrite(Mtr3, LOW);
    digitalWrite(Mtr4, LOW);
    digitalWrite(Mtr5, LOW);
    digitalWrite(Mtr6, LOW);
    digitalWrite(Mtr7, LOW);
    digitalWrite(Mtr8, LOW);
  }
}
