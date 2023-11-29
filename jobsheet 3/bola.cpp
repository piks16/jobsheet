#include<stdio.h>

int main(){
	const float pi=3.14;
	int d=12;
	int r=0.5*d;
	float volume, LP;
	
	volume=4/3 * pi * r * r * r;
	LP=4*pi*r*r;
	
	printf("volume bola:%f satuan kubik\n", volume);
	printf("luas permukaan bola:%f satuan luas\n", LP);
	
	return 0;
	
}
