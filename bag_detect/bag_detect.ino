// Define the pin where the IR sensor is connected
int irSensorPin = 2;
// Variable to store the bag status
int bag = 0;

void setup() {
  // Start the serial communication to debug
  Serial.begin(9600);
  // Set the IR sensor pin as input
  pinMode(irSensorPin, INPUT);
}

void loop() {
  // Read the sensor value
  int sensorValue = digitalRead(irSensorPin);

  // Check if the sensor is blocked (assuming low means blocked)
  if (sensorValue == LOW) {
    // Bag is present
    bag = 1;
    // Print the status of bag
    Serial.print("Bag available");
    Serial.print(",");
    Serial.println(bag);
  } else {
    // Bag is not present
    bag = 0;
    // Print the status of bag
    Serial.print("Bag not available");
    Serial.print(",");
    Serial.println(bag);
  }


  // Delay a little bit to avoid too much serial output
  delay(500);
}
