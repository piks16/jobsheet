#include<stdio.h>

int main(){
	int absen, tugas, UTS, UAS;
	float nilaiakhir;
	printf("\tprogram menentukan nilai akhir\n");
	printf("\t------------------------------\n");
	
	printf("input nilai kehadiran	:");
	scanf("%d", &absen);
	
	printf("input nilai tugas	:");
	scanf("%d", &tugas);
	
	printf("input nilai UTS		:");
	scanf("%d", &UTS);
	
	printf("input nilai UAS		:");
	scanf("%d", &UAS);
	
	nilaiakhir= 0.2 * absen + 0.2 * tugas + 0.25 * UTS + 0.35* UAS;
	
	printf("nilai akhir anda 	:%.2f\n", nilaiakhir);
	
	if (nilaiakhir <= 55){
		printf("maaf anda tidak lulus!");
	}
	else if(nilaiakhir>55 && nilaiakhir<=65){
		printf("Anda lulus, tingkatkan lagi kedepannya!");
	}
	else if(nilaiakhir>65 && nilaiakhir<=85){
		printf("Anda lulus dengan baik, tingkatkan lagi kedepannya!");
	}
	else if(nilaiakhir>85 && nilaiakhir<=100){
		printf("Selamat, anda lulus dengan nilai yang sangat memuaskan!");
	}
	else
		printf("anda tidak memasukkan input dengan benar");
return 0;
}
