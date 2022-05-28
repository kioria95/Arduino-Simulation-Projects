int Motor = 9;
int button =10;

void setup() 
{
pinMode(Motor, OUTPUT);
pinMode(button, INPUT);
}

void loop() 
{

if(digitalRead(button)==HIGH)
{
  digitalWrite(Motor, HIGH);
}
else{
  digitalWrite(Motor, LOW);
}
}
