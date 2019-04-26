int LED_ON = 7;
int LED_OFF = 12;

int sw = 2;

int sw2 = 5;

void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(sw, INPUT);
  pinMode(sw2, INPUT);
}

void loop() {
int sw_in = digitalRead(sw);
int sw_in2 = digitalRead(sw2);    

if(sw_in == HIGH) {
  int i = LED_ON;
  while(i <= LED_OFF) {
    digitalWrite(i, HIGH);
    delay(200);
    i++;
  }
}

if(sw_in2 == HIGH) {
  int i = LED_OFF;
  while(i >= LED_ON) {
    digitalWrite(i, LOW);
    delay(200);
    i--;
  }
}

}
