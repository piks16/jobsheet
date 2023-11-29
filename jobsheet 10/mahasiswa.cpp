#include<stdio.h>
#include<string.h>

struct mhs{
char npm[20];
char nama[50]; 
char tanggallahir[14];
char alamat[50];
char hp[12];
};
void tambahdata(struct mhs *mahasiswa){
	printf("NPM:");
	gets(mahasiswa->npm);
	fflush(stdin);
	printf("Nama:");
	gets(mahasiswa->nama);
	fflush(stdin);
	printf("Tanggal lahir:");
	gets(mahasiswa->tanggallahir);
	fflush(stdin);
	printf("Alamat:");
	gets(mahasiswa->alamat);
	fflush(stdin);
	printf("No HP:");
	gets(mahasiswa->hp);
	fflush(stdin);
}
void tampildata(struct mhs mahasiswa){
	printf("NPM: %s\n", mahasiswa.npm);
	printf("Nama: %s\n", mahasiswa.nama);
	printf("Tanggal lahir: %s\n", mahasiswa.tanggallahir);
	printf("Alamat: %s\n", mahasiswa.alamat);
	printf("No HP: %s\n", mahasiswa.hp);
}
int main(){
	struct mhs data_mhs;
	tambahdata(&data_mhs);
	tampildata(data_mhs);
	return 0;
}
