// Buatlah program untuk menghitung hasil penjumlahan matriks A dan matriks B, dengan A dan B berordo 3 × 3.

// Spesifikasi Input


// Tiga baris pertama berisi elemen-elemen matriks A.

// Tiga baris selanjutnya berisi elemen-elemen matriks B.
// Spesifikasi Output

// Tiga baris berisi elemen-elemen matriks hasil penjumlahan A + B, di mana elemen-elemen pada setiap baris dipisahkan oleh satu spasi.



// For example:

// Input	Result
// 1 0 0
// 0 1 0
// 0 0 1
// 0 0 1
// 0 1 0
// 1 0 0
// 1 0 1
// 0 2 0
// 1 0 1

#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];

    // Input elemen-elemen matriks A
    printf("Masukkan elemen-elemen matriks A (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elemen-elemen matriks B
    printf("Masukkan elemen-elemen matriks B (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Penjumlahan matriks A dan B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Output hasil penjumlahan
    printf("Hasil penjumlahan matriks A + B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

