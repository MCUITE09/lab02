// Lab02_3
// 使用for迴圈的跑馬燈程式

const byte startPin = 1;
const byte endPin = 8;
const byte SW = 13;

void setup() {
pinMode(SW, INPUT);
 // 將每個 Pin 設定成輸出
for (byte i = startPin; i<= endPin; i++) {
pinMode(i, OUTPUT);
}


}

void loop() {
  
boolean val = digitalRead(13);
byte i;
byte lightPin = startPin;

// 所有 LED OFF
for (i=startPin; i<= endPin; i++) {
digitalWrite(i,LOW);
}

if(!val){
   for(lightPin=1;lightPin<8;lightPin++)
{
 // 點亮 LED 
  digitalWrite(lightPin, HIGH);
  delay (100);

  digitalWrite(lightPin, LOW);    
  delay(100);  
}
  
 
  for(lightPin=8;lightPin>1;lightPin--)
  {
   digitalWrite(lightPin, HIGH);
   delay (100);

  digitalWrite(lightPin, LOW);    
  delay(100); 
  }

}

  
else
{
  for(lightPin=1;lightPin<9;lightPin++)//HIGH & LOW
 {
  digitalWrite(lightPin, HIGH); 
 }
  delay (100);
 
   for(lightPin=1;lightPin<9;lightPin++)
 {
  digitalWrite(lightPin, LOW); 
 }   
  delay(100);
  
 for(lightPin=1;lightPin<9;lightPin++)//HIGH & LOW
 {
  digitalWrite(lightPin, HIGH); 
 }
  delay (100);
 
   for(lightPin=1;lightPin<9;lightPin++)
 {
  digitalWrite(lightPin, LOW); 
 }   
  delay(100);
  
  
  for(lightPin=1;lightPin<8;lightPin++)//1->8
{
 // 點亮 LED 
  digitalWrite(lightPin, HIGH);
  delay (100);

  digitalWrite(lightPin, LOW);    
  delay(100);  
}
  
 for(lightPin=1;lightPin<9;lightPin++)//HIGH & LOW
 {
  digitalWrite(lightPin, HIGH); 
 }
  delay (100);
 
   for(lightPin=1;lightPin<9;lightPin++)
 {
  digitalWrite(lightPin, LOW); 
 }   
  delay(100);
  
 for(lightPin=1;lightPin<9;lightPin++)//HIGH & LOW
 {
  digitalWrite(lightPin, HIGH); 
 }
  delay (100);
 
   for(lightPin=1;lightPin<9;lightPin++)
 {
  digitalWrite(lightPin, LOW); 
 }   
  delay(100);
  
  
  for(lightPin=8;lightPin>1;lightPin--)//8->1
  {
   digitalWrite(lightPin, HIGH);
   delay (100);

  digitalWrite(lightPin, LOW);    
  delay(100); 
  }
}
 

 
}
