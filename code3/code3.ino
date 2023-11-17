// LINE CONTROLLER BOT
#define m1 8 
#define m2 9 
#define m3 10 
#define m4 11
#define e1 12
#define e2 13


#define ir1 6
#define ir2 2
#define ir3 3
#define ir4 4
#define ir5 7

//Serial.println(ir1);
//Serial.println(ir2);
//Serial.println(ir3);
//Serial.println(ir4);
//Serial.println(ir5);

int s1,s2,s3,s4,s5;

void setup() {
  // put your setup code here, to run once:
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(e1,OUTPUT);
pinMode(e2,OUTPUT);

pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
pinMode(ir3,INPUT);
pinMode(ir4,INPUT);
pinMode(ir5,INPUT);





}
//white =0
//Black =1
void loop() {
  
analogWrite(e1,150);
analogWrite(e2,150);
  // put your main code here, to run repeatedly:
s1 = digitalRead(ir1);
s2 = digitalRead(ir2);
s3 = digitalRead(ir3);
s4 = digitalRead(ir4);
s5 = digitalRead(ir5);
  

if( s1==1 && s2==1 && s3==0 && s4==1 && s5==1 ) //Going straight
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);
delay(200);
}

else if( s1==1 && s2==0 && s3==0 && s4==0 && s5==1 ) //Going straight
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);
delay(200);
}
else if( s1==1 && s2==1 && s3==1 && s4==0 && s5==1 )// normal left turn
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH);
delay(200);
}

else if( s1==1 && s2==1 && s3==1 && s4==0 && s5==0 )// Normal left turn
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH);
delay(200);
}
else if( s1==1 && s2==0 && s3==1 && s4==1 && s5==1 )// Normal Right turn
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH);
delay(200);
}
else if( s1==0 && s2==0 && s3==1 && s4==1 && s5==1 )// Normal Right turn
{
digitalWrite(m1,LOW);
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);
delay(200);
}
else if(s1==0 && s2==1 && s3==1 && s4==1 && s5==1)//  Sharp Left turn
{
digitalWrite(m1,LOW);
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m4,HIGH);
delay(250);
}
else if(s1==1 && s2==1 && s3==1 && s4==1 && s5==0)// Sharp Right turn
{
digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH);
delay(250);
}
else if(s1==1 && s2==1 && s3==1 && s4==1 && s5==1)// Angle turn 
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);
delay(250);
}
else if(s1==0 && s2==0 && s3==0 && s4==0 && s5==0)// BAckward 
{
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
delay(200);

}


}
