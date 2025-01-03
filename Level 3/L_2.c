// Diketahui sebuah array 1 dimensi bertipe char bernama X dengan isi sebagai berikut:

// J	T	K	P	o	l	b	a	n
// Buatlah program untuk memeriksa apakah huruf yang berpasangan ada di dalam array atau tidak. (Huruf kecil dan besar dianggap sama.)

// Spesifikasi Input
// Satu baris berisi dua buah karakter alfabet, masing-masing merupakan huruf yang dicari bersama pasangannya

// Spesifikasi Output
// Satu baris berisi “ada” jika huruf pertama yang dicari berada tepat setelah huruf kedua yang dicari, atau “tidak ada” jika huruf pertama tidak ada atau tidak berada tepat setelah huruf pasangannya
// For example:

// Input	Result
// L o
// ada
// b a
// tidak ada

#include <stdio.h>
#include <ctype.h>

int main() {
    char X[] = {'J', 'T', 'K', 'P', 'o', 'l', 'b', 'a', 'n'}; // Array data
    char first, second;
    int found = 0;

    // Input huruf pertama dan kedua
    printf("Masukkan dua huruf (dipisahkan dengan spasi): ");
    scanf(" %c %c", &first, &second);

    // Ubah ke huruf kecil untuk menyamakan perbandingan
    first = tolower(first);
    second = tolower(second);

    // Cari apakah huruf pertama berada tepat setelah huruf kedua
    for (int i = 0; i < sizeof(X) / sizeof(X[0]) - 1; i++) {
        if (tolower(X[i]) == second && tolower(X[i + 1]) == first) {
            found = 1;
            break;
        }
    }

    // Output hasil
    if (found) {
        printf("ada\n");
    } else {
        printf("tidak ada\n");
    }

    return 0;
}

