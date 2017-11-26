int lookup[8] = {B01000, B01100, B00100, B00110, B00010, B00011, B00001, B01001};

void setup(){
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop(){
  for(int i = 7; i >= 0; i--)
  { setOutput(i);
    delayMicroseconds(1200);
  }
}

void setOutput(int out){
  digitalWrite(8, bitRead(lookup[out], 0));
  digitalWrite(9, bitRead(lookup[out], 1));
  digitalWrite(10, bitRead(lookup[out], 2));
  digitalWrite(11, bitRead(lookup[out], 3));
}