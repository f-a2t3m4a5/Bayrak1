void setup() {

    pinMode(0, INPUT);
    
for(byte a=2;a<14;a++){
  pinMode(a, OUTPUT);

  }

}

void loop() {
  for(byte a=2;a<14;a++){
       for(byte x=2;x<14;x++){
                            digitalWrite(x, LOW);   }
                              digitalWrite(a, HIGH);

                                                   delay(analogRead(A0));
                                                  
    
       }
}
