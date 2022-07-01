int Mtr1_A = 3;
int Mtr1_B = 4;
int Speed1 = 5; 

int Mtr2_A = 6;
int Mtr2_B = 7;
int Speed2 = 9;

int Fwd = 10;
int Rev = 11;

void setup() 
{
  pinMode(Fwd, INPUT);
  pinMode(Rev, INPUT);
  
  pinMode(Mtr1_A,OUTPUT);
  pinMode(Mtr1_B,OUTPUT);
  pinMode(Speed1, OUTPUT);
  
  pinMode(Mtr2_A,OUTPUT);
  pinMode(Mtr2_B,OUTPUT);
  pinMode(Speed2, OUTPUT);
}

void loop() 
{
  
 analogWrite(Speed1, 200); 
 analogWrite(Speed2, 200);
  
  
if(digitalRead(Fwd) == HIGH && digitalRead(Rev) == LOW)
{
    digitalWrite(Mtr1_A, HIGH);
    digitalWrite(Mtr1_B, LOW);
    
    digitalWrite(Mtr2_A, HIGH);
    digitalWrite(Mtr2_B, LOW);
}
  
else if(digitalRead(Rev) == HIGH && digitalRead(Fwd) == LOW)
{
    digitalWrite(Mtr1_A, LOW);
    digitalWrite(Mtr1_B, HIGH);
    
    digitalWrite(Mtr2_A, LOW);
    digitalWrite(Mtr2_B, HIGH);
}
  
else if(digitalRead(Fwd) == LOW && digitalRead(Rev) == LOW || digitalRead(Fwd) == HIGH && digitalRead(Rev) == HIGH)
{
    digitalWrite(Mtr1_A,LOW);
    digitalWrite(Mtr1_B,LOW);
    
    digitalWrite(Mtr2_A,LOW);
    digitalWrite(Mtr2_B,LOW);
}
    
}
