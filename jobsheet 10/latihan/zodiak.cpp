#include <stdio.h>

// Definisikan struktur `Tanggal` untuk menyimpan informasi tanggal
struct Tanggal {
    int hari;
    int bulan;
    int tahun;
};

// Definisikan struktur `Zodiak` untuk menyimpan informasi tentang zodiak
struct Zodiak {
    const char* nama;
    struct Tanggal tanggal_mulai;
    struct Tanggal tanggal_selesai;
};

// Tetapkan jumlah zodiak yang ada
const int JUMLAH_ZODIAK = 12;

// Inisialisasi array `zodiak` dengan informasi zodiak-zodiak yang ada
const struct Zodiak zodiak[JUMLAH_ZODIAK] = {
    {"CAPRICORN", {22, 12, 0}, {19, 1, 0}},
    {"AQUARIUS", {20, 1, 0}, {18, 2, 0}},
    {"PISCES", {19, 2, 0}, {20, 3, 0}},
    {"ARIES", {21, 3, 0}, {19, 4, 0}},
    {"TAURUS", {20, 4, 0}, {20, 5, 0}},
    {"GEMINI", {21, 5, 0}, {20, 6, 0}},
    {"CANCER", {21, 6, 0}, {22, 7, 0}},
    {"LEO", {23, 7, 0}, {22, 8, 0}},
    {"VIRGO", {23, 8, 0}, {22, 9, 0}},
    {"LIBRA", {23, 9, 0}, {22, 10, 0}},
    {"SCORPIO", {23, 10, 0}, {21, 11, 0}},
    {"SAGITTARIUS", {22, 11, 0}, {21, 12, 0}}
};

// Fungsi untuk mencari zodiak berdasarkan tanggal lahir
struct Zodiak cariZodiak(struct Tanggal tanggal) {
    int i;
    for (i = 0; i < JUMLAH_ZODIAK; i++) {
        // Periksa apakah tanggal lahir berada dalam rentang tanggal zodiak saat ini
        if ((tanggal.bulan == zodiak[i].tanggal_mulai.bulan && tanggal.hari >= zodiak[i].tanggal_mulai.hari) ||
            (tanggal.bulan == zodiak[i].tanggal_selesai.bulan && tanggal.hari <= zodiak[i].tanggal_selesai.hari)) {
            return zodiak[i];
        }
    }
    // Jika tidak ada zodiak yang cocok, maka kembalikan zodiak pertama (CAPRICORN)
    return zodiak[0];
}

int main() {
    struct Tanggal tanggal_lahir;
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tanggal_lahir.hari, &tanggal_lahir.bulan, &tanggal_lahir.tahun);

    // Cari zodiak berdasarkan tanggal lahir
    struct Zodiak zodiak = cariZodiak(tanggal_lahir);
    printf("Zodiak Anda adalah : %s\n", zodiak.nama);

    return 0;
}
