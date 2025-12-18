void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  analogWrite(9, 50); 
  delay(1000);                     
  analogWrite(9, 100);   
  delay(1000);    
  analogWrite(9, 150);   
  delay(1000);  
  analogWrite(9, 200);   
  delay(1000);  
  analogWrite(9, 250);   
  delay(1000);               
}
