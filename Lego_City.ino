#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 oled_1(128,64, &Wire,-1);

void setup()
{
    oled_1.begin(SSD1306_SWITCHCAPVCC,0x3C);

}


void loop()
{

    oled_1.clearDisplay(); oled_1.display();
    oled_1.drawRect(0,0,128,64,WHITE); oled_1.display();
    oled_1.setTextSize(2); oled_1.setTextColor(WHITE); oled_1.setCursor(7,7); oled_1.print(String("WELCOME TO CHESTNUT   VALLEY")); oled_1.display();
    delay(2000);
    oled_1.clearDisplay(); oled_1.display();
    oled_1.drawRect(0,0,128,64,WHITE); oled_1.display();
    oled_1.setTextSize(2); oled_1.setTextColor(WHITE); oled_1.setCursor(7,7); oled_1.print(String("ENJOY YOUR   STAY!")); oled_1.display();
    delay(2000);
    oled_1.clearDisplay(); oled_1.display();
    oled_1.drawRect(0,0,128,64,WHITE); oled_1.display();
    oled_1.setTextSize(2); oled_1.setTextColor(WHITE); oled_1.setCursor(7,7); oled_1.print(String("SATURDAY   4/4/2020  2:14 pm")); oled_1.display();
    delay(2000);
}
  
