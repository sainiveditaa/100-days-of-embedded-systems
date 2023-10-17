const int lumos=2;
void setup(){
  pinMode(lumos, OUTPUT);
}
void loop(){
  digitalWrite(lumos, HIGH);
  delay(1000);
  digitalWrite(lumos, LOW);
  delay(300);
}
