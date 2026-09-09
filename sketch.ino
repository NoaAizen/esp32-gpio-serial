// const int LED_PIN = 26;

// void setup_pins()
// {
//   pinMode(LED_PIN, OUTPUT);
// }

// void update_led()
// {
//   digitalWrite(LED_PIN, HIGH);
//   delay(500);

//   digitalWrite(LED_PIN, LOW);
//   delay(500);
// }

// void setup()
// {
//   setup_pins();
// }

// void loop()
// {
//   update_led();
// }


const int BUTTON_PIN = 25;
const int LED_PIN = 26;

void setup_pins()
{
  pinMode(BUTTON_PIN, INPUT_PULLDOWN);
  pinMode(LED_PIN, OUTPUT);
}

void read_sensor()
{
  if (digitalRead(BUTTON_PIN) == HIGH)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }
}

void setup()
{
  setup_pins();
}

void loop()
{
  read_sensor();
}