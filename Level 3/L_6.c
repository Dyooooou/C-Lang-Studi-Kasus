// Buatlah program untuk memeriksa apakah array M dan N sama.

// M dan N adalah array of Point, masing-masing memiliki 5 elemen. Array M dan N dikatakan sama jika setiap elemen yang bersesuaian bernilai sama.

// Gunakan tipe data bentukan komposit bernama Point sebagai berikut:

// typedef struct {
//    int x;
//    int y;
// } Point;

// Spesifikasi Input


// Lima baris pertama berisi 5 elemen Point untuk array M, terdiri dari dua bilangan bulat yang masing-masing menunjukkan koordinat di sumbu x dan y.

// Lima baris kedua berisi 5 element Point untuk array N.
// Spesifikasi Output

// Satu baris berisi “sama” apabila array M dan N sama, atau “tidak sama” apabila array M dan N tidak sama.

// For example:

// Input	Result
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// sama
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 1
// 1 2
// 1 3
// 1 4
// 1 5
// tidak sama

#include <stdio.h>

typedef struct {
    int x; // Koordinat x
    int y; // Koordinat y
} Point;

int main() {
    Point M[5], N[5]; // Array M dan N masing-masing berisi 5 elemen
    int isSame = 1;   // Flag untuk menandai kesamaan (1 = sama, 0 = tidak sama)

    // Input untuk array M
    printf("Masukkan 5 elemen untuk array M (x y):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d %d", &M[i].x, &M[i].y);
    }

    // Input untuk array N
    printf("Masukkan 5 elemen untuk array N (x y):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d %d", &N[i].x, &N[i].y);
    }

    // Periksa kesamaan antara array M dan N
    for (int i = 0; i < 5; i++) {
        if (M[i].x != N[i].x || M[i].y != N[i].y) {
            isSame = 0; // Jika ada elemen yang tidak sama, ubah flag menjadi 0
            break;
        }
    }

    // Output hasil
    if (isSame) {
        printf("sama\n");
    } else {
        printf("tidak sama\n");
    }

    return 0;
}

