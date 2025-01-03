// Anda diberikan dua buah matriks. Matriks pertama berukuran A × B sedangkan matriks kedua berukuran C × D. Tiap elemen pada kedua matriks tersebut adalah sebuah bilangan bulat antara 1 sampai 100. Kalikan kedua matriks tersebut lalu cetak hasilnya.

// Petunjuk:

// Dalam matematika, matriks A dan matriks B dapat diperkalikan. Syaratnya: jika ukuran matriks A adalah m × n, maka ukuran matriks B haruslah n × p. Matriks baru hasil perkalian, misalnya C, akan berukuran m × p. Rumus perkaliannya sebagai berikut (C[i,j] adalah elemen C pada baris ke-i dan kolom ke-j):





// Spesifikasi Input


// Baris pertama berisi dua buah bilangan bulat A dan B. A baris berikutnya masing-masing berisi B buah bilangan bulat, yaitu elemen-elemen pada matriks pertama.

// Baris berikutnya berisi dua buah bilangan bulat C dan D. C baris berikutnya masing-masing berisi D buah bilangan bulat, yaitu elemen-elemen pada matriks kedua.

// Jangkauan nilainya adalah (1 ≤ A, B, C, D ≤ 75; B = C).
// Spesifikasi Output

// A buah baris, masing-masing berisi D buah bilangan bulat yang dipisahkan oleh spasi, yaitu elemen-elemen pada matriks hasil perkalian matriks pertama dan matriks kedua.

#include <stdio.h>

int main() {
    int A, B, C, D;
    int matrixA[75][75], matrixB[75][75], matrixC[75][75];

    // Input ukuran matriks A dan B
    printf("Masukkan ukuran matriks A (A x B): ");
    scanf("%d %d", &A, &B);
    
    printf("Masukkan elemen-elemen matriks A:\n");
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Input ukuran matriks C dan D
    printf("Masukkan ukuran matriks B (C x D): ");
    scanf("%d %d", &C, &D);
    
    printf("Masukkan elemen-elemen matriks B:\n");
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < D; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Validasi jika perkalian matriks memungkinkan
    if (B != C) {
        printf("Perkalian matriks tidak memungkinkan.\n");
        return 1;
    }

    // Inisialisasi matriks hasil (matrixC) dengan nol
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < D; j++) {
            matrixC[i][j] = 0;
        }
    }

    // Perkalian matriks A dan B
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < D; j++) {
            for (int k = 0; k < B; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Output matriks hasil
    printf("Hasil perkalian matriks:\n");
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < D; j++) {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}

 