// Motor Driver
#define IN1 9  // Motor A forward
#define IN2 6  // Motor A backward
#define IN3 5  // Motor B forward
#define IN4 3  // Motor B backward

void setup() {

  // Initialize Motor Driver
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // ==== Motor Driver ====
  // Move motor forward
  digitalWrite(IN1, 170); // Forward direction Motor A
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 170); // Forward direction Motor B
  digitalWrite(IN4, 0);
  Serial.println("Moving Forward.");
  delay(3000); // Run for 3 seconds

  // Stop motor
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  Serial.println("Stopping");
  delay(1000); // Stop for 1 second

  // Move motor backward
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 170); // Backward direction Motor A
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 170); // Backward direction Motor B
  Serial.println("Moving Backward.");
  delay(3000); // Run for 3 seconds

  // Stop motor
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  Serial.println("Stopping");
  delay(1000); // Stop for 1 second
}