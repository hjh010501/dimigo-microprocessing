int led1 = 3;
int led2 = 6;
int led3 = 7;
int led4 = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A1);

  if(a >= 75) {
    analogWrite(led1, 255);  
  } else {
    analogWrite(led1, 0);
  }

  if(a >= 150) {
    analogWrite(led2, 255);  
  } else {
    analogWrite(led2, 0);
  }

  if(a >= 225) {
    analogWrite(led3, 255);  
  } else {
    analogWrite(led3, 0);
  }

  if(a >= 300) {
    analogWrite(led4, 255);  
  } else {
    analogWrite(led4, 0);
  }
  Serial.println(a);
}
