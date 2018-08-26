int trig = 2;
int echo = 3; 
float duration;
float distance;
int buzz=13;
int motorR[]={9,10};
int motorL[]={11,12};
void setup() 
{  
    Serial.begin(9600);
    pinMode(echo,INPUT);
    pinMode(trig, OUTPUT);
    pinMode(buzz,OUTPUT);
     
}            
void loop() 
{                
        
        
        digitalWrite(trig, HIGH);
        delayMicroseconds(400);
        digitalWrite(trig,LOW);
        delayMicroseconds(400);
   
        
        duration = pulseIn(echo, HIGH);
        
        distance= duration*0.034/2;
        Serial.print("distance ");
        Serial.print(distance);
        Serial.println( " cms");
        delayMicroseconds(1000);
        if (distance<6)
        {
          digitalWrite(buzz,HIGH);
          delay(200);
          digitalWrite(buzz,LOW);
          delay(1000);
        }
        else
        {
          digitalWrite(buzz,LOW);
        }
       
                

}      

