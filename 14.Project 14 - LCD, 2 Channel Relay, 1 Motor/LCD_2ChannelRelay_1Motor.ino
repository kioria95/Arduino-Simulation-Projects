#include <LiquidCrystal.h>
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
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
    lcd.begin(16,2);
    lcd.print("Hello Ken");
    delay(1000);
    lcd.clear();
}

void loop() 
{
   if(digitalRead(Fwd) == HIGH && digitalRead(Rev) == LOW)
   {
     digitalWrite(Mtr1_A, HIGH);
     digitalWrite(Mtr1_B,LOW);
     lcd.setCursor(0,0);
     lcd.print("C-wise Direction");
   } 
   
   else if(digitalRead(Rev)==HIGH && digitalRead(Fwd) ==LOW)
   {
     digitalWrite(Mtr1_A, LOW);
     digitalWrite(Mtr1_B, HIGH);
     lcd.setCursor(0,0);
     lcd.print("A-wise Direction");
   }
   
   else if(digitalRead(Rev)==LOW && digitalRead(Fwd) == LOW || digitalRead(Rev) ==HIGH && digitalRead(Fwd) == HIGH)
   {
     digitalWrite(Mtr1_A, LOW);
     digitalWrite(Mtr1_B, LOW);
     lcd.setCursor(0,0);
     lcd.print("Motor Stop      ");
   }
}
