#include <stdio.h>

int main() {

    /*Kasus: Buatlah sebuah program untuk menghitung gaji karyawan berdasarkan jam kerja yang dimasukkan.
    Program harus meminta pengguna untuk memasukkan jumlah jam kerja, tarif per jam,
    dan tunjangan lainnya. Program kemudian menghitung dan menampilkan gaji total karyawan.*/


    float jamKerja, tarifPerJam, tunjanganLainnya, gajiTotal;

    // Meminta input jumlah jam kerja, tarif per jam, dan tunjangan
    printf("Masukkan jumlah jam kerja dalam sebulan: ");
    scanf("%f", &jamKerja);

    printf("Masukkan tarif per jam (dalam satuan mata uang): ");
    scanf("%f", &tarifPerJam);

    printf("Masukkan tunjangan lainnya (dalam satuan mata uang): ");
    scanf("%f", &tunjanganLainnya);

    // Menghitung gaji total
    gajiTotal = (jamKerja * tarifPerJam) + tunjanganLainnya;

    // Menampilkan hasil gaji total
    printf("\nGaji total karyawan adalah: %.2f\n", gajiTotal);

    return 0;
}

