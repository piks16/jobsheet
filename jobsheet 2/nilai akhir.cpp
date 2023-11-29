#include<stdio.h>

int main(){
	
	char name[20], nim[22], prodi[20], fakultas[55];
	float nilai_praktikum, uts, uas, nilai_akhir;
	
	printf("Nama:");
	scanf("%[^\n]s", &name);
	
	printf("NIM:");
	scanf("%s", &nim);
	
	printf("Prodi:");
	scanf("%s", &prodi);
	
	printf("Fakultas:");
	scanf("%s", &fakultas);
	
	printf("Nilai praktikum:");
	scanf("%f", &nilai_praktikum);
	
	printf("Nilai UTS:");
	scanf("%f", &uts);
	
	printf("Nilai UAS:");
	scanf("%f", &uas);
	
	nilai_akhir= 0.3*nilai_praktikum + 0.3*uts + 0.4*uas;
	
	printf("---------------------------\n");
	printf("Nama: %s\n", name);
	printf("NIM: %s\n", nim);
	printf("Prodi: %s\n", prodi);
	printf("Fakultas: %s\n",fakultas);
	printf("Nilai praktikum: %f\n", nilai_praktikum);
	printf("Nilai UTS: %f\n", uts);
	printf("Nilai UAS: %f\n", uas);
	printf("Nilai akhir: %f\n", nilai_akhir);
	
	return 0;
}
