#include <stdio.h>

int main() {

    /*Kasus: Buatlah program untuk menghitung transpose dari sebuah matriks.
    Program harus meminta ukuran matriks (baris dan kolom),
    kemudian meminta elemen-elemen matriks, dan menampilkan matriks transposenya.*/


    int m, n;  // m = jumlah baris, n = jumlah kolom

    // Meminta input ukuran matriks
    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &m);
    printf("Masukkan jumlah kolom matriks: ");
    scanf("%d", &n);

    // Mendeklarasikan matriks dan matriks transpose
    int matrix[m][n], transpose[n][m];

    // Meminta elemen-elemen matriks dari pengguna
    printf("Masukkan elemen-elemen matriks:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Masukkan elemen matriks[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Menghitung transpose matriks
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Menampilkan matriks awal
    printf("\nMatriks asli:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Menampilkan matriks transpose
    printf("\nMatriks transpose:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

