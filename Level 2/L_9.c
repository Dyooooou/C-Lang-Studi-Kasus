// Dalam matematika, bilangan prima adalah bilangan asli yang lebih besar dari angka 1, yang faktor pembaginya adalah 1 dan bilangan itu sendiri.

// Diketahui bilangan X dan Y, hitunglah selisih bilangan prima terbesar dan bilangan prima terkecil mulai dari X sampai Y.
// Spesifikasi Input

// Satu baris berisi dua buah bilangan positif X dan Y (2 ≤ X < Y ≤ 32.750). Pada jangkauan dari X sampai Y, dijamin ada minimal satu buah bilangan prima.

// Spesifikasi Output

// Satu baris berisi bilangan bulat yang menyatakan selisih bilangan prima terbesar dan bilangan prima terkecil mulai dari X sampai Y

// For example:

// Input	Result
// 2 10
// 5

#include <stdio.h>
#include <math.h>


int is_prime(int X) {
    if (X < 2) {
        return 0; // Bukan bilangan prima
    }
    for (int i = 2; i <= sqrt(X); i++) {
        if (X % i == 0) {
            return 0; // Bukan bilangan prima
        }
    }
    return 1; // Prima
}

int main() {
    int X, Y;
    int min_prime = -1, max_prime = -1;

    // Input bilangan X dan Y
    scanf("%d %d", &X, &Y);

    // Mencari bilangan prima terkecil dan terbesar
    for (int i = X; i <= Y; i++) {
        if (is_prime(i)) {
            if (min_prime == -1) {
                min_prime = i; // Simpan bilangan prima pertama (terkecil)
            }
            max_prime = i; // Terus perbarui bilangan prima terakhir (terbesar)
        }
    }

    // Output selisih antara bilangan prima terbesar dan terkecil
    printf("%d\n", max_prime - min_prime);

    return 0;
}
