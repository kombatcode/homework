// Anton Sorokin 8A

#define GREEN 0
#define YELLOW 1
#define RED 2

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(GREEN, HIGH);
  delay(1000);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
  delay(500);

}

void loop() {
  digitalWrite(RED, HIGH);
  delay(5000);
  digitalWrite(YELLOW, HIGH);
  delay(1350);

  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);

  digitalWrite(GREEN, HIGH);
  delay(5000);

  digitalWrite(GREEN, LOW);
  delay(500);

  digitalWrite(GREEN, HIGH);
  delay(500);

  digitalWrite(GREEN, LOW);
  delay(500);

  digitalWrite(GREEN, HIGH);
  delay(500);

  digitalWrite(GREEN, LOW);
  delay(500);

  digitalWrite(GREEN, HIGH);
  delay(500);

  digitalWrite(GREEN, LOW);

  digitalWrite(YELLOW, HIGH);
  delay(1350);
  digitalWrite(YELLOW, LOW);

}
