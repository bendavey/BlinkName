#include <string>

int led = D7;
String name = "BEN";

void setup() {

  pinMode(led, OUTPUT);

}


void loop() {
    blinkString(name);
}

void blinkString(String name) {
    for (int i = 0; i < name.length(); i++) {
        switch(name[i]) {
            case 'A':
                shortBlink(led);
                longBlink(led);
                break;
            case 'B':
                longBlink(led);
                shortBlink(led);
                shortBlink(led);
                shortBlink(led);
                break;
            case 'C':
                longBlink(led);
                shortBlink(led);
                longBlink(led);
                shortBlink(led);
                break;
            case 'D':
                longBlink(led);
                shortBlink(led);
                shortBlink(led);
                break;
            case 'E':
                shortBlink(led);
                break;
            case 'F':
                shortBlink(led);
                shortBlink(led);
                longBlink(led);
                shortBlink(led);
                break;
            case 'G':
                longBlink(led);
                longBlink(led);
                shortBlink(led);
                break;
            case 'H':
                shortBlink(led);
                shortBlink(led);
                shortBlink(led);
                shortBlink(led);
                break;
            case 'I':
                shortBlink(led);
                shortBlink(led);
                break;
            case 'J':
                shortBlink(led);
                longBlink(led);
                longBlink(led);
                longBlink(led);
                break;
            case 'K':
                longBlink(led);
                shortBlink(led);
                longBlink(led);
                break;
            case 'L':
                shortBlink(led);
                longBlink(led);
                shortBlink(led);
                shortBlink(led);
                break;
            case 'M':
                longBlink(led);
                longBlink(led);
                break;
            case 'N':
                longBlink(led);
                shortBlink(led);
                break;
            case 'O':
                longBlink(led);
                longBlink(led);
                longBlink(led);
                break;
            case 'P':
                shortBlink(led);
                longBlink(led);
                longBlink(led);
                shortBlink(led);
                break;
            case 'Q':
                longBlink(led);
                longBlink(led);
                shortBlink(led);
                longBlink(led);
                break;
            case 'R':
                shortBlink(led);
                longBlink(led);
                shortBlink(led);
                break;
            case 'S':
                shortBlink(led);
                shortBlink(led);
                shortBlink(led);
                break;
            case 'T':
                longBlink(led);
                break;
            case 'U':
                shortBlink(led);
                shortBlink(led);
                longBlink(led);
                break;
            case 'V':
                shortBlink(led);
                shortBlink(led);
                shortBlink(led);
                longBlink(led);
                break;
            case 'W':
                shortBlink(led);
                longBlink(led);
                longBlink(led);
                break;
            case 'X':
                longBlink(led);
                shortBlink(led);
                shortBlink(led);
                longBlink(led);
                break;
            case 'Y':
                longBlink(led);
                shortBlink(led);
                longBlink(led);
                longBlink(led);
                break;
            case 'Z':
                longBlink(led);
                longBlink(led);
                shortBlink(led);
                shortBlink(led);
                break;
            default:
                break;
        }
        pauseBlink(led);
    }
}

void longBlink(int led) {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(100);
}

void shortBlink(int led) {
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(100);
}

void pauseBlink(int led) {
    digitalWrite(led, LOW);
    delay(950);
}