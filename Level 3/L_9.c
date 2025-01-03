// Buatlah sebuah program untuk menghitung banyaknya kemunculan bilangan ganjil pada array X, di mana X adalah array 2 dimensi berordo 4 × 4.

// Spesifikasi Input

// Empat baris masing-masing berisi empat bilangan bulat positif untuk mengisi array X.

// Spesifikasi Output

// Satu baris berisi jumlah bilangan ganjil yang ada di array X.

// For example:

// Input	Result
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
// 8
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// 16
#include <stdio.h>

int main() {
    int X[4][4]; // Array 2 dimensi berukuran 4x4
    int odd_count = 0; // Variabel untuk menghitung bilangan ganjil

    // Input elemen-elemen array X
    printf("Masukkan elemen-elemen array 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &X[i][j]);
        }
    }

    // Hitung jumlah bilangan ganjil
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (X[i][j] % 2 != 0) { // Cek apakah elemen ganjil
                odd_count++;
            }
        }
    }

    // Output hasil
    printf("%d\n", odd_count);

    return 0;
}

