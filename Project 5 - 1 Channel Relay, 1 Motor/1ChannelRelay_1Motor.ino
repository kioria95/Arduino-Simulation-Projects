
//The relay will be connected at pin 8 of the Arduino

int relay = 8;
int btn = 9;

void setup() 
{
  pinMode(relay,OUTPUT);
  pinMode(btn, INPUT);
}

void loop() 
{
  if(digitalRead(btn)== HIGH)
  {
    digitalWrite(relay,HIGH);
  }
  else
  {
    digitalWrite(relay, LOW);
  }
    
}
