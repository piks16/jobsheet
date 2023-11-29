#include <stdio.h>

int main() {
    // Pertanyaan A
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    printf("Pertanyaan A:\n");
    printf("Nilai Layla: %d\n", Layla);
    printf("Nilai Balmond: %d\n\n", Balmond);

    // Pertanyaan B
    int Lesley_B = 57082;
    int *Layla_B = &Lesley_B;
    int Balmond_B = *Layla_B + 1;

    printf("Pertanyaan B:\n");
    printf("Nilai Layla: %p\n", Layla_B);
    printf("Nilai Balmond: %d\n", Balmond_B);

    return 0;
}

