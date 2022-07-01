#include <LiquidCrystal.h>
#include <Keypad.h>

const int rs = 0, en = 1, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

char keys[4][3] = 
{
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
    {'*','0','#'}
};

byte rowPins[4] = {6, 7, 8, 9}; 
byte colPins[3] = {10, 11 ,12}; 

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, 4, 3);

void setup() 
{ 
  lcd.begin(16, 2);
}

void loop() 
{
char key = keypad.getKey();

    if (key) 
    {
       lcd.print(key);
    }
}
