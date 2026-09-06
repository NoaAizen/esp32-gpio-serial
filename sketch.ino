const int LED_PIN = 26;
const int BUTTON_PIN = 25;

// Previous button-based code kept for reference:
// const int BUTTON_PIN = 25;
// pinMode(BUTTON_PIN, INPUT_PULLDOWN);
// if (digitalRead(BUTTON_PIN) == HIGH) {
//   digitalWrite(LED_PIN, HIGH);
// } else {
//   digitalWrite(LED_PIN, LOW);
// }

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLDOWN);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, digitalRead(BUTTON_PIN) == HIGH ? HIGH : LOW);
}