#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_SDA 21
#define OLED_SCL 22
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() 
{Serial.begin(115200);
  Wire.begin(OLED_SDA, OLED_SCL);
  if(!display.begin (SSD1306_SWITCHCAPVCC, 0x3c))
  {
    Serial.println("Display initiation failed");
    while(true);
  }
display.clearDisplay();          // wipe any old graphics
display.setTextSize(2);          // choose a text size
display.setTextColor(SSD1306_WHITE);
display.setCursor(0, 0);         // pick where on the screen to start
display.println("TEST TEST");
display.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
