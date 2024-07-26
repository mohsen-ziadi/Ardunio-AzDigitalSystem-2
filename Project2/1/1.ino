void setup() {
  pinMode(2,INPUT);
  pinMode(5,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  if(digitalRead(2)==1){
    digitalWrite(8,HIGH);
  }
  
  if(digitalRead(5)==0){
    digitalWrite(8,LOW);
  }

}
