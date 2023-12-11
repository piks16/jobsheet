#include <stdio.h>

int kali(int a, int b) {
  // dasar kasus
  if (b == 0) {
    return 0;
  }

  // kasus rekursif
  return a + kali(a, b - 1);
}

int main() {
  int a, b;

  // input
  printf("Masukkan bilangan a: ");
  scanf("%d", &a);
  printf("Masukkan bilangan b: ");
  scanf("%d", &b);

  // cetak hasil
  printf("Hasil perkalian: %d\n", kali(a, b));

  return 0;
}
