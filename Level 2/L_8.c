// Dalam matematika, bilangan prima adalah bilangan asli yang lebih besar dari angka 1, yang faktor pembaginya adalah 1 dan bilangan itu sendiri.

// Diketahui sebuah array A dengan 10 elemen, hitunglah ada berapa bilangan prima pada array A tersebut.
// Spesifikasi Input

// Satu baris berisi 10 bilangan bulat A1, A2, ..., A10 (0 ≤ Ai ≤ 32.750).

// Spesifikasi Output

// Satu baris berisi bilangan bulat yang menyatakan jumlah kemunculan bilangan prima pada array A.

// For example:

// Input	Result
// 0 1 2 3 4 5 6 7 8 9
// 4
// 12 4 6 0 9 8 6 20 14 16
// 0

#include <stdio.h>
#include <math.h>

// Fungsi untuk memeriksa apakah bilangan X adalah bilangan prima
int is_prime(int X) {
    if (X < 2) {
        return 0; // Bilangan kurang dari 2 bukan prima
    }
    for (int i = 2; i <= sqrt(X); i++) {
        if (X % i == 0) {
            return 0; // Bukan prima
        }
    }
    return 1; // Prima
}

int main() {
    int A[10];
    int count = 0;

    // Memasukkan 10 elemen array

    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    // Mengecek setiap elemen array apakah bilangan prima
    for (int i = 0; i < 10; i++) {
        if (is_prime(A[i])) {
            count++;
        }
    }

    // Menampilkan jumlah bilangan prima
    printf("%d\n", count);

    return 0;
}

