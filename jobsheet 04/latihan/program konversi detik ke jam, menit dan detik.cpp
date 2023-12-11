#include<stdio.h>

int main(){
	int d=3700, m, j;
	
	//buat nama programnya apa
	printf("program konversi detik ke dalam bentuk jam menit dan detik\n");
	printf("==========================================================\n");
	printf("detik yang diinput=3700\n");
	
	//buat rumus konversi
	j= d/3600;
	d=d-j*3600;
	m=d/60;
	d=d-60*m;
	
	//tampilkan output
	printf("hasil output:%i jam %i menit %i detik",j, m, d);
	return 0;
}
