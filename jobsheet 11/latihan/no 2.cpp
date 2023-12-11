#include<stdio.h>
int main(){
	FILE *file;
	char line[100];// buffer buat nyimpan baris
	file = fopen("datamahasiswa.txt", "r");
	if(file==NULL){
		printf("data tidak ada");
		return 1;
	}
printf("isi dari datamahasiswa.txt:\n");
	while (fgets(line, sizeof(line), file) != NULL){
	printf("%s", line);
}
	fclose(file);
}
