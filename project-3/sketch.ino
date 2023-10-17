const int red=27;
const int yellow=14;
const int green=12;
void setup(){
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop(){
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(300);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(300);
  digitalWrite(green,HIGH);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  delay(300);
}
