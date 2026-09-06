// const int LED_PIN = 26;

// // void setup() {
// //   pinMode(LED_PIN, OUTPUT);
// // }

// // void loop() {
// //   digitalWrite(LED_PIN, HIGH);
// //   delay(500);

// //   digitalWrite(LED_PIN, LOW);
// //   delay(500);
// // }



// const int BUTTON_PIN = 25;
// const int LED_PIN = 26;

// void setup() {
//   pinMode(BUTTON_PIN, INPUT_PULLDOWN);
//   pinMode(LED_PIN, OUTPUT);
// }

// void loop() {
//   if (digitalRead(BUTTON_PIN) == HIGH) {
//     digitalWrite(LED_PIN, HIGH);
//   } else {
//     digitalWrite(LED_PIN, LOW);
//   }
// }


const int SENSOR_PIN = 34;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);

  Serial.println(sensorValue);

  delay(500);
}