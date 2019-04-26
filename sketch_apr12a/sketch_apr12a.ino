int p = 5;
int sw = 3;

int led1 = 9;
int led2 = 10;
int led3 = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(p, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(sw, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

 if(digitalRead(sw) == LOW) {
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led3, HIGH);
  delay(1000);
  tone(p, 391, 200);
  delay(400);
  tone(p, 391, 200);
  delay(400);
  tone(p, 440, 200);
  delay(400);
  tone(p, 440, 200);
  delay(400);
  tone(p, 391, 200);
  delay(400);
  tone(p, 391, 200);
  delay(400);
  tone(p, 329, 400);
  delay(1000);
  tone(p, 391, 200);
  delay(400);
  tone(p, 391, 200);
  delay(400);
  tone(p, 329, 200);
  delay(400);
    tone(p, 329, 200);
  delay(400);
  tone(p, 294, 200);
  delay(400);
  tone(p, 391, 200);
  delay(400);
  tone(p, 391, 200);
  delay(400);
  tone(p, 440, 200);
  delay(400);
  tone(p, 440, 200);
  delay(400);
  tone(p, 391, 200);
  delay(400);
  tone(p, 391, 200);
  delay(400);
  tone(p, 329, 400);
  delay(1000);
    tone(p, 440, 200);
  delay(400);
  tone(p, 329, 400);
  delay(1000);
  digitalWrite(led3, LOW);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
 }
}
