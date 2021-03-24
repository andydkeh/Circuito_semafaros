void setup()
{
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(4, OUTPUT);
}

void loop()
{
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
  
    digitalWrite(12, HIGH);
    delay(1000); 
    digitalWrite(12, LOW);

    digitalWrite(4, HIGH);
    delay(1000); 
    digitalWrite(4, LOW);  
}