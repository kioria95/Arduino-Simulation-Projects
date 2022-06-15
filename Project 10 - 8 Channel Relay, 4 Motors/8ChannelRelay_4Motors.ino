int Fwd = 2;
int Rev = 3;

//Motor 1
int Mtr1_A = 4; 
int Mtr1_B = 5;

//Motor 2
int Mtr2_A = 6;
int Mtr2_B = 7;

//Motor 3
int Mtr3_A = 8; 
int Mtr3_B = 9;

//Motor 4
int Mtr4_A = 10;
int Mtr4_B = 11;

void setup()
{
  pinMode(Fwd, INPUT);
  pinMode(Rev, INPUT);
  pinMode(Mtr1_A, OUTPUT); //Relay 1
  pinMode(Mtr1_B, OUTPUT); //Relay 2
  pinMode(Mtr2_A, OUTPUT); //Relay 3
  pinMode(Mtr2_B, OUTPUT); //Relay 4
  pinMode(Mtr3_A, OUTPUT); //Relay 5
  pinMode(Mtr3_B, OUTPUT); //Relay 6
  pinMode(Mtr4_A, OUTPUT); //Relay 7
  pinMode(Mtr4_B, OUTPUT); //Relay 8
}

void loop()
{
  if (digitalRead(Fwd) == HIGH && digitalRead(Rev) == LOW)
  {
    digitalWrite(Mtr1_A, HIGH);
    digitalWrite(Mtr1_B, LOW);
    
    digitalWrite(Mtr2_A, HIGH);
    digitalWrite(Mtr2_B, LOW);
    
    digitalWrite(Mtr3_A, HIGH);
    digitalWrite(Mtr3_B, LOW);
    
    digitalWrite(Mtr4_A, HIGH);
    digitalWrite(Mtr4_B, LOW);
  }

  else if (digitalRead(Rev) == HIGH && digitalRead(Fwd) == LOW)
  {
    digitalWrite(Mtr1_A, LOW);
    digitalWrite(Mtr1_B, HIGH);
    
    digitalWrite(Mtr2_A, LOW);
    digitalWrite(Mtr2_B, HIGH);
    
    digitalWrite(Mtr3_A, LOW);
    digitalWrite(Mtr3_B, HIGH);
    
    digitalWrite(Mtr4_A, LOW);
    digitalWrite(Mtr4_B, HIGH);
  }

  else if (digitalRead(Fwd) == LOW && digitalRead(Rev) == LOW)
  {
    digitalWrite(Mtr1_A, LOW);
    digitalWrite(Mtr1_B, LOW);
    
    digitalWrite(Mtr2_A, LOW);
    digitalWrite(Mtr2_B, LOW);
    
    digitalWrite(Mtr3_A, LOW);
    digitalWrite(Mtr3_B, LOW);
    digitalWrite(Mtr4_A, LOW);
    digitalWrite(Mtr4_B, LOW);
  }
}
