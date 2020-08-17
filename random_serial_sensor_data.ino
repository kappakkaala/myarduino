//long randomValue;
float i = 0.00;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  i = i + 1.11;
  byte payload = i;
  //randomValue = random(5, 10);
  //Serial.println(randomValue);
  Serial.print(i);
  Serial.print(" ");
  Serial.println(payload); 
  delay(500);
}
