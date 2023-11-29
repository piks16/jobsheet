#include <stdio.h>

int main() {
    float presensi, praktek, uts, uas;
    float nilaiAkhir;

    // Input nilai dari pengguna
    printf("Masukkan nilai Presensi: ");
    scanf("%f", &presensi);

    printf("Masukkan nilai Praktek: ");
    scanf("%f", &praktek);

    printf("Masukkan nilai UTS: ");
    scanf("%f", &uts);

    printf("Masukkan nilai UAS: ");
    scanf("%f", &uas);

    // Menghitung nilai akhir
    nilaiAkhir = (presensi * 0.1) + (praktek * 0.2) + (uts * 0.3) + (uas * 0.4);

    // Menampilkan output
    printf("\nNilai Akhir: %.2f\n", nilaiAkhir);

    return 0;
}

