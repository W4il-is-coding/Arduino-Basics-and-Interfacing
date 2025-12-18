#define IRPin 8
int IRstate;

void setup() {
  pinMode(IRPin,INPUT);

  Serial.begin(9600);
}

void loop() {
  IRstate=digitalRead(IRPin);
  if (IRstate == LOW){
    Serial.println("Object Detected");
  }
  else{
    Serial.println("Object not Detected");
  }
  delay(1000);  
}
