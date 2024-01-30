#include <Adafruit_LiquidCrystal.h>
int contador = 0;
int potentiometre = A3;
float degree = 0;
float divider = 3.7778;

Adafruit_LiquidCrystal lcd(0);

void setup()
{
  lcd.begin(16, 2);
  pinMode(potentiometre,INPUT);
}
void loop()
{
  degree = analogRead(potentiometre)/divider;
  degree = degree-135;
  lcd.setCursor(0, 0);

  lcd.print("Incidence");
  lcd.setCursor(0, 1);
 lcd.print(degree);
  lcd.setCursor(0, 1);
lcd.clear();
}
