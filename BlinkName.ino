int led = D7;

void setup() {

  pinMode(led, OUTPUT);

}


void loop() {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(200);
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(200);
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(1000);
}

