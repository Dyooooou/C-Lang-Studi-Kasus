// Buatlah program untuk menentukan nilai median dari sekelompok data integer pada array 1 dimensi dengan maksimal 20 elemen.

// Keterangan:

// ·        Sangat mungkin bahwa tidak semua elemen terisi.

// ·        0 (nol) tidak sama dengan kosong.

// Data dijamin selalu terurut dari kecil ke besar (ascending).

// Spesifikasi Input
// Baris pertama berisi sebuah bilangan bulat N.

// Baris kedua berisi N buah bilangan bulat yang merupakan data pada array, terurut ascending.

// Spesifikasi Output
// Satu baris berisi sebuah bilangan riil dengan satu angka di belakang koma yang menunjukkan nilai median dari N data yang dibaca.
// For example:

// Input	Result
// 5
// 0 1 2 3 4
// 2.0
// 4
// 22 23 40 50
// 31.5
#include <stdio.h>

int main() {
    int N;
    int arr[20];
    float median;

    // Input jumlah elemen array
    printf("Masukkan jumlah elemen (N): ");
    scanf("%d", &N);

    // Input elemen array
    printf("Masukkan %d elemen array (ascending):\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Menghitung median
    if (N % 2 == 1) {
        // Jika jumlah elemen ganjil, median adalah elemen tengah
        median = arr[N / 2];
    } else {
        // Jika jumlah elemen genap, median adalah rata-rata dua elemen tengah
        median = (arr[(N / 2) - 1] + arr[N / 2]) / 2.0;
    }

    // Output hasil
    printf("Median: %.1f\n", median);

    return 0;
}
