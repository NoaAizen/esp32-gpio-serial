const int BUTTON_PIN = 25;
const int LED_PIN = 26;

void setup_pins() {
  pinMode(BUTTON_PIN, INPUT_PULLDOWN);
  pinMode(LED_PIN, OUTPUT);
}

void update_led(bool isButtonPressed) {
  digitalWrite(LED_PIN, isButtonPressed ? HIGH : LOW);
}

void setup() {
  setup_pins();
  Serial.begin(115200);
}

void loop() {
  bool isButtonPressed = digitalRead(BUTTON_PIN) == HIGH;
  update_led(isButtonPressed);
}