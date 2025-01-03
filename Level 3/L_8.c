// Diketahui array of Point bernama A dengan maksimal M elemen. Isilah array of Point bernama B dengan elemen-elemen dari A yang berada di kuadran N.

// Gunakan tipe data bentukan komposit bernama Point sebagai berikut:

// typedef struct {
//   int x;
//   int y;
// } Point;
// Spesifikasi Input

// Baris pertama merupakan sebuah bilangan bulat M (1 ≤ M ≤ 10) yang menunjukkan jumlah elemen pada array A.

// M baris berikutnya merupakan M buah Point yang merupakan elemen-elemen dari array A, terdiri dari dua bilangan bulat yang masing-masing menunjukkan koordinat di sumbu x dan y.

// Baris terakhir merupakan sebuah bilangan bulat N (1 ≤ N ≤ 4) yang menunjukkan kuadran.
// Spesifikasi Output


// Baris pertama berisi sebuah bilangan bulat yang menunjukkan jumlah kemunculan titik di kuadran N.

// N baris berikutnya berisi elemen-elemen dari array B.
// For example:

// Input	Result
// 3
// 1 4
// 2 1
// -4 -9
// 1
// 2
// 1 4
// 2 1
// 4
// -1 -1
// 1 3
// -1 2
// 4 -5
// 4
// 1
// 4 -5

#include <stdio.h>

typedef struct {
    int x; // Koordinat x
    int y; // Koordinat y
} Point;

int main() {
    int M, N, count = 0;
    Point A[10], B[10]; // Array A (input) dan B (output)

    // Input jumlah elemen pada array A
    printf("Masukkan jumlah elemen pada array A (M): ");
    scanf("%d", &M);

    // Input koordinat elemen-elemen array A
    printf("Masukkan elemen-elemen array A (x y):\n");
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &A[i].x, &A[i].y);
    }

    // Input kuadran yang diperiksa
    printf("Masukkan kuadran yang diperiksa (N): ");
    scanf("%d", &N);

    // Periksa elemen-elemen di array A dan masukkan ke array B jika berada di kuadran N
    for (int i = 0; i < M; i++) {
        if ((N == 1 && A[i].x > 0 && A[i].y > 0) ||
            (N == 2 && A[i].x < 0 && A[i].y > 0) ||
            (N == 3 && A[i].x < 0 && A[i].y < 0) ||
            (N == 4 && A[i].x > 0 && A[i].y < 0)) {
            B[count] = A[i];
            count++;
        }
    }

    // Output jumlah elemen di kuadran N
    printf("%d\n", count);

    // Output elemen-elemen array B
    for (int i = 0; i < count; i++) {
        printf("%d %d\n", B[i].x, B[i].y);
    }

    return 0;
}
