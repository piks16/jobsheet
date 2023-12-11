#include<stdio.h>

int main(){
	float c;
	float k;
	float f;
	float r;
	printf("masukkan nilai suhu dalam celsius:");
	scanf("%f", &c);
	
	k = c + 273.15;
	f = c * 1.8 + 32;
	r = c * 0.8;
	
	printf("input suhu:%f c\n", c);
	printf("suhu dalam kelvin:%f k\n", k);
	printf("suhu dalam fahrenheit:%f f\n", f);
	printf("suhu dalam reamur:%f r\n", r);
	return 0;
	
}
