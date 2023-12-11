#include<stdio.h>
int r;
float phi=3.14;
luas(){
	float luas;
	luas=phi*r*r;
	printf("luas lingkaran = %.2f\n", luas);
}
keliling(){
	float keliling;
	keliling=2*phi*r*r;
	printf("keliling lingkaran = %.2f\n", keliling);
}
main(){
	printf("masukkan jari-jari:");
	scanf("%d",&r);
	luas();
	keliling();
}

