#include <stdio.h>

int main() {
   int i;
   float nilai[20], total = 0, rata;

   // Meminta pengguna untuk memasukkan nilai dari 20 mahasiswa
   printf("Masukkan nilai dari 20 mahasiswa:\n");

   for(i = 0; i < 20; i++) {
      printf("Nilai mahasiswa %d: ", i + 1);
      scanf("%f", &nilai[i]);

      // Menjumlahkan semua nilai yang telah dimasukkan
      total += nilai[i];
   }

   // Menghitung rata-rata
   rata = total / 20;

   // Menampilkan hasil rata-rata
   printf("Rata-rata nilai mahasiswa adalah: %.2f", rata);

   return 0;
}


