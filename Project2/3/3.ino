byte y=0;
void setup() {
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  if(digitalRead(2) ==1){
    y+=1;
    delay(300);
  }

  if(y==1){
    digitalWrite(8,HIGH);
  }
  if(y==2){
    digitalWrite(8,LOW);
    y=0;
  }

}
