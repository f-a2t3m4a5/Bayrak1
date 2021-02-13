void setup() {
   pinMode(0, INPUT);
 for(byte a=1;a<14;a++){ 
  pinMode(a, OUTPUT); 
  }
}

void loop() {
  for(byte n=1;n<14;n++){digitalWrite(n, LOW);}
for(byte z=13;z>1;z--){
 for(byte b=1;b<14;b++){
  
       for(byte x=1;x<z;x++){digitalWrite(x, LOW);}
        digitalWrite(b, HIGH);  
        delay(analogRead(0));                   

       }}}
