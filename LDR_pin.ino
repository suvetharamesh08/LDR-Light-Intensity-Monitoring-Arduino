int ldrpin = A1;
void setup() { 
  Serial.begin(9600); 
}
void loop() { 
  int lightvalue = analogRead(ldrpin);
  Serial.print("light reading:");
  Serial.println(lightvalue);
  delay(500);
}
