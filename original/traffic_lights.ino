int RED = 12;
int YELLOW = 11;
int GREEN = 10;
int PUSH_BUTTON = 2;
int PUSH_BUTTON_STATE = 0;
int GREEN_WALK = 8;
int RED_WALK = 9;
int CLICKER = 7;

void setup() {

  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(GREEN_WALK, OUTPUT);
  pinMode(RED_WALK, OUTPUT);
  pinMode(CLICKER, OUTPUT);
  pinMode(PUSH_BUTTON, INPUT_PULLUP);
}

void loop() {
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED,LOW);
  digitalWrite(RED_WALK, HIGH);

PUSH_BUTTON_STATE = digitalRead(PUSH_BUTTON);

  if(PUSH_BUTTON_STATE==LOW)
  {
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, HIGH);
    delay(600);
    digitalWrite(YELLOW, LOW);
    delay(600);
    digitalWrite(YELLOW, HIGH);
    delay(600);
    digitalWrite(YELLOW, LOW);
    delay(600);
    digitalWrite(YELLOW, HIGH);
    delay(600);
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED, HIGH);
    digitalWrite(RED_WALK, LOW);
    digitalWrite(GREEN_WALK, HIGH);
    digitalWrite(CLICKER, HIGH);
    delay(5000);
    digitalWrite(RED_WALK, HIGH);
    digitalWrite(GREEN_WALK, LOW);
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, HIGH);
    delay(1000);
    digitalWrite(YELLOW, LOW);
    delay(800);
    digitalWrite(YELLOW, HIGH);
    delay(800);
    digitalWrite(YELLOW, LOW);
    delay(800);
    digitalWrite(YELLOW, HIGH);
    delay(800);
    digitalWrite(YELLOW, LOW);
  }
}
