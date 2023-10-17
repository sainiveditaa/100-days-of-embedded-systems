const int red=2;
const int blue=15;
void setup(){
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
}
void loop(){
  digitalWrite(red, HIGH);
  digitalWrite(blue, LOW);
  delay(300);
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);
  delay(300);
}
