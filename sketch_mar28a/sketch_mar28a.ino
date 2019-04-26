int cds = A1;
int led = 9;
int led2 = 8;

void setup() {
//  // put your setup code here, to run once:
  Serial.begin(9600);
//  pinMode(led, OUTPUT);
}

void loop() {
//  // put your main code here, to run repeatedly:
//  int cdsValue = analogRead(cds);
//  Serial.println(cdsValue);
//  int ledLight = map(cdsValue, 0, 1023, 255,0);
//  analogWrite(led, ledLight);
//  delay(200);
  
  int value = analogRead(A1);
  value = map(value, 0, 1023, 0, 2048);
  Serial.println(value);
  analogWrite(9, value);
}
