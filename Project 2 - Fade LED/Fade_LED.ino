int LED = 10;

void setup() 
{
    
}

void loop() 
{
    for(int i = 0; i < 256; i+=20 )
    {
      analogWrite(LED, i);
      delay(30);
    }
    
    for(int i = 255; i > 1; i-=20)
    {
      analogWrite(LED, i);
      delay(30);
    }
}
