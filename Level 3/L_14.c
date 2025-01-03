// Matriks diagonal adalah matriks bujur sangkar yang semua elemen di luar diagonal utamanya bernilai nol, dan semua elemen pada diagonal utamanya bernilai tidak nol.

// Buatlah program untuk memeriksa apakah sebuah matriks M merupakan matriks diagonal atau bukan, di mana M adalah sebuah matriks dengan ordo 3 × 3
// Spesifikasi Input

// Tiga baris berisi elemen-elemen dari matriks M, di mana setiap elemen merupakan bilangan bulat yang dipisahkan oleh spasi dalam satu barisnya.

// Spesifikasi Output

// Satu baris berisi “matriks diagonal” jika matriks M merupakan matriks diagonal, atau “bukan matriks diagonal” jika matriks M bukan matriks diagonal.

// For example:

// Input	Result
// 1 0 0
// 0 2 0
// 0 0 3
// matriks diagonal
// 1 0 0
// 0 9 0
// 0 0 0
// bukan matriks diagonal

#include <stdio.h>

int main() {
    int M[3][3];
    int isDiagonal = 1; // Flag untuk mengecek apakah matriks adalah diagonal

    // Input elemen-elemen matriks
    printf("Masukkan elemen-elemen matriks 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Periksa apakah matriks adalah diagonal
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                // Elemen diagonal utama harus bernilai tidak nol
                if (M[i][j] == 0) {
                    isDiagonal = 0;
                    break;
                }
            } else {
                // Elemen di luar diagonal utama harus nol
                if (M[i][j] != 0) {
                    isDiagonal = 0;
                    break;
                }
            }
        }
        if (!isDiagonal) {
            break;
        }
    }

    // Output hasil
    if (isDiagonal) {
        printf("matriks diagonal\n");
    } else {
        printf("bukan matriks diagonal\n");
    }

    return 0;
}

