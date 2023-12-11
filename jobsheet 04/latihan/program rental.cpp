#include<stdio.h>

int main(){
	int waktutonton, biayatotal;
	printf("selamat datang di program menghitung rental film\n");
	printf("input lama jam anda menonton:");
	scanf("%d", &waktutonton);
	
	if(waktutonton==1){
		printf("biaya total=15.000");
	}
	else if(waktutonton>=1){
		biayatotal=15000+ (waktutonton-1)*7500;
		printf("biaya total = %d", biayatotal);
	}
	else{
	printf("input anda tidak benar");
	}	
	return 0;
}
