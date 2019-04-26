int ledstart = 3;
int ledend = 8;

void setup() {
  // put your setup code here, to run once:
  for (int i = ledstart; i <= ledend; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = ledstart; i <= ledend - 3; i++) {
    digitalWrite(8-i, HIGH);
    digitalWrite(3+i, HIGH);
    delay(50);
    digitalWrite(8-i, LOW);
    digitalWrite(3+i, LOW);
    delay(1000);
  }
}
