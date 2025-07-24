
ESP32 based ultrasonic motion detector with OLED visual and buzzer alerts. Built as a learning project to explore IoT sensors and real-time data visualization.

##STATUS##: In development

##Features##
- Ultrasonic distance: HC‑SR04 measures range up to 400 cm  
- Device scanning: Servo motor sweeps sensor through 180°  
- OLED dashboard: SSD1306 OLED Display shows live distance, angle, and alerts  
- Buzzer alerts: Continuous tone when an object is detected within threshold
- Data logging: Records timestamp, distance, and servo angle to an SD card in CSV format


## Hardware Setup##

| Component        | ESP32 Pin      | Notes                                     |
|------------------|----------------|-------------------------------------------|
| HC‑SR04 Trig     | GPIO 26        |                                           |
| HC‑SR04 Echo     | GPIO 27        | (use level‑divider if powered at 5 V)     |
| Servo signal     | GPIO 14        | 5 V & GND from common rail                |
| Buzzer (+/–)     | GPIO 25 / GND  | Active buzzer                            |
| SSD1306 SDA      | GPIO 21        |                                           |
| SSD1306 SCL      | GPIO 22        |                                           |
| SD‑card CS       | GPIO 5         | SPI chip select                           |
| SD‑card MOSI     | GPIO 23        |                                           |
| SD‑card MISO     | GPIO 19        |                                           |
| SD‑card SCK      | GPIO 18        |                                           |
| SD‑card VCC      | 3.3 V          | **Must** be 3.3 V, not 5 V               |
| SD‑card GND      | GND            | Common ground with ESP32 and sensors      |

 

