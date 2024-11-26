#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9
#define SUBGRIDSIZE 3

// Fungsi untuk mencetak papan Sudoku
void printBoard(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0)
                printf(". ");
            else
                printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Fungsi untuk mengecek apakah angka bisa dimasukkan pada posisi tertentu
int isSafe(int board[SIZE][SIZE], int row, int col, int num) {
    // Mengecek baris
    for (int x = 0; x < SIZE; x++) {
        if (board[row][x] == num)
            return 0;
    }

    // Mengecek kolom
    for (int x = 0; x < SIZE; x++) {
        if (board[x][col] == num)
            return 0;
    }

    // Mengecek sub-grid 3x3
    int startRow = row - row % SUBGRIDSIZE, startCol = col - col % SUBGRIDSIZE;
    for (int i = 0; i < SUBGRIDSIZE; i++) {
        for (int j = 0; j < SUBGRIDSIZE; j++) {
            if (board[i + startRow][j + startCol] == num)
                return 0;
        }
    }

    return 1;
}

// Fungsi untuk mengisi papan Sudoku secara rekursif
int solveSudoku(int board[SIZE][SIZE]) {
    int row, col;

    // Mencari posisi kosong
    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            if (board[row][col] == 0)
                goto foundEmpty;
        }
    }

    return 1; // Sudoku sudah selesai

foundEmpty:

    // Mencoba angka 1-9
    for (int num = 1; num <= SIZE; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;

            if (solveSudoku(board))
                return 1;

            board[row][col] = 0;
        }
    }

    return 0; // Tidak ada solusi
}

// Fungsi untuk menghapus angka secara acak dan memberikan tantangan
void removeNumbers(int board[SIZE][SIZE], int removeCount) {
    int removed = 0;
    srand(time(NULL));

    while (removed < removeCount) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;

        if (board[row][col] != 0) {
            board[row][col] = 0;
            removed++;
        }
    }
}

// Fungsi untuk menghasilkan papan Sudoku acak
void generatePuzzle(int board[SIZE][SIZE], int removeCount) {
    int solution[SIZE][SIZE] = {0};

    // Mengisi papan dengan solusi yang valid
    solveSudoku(solution);

    // Menyalin solusi ke papan tantangan
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = solution[i][j];
        }
    }

    // Menghapus angka secara acak untuk membuat tantangan
    removeNumbers(board, removeCount);
}

int main() {
    int board[SIZE][SIZE] = {0};
    int removeCount = 40; // Jumlah angka yang dihapus untuk tantangan

    // Generate puzzle acak
    generatePuzzle(board, removeCount);

    // Menampilkan papan Sudoku
    printf("Sudoku Puzzle:\n");
    printBoard(board);

    // Memasukkan angka untuk mengisi papan
    int row, col, num;
    while (1) {
        printf("Masukkan baris (0-8), kolom (0-8), dan angka (1-9) untuk mengisi: ");
        scanf("%d %d %d", &row, &col, &num);

        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) {
            printf("Indeks tidak valid! Masukkan nilai antara 0-8.\n");
            continue;
        }

        if (board[row][col] != 0) {
            printf("Posisi ini sudah terisi! Coba posisi lain.\n");
            continue;
        }

        if (isSafe(board, row, col, num)) {
            board[row][col] = num;
            printBoard(board);

            // Mengecek apakah puzzle sudah selesai
            int completed = 1;
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    if (board[i][j] == 0) {
                        completed = 0;
                        break;
                    }
                }
            }

            if (completed) {
                printf("Selamat! Anda telah menyelesaikan Sudoku!\n");
                break;
            }
        } else {
            printf("Angka tidak valid di posisi tersebut.\n");
        }
    }

    return 0;
}

