// Buatlah program untuk memeriksa apakah sebuah matriks M merupakan matriks nol atau bukan, di mana M adalah sebuah matriks dengan ordo 3 × 3.

// Spesifikasi Input

// Tiga baris berisi elemen-elemen dari matriks M, di mana setiap elemen merupakan bilangan bulat yang dipisahkan oleh spasi dalam satu barisnya.

// Spesifikasi Output

// Satu baris berisi “matriks nol” jika matriks M merupakan matriks nol, atau “bukan matriks nol” jika matriks M bukan matriks nol.

// For example:

// Input	Result
// 0 0 0
// 0 0 0
// 0 0 0
// matriks nol

#include <stdio.h>

int main() {
    int M[3][3];
    int isZeroMatrix = 1; // Flag untuk mengecek apakah matriks adalah nol

    // Input elemen-elemen matriks
    printf("Masukkan elemen-elemen matriks 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Periksa apakah semua elemen matriks bernilai nol
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (M[i][j] != 0) {
                isZeroMatrix = 0; // Jika ditemukan elemen bukan nol
                break;
            }
        }
        if (!isZeroMatrix) {
            break;
        }
    }

    // Output hasil
    if (isZeroMatrix) {
        printf("matriks nol\n");
    } else {
        printf("bukan matriks nol\n");
    }

    return 0;
}
