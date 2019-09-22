void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(analogRead(A0));
  int potValue = analogRead(A0);
  int mappedValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(9, mappedValue);
}
