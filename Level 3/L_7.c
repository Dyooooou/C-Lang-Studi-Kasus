// Buatlah sebuah program untuk menghitung jumlah kemunculan titik yang berada di kuadran N dari M buah titik yang dimasukkan.

//  Gunakan tipe data bentukan komposit bernama Point sebagai berikut:

// typedef struct {
//   int x;
//   int y;
// } Point;
// Spesifikasi Input

// Baris pertama merupakan sebuah bilangan bulat M (1 ≤ M ≤ 10) yang menunjukkan jumlah titik.

//  M baris berikutnya merupakan M buah Point, terdiri dari dua bilangan bulat yang masing-masing menunjukkan koordinat di sumbu x dan y.

//  Baris terakhir merupakan sebuah bilangan bulat N (1 ≤ N ≤ 4) yang menunjukkan kuadran.

// Spesifikasi Output

// Satu baris berisi sebuah bilangan bulat yang menunjukkan jumlah kemunculan titik di kuadran N

// For example:

// Input	Result
// 3
// 1 4
// 2 1
// -4 -9
// 1
// 2
// 4
// -1 -1
// 1 3
// -1 2
// 4 -5
// 4
// 1

#include <stdio.h>

typedef struct {
    int x; // Koordinat x
    int y; // Koordinat y
} Point;

int main() {
    int M, N, count = 0;
    Point points[10];

    // Input jumlah titik
    printf("Masukkan jumlah titik (M): ");
    scanf("%d", &M);

    // Input koordinat titik
    printf("Masukkan koordinat tiap titik (x y):\n");
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    // Input kuadran yang diperiksa
    printf("Masukkan kuadran (N): ");
    scanf("%d", &N);

    // Hitung jumlah titik di kuadran N
    for (int i = 0; i < M; i++) {
        if (N == 1 && points[i].x > 0 && points[i].y > 0) {
            count++;
        } else if (N == 2 && points[i].x < 0 && points[i].y > 0) {
            count++;
        } else if (N == 3 && points[i].x < 0 && points[i].y < 0) {
            count++;
        } else if (N == 4 && points[i].x > 0 && points[i].y < 0) {
            count++;
        }
    }

    // Output hasil
    printf("%d\n", count);

    return 0;
}


