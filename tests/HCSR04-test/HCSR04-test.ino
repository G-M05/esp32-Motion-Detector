// Basic HC‑SR04 Test Sketch for ESP32

const int trigPin = 26;
const int echoPin = 27;

void setup() 
{
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT); // sends signal to trigger pin
  pinMode(echoPin, INPUT); // recieves signal from echo pin 
}

void loop() 
{
  
  digitalWrite(trigPin, LOW);   //sensor starts off
  delayMicroseconds(2);         
  digitalWrite(trigPin, HIGH);  // turns sensor on
  delayMicroseconds(10);        // keeps sensor on for 10 microseconds
  digitalWrite(trigPin, LOW);   // turns it back off

  
  long duration = pulseIn(echoPin, HIGH); // measures how long it takes for the pulse to return 

  
  long distance = duration * 0.034 / 2; // Calculates distance in cm ÷ by 2 because sound travels there and back 

 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(200);
}
