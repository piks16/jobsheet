#include <stdio.h>

int saldo = 175000; //inisialisasi saldo awal
char rekening[] = "0123";
char nama[] = "Hattori";
int minimal_saldo = 50000; //minimal saldo yang harus disisakan

void cek_saldo(){
    printf("Saldo saat ini adalah Rp. %d\n",saldo);
}

void setoran(){
    int jumlah_setoran;
    printf("Masukkan jumlah setoran: ");
    scanf("%d",&jumlah_setoran);
    saldo += jumlah_setoran;
    printf("Setoran berhasil! Saldo anda sekarang adalah Rp. %d\n",saldo);
}

void penarikan(){
    int jumlah_penarikan;
    printf("Masukkan jumlah penarikan: ");
    scanf("%d",&jumlah_penarikan);
    if (saldo - jumlah_penarikan < minimal_saldo){
        printf("Maaf, saldo tidak cukup untuk melakukan penarikan.\n");
    } else {
        saldo -= jumlah_penarikan;
        printf("Penarikan berhasil! Saldo anda sekarang adalah Rp. %d\n",saldo);
    }
}

void menu(){
    printf("ATM\n");
    printf("1) Cek Saldo\n");
    printf("2) Setoran\n");
    printf("3) Penarikan Tunai\n");
    printf("4) Exit\n");
    int opsi;
    printf("Masukkan pilihan Anda: ");
    scanf("%d",&opsi);

    if (opsi == 1){
        cek_saldo();
    } else if (opsi == 2){
        setoran();
    } else if (opsi == 3){
        penarikan();
    } else if (opsi == 4){
        printf("Terimakasih telah menggunakan layanan ATM.\n");
        
    } else {
        printf("Pilihan tidak valid. Silahkan pilih kembali.\n");
    }
}

int main(){
    printf("Selamat datang di ATM\n");
    printf("Nomor rekening: %s\n",rekening);
    printf("Nama akun: %s\n",nama);
    while (1) {
        menu();
    }

    return 0;
}

