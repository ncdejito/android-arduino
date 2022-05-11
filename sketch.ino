const int ledPin = 3;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); //initialize the LED pin as an output
}
void loop() {
  char c;
  if (Serial.available()) {
    c = Serial.read();
    if (c == '1') {
      digitalWrite(ledPin, HIGH); //turn LED on  
    }
    if (c == '0') {
      digitalWrite(ledPin, LOW); //turn LED off  
    }
  }
}