// Buatlah sebuah program untuk menghitung selisih dari nilai terbesar dan nilai terkecil dari sebuah array 1 dimensi bertipe integer dengan 10 elemen.

// Spesifikasi Input

// Satu baris berisi 10 buah bilangan integer.

// Spesifikasi Output

// Satu baris berisi bilangan bulat yang menyatakan selisih dari nilai terbesar dan nilai terkecil dari array tersebut.

// For example:

// Input	Result
// 0 1 2 3 4 5 6 7 8 9
// 9
// 12 104 6 90 98 16 20 14 16 200
// 194

#include <stdio.h>

int main() {
    int arr[10];
    int max, min;

    // Input 10 bilangan bulat
    printf("Masukkan 10 bilangan bulat:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Inisialisasi nilai maksimum dan minimum
    max = arr[0];
    min = arr[0];

    // Mencari nilai maksimum dan minimum
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Hitung selisih
    int difference = max - min;

    // Output hasil
    printf("Selisih nilai terbesar dan terkecil: %d\n", difference);

    return 0;
}

