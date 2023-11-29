#include<stdio.h>

int main(){
	
	char name [20];
	printf("halo, siapa namamu?");
	scanf("%[^\n]s", &name[20] );
	printf("selamat datang %s dalam pemrograman c", &name[20]);
	return 0;
}
