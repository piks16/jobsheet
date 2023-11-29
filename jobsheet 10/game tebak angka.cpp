#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enum untuk angka-angka dari 1 hingga 20
enum Angka {
    SATU = 1, DUA, TIGA, EMPAT, LIMA, ENAM, TUJUH, DELAPAN, SEMBILAN, SEPULUH,
    SEBELAS, DUA_BELAS, TIGA_BELAS, EMPAT_BELAS, LIMA_BELAS, ENAM_BELAS,
    TUJUH_BELAS, DELAPAN_BELAS, SEMBILAN_BELAS, DUA_PULUH
};

int main() {
    enum Angka nomor_komputer, tebakan;
    int jumlah_percobaan;
    char main_lagi;

    srand(time(NULL)); // Menetapkan seed berdasarkan waktu saat ini

    do {
        nomor_komputer = (enum Angka)(rand() % 20 + 1); // Menghasilkan angka antara 1 dan 20
        jumlah_percobaan = 0;

        printf("Tebak nomor antara 1 dan 20: ");
        do {
            scanf("%d", &tebakan);
            jumlah_percobaan++;

            if (tebakan < nomor_komputer) {
                printf("Nomor saya lebih besar!\n");
            } else if (tebakan > nomor_komputer) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, anda benar!\n");
                printf("Anda berhasil menebak dalam %d percobaan.\n", jumlah_percobaan);
            }
        } while (tebakan != nomor_komputer);

        printf("Ingin bermain lagi? (y/n): ");
        scanf(" %c", &main_lagi);
    } while (main_lagi == 'y' || main_lagi == 'Y');

    printf("Terima kasih telah bermain!\n");

    return 0;
}

