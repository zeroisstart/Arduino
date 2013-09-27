int ledPin = 13;
int usbnumber = 0;
void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if (Serial.available() > 0) {
        usbnumber = Serial.read();
        Serial.println("test");
    }
    if (usbnumber > 0) {
        if (usbnumber % 2 == 0){
            digitalWrite(ledPin, HIGH);
            delay(300);
            digitalWrite(ledPin, LOW);
            delay(300);
        }else{
            digitalWrite(ledPin, HIGH);
            delay(300);
            digitalWrite(ledPin, LOW);
            delay(300);
            digitalWrite(ledPin, HIGH);
            delay(300);
            digitalWrite(ledPin, LOW);
            delay(300);
        }
        usbnumber = 0;
    }
}
