#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int flame_sensor_pin = 8;
int flame_pin= HIGH ;

void setup() {
  pinMode ( flame_sensor_pin , INPUT );
  Serial.begin (9600);
  lcd.begin(16,1);
}
void loop() {
  {
    lcd.setCursor(0, 1);
  }
  flame_pin = digitalRead ( flame_sensor_pin ) ;
  if (flame_pin == LOW )
  {
    lcd.print("alev VAR ");
    delay(400);
  }
  else
  {
    lcd.print("alev YOK ");
    delay(400);
  }
}
