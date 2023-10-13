
int playNotes [] = {262,294,330,349};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int keyValue = analogRead(A0);
  Serial.println(keyValue); 

  if(keyValue == 1023){
    tone(8, playNotes[0]);
  }
  else if(keyValue >= 990 && keyValue <= 1010){
      tone(8, playNotes[1]);
  }
  else if(keyValue>= 505 && keyValue<= 515){
      tone(8, playNotes[2]);
  }
  else if(keyValue >= 5 && keyValue <= 10){
      tone(8, playNotes[3]);
  }else{
    noTone(8);
  }
}
