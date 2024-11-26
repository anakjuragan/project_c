#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk melakukan penjumlahan
float tambah(float a, float b) {
    return a + b;
}

// Fungsi untuk melakukan pengurangan
float kurang(float a, float b) {
    return a - b;
}

// Fungsi untuk melakukan perkalian
float kali(float a, float b) {
    return a * b;
}

// Fungsi untuk melakukan pembagian
float bagi(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Kesalahan: Pembagian dengan nol!\n");
        return 0; // Menghindari pembagian dengan nol
    }
}

int main() {
    int pilihan;
    float num1, num2;
    char ulang;

    do {
        printf("Kalkulator Sederhana\n");
        printf("Pilih operasi:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("Masukkan pilihan (1/2/3/4): ");
        scanf("%d", &pilihan);

        printf("Masukkan dua angka: ");
        scanf("%f %f", &num1, &num2);

        switch(pilihan) {
            case 1:
                printf("Hasil: %.2f\n", tambah(num1, num2));
                break;
            case 2:
                printf("Hasil: %.2f\n", kurang(num1, num2));
                break;
            case 3:
                printf("Hasil: %.2f\n", kali(num1, num2));
                break;
            case 4:
                printf("Hasil: %.2f\n", bagi(num1, num2));
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }

        // Menghapus karakter newline yang tertinggal di buffer input
        getchar();

        printf("Ulangi program? (y/n): ");
        scanf("%c", &ulang);
        system("cls");


    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}
