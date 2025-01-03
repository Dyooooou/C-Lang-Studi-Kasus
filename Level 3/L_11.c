// Buatlah program untuk menampilkan posisi kemunculan huruf vokal yang ada di sebuah array 2 dimensi berordo 3 × 3.

// Spesifikasi Input

// Tiga baris, masing-masing berisi tiga buah karakter yang dipisahkan satu spasi yang merupakan isi dari array 2 dimensi. Dijamin tidak ada huruf yang sama satu sama lain (unik).

// Spesifikasi Output


// Satu baris untuk setiap kemunculan huruf vokal pada array 2D, dengan format: “H: (x,y)” di mana H menunjukkan huruf vokal yang dimaksud, x menunjukkan baris kemunculan huruf vokal pada array 2 dimensi, dan y menunjukkan kolom kemunculan huruf vokal pada array 2 dimensi.

// Jika tidak ada huruf vokal sama sekali pada array, tampilkan “tidak ada huruf vokal” dalam satu baris.
// For example:

// Input	Result
// s D c
// Q w r
// p M k
// tidak ada huruf vokal
// U b a
// c O n
// w y r
// U: (1,1)
// a: (1,3)
// O: (2,2)

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char array[3][3]; // Array 2 dimensi 3x3
    char vowels[] = "aeiouAEIOU"; // Huruf vokal
    int found = 0; // Flag untuk menandai jika huruf vokal ditemukan

    // Input elemen-elemen array
    printf("Masukkan elemen-elemen array 3x3 (huruf dipisahkan spasi):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %c", &array[i][j]);
        }
    }

    // Periksa huruf vokal pada array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (strchr(vowels, array[i][j])) { // Jika elemen adalah huruf vokal
                printf("%c: (%d, %d)\n", array[i][j], i + 1, j + 1);
                found = 1;
            }
        }
    }

    // Jika tidak ada huruf vokal
    if (!found) {
        printf("tidak ada huruf vokal\n");
    }

    return 0;
}
