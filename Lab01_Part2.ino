int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for(int i=0;i<3;i++) {
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(100);
  }
  for(int j=0;j<3;j++) {
    digitalWrite(led, HIGH);
     delay(300);
    digitalWrite(led, LOW);
    delay(100);
  }
  for(int k=0;k<3;k++) {
    digitalWrite(led, HIGH);
    delay(100);
  }
}
