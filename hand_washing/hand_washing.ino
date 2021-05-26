const uint8_t pumpPin = 0;
const uint8_t interruptPin = 1;
const uint8_t potPin = 2;
unsigned long previousMillis = 0;
unsigned long currentMillis = 0;
volatile uint8_t state = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(pumpPin, OUTPUT);
  digitalWrite(pumpPin, LOW);
  pinMode(interruptPin, INPUT_PULLUP);
  pinMode(potPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, FALLING);
}

void loop() {
    //digitalWrite(pumpPin, state);
}

void blink()
{

    digitalWrite(pumpPin, HIGH);
    delay(800);
    digitalWrite(pumpPin, LOW);
}
