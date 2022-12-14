/*

*/
int white=3;
int yellow=10;
void setup() {
  delay(500);
  pinMode(white,OUTPUT);
  pinMode(yellow,OUTPUT);
  digitalWrite(yellow,HIGH);
  digitalWrite(white,HIGH);
  delay(1000);
}

void loop() {
  digitalWrite(yellow,HIGH);
  digitalWrite(white,LOW);
  delay(200);
  digitalWrite(yellow,LOW);
  digitalWrite(white,HIGH);
  delay(200);
  
}
