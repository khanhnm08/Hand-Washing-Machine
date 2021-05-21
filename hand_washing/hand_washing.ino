const uint8_t pumpPin = 0;
const uint8_t interruptPin = 1;
const uint8_t potPin = 2;
int timeDelay = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pumpPin, OUTPUT);
  digitalWrite(pumpPin, LOW);
  pinMode(interruptPin, INPUT_PULLUP);
  pinMode(potPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, FALLING);
}

void loop() {
//   int a = analogRead(A1);
//   timeDelay = map(a,0,1023,100,2000);
//   Serial.println(timeDelay);
}

void blink() {
    digitalWrite(pumpPin, HIGH);
    delay(80);
    digitalWrite(pumpPin, LOW);
}
