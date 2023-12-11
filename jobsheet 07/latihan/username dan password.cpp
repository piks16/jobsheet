#include<stdio.h>
#include<string.h>

char username[50]="hsnlfikri";
char password[50]="pulupulu";
char username1[50];
char password1[50];
	
void input(){
	printf("masukkan username:");
	scanf("%s", &username1);
	printf("masukkan password:");
	scanf("%s", &password1);
}
void bandingkan(){
	int hasil1, hasil2;
	hasil1=strcmp(username, username1);
	hasil2=strcmp(password, password1);
	
	if (hasil1==0 && hasil2==0){
		printf("berhasil login");
	}
	else{
		printf("username atau password salah");
	}	
}
int main(){
	input();
	bandingkan();
	return 0;
}

	

