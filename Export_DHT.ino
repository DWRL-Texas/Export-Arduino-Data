/*
   The DHT sensor measures temperature and relative humidity.
  Expressed as a percentage, relative humidity is
  the amount of water vapor in the air divided by
  the saturation point (the amount of water the air can hold at a given temperature).
  Download the DHT sensor library and add it to the "libraries" folder before getting started.
*/


/* Pinout:
  DHT pin "S" connected to digital pin 7
  The middle pin on the DHT sensor is Vcc (+)
  The right pin on the DHT sensor is GND (-)
  Buzzer short leg to GND (-)
  Buzzer long leg to digital pin 12
*/

#include <dht.h>
dht DHT;

#define DHT11_PIN 7

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  Serial.print("Temp,Hum");
  Serial.println();

  lcd.init();
  lcd.backlight();

}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  if ((DHT.temperature * 9 / 5 + 32 ) > 0) {


    Serial.print(DHT.temperature * 9 / 5 + 32);
    Serial.print(",");
    Serial.print(DHT.humidity);
    Serial.println();

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(DHT.temperature * 9 / 5 + 32);
    lcd.print(" F");
    lcd.setCursor(0, 1);
    lcd.print("Humidity: ");
    lcd.print(DHT.humidity);
    lcd.print("%");
  }

  delay(1000);
}
