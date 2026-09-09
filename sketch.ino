// // const int LED_PIN = 26;

// // void setup_pins()
// // {
// //   pinMode(LED_PIN, OUTPUT);
// // }

// // void update_led()
// // {
// //   digitalWrite(LED_PIN, HIGH);
// //   delay(500);

// //   digitalWrite(LED_PIN, LOW);
// //   delay(500);
// // }

// // void setup()
// // {
// //   setup_pins();
// // }

// // void loop()
// // {
// //   update_led();
// // }


// // const int BUTTON_PIN = 25;
// // const int LED_PIN = 26;

// // void setup_pins()
// // {
// //   pinMode(BUTTON_PIN, INPUT_PULLDOWN);
// //   pinMode(LED_PIN, OUTPUT);
// // }

// // void read_sensor()
// // {
// //   if (digitalRead(BUTTON_PIN) == HIGH)
// //   {
// //     digitalWrite(LED_PIN, HIGH);
// //   }
// //   else
// //   {
// //     digitalWrite(LED_PIN, LOW);
// //   }
// // }

// // void setup()
// // {
// //   setup_pins();
// // }

// // void loop()
// // {
// //   read_sensor();
// // }

// const int SENSOR_PIN = 34;

// void setup_pins()
// {
//   pinMode(SENSOR_PIN, INPUT);
// }

// void read_sensor()
// {
//   int sensorValue = analogRead(SENSOR_PIN);
//   Serial.println(sensorValue);
// }

// void setup()
// {
//   Serial.begin(115200);
//   setup_pins();
// }

// void loop()
// {
//   read_sensor();
//   delay(500);
// }

const int BUTTON_PIN = 25;
const int LED_PIN = 26;
const int SENSOR_PIN = 34;

void setup_pins()
{
  pinMode(BUTTON_PIN, INPUT_PULLDOWN);
  pinMode(LED_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);
}

int read_sensor()
{
  return analogRead(SENSOR_PIN);
}

int get_blink_delay(int sensorValue)
{
  return map(sensorValue, 0, 4095, 1000, 100);
}

void update_led(int sensorValue, int buttonValue)
{
  int blinkDelay = get_blink_delay(sensorValue);

  if (buttonValue == HIGH)
  {
    digitalWrite(LED_PIN, HIGH);
    delay(blinkDelay);

    digitalWrite(LED_PIN, LOW);
    delay(blinkDelay);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
    delay(100);
  }
}

void print_status(int sensorValue, int buttonValue)
{
  Serial.print("{\"sensor\":");
  Serial.print(sensorValue);
  Serial.print(",\"button\":");
  Serial.print(buttonValue == HIGH ? "true" : "false");
  Serial.print(",\"blink_delay_ms\":");
  Serial.print(get_blink_delay(sensorValue));
  Serial.println("}");
}

void setup()
{
  Serial.begin(115200);
  setup_pins();
}

void loop()
{
  int sensorValue = read_sensor();
  int buttonValue = digitalRead(BUTTON_PIN);

  print_status(sensorValue, buttonValue);
  update_led(sensorValue, buttonValue);
}