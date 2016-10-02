int pin_rood = 10;
int pin_groen = 11;
int pin_wit = 12;
void setup() 
{
  pinMode(pin_rood, OUTPUT);
  pinMode(pin_groen, OUTPUT);
  pinMode(pin_wit, OUTPUT);
}

void loop() 
{
  digitalWrite(pin_rood, HIGH);
  delay(1000);
  digitalWrite(pin_rood, LOW);
  delay(1000);
  digitalWrite(pin_groen,HIGH);
  delay(1000);
  digitalWrite(pin_groen, LOW);
  
  digitalWrite(pin_wit, HIGH);
  delay(1000);
  digitalWrite(pin_wit, LOW); 
  
  digitalWrite(pin_groen,HIGH);
  delay(1000);
  digitalWrite(pin_groen, LOW);
  delay(1000);
}
