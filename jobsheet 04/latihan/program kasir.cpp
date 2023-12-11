#include <stdio.h>

int main() {
    char namaPembeli[100];
    char namaBarang[100];
    int hargaSatuan, jumlah, hargaTotal;

    // Input data dari pengguna
    printf("Masukkan nama pembeli: ");
    scanf("%s", namaPembeli);

    printf("Masukkan nama barang: ");
    scanf("%s", namaBarang);

    printf("Masukkan harga satuan: ");
    scanf("%d", &hargaSatuan);

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlah);

    // Menghitung harga total
    hargaTotal = hargaSatuan * jumlah;

    // Menampilkan output
    printf("\n\n===== Struk Pembelian =====\n");
    printf("Nama Pembeli: %s\n", namaPembeli);
    printf("Nama Barang: %s\n", namaBarang);
    printf("Harga Satuan: Rp%d\n", hargaSatuan);
    printf("Jumlah Barang: %d\n", jumlah);
    printf("Harga Total: Rp%d\n", hargaTotal);
    printf("===========================\n");

    return 0;
}


