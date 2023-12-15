<h1 align="center">LAPORAN PRAKTIKUM ALGORITMA dan PEMOROGRAMAN</h1>
<h1 align="center">=====================================</h1>

**NAMA : HASANUL FIKRI**                      
                                                       
**NIM : 23343040**                            
                                                       
**JURUSAN : INFORMATIKA**                     
                                                       
**UNIVERSITAS NEGERI PADANG**                 
                                                       
<h1 align="center">=====================================</h1>

![Header](https://github.com/piks16/jobsheet/blob/main/github-header-image%20(1).png)
   <h1 style="color:blue;">1. Pengantar Algoritma dan Pemrograman</h1>
  algoritma dijelaskan sebagai serangkaian langkah yang sistematis dan logis untuk menyelesaikan masalah atau mencapai tujuan tertentu. Terdapat penekanan pada ciri-ciri penting algoritma, seperti keterbatasan langkah, definisi yang jelas, masukan, keluaran, efektivitas, dan keterstrukturan.

**Pemrograman** dijelaskan sebagai proses penulisan, pengujian, perbaikan, dan pemeliharaan kode yang dapat dipahami oleh komputer. Hal ini melibatkan pemahaman tentang algoritma, bahasa pemrograman, dan pembuatan program. Coding dan programming dibedakan dengan coding sebagai bagian dari programming yang juga melibatkan analisis, konseptualisasi, implementasi algoritma, dan pemecahan masalah.

**Bahasa pemrograman C** diperkenalkan sebagai bahasa yang mendukung pemrograman terstruktur dan rekursif. Materi juga membahas sejarah serta versi-versi dari bahasa C, serta manfaat belajar bahasa C seperti kemampuan untuk memahami bahasa pemrograman lainnya, portabilitas, dan fleksibilitas.

**Pengenalan IDE** (Integrated Development Environment) dijelaskan sebagai perangkat lunak yang membantu programmer dalam menulis, menguji, dan menjalankan program dalam satu aplikasi. Ada pula penjelasan tentang persiapan dalam pemrograman C, termasuk instalasi IDE dan compiler.

**Kesimpulan** dari materi ini adalah pentingnya pemahaman tentang algoritma sebagai dasar dalam pemrograman, perbedaan antara coding dan programming, serta pengenalan bahasa pemrograman C sebagai landasan untuk memahami bahasa pemrograman lainnya. Materi ini memberikan gambaran tentang bagaimana memulai pemrograman dengan bahasa C, serta pentingnya IDE dalam proses pengembangan perangkat lunak.

 <h1 style="color:blue;">2. Pemrograman Dasar C</h1>
  Materi ini menguraikan struktur dasar pemrograman dalam bahasa C, fokus pada sintaks dasar, proses input, dan output.

**Sintaks Dasar C**

**Header Files**: `#include` digunakan untuk mengimpor file header yang berisi definisi fungsi yang diperlukan dalam program.

**Main Function**: Fungsi utama dalam setiap program C adalah `main()`. Isi dari fungsi ini diawali dan diakhiri dengan kurung kurawal {}. Fungsi ini dieksekusi pertama kali saat program dijalankan.

**Statement**: Perintah atau fungsi untuk melakukan sesuatu. Setiap statement diakhiri dengan titik koma (;).

**Semicolons**: Tanda ini menandakan berakhirnya sebuah perintah atau statement dalam program.

**Identifier**: Nama yang digunakan untuk mengidentifikasi variabel, fungsi, atau item lain dalam program. Memiliki aturan penulisan yang harus diikuti.

**Comments**: Komentar dalam kode program, digunakan untuk memberikan deskripsi atau dokumentasi pada bagian program. Ada komentar satu baris (//) dan komentar lebih dari satu baris (/* ... */).

**Whitespaces**: Spasi, tab, atau karakter kosong lainnya untuk memisahkan elemen dalam sebuah statement.


**Proses Input & Output**

**Input**: Data yang dimasukkan ke dalam program, bisa berasal dari keyboard, mouse, atau perangkat input lainnya.

**Proses:** Langkah-langkah yang dilakukan program untuk menghasilkan output.

**Output:** Informasi yang dihasilkan setelah proses, biasanya ditampilkan ke layar komputer.


**Fungsi Input & Output dalam C**

**printf():** Menampilkan output ke layar komputer dengan format tertentu menggunakan format specifier (%s, %d, \n, dll.).

**puts():** Menampilkan output tanpa format dan selalu membuat baris baru.

**putchar():** Menampilkan satu karakter saja.

**scanf():** Mengambil input dari keyboard dengan format tertentu, membutuhkan simbol & sebelum nama variabel.

**gets():** Mengambil input dalam satu baris, namun tidak disarankan karena dapat menyebabkan masalah buffer overflow.

**fgets():** Lebih aman dari gets(), memungkinkan untuk menentukan ukuran buffer dan sumber inputan.

<h1 style="color:blue;">3. Variabel, Konstanta dan Tipe Data</h1>
 
**Variabel & Konstanta**

**Variabel:** Tempat penyimpanan nilai dalam program. Dibutuhkan untuk menyimpan nilai sementara dengan tipe data tertentu.

**Aturan Penulisan Variabel:** Beberapa aturan seperti tidak diawali dengan simbol/angka, tidak menggunakan kata kunci yang sudah ada di C, serta case sensitive.

**Tipe Data Dasar:** Char (huruf/karakter), Integer (angka), Float (bilangan pecahan), Double (bilangan pecahan dengan presisi lebih tinggi).

**Tipe Data Void:** Menyatakan tidak ada data.


**Tipe Data & Konversi**

**Tipe Data:** Penentu jenis data dalam variabel, misalnya char untuk karakter, int untuk bilangan bulat, float/double untuk bilangan pecahan.

**Format Specifier:** Digunakan untuk mencetak output dengan format tertentu, seperti %.2f untuk menampilkan angka pecahan dengan dua angka di belakang koma.

**Konversi Tipe Data (Type Casting):** Proses mengubah tipe data menjadi tipe yang lain, serupa dengan mengubah air menjadi es agar bisa disimpan dalam kardus.


**Konstanta**
**Konstanta:** Nilai tetap yang tidak dapat diubah. Dibuat dengan #define atau menggunakan const, disarankan menggunakan huruf kapital untuk penamaan konstanta.


**Penekanan Penting**

**Aturan Penulisan:** Penting untuk memahami aturan penamaan variabel dan konstanta dalam C.

**Tipe Data dan Format Specifier:** Format specifier sangat penting dalam mencetak output dengan tipe data tertentu.

**Type Casting:** Perlu memperhatikan perubahan tipe data agar tidak kehilangan presisi atau mendapatkan hasil yang tidak diinginkan.

<h1 style="color:blue;">4. Operator</h1>

**Jenis Operator:**
  
**Unary, Binary, Ternary:** Berdasarkan jumlah operand.

**Aritmatika:** Operator untuk operasi matematika seperti penjumlahan, pengurangan, perkalian, pembagian, dan sisa bagi.

**Penugasan:** Operator untuk memberikan nilai kepada variabel.

**Pembanding:** Operator untuk membandingkan dua nilai.

**Logika:** Operator untuk operasi logika seperti AND, OR, dan negasi.

**Bitwise:** Operasi berbasis bit (biner) seperti AND, OR, XOR, dan shift bit.

**Lain-lain:** Alamat memori, pointer, ternary, increment, decrement.


**Poin Penting**

**Operator Aritmatika:** Perlu memperhatikan tipe data agar hasil operasi sesuai.

**Operator Penugasan:** Mengisi nilai variabel dengan operasi tertentu.

**Operator Pembanding:** Membandingkan dua nilai dan menghasilkan nilai boolean.

**Operator Logika:** Digunakan untuk membuat operasi logika seperti AND, OR, dan negasi.

**Operator Bitwise:** Beroperasi berdasarkan bit (biner) dari nilai numerik.

**Operator Increment/Decrement:** Menambah atau mengurangi nilai variabel dengan 1..

<h1 style="color:blue;">5. Flow Control(Decision making)</h1>
   Pengambilan keputusan dalam pemrograman memungkinkan program untuk melakukan operasi yang berbeda tergantung pada kondisi tertentu. Dalam bahasa pemrograman C, ada beberapa jenis pernyataan percabangan yang memungkinkan untuk mengubah alur eksekusi program. Berikut adalah jenis-jenis pernyataan percabangan yang umum digunakan:

   **1. If Statement**
Percabangan if adalah pernyataan yang digunakan untuk melakukan pengujian kondisi tunggal. Jika kondisi tersebut benar (true), maka blok kode di dalam if akan dieksekusi. Jika tidak, blok kode tersebut akan dilewati.

```c
if (kondisi) {
    // Blok kode yang akan dieksekusi jika kondisi benar
}
```

   **2. If Else Statement**
      
Percabangan if/else memungkinkan untuk mengeksekusi blok kode yang berbeda tergantung pada hasil dari kondisi yang diuji. Jika kondisi benar, blok kode dalam if akan dieksekusi. Jika kondisi salah, blok kode dalam else akan dieksekusi.

```c

if (kondisi) {
    // Blok kode yang akan dieksekusi jika kondisi benar
} else {
    // Blok kode yang akan dieksekusi jika kondisi salah
}
```
   **3. If Else If Statement**
   
Percabangan if/else if/else digunakan saat ada beberapa kondisi yang harus diuji secara berturut-turut. Setiap kondisi diuji secara berurutan sampai satu kondisi benar, kemudian blok kode yang sesuai akan dieksekusi.

```c
if (kondisi1) {
    // Blok kode jika kondisi1 benar
} else if (kondisi2) {
    // Blok kode jika kondisi2 benar
} else {
    // Blok kode jika tidak ada kondisi yang memenuhi
}
```
  **4. Switch Case Statement**
    
Percabangan switch case digunakan saat terdapat banyak kondisi yang mungkin terjadi berdasarkan nilai yang berbeda dari satu variabel atau ekspresi. Program akan mengevaluasi ekspresi dan mengeksekusi blok kode yang sesuai dengan nilai yang cocok dengan kasus tertentu.
```c
switch (nilai) {
    case nilai1:
        // Blok kode jika nilai sama dengan nilai1
        break;
    case nilai2:
        // Blok kode jika nilai sama dengan nilai2
        break;
    default:
        // Blok kode jika tidak ada kasus yang cocok
}
```
   **5. Percabangan Operator Ternary**
   
Operator ternary adalah cara singkat untuk menulis percabangan if/else dalam satu baris. Ini digunakan ketika hanya ada dua kemungkinan hasil dari kondisi.

```c
variabel = (kondisi) ? ekspresi_jika_true : ekspresi_jika_false;
```
**Poin Penting**

Percabangan memungkinkan penentuan aliran eksekusi program berdasarkan kondisi yang diberikan.

Masing-masing pernyataan percabangan memiliki kegunaannya sendiri, tergantung pada kompleksitas kondisi dan kebutuhan program.

Dengan menggunakan percabangan, program dapat mengeksekusi berbagai operasi atau memilih jalur yang berbeda berdasarkan kondisi tertentu.

<h1 style="color:blue;">6. Flow Control (Looping)</h1>

   **1. Konsep Looping:**
   Looping atau perulangan adalah fitur yang memungkinkan eksekusi ulang sejumlah kode berulang kali sampai kondisi tertentu tercapai. Ini mengurangi redundansi kode dan memungkinkan pemrosesan yang efisien.
 
   **2. Jenis-jenis Perulangan:**
   **Counted Loop:**
   For Loop: Digunakan ketika iterasi yang pasti atau terhitung dibutuhkan. Ini melibatkan inisialisasi, kondisi pengulangan, dan iterasi.
   
   **Uncounted Loop:**
   While Loop: Menjalankan iterasi selama kondisi terpenuhi. Kondisi diperiksa sebelum masuk ke dalam loop.
   Do While Loop: Menjamin setidaknya satu iterasi dilakukan sebelum memeriksa kondisi. Kondisi diperiksa setelah satu iterasi selesai.
   
   **3. Implementasi Masing-masing Perulangan:**

   **For Loop:**
   Memulai dengan inisialisasi variabel.
   Melakukan iterasi selama kondisi terpenuhi.
   Memperbarui nilai variabel dalam setiap iterasi.
   
   **While Loop:**
   Memeriksa kondisi sebelum setiap iterasi.
   Jika kondisi terpenuhi, loop akan dijalankan.
   
   **Do While Loop:**
   Menjamin setidaknya satu iterasi dilakukan.
   Setelah iterasi, kondisi dicek untuk iterasi berikutnya.
   
   **4. Nested Loop (Perulangan Bersarang):**
   Merupakan penggunaan lebih dari satu loop di dalam loop lain.
   Berguna untuk masalah yang memerlukan iterasi dalam iterasi, seperti operasi matriks, pencarian pola, dll.
<h1 style="color:blue;">7. Array</h1>

  **Array** adalah struktur data penting dalam pemrograman yang memungkinkan penyimpanan dan pengolahan sekumpulan data dalam satu tempat. Beberapa poin kunci yang perlu diperhatikan tentang array:

**Pengertian Array:** Array digunakan untuk menyimpan data dalam jumlah besar dengan cara yang efisien. Setiap elemen dalam array memiliki indeks yang dimulai dari 0, memungkinkan akses data dengan mudah.

**Membuat Array:** Array dibuat dengan menentukan panjangnya menggunakan kurung siku []. Penggunaan array mirip dengan variabel biasa dalam hal deklarasi.

**Mengakses Data Array:** Akses data dalam array dilakukan dengan menggunakan indeks. Indeks dimulai dari 0. Misalnya, `array[2]` merujuk pada elemen ketiga dalam array.

**Manipulasi Data pada Array:** Data dalam array dapat diubah dengan mengganti nilai pada indeks tertentu, misalnya `array[2] = 'z'.`

**Penggunaan Perulangan dengan Array:** Perulangan sangat berguna saat bekerja dengan array yang memiliki banyak elemen. Contoh penggunaan perulangan for untuk mengakses dan memproses data dalam array.

**Mengambil Panjang Array:** Fungsi `sizeof()` digunakan untuk mengambil panjang atau ukuran array. Ini memungkinkan penggunaan array yang lebih dinamis.

**Array Multidimensi:** Array tidak hanya satu dimensi, tetapi juga dapat dua dimensi atau lebih. Array dua dimensi sering digunakan untuk representasi matriks.

**Fungsi String:** Dalam bahasa C, beberapa fungsi dasar seperti `strcpy()`, `strcat()`, `strlen()`, dan `strcmp()` membantu dalam manipulasi string.

<h1 style="color:blue;">8. Fungsi dan Prosedur</h1>

  **Fungsi** adalah blok kode yang dapat dipanggil secara berulang untuk menjalankan tugas tertentu. Fungsi main() adalah fungsi yang pertama kali dieksekusi dalam program.
Contoh:

```c
#include <stdio.h>

// Fungsi sederhana
void sayHello() {
    printf("Hello, world!\n");
}

int main() {
    sayHello(); // Memanggil fungsi sayHello
    return 0;
}
```
**Parameter** dalam Fungsi memungkinkan kita mengirim nilai ke dalam fungsi. Parameter digunakan untuk menerima nilai yang akan diolah di dalam fungsi.
Contoh:
```c
#include <stdio.h>

// Fungsi dengan parameter
void greetUser(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    char userName[] = "Alice";
    greetUser(userName); // Memanggil fungsi greetUser dengan parameter
    return 0;
}
```
**Fungsi yang Mengembalikan Nilai menggunakan `return` untuk mengembalikan nilai hasil dari operasi dalam fungsi.**
Contoh:
```c
#include <stdio.h>

// Fungsi yang mengembalikan nilai
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 5); // Memanggil fungsi add dan menyimpan hasilnya
    printf("Hasil penjumlahan: %d\n", result);
    return 0;
}
```
**Fungsi Rekursif** adalah fungsi yang memanggil dirinya sendiri untuk menyelesaikan masalah secara iteratif.
Contoh:
```c
#include <stdio.h>

// Fungsi rekursif untuk menghitung faktorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    int result = factorial(num); // Memanggil fungsi rekursif
    printf("Faktorial dari %d adalah %d\n", num, result);
    return 0;
}
```
<h1 style="color:blue;">9.Pointer</h1>

**Pengertian Pointer:** Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Alamat memori memungkinkan akses dan manipulasi data secara efisien.

**Menggunakan Pointer:** Pointer didefinisikan dengan simbol asterik (*) di depan nama variabelnya. Contohnya, `int *pointer_umur;` adalah pointer yang bisa menyimpan alamat memori variabel bertipe integer.

**Mengakses Alamat Memori:** Alamat memori variabel bisa diperoleh dengan menggunakan operator `&`. Contohnya, `&nilai` akan memberikan alamat memori dari variabel nilai.

**Pass by Reference dengan Pointer:** Untuk melakukan pass by reference (pemindahan argumen dengan referensi), pointer digunakan agar perubahan nilai variabel bisa dilakukan secara global, bukan hanya secara lokal di dalam fungsi.

**Mengakses Array dengan Pointer:** Pointer sering digunakan untuk mengakses dan memanipulasi elemen-elemen dalam array. Dengan pointer, kita bisa menggeser pointer dari elemen satu ke elemen lain dalam array.

<h1 style="color:blue;">10. Enumerasi dan Structure</h1>   

**Enum (Enumerasi):** Enum merupakan tipe data yang memuat kumpulan konstanta yang sudah ditentukan sebelumnya. Ini memungkinkan definisi konstanta semantik yang bermakna dalam program.

**Penggunaan Enum:** Enum bisa digunakan untuk membuat kode lebih deskriptif dan mudah dipahami. Contohnya adalah penggunaan enum untuk merepresentasikan hari dalam seminggu.

**Penggunaan Struct (Struktur):** Struct adalah kumpulan variabel dengan tipe data yang berbeda yang digabungkan dalam satu variabel, memungkinkan representasi data yang lebih kompleks dan terstruktur.

**Kegunaan Struct:** Struct membantu mengelola dan merepresentasikan data dengan lebih terstruktur, terutama saat data memiliki banyak elemen yang berbeda. Misalnya, untuk menyimpan data mahasiswa dengan atribut seperti NPM, nama, tanggal lahir, alamat, dan nomor HP.

**Penggunaan typedef pada Struct:** Typedef memungkinkan pembuatan nama tipe data baru untuk struktur tertentu, membuat kode lebih mudah dipahami dan dikelola.

**Struct Bersarang:** Struct dapat bersarang di dalam struct lainnya. Ini memungkinkan pembuatan hierarki data yang lebih kompleks, seperti struct yang merepresentasikan informasi terkait dalam struktur yang lebih besar.

**Passing Struct ke dalam Fungsi:** Struct bisa digunakan sebagai parameter fungsi, memungkinkan pengiriman dan penggunaan data yang terstruktur di antara fungsi-fungsi dalam program.

Penggunaan **Enum** dan **Struct** membantu dalam pembuatan program yang lebih terstruktur, lebih mudah dimengerti, dan memungkinkan representasi data yang lebih bermakna. Mereka memungkinkan penyusunan data dalam bentuk yang lebih terorganisir, memudahkan pengelolaan data yang kompleks, dan memperkuat kualitas kode secara keseluruhan.

<h1 style="color:blue;">11. File Handling:</h1>
    
  **Fungsi-fungsi Utama:**
  
`fopen()`: Digunakan untuk membuka file dengan mode tertentu seperti baca, tulis, atau tambahkan data.

`fgets()`: Berguna untuk membaca baris dari file teks yang telah dibuka, menyimpannya ke dalam string yang ditentukan.

`fputs()`: Mengizinkan penulisan string ke dalam file yang telah dibuka. Menambahkan data pada akhir file atau menimpa isinya tergantung pada mode penggunaan.
Mode Penggunaan:

**Mode membuka file (r, w, a) menentukan cara file tersebut dibuka**. Penggunaan mode yang tepat sangat penting untuk operasi file yang benar.
File teks dan file biner memiliki mode pembukaan yang berbeda, seperti rb, wb, ab.

**Looping dan Pengelolaan Isi File:**

**Penggunaan loop (seperti while atau for)** penting saat membaca atau menulis file dengan banyak baris. Ini memungkinkan pembacaan atau penulisan baris demi baris secara efisien.

**Penanganan Kesalahan:**
Penggunaan mode yang salah saat membuka file atau menulis ke dalamnya dapat menghasilkan kesalahan atau bahkan kehilangan data.
