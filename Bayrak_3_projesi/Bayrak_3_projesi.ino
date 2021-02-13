void setup() {
  Serial.begin(9600);
    pinMode(0, INPUT);
for(byte a=2;a<14;a++){
  pinMode(a, OUTPUT);

  }
  digitalWrite(5,HIGH);

}

void loop() {
  digitalWrite(14,HIGH);
  delay(analogRead(A0));
  for(byte a=1;a<13;a++){
       digitalWrite(14+a, HIGH);
       digitalWrite(14-a, HIGH);
       delay(analogRead(A0));
}
delay(analogRead(A0));
 for(byte x=12;x>0;x--){
       digitalWrite(14+x, LOW);
       digitalWrite(14-x, LOW);
       delay(analogRead(A0));
}
digitalWrite(14,LOW);
delay(analogRead(A0));

}
