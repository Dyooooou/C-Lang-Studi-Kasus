// Buatlah program untuk memeriksa posisi suatu titik terhadap lingkaran.

//  Gunakan tipe data bentukan komposit bernama Point sebagai berikut:

// typedef struct {
//    int x;
//    int y;
// } Point;
// Spesifikasi Input


// Baris pertama adalah sebuah Point yang menunjukkan titik pusat lingkaran, terdiri dari dua bilangan bulat yang masing-masing menunjukkan koordinat di sumbu x dan y.

// Baris kedua adalah sebuah bilangan bulat positif R yang menunjukkan jari-jari lingkaran.

// Baris ketiga adalah sebuah Point yang menunjukkan titik yang akan diperiksa posisinya terhadap lingkaran.
// Spesifikasi Output


// Satu baris berisi:

// “di luar lingkaran” jika Point yang diperiksa berada di luar lingkaran;
// “di dalam lingkaran” jika Point yang diperiksa berada di dalam lingkaran;
// “tepat pada lingkaran” jika Point yang diperiksa berada tepat pada lingkaran;
// tepat pada titik pusat” jika Point yang diperiksa berada tepat pada titik pusat lingkaran.
// For example:

// Input	Result
// 0 0
// 1
// 1 0
// tepat pada lingkaran
// 1 1
// 3
// 1 -1
// di dalam lingkaran

#include <stdio.h>
#include <math.h>

typedef struct {
    int x; // Koordinat x
    int y; // Koordinat y
} Point;

int main() {
    Point center, point;
    int radius;
    double distance;

    // Input titik pusat lingkaran
    printf("Masukkan koordinat titik pusat lingkaran (x y): ");
    scanf("%d %d", &center.x, &center.y);

    // Input jari-jari lingkaran
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%d", &radius);

    // Input titik yang akan diperiksa
    printf("Masukkan koordinat titik yang diperiksa (x y): ");
    scanf("%d %d", &point.x, &point.y);

    // Hitung jarak antara titik yang diperiksa dan pusat lingkaran
    distance = sqrt(pow(point.x - center.x, 2) + pow(point.y - center.y, 2));

    // Tentukan posisi titik
    if (point.x == center.x && point.y == center.y) {
        printf("tepat pada titik pusat\n");
    } else if (distance == radius) {
        printf("tepat pada lingkaran\n");
    } else if (distance < radius) {
        printf("di dalam lingkaran\n");
    } else {
        printf("di luar lingkaran\n");
    }

    return 0;
}

