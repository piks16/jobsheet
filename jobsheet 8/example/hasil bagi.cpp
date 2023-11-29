#include <stdio.h>
float bagi(int a, int b){
	float hasil = (float) a/(float) b;
	return hasil;
}
int main(){
	printf("hasil bagi 5/2= %.2f", bagi(5,2));
	return 0;
}
