//Program 5: how to use Arduino and buzzer generate alarm sound
 
void setup()
{
}
  
void loop()
{
for(int i=200;i<=800;i++)   // frequency from 200Hz to 800Hz
 pinMode(4,OUTPUT);
 tone(4,i);       //output frequency at port 4, i.e., generate a sound
 delay(5);       //generate a sound for 5ms 
delay(4000);           //the highest frequency lasts for 4ms
}
