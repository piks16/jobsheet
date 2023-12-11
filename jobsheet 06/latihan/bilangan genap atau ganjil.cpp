#include<stdio.h>

int main(){
	char pilihan;
	int a=1, b=0;
	
	printf("pilih deret genap atau ganjil (jawab genap=0 atau ganjil=1)");
	scanf("%c", &pilihan);
	
	switch (pilihan){
		case '1':
			for (a=1;a<=50;a+=2){
				printf("%d\t", a);
		}
			break;
	
		case '0':
			for (b=0;b<=50;b+=2){
				printf("%d\t", b);
		}
			break;
		
		default:
		printf("pilihan tidak benar");
	}
	return 0;
}

