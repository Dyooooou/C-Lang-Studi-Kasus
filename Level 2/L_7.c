// Dalam matematika, bilangan prima adalah bilangan asli yang lebih besar dari angka 1, yang faktor pembaginya adalah 1 dan bilangan itu sendiri.

// Diketahui bilangan X, tentukanlah apakah X merupakan bilangan prima atau bukan.


// Spesifikasi Input

// Satu baris berisi bilangan bulat X (2 ≤ X ≤ 32.750).

// Spesifikasi Output

// Satu baris berisi “prima” apabila X merupakan bilangan prima, atau “bukan prima” apabila X bukan merupakan bilangan prima.

// For example:

// Input	Result
// 7
// prima
// 8
// bukan prima

#include <stdio.h>
#include <math.h>


int is_prime(int X) {
    if (X <= 1) {
        return 0; // Bukan bilangan prima
    }
    for (int i = 2; i <= sqrt(X); i++) {
        if (X % i == 0) {
            return 0; // Ditemukan pembagi selain 1 dan X
        }
    }
    return 1; // Bilangan prima
}

int main() {
    int X;
    scanf("%d", &X);

    if (X < 2 || X > 32750) {
        return 1;
    }

    if (is_prime(X)) {
        printf("prima\n");
    } else {
        printf("bukan prima\n");
    }

    return 0;
}
