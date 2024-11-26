#include <stdio.h>

int main() {

    /*Kasus: Buatlah sebuah program yang dapat mencari nilai terbesar dan terkecil dari sejumlah angka yang dimasukkan oleh pengguna.
    Program harus meminta pengguna untuk memasukkan jumlah angka yang ingin dimasukkan,
    kemudian meminta angka-angka tersebut satu per satu dan akhirnya menampilkan angka terbesar dan terkecil.*/


    int n;  // Menyimpan jumlah angka yang dimasukkan
    int angka;  // Variabel untuk menyimpan angka yang dimasukkan pengguna
    int terbesar, terkecil;  // Variabel untuk menyimpan nilai terbesar dan terkecil

    // Meminta input jumlah angka yang ingin dimasukkan
    printf("Masukkan jumlah angka yang akan dimasukkan: ");
    scanf("%d", &n);

    // Memastikan jumlah angka yang dimasukkan lebih besar dari 0
    if (n <= 0) {
        printf("Jumlah angka harus lebih besar dari 0.\n");
        return 1;
    }

    // Meminta input angka pertama untuk inisialisasi
    printf("Masukkan angka 1: ");
    scanf("%d", &angka);

    // Menyimpan angka pertama sebagai nilai terbesar dan terkecil sementara
    terbesar = terkecil = angka;

    // Meminta input angka-angka selanjutnya dan menghitung nilai terbesar dan terkecil
    for (int i = 2; i <= n; i++) {
        printf("Masukkan angka %d: ", i);
        scanf("%d", &angka);

        // Menentukan nilai terbesar
        if (angka > terbesar) {
            terbesar = angka;
        }

        // Menentukan nilai terkecil
        if (angka < terkecil) {
            terkecil = angka;
        }
    }

    // Menampilkan hasil nilai terbesar dan terkecil
    printf("\nNilai terbesar adalah: %d\n", terbesar);
    printf("Nilai terkecil adalah: %d\n", terkecil);

    return 0;
}

