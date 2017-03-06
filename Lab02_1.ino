// Lab02_1
// 使用for迴圈的跑馬燈程式
//
// 每個 LED 正極接到 Pin 0 - 7, 負極接地
const byte startPin = 1;
const byte endPin = 8;

void setup() {
// 將每個 Pin 設定成輸出
for (byte i = startPin; i<= endPin; i++) {
pinMode(i, OUTPUT);
}

}

void loop() {
byte i;
byte lightPin = startPin;

// 所有 LED OFF
for (i=startPin; i<= endPin; i++) {
digitalWrite(i,LOW);
}

// 點亮 LED
digitalWrite(lightPin, HIGH);
delay (100);


if (lightPin < endPin) {
lightPin ++;
} else {
lightPin = startPin;
}

}
