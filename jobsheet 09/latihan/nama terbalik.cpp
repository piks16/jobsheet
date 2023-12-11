#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100]; // Deklarasi array untuk menyimpan input kalimat
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin); // Menerima input kalimat dari pengguna

    int panjang = strlen(kalimat); // Menghitung panjang kalimat menggunakan strlen()

    printf("Kebalikannya: ");
    for (int i = panjang - 1; i >= 0; i--) { // Melakukan iterasi dari belakang ke depan
        printf("%c", kalimat[i]); // Mencetak karakter kalimat kebalikannya
    }

    return 0;
}

