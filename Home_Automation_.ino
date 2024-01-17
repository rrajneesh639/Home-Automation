#include<LM35.h>
#include<LiquidCrystal_I2C.h>
#include<Wire.h>
const int out = 13;
const int pir = 10;
LM35 input_pin(A0);
LiquidCrystal_I2C lcd(0x20,16,4);
void setup() {
  lcd.begin(16,4);
  pinMode(out,OUTPUT);
  pinMode(pir,INPUT);
}
bool pir_value()
{
  return digitalRead(pir);
}
void loop() {
  int temp = input_pin.cel();
  if( pir_value() && temp >= 20)
  {
    digitalWrite(out,1);
    lcd.setCursor(0,0);
    lcd.print("Welcome :)       ");
  }
  else
  {
    digitalWrite(out,0);
    lcd.setCursor(0,0);
    lcd.print("Koi nahi h    ");
  }

}
