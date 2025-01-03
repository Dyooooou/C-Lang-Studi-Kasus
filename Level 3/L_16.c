// Buatlah program untuk memeriksa apakah sebuah blok yang ada di permainan sudoku valid atau tidak. Blok tersebut dinyatakan valid jika setiap angka hanya muncul satu kali (unik).

// Spesifikasi Input

// Tiga baris berisi elemen-elemen dari blok sudoku, di mana setiap elemen merupakan bilangan bulat yang dipisahkan oleh spasi dalam satu barisnya.

// Spesifikasi Output

// Satu baris berisi “valid” jika blok sudoku valid, atau “tidak valid” jika blok sudoku tidak valid.

// For example:

// Input	Result
// 1 3 9
// 2 5 7
// 8 4 6
// valid
// 1 2 3
// 4 5 6
// 1 8 9
// tidak valid

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

