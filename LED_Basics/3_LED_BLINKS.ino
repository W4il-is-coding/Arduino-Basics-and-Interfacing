void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
}
void blink(int pin){
  for(int i=0;i<10;i++){
    digitalWrite(pin,HIGH);
    delay(100);     
    digitalWrite(pin,LOW);
    delay(100);
  }
}
void loop() {
  blink(8);
  blink(7);
  blink(4);                
}
