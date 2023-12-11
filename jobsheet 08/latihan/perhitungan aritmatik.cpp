#include<stdio.h>
int a, b;

penjumlahan(){
printf("%d + %d = %d", a, b, a+b);
return 0;
}

pengurangan(){
	printf("%d - %d = %d", a, b, a-b);
	return 0;
}

perkalian(){
	printf ("%d x %d = %d", a, b, a*b);
	return 0;
}

pembagian(){
	printf("%d : %d = %f", a, b, a/b);
	return 0;
}

int main(){
	char pilihan;
	printf("pilih menu:\n");
	printf("1. penjumlahan\n");
	printf("2. pengurangan\n");
	printf("3. perkalian\n");
	printf("4. pembagian\n");
	scanf("%c",&pilihan);
	 
	printf("masukkan bilangan pertama:");
	scanf("%d",&a);
	printf("masukkan bilangan kedua:");
	scanf("%d",&b);
	
	switch (pilihan){
		case '1':
			penjumlahan();
			break;
		case '2':
			pengurangan();
			break;
		case '3':
			perkalian();
			break;
		case '4':
			pembagian();
			break;
	}
	return 0;
}


