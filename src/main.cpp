#include <Arduino.h>
const int PINS[]={3,5,11};
const int DELAY=39; // 39 for 10 s

void setup(){
	for(int i=0;i<3;i++)
		pinMode(PINS[i],OUTPUT);
	delay(5000);
	for(int j=0;j<256;j++){
		analogWrite(PINS[1],j);
		analogWrite(PINS[2],j);
		delay(DELAY);
	}
}

void loop(){
	int i,j;
	for(i=0;i<3;i++){
		for(j=255;j>=0;j--){
			analogWrite(PINS[(i+1)%3],j);
			delay(DELAY);
		}
		for(j=0;j<256;j++){
			analogWrite(PINS[i],j);
			delay(DELAY);
		}
	}
}