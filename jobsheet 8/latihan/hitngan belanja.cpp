#include <stdio.h>

float hitungDiskon(float totalPembelian);

int main() {
    float totalPembelian;
    printf("Total Pembelian (Rp.): ");
    scanf("%f", &totalPembelian);
    printf("Besar Diskon: %.2f\n", hitungDiskon(totalPembelian));
    printf("Besar Yang Harus Dibayarkan: %.2f\n", totalPembelian - hitungDiskon(totalPembelian));
    return 0;
}

float hitungDiskon(float totalPembelian) {
    float diskon;
    if (totalPembelian < 1000000) {
        diskon = 0;
    } else if (totalPembelian >= 1000000 && totalPembelian < 3000000) {
        diskon = totalPembelian * 0.2;
    } else {
        diskon = totalPembelian * 0.35;
    }
    return diskon;
}
