//by fikri
#include <stdio.h>

// isi awal array

int main(){ 
	char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
	
	// mengubah isi array 
	huruf[2] = 'z';
	
	// mencetak isi array 
	printf("Huruf: %c\n", huruf[2]);

}
