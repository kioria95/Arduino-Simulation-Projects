int Fwd = 8;
int Rev = 9;
int Mtr1_A = 10;
int Mtr1_B = 11;

void setup() 
{
 pinMode(Fwd, INPUT);
 pinMode(Rev, INPUT);
 pinMode(Mtr1_A, OUTPUT);
 pinMode(Mtr1_B, OUTPUT);
}

void loop()
{
  if(digitalRead(Fwd) == HIGH && digitalRead(Rev) == LOW)
  {
    digitalWrite(Mtr1_A, HIGH);
    digitalWrite(Mtr1_B,LOW);
  }
  else if(digitalRead(Rev) == HIGH && digitalRead(Fwd) == LOW)
  {
    digitalWrite(Mtr1_A, LOW);
    digitalWrite(Mtr1_B, HIGH);
  }
  else if(digitalRead(Fwd) == LOW && digitalRead(Rev) == LOW || digitalRead(Fwd) == HIGH && digitalRead(Rev) == HIGH )
  {
    digitalWrite(Mtr1_A, LOW);
    digitalWrite(Mtr1_B, LOW);
  }
}
