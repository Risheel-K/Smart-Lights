#include <SoftwareSerial.h>

int pwmPin = 2;
int pot = A0;
int c1 = 0;
int c2 = 0;

char command = ' ';
bool start = false;

void setup() {
  pinMode(pwmPin, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);

  Serial.println("Bluetooth LED and PWM Control");
  Serial.println("Send 'ON' to control LED brightness");
  Serial.println("Send 'OFF' to terminate the program");
}

void loop() {

  if (Serial.available()) {
    command = Serial.read();
    
    if (command == 'ON') {
      start = true;
      Serial.println("System started");
    }
    else if (command == 'OFF') {
      start = false;
      Serial.println("System terminated");
    }
  }

  if(start) {
    int value = analogRead(pot);
    Serial.print("LDR=");
    Serial.println(value);
    c1 = value;  
    c2 = 500 - c1;
    
    if (value < 500) {
      digitalWrite(pwmPin, HIGH);
      delayMicroseconds(c2);
      digitalWrite(pwmPin, LOW);
      delayMicroseconds(c1);
    }
  
    if (value >= 500) {
      digitalWrite(pwmPin, LOW);
    }
  }
}

