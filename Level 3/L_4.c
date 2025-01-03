// Buatlah sebuah program untuk membalik array karakter yang dimasukkan.

// Spesifikasi Input

// Satu baris berisi teks dengan panjang maksimal 10 karakter.

// Spesifikasi Output

// Satu baris berisi teks yang sudah dibalik.

// For example:

// Input	Result
// Saya
// ayaS
// programmer
// remmargorp
#include <stdio.h>
#include <string.h>

int main() {
    char text[11]; // Array untuk menyimpan teks (maksimal 10 karakter + 1 untuk null-terminator)
    int length;

    // Input teks
    printf("Masukkan teks (maksimal 10 karakter): ");
    scanf("%10s", text);

    // Menghitung panjang teks
    length = strlen(text);

    // Membalik teks
    printf("Hasil dibalik: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }
    printf("\n");

    return 0;
}

