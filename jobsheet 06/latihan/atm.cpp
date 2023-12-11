#include <stdio.h>

// Fungsi untuk menampilkan menu ATM
void displayMenu() {
    printf("ATM\n");
    printf("1) Cek Saldo\n");
    printf("2) Setoran\n");
    printf("3) Penarikan Tunai\n");
    printf("4) Exit\n");
    printf("\n");
}

int main() {
    int choice;
    int saldo = 175000; // Saldo awal Hattori
    int setoran, penarikan;

    printf("No Rek : 0123\n");
    printf("Nama Akun : Hattori\n");
    printf("Saldo ATM : Rp. %d\n", saldo);
    displayMenu();

    while (1) {
        printf("Pilih menu (1/2/3/4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Saldo saat ini: Rp. %d\n", saldo);
                break;
            case 2:
                printf("Masukkan jumlah setoran: Rp. ");
                scanf("%d", &setoran);
                saldo += setoran;
                printf("Setoran berhasil. Saldo saat ini: Rp. %d\n", saldo);
                break;
            case 3:
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%d", &penarikan);
                if (saldo - penarikan < 50000) {
                    printf("Maaf, saldo tidak mencukupi untuk penarikan tersebut.\n");
                } else {
                    saldo -= penarikan;
                    printf("Penarikan berhasil. Saldo saat ini: Rp. %d\n", saldo);
                }
                break;
            case 4:
                printf("Terima kasih. Sampai jumpa!");
                return 0;
            default:
                printf("Pilihan tidak valid. Silakan pilih kembali.\n");
        }
    }

    return 0;
}

