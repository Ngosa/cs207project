
// include the library code:
#include <LiquidCrystal.h>
 #include <SimpleDHT.h>
#include <SPI.h>
// initialize the library with the number of the sspin
//(or the latch pin of the 74HC595)
LiquidCrystal lcd(4);
 int pinDHT11 = 0;
SimpleDHT11 dht11;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(20, 4);
  // Print a message to the LCD.
  lcd.print("Temp    Humidity");
}
 
void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis()/1000);
  
  byte temperature = 0;
  byte humidity = 0;
  byte data[40] = {0};
if (dht11.read(pinDHT11, &temperature, &humidity, data)) {
    Serial.print("Read DHT11 failed");
    return;
  }
  lcd.print(" ");
  lcd.print((int)temperature); lcd.print(" *C, ");
  lcd.print((int)humidity); lcd.println(" %   ");
  
}
