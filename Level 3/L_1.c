// Buatlah sebuah program untuk membandingkan dua buah kata pada array karakter dengan maksimal masing-masing berjumlah 10 elemen.

// Huruf besar berbeda dengan huruf kecil. Gunakan kode ASCII untuk membandingkan.
// Spesifikasi Input

// Baris pertama dan baris kedua masing-masing berisi array karakter K1 dan K2 dengan maksimal 10 elemen.

// Spesifikasi Output


// Baris pertama berisi:

// 0 jika K1 = K2
// -N jika K1 < K2
// +N jika K1 > K2
// dengan N menyatakan perbedaan/selisih kode ASCII dari karakter pertama yang berbeda pada kedua kata yang dibandingkan.

// Baris kedua berisi sebuah bilangan bulat yang menyatakan posisi karakter pertama yang berbeda dari proses perbandingan K1 dan K2, atau berisi 0 jika K1 = K2.
// For example:

// Input	Result
// aa
// aba-aba
// -1
// 2
// Sayah
// Saya
// +104
// 5
// Saya
// Saya
// 0
// 0
// Saya
// saya
// -32
// 1

#include <stdio.h>

#include <stdio.h>

int main() {
    char K1[11], K2[11]; // Array karakter (maksimal 10 elemen + 1 untuk null-terminator)
    int i = 0, difference = 0, position = 0;

    // Input array karakter K1 dan K2
    printf("Masukkan kata pertama (maksimal 10 karakter): ");
    scanf("%10s", K1);
    printf("Masukkan kata kedua (maksimal 10 karakter): ");
    scanf("%10s", K2);

    // Membandingkan kedua array karakter
    while (K1[i] != '\0' || K2[i] != '\0') {
        if (K1[i] != K2[i]) {
            difference = K1[i] - K2[i];
            position = i + 1; // Posisi 1-based
            break;
        }
        i++;
    }

    // Output hasil selisih
    if (difference > 0) {
        printf("+%d\n", difference); // Menambahkan tanda '+' jika positif
    } else {
        printf("%d\n", difference);
    }

    // Output posisi karakter berbeda
    printf("%d\n", position);

    return 0;
}


