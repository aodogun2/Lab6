const int ledPin1 = 13;
const int ledPin2 = 12;

unsigned long prevMillis1 = 0;
unsigned long prevMillis2 = 0;

bool ledState1 = LOW;
bool ledState2 = LOW;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  if (millis() - prevMillis1 >= 1000) {
    prevMillis1 = millis();

    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }

    digitalWrite(ledPin1, ledState1);
  }

  if (millis() - prevMillis2 >= 2000) {
    prevMillis2 = millis();

    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }

    digitalWrite(ledPin2, ledState2);
  }
}