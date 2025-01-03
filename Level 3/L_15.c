// Buatlah program untuk memeriksa apakah sebuah matriks M merupakan matriks simetris, di mana M adalah sebuah matriks dengan ordo 3 × 3.

// Spesifikasi Input

// Tiga baris berisi elemen-elemen dari matriks M, di mana setiap elemen merupakan bilangan bulat yang dipisahkan oleh spasi dalam satu barisnya

// Spesifikasi Output

// Satu baris berisi “matriks simetris” jika matriks M merupakan matriks simetris, atau “bukan matriks simetris” jika matriks M bukan matriks simetris.

// For example:

// Input	Result
// 1 2 3
// 2 3 5
// 3 5 1
// matriks simetris
// 1 4 5
// 5 4 3
// 1 1 4
// bukan matriks simetris

#include <stdio.h>

int main() {
    int M[3][3];
    int isSymmetric = 1; // Flag untuk mengecek apakah matriks simetris

    // Input elemen-elemen matriks
    printf("Masukkan elemen-elemen matriks 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Periksa apakah matriks adalah simetris
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (M[i][j] != M[j][i]) {
                isSymmetric = 0; // Jika elemen tidak sama, bukan simetris
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Output hasil
    if (isSymmetric) {
        printf("matriks simetris\n");
    } else {
        printf("bukan matriks simetris\n");
    }

    return 0;
}

