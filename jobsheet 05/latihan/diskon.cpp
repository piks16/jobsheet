#include <stdio.h>
int main()
{
    int total_pembelian, diskon, cashback = 0;
    printf("Masukkan total pembelian: ");
    scanf("%d", &total_pembelian);

    if (total_pembelian <= 75000)
    {
        diskon = total_pembelian * 0.05;
    }
    else if (total_pembelian > 75000 && total_pembelian <= 125000)
    {
        diskon = total_pembelian * 0.15;
    }
    else
    {
        diskon = total_pembelian * 0.25;
        cashback = 5000;
    }

    int total_bayar = total_pembelian - diskon + cashback;
    printf("Diskon yang diberikan: Rp. %d\n", diskon);
    printf("Cashback yang diberikan: Rp. %d\n", cashback);
    printf("Total yang harus dibayar: Rp. %d\n", total_bayar);

    return 0;
}
