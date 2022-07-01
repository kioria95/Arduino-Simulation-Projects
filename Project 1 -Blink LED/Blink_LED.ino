
//Blink Project
int LED = 8; //Declare LED as an output at pin 8 of the Arduino

void setup() 
{
  pinMode(LED, OUTPUT);

}

void loop() {
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(1000);
}
