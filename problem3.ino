/*

*/
int in=A2;
int val;
void setup() {
  Serial.begin(9600);
  pinMode(in,INPUT);
}

void loop() {
  val=analogRead(in);
  Serial.println(val);
}
