#include<stdio.h>
int main(){
	int jumlahmahasiswa;
	printf("masukkan banyak mahasiswa:");
	scanf("%d", &jumlahmahasiswa);
	while (getchar() != '\n');
	
FILE *file;
file = fopen("datamahasiswa.txt", "w");

	for (int n = 0; n<jumlahmahasiswa; n++){
		char nama[50];
		char nim[50];
		char programstudi[50];
		printf("data mahasiswa %d:\n", n+1);
		printf("nama:");
		fgets(nama, sizeof nama, stdin);
		printf("nim:");
		fgets(nim, sizeof nim, stdin);
		printf("program studi:");
		fgets(programstudi, sizeof programstudi, stdin);
		
		fprintf(file,"data mahasiswa %d:", n+1);
		fprintf(file,"nama: %s", nama);
		fprintf(file,"nim: %s", nim);
		fprintf(file,"program studi: %s", programstudi);
	}
fclose(file);
printf("data tersimpan");

return 0;
}
