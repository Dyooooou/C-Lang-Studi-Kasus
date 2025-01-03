// Buatlah sebuah program untuk menentukan bilangan terbesar dari sepuluh bilangan yang ada di dalam array 1 dimensi bertipe integer.

// Spesifikasi Input

// Satu baris berisi 10 buah bilangan integer.

// Spesifikasi Output

// Satu baris berisi bilangan bulat yang menyatakan nilai maksimal dari array tersebut.

// For example:

// Input	Result
// 0 1 2 3 4 5 6 7 8 9
// 9
// 12 104 6 90 98 16 20 14 16 200
// 200

#include <stdio.h>

int main() {
    int arr[10];
    int max;

    // Input 10 bilangan bulat
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Inisialisasi nilai maksimum
    max = arr[0];

    // Mencari bilangan terbesar
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Output hasil
    printf("%d\n", max);

    return 0;
}

