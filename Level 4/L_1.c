// Buatlah program untuk membuat pola seperti pada contoh input dan contoh output.

// Spesifikasi Input

// Satu baris berisi satu buah bilangan bulat N (1 ≤ N ≤ 10).

// Spesifikasi Output

// Pola berukuran N × N dengan pola seperti pada contoh output.

// For example:

// Input	Result
// 5
// *
// * *
// * * *
// * * * *
// * * * * *

#include <stdio.h>

int main() {
    int block[3][3];
    int freq[10] = {0}; // Array untuk menghitung frekuensi angka 1-9
    int isValid = 1;    // Flag untuk mengecek validitas blok

    // Input elemen-elemen blok Sudoku
    printf("Masukkan elemen-elemen blok Sudoku 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &block[i][j]);
            // Periksa apakah angka berada di antara 1 dan 9
            if (block[i][j] < 1 || block[i][j] > 9) {
                isValid = 0; // Jika angka di luar rentang, blok tidak valid
            } else {
                freq[block[i][j]]++; // Hitung frekuensi angka
            }
        }
    }

    // Periksa apakah ada angka yang muncul lebih dari sekali
    for (int i = 1; i <= 9; i++) {
        if (freq[i] > 1) {
            isValid = 0;
            break;
        }
    }

    // Output hasil
    if (isValid) {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }

    return 0;
}
