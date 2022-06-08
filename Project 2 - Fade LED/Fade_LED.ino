int LED = 10;

void setup() 
{
    pinMode(LED, OUTPUT);
}

void loop() 
{
    for(int i = 0; i < 256; i+=20 )
    {
      analogWrite(LED, i);
      delay(30);
    }
    
    for(int j = 255; j > 1; j-=20)
    {
      analogWrite(LED, j);
      delay(30);
    }
}
