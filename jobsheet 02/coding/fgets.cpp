//by:fikri
#include <stdio.h>
int main(){
	char nama[50], alamat[55];
	printf("nama:");
	fgets(nama, sizeof (nama), stdin);
	printf("tempat tinggal:");
	fgets(alamat, sizeof (alamat), stdin);
	printf("nama: %s", nama);
	printf("tempat tinggal: %s", alamat);
	return 0;
	
}
