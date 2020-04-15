int led1 = A5;
int led2 = D7;  

int photoresistor = A0;
int analogValue;


void setup() {
    
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(photoresistor, INPUT);
  
}

void loop() {
    analogValue = analogRead(photoresistor);
    
    if (analogValue > 15) {
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
    } else {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
    }
}