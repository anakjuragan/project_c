#include <stdio.h>

int main() {
    /*Kasus: Buatlah sebuah program yang dapat menghitung faktorial dari sebuah angka yang dimasukkan oleh pengguna.
    Program harus meminta pengguna untuk memasukkan angka, kemudian menghitung faktorial dari angka tersebut.*/


    int n;
    long long faktorial = 1;  // Menyimpan hasil faktorial

    // Meminta input dari pengguna
    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &n);

    // Memeriksa apakah angka negatif
    if (n < 0) {
        printf("Faktorial tidak dapat dihitung untuk angka negatif.\n");
    } else {
        // Menghitung faktorial
        for (int i = 1; i <= n; i++) {
            faktorial *= i;  // Mengalikan dengan setiap angka dari 1 hingga n
        }

        // Menampilkan hasil faktorial
        printf("Faktorial dari %d adalah: %lld\n", n, faktorial);
    }

    return 0;
}

