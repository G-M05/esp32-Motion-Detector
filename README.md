esp32-Motion-Detector
ESP32 based ultrasonic motion detector with OLED visual and buzzer alerts. Built as a learning project to explore IoT sensors and real-time data visualization.

STATUS: In development

Features
- Ultrasonic distance: HC‑SR04 measures range up to 400 cm  
- Device scanning: Servo motor sweeps sensor through 180°  
- OLED dashboard: SSD1306 OLED Display shows live distance, angle, and alerts  
- Buzzer alerts: Continuous tone when an object is detected within threshold
- Data logging: Records timestamp, distance, and servo angle to an SD card in CSV format


Hardware Setup
 Component         ESP32 Pin            Notes                            

 HC‑SR04 Trig      GPIO 26D                                                   
 HC‑SR04 Echo      GPIO 27D          
 Servo signal      GPIO 14D         5 V & GND from common rail                
 SSD1306 SDA       GPIO 21D                                                   
 SSD1306 SCL       GPIO 22D                                                 
 Buzzer (+/−)      GPIO 25D / GND                              

Quick Start
1.Install Arduino IDE with ESP32 board support
2.Add libraries: Adafruit SSD1306, Adafruit GFX, NewPing, ESP32Servo
3.Upload main.ino to your ESP32
4.Wire components according to pin table above
