// Buatlah program untuk mengurutkan tiga data integer yang dimasukkan secara descending (dari besar ke kecil).

// Spesifikasi Input

// Satu baris berisi tiga buah bilangan bulat. Masing-masing bilangan bulat memiliki jangkauan nilai -300 ≤ data ≤ 300.

// Spesifikasi Output

// Satu baris berisi tiga buah bilangan bulat yang sudah terurut secara descending, dipisahkan oleh satu spasi.

// For example:

// Input	Result
// 5 8 6
// 8 6 5

#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Input tiga bilangan
    scanf("%d %d %d", &a, &b, &c);

    // Mengurutkan secara descending
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Output hasil
    printf("%d %d %d\n", a, b, c);

    return 0;
}
