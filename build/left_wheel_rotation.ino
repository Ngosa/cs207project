
/*In3 connected to the 7 pin, 
 In4 connected to the 6 pin, ENB pin 5,*/
int ENB=5; 
int IN3=7;
int IN4=6;
void setup()
{
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
  digitalWrite(ENB,HIGH);       
}
void loop()
{
  digitalWrite(IN3,LOW);      
  digitalWrite(IN4,HIGH);         //Left wheel forward
  delay(500);
  digitalWrite(IN3,LOW);      
  digitalWrite(IN4,LOW);         //Left wheel stop
  delay(500);
  digitalWrite(IN3,HIGH);      
  digitalWrite(IN4,LOW);         //Left wheel back
  delay(500);
  digitalWrite(IN3,LOW);      
  digitalWrite(IN4,LOW);         //Left wheel stop
  delay(500);
}

