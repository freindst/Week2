//www.elegoo.com
//2016.12.08
float i;

int buzzer = 12;//the pin of the active buzzer
void setup()
{
  i = 0;
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
}
void loop()
{
    if (i < HIGH) {
        digitalWrite(buzzer, HIGH);
        delay(500);
        digitalWrite(buzzer, LOW);
        delay(500);
        i = i + 0.05;
    }
} 
