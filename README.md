
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
 OLED SDA       GPIO 21D                                                   
 OLDE SCL       GPIO 22D                                                 
 Buzzer (+/−)      GPIO 25D / GND                              

