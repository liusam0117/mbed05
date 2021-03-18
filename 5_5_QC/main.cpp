#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7); // RS, E, DB4-DB7

int main()
{
      lcd.printf("108060004\n");
      int x = 30 ;
      while(x != -1)
      {
            lcd.locate(3,1);
            lcd.printf("%5i",x);    //counter display
            ThisThread::sleep_for(1s);
            x--;
      }
}