#define R_LED 4
#define Y_LED 3
#define B_LED 2

void setup() {
  // put your setup code here, to run once:
  pinMode(R_LED, OUTPUT);
  pinMode(Y_LED, OUTPUT);
  pinMode(B_LED, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(Y_LED, LOW);digitalWrite(R_LED, HIGH);
  delay(1000);
  digitalWrite(R_LED, LOW);digitalWrite(B_LED, HIGH);
  delay(1000);
  digitalWrite(B_LED, LOW);digitalWrite(Y_LED, HIGH);
}
