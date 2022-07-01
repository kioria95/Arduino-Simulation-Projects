int Fwd = 5;
int Rev = 6;
int Mtr1_A = 7; 
int Mtr1_B = 8;
int Mtr2_A = 9;
int Mtr2_B = 10;

void setup()
{
  pinMode(Fwd, INPUT);
  pinMode(Rev, INPUT);
  pinMode(Mtr1_A, OUTPUT); 
  pinMode(Mtr1_B, OUTPUT); 
  pinMode(Mtr2_A, OUTPUT); 
  pinMode(Mtr2_B, OUTPUT); 
}

void loop()
{
  if (digitalRead(Fwd) == HIGH && digitalRead(Rev) == LOW)
  {
    digitalWrite(Mtr1_A, HIGH);
    digitalWrite(Mtr1_B, LOW);
    digitalWrite(Mtr2_A, HIGH);
    digitalWrite(Mtr2_B, LOW);
  }

  else if (digitalRead(Rev) == HIGH && digitalRead(Fwd) == LOW)
  {
    digitalWrite(Mtr1_A, LOW);
    digitalWrite(Mtr1_B, HIGH);
    digitalWrite(Mtr2_A, LOW);
    digitalWrite(Mtr2_B, HIGH);
  }

  else if (digitalRead(Fwd) == LOW && digitalRead(Rev) == LOW)
  {
    digitalWrite(Mtr1_A, LOW);
    digitalWrite(Mtr1_B, LOW);
    digitalWrite(Mtr2_A, LOW);
    digitalWrite(Mtr2_B, LOW);
  }
}
