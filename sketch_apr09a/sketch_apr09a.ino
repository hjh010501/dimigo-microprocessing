#define RED_LED 13
#define GREEN_LED 12
#define BLUE_LED 11

#define RED_BTN 5
#define GREEN_BTN 4
#define BLUE_BTN 3


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(RED_BTN, INPUT_PULLUP);
  pinMode(GREEN_BTN, INPUT_PULLUP);
  pinMode(BLUE_BTN, INPUT_PULLUP);
}

void loop() {
  int r = 0;
  int g = 0;
  int b = 0;
  
  // put your main code here, to run repeatedly:
  if(digitalRead(RED_BTN) == HIGH) {
    ++r;
    if(r>=255) {
      r=0;  
    }
  }

  if(digitalRead(GREEN_BTN) == HIGH) {
    g++;
    if(g>=255) {
      g=0;  
    }
  }

  if(digitalRead(BLUE_BTN) == HIGH) {
    b++;
    if(b>=255) {
      b=0;  
    }
  }

  digitalWrite(RED_LED, r);
  digitalWrite(GREEN_LED, g);
  digitalWrite(BLUE_LED, b);

  Serial.println("r: ");
  Serial.println(r);
  Serial.println("g: ");
  Serial.println(g);
  Serial.println("b: ");
  Serial.println(b);
}
