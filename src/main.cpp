#include <Arduino.h>

// LED 連接在 GPIO22
// 每 2 秒完成一個週期（1 秒亮、1 秒滅）
const int LED_PIN = 22;

void setup() {
	// 設定 LED_PIN 為輸出
	pinMode(LED_PIN, OUTPUT);
	// 初始狀態為低電位（LED 關）
	digitalWrite(LED_PIN, LOW);
}

void loop() {
	// 開啟 LED（輸出高電位）
	digitalWrite(LED_PIN, HIGH);
	// 等待 1 秒
	delay(1000);
	// 關閉 LED（輸出低電位）
	digitalWrite(LED_PIN, LOW);
	// 再等待 1 秒，完成 2 秒週期
	delay(1000);
}