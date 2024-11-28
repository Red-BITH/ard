//ses sensor Arduiono
int buzzer_Pin = 6;
int echo_Pin = 7;
int trig_Pin = 8;
int duration;
int distance;
void setup() {
    pinMode(echo_Pin, INPUT);
    pinMode(trig_Pin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(trig_Pin, LOW);
    delayMicroseconds(2);
    digitalWrite(trig_Pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_Pin, LOW);
    duration = pulseIn(echo_Pin, HIGH);
    distance = duration * 0.034 / 2;
    
    if ( distance <= 10 )
    {
     Serial.print("\nManeə aşkarlandı:");
     Serial.print(distance);
     Serial.print(" sm");
     tone(buzzer_Pin, 3000, 200);
    }
    delay(500);
}
