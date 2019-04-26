int trg = 5;
int ech = 6;
int led = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trg, OUTPUT);
  pinMode(ech, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   digitalWrite(trg, LOW);
    digitalWrite(ech, LOW);
    delayMicroseconds(2);
    digitalWrite(trg, HIGH);
    delayMicroseconds(10);
    digitalWrite(trg, LOW);

  
  // echoPin 이 HIGH를 유지한 시간을 저장 한다.
    unsigned long duration = pulseIn(ech, HIGH); 
  // HIGH 였을 때 시간(초음파가 보냈다가 다시 들어온 시간)을 가지고 거리를 계산 한다.
  float distance = ((float)(340 * duration) / 10000) / 2;  
  
  Serial.print(distance);
  Serial.println("cm");
  // 수정한 값을 출력
  delay(500);

  if(distance <= 10) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
