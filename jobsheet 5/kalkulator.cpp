#include<stdio.h>

int main(){
	char operasi; //untuk switch
	int a, b; 
	
	printf("masukkan angka 1:"); //input angka pertama
	scanf("%d", &a);
	printf("masukkan angka 2:"); //input angka kedua
	scanf("%d", &b);
	printf("masukkan operasi yang diinginkan(*, /, +, -, %):"); //pilih operator
	scanf("%s", &operasi);
	
	switch(operasi){ //bagi jadi 5 kasus
		case '*':
			printf("%d * %d = %d", a, b, a * b);
			break;
			
		case '/':
			if (b!=0){
			printf("%d / %d = %d", a, b, a / b);
			break;
			}
			else
			printf("jawaban tak terdefinisi");
			break;
			
		case '+':
			printf("%d + %d = %d", a, b, a + b);
			break;
			
		case '-':
			printf("%d - %d = %d", a, b, a - b);
			break;
			
		case '%':
			if(b!=0){
			printf("%d % %d = %d", a, b, a % b );
			break;
			}
			else
			printf("modulus 0 tak terdefinisi");
			break;
			
		default:
			printf("input tidak ditemukan atau input anda salah");
					
	}
return 0;
}
