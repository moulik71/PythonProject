int led1=7;

void setup()
{
//pinmode(pin,mode);
pinMode(7,OUTPUT);

}

void loop() 
{
  
 digitalWrite(led1,HIGH);
 delay(1000);
 digitalWrite(led1,LOW);
 delay(1000);
 

}
