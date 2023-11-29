#include<stdio.h>

int main(){
	
	char luaspermukaan;
	float j,r,p,l,t;
	printf("program mencari luas permukaan\n");
	printf("gunakan kode berikut untuk mencari luas permukaannya\n");
	printf("bola: B\n");
	printf("kubus: K\n");
	printf("tabung: T\n");
	printf("balok: b\n");
	printf("masukkan kode:");
	scanf("%c",&luaspermukaan);
	
	switch (luaspermukaan){
		case 'B':
			printf("masukan jari-jari:");
			scanf("%f", &j);
			printf("luas permukaan: %.2f\n", 4*3.14*j*j);
			break;
		case 'K':
			printf("masukkan nilai rusuk:");
			scanf("%f", &r);
			printf("luas permukaan: %.2f\n", 6*r*r );
			break;
		case 'T':
			printf("masukkan jari-jari:");
			scanf("%f", &j);
			printf("masukkan tinggi tabung:");
			scanf("%f",&t);
			printf("luas permukaan: %.2f\n",2*3.14*j*j+3.14*t);
			break;
		case 'b':
			printf("masukkan panjang lebar dan tinggi(format p,l,t)\n");
			scanf("%f,%f,%f", &p, &l, &t);
			printf("luas permukaan: %.2f\n",2*p*l+(2*p+2*l)*t);
			break;
		default:
			printf("input anda salah");
	}
return 0;
}
