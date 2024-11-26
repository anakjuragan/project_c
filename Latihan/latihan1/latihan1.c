#include <stdio.h>

int main() {

    /*Kasus: Buatlah sebuah program yang dapat menghitung rata-rata dari beberapa nilai ujian yang dimasukkan oleh pengguna.
    Program harus meminta pengguna untuk memasukkan jumlah nilai yang ingin dihitung,
    kemudian meminta nilai-nilai tersebut satu per satu, dan akhirnya menampilkan rata-rata nilai tersebut.*/


    int n;  // Menyimpan jumlah nilai yang akan dimasukkan
    float sum = 0.0;  // Menyimpan jumlah total nilai

    // Meminta input jumlah nilai
    printf("Masukkan jumlah nilai ujian yang akan dihitung: ");
    scanf("%d", &n);

    // Memastikan jumlah nilai lebih besar dari 0
    if (n <= 0) {
        printf("Jumlah nilai harus lebih besar dari 0.\n");
        return 1;
    }

    // Meminta nilai-nilai ujian satu per satu dan menghitung jumlahnya
    for (int i = 1; i <= n; i++) {
        float value;
        printf("Masukkan nilai ujian ke-%d: ", i);
        scanf("%f", &value);

        sum += value;  // Menambahkan nilai ke total sum
    }

    // Menghitung rata-rata
    float average = sum / n;

    // Menampilkan hasil rata-rata
    printf("Rata-rata nilai ujian adalah: %.2f\n", average);

    return 0;
}

