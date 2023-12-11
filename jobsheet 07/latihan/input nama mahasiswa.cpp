#include<stdio.h>
int main(){
	int i, banyaksiswa;
	char namamahasiswa[100][banyaksiswa];
		printf("input banyak siswa:");
		scanf("%d", &banyaksiswa);
	for (i=0; i<banyaksiswa; i++){
		printf("masukkan nama mahasiswa %d:", i+1);
		scanf("%s", &namamahasiswa[i]);
	}
	return 0;
}
