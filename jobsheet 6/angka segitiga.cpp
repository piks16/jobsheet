#include <stdio.h>

int main() {
    int n = 5;  // Jumlah baris yang ingin ditampilkan

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Menghitung nilai dengan pola  i * j
            int value = i * j;
            // Menampilkan nilai dengan pemisah spasi
            printf("%d ", value);
        }
        // Pindah ke baris berikutnya setelah setiap baris selesai
        printf("\n");
    }

    return 0;
}

