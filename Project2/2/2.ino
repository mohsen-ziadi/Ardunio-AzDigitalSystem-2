void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  if(digitalRead(2)==1){
    digitalWrite(8,HIGH);
  }else{
    digitalWrite(8,LOW);
  }
}
