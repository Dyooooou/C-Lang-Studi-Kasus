// Buatlah sebuah program untuk menghitung jumlah kemunculan tiga buah huruf berpasangan (tidak terpisah oleh spasi) yang ada di dalam sebuah array karakter, dengan ketentuan bahwa huruf besar dengan huruf kecil dianggap sama.

// Spesifikasi Input

// Baris pertama berisi sebuah teks dengan jumlah karakter maksimal 40 huruf.
// Baris kedua berisi sebuah huruf utama yang akan dicari.
// Baris ketiga dan keempat berisi huruf-huruf yang mengikuti huruf utama .

// Spesifikasi Output
// Satu baris berisi sebuah bilangan bulat yang menunjukkan banyaknya kemunculan tiga huruf berpasangan tersebut
// For example:

// Input	Result
// Politeknik Negeri Bandung
// o
// l
// i
// 1
// Kakak beradik itu sangat mirip
// k
// a
// k
// 2

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[41];      // Array untuk menyimpan teks (maksimal 40 karakter + 1 untuk null-terminator)
    char mainChar, pair1, pair2; // Huruf utama dan pasangan-pasangannya
    int count = 0;      // Counter untuk kemunculan

    // Input teks
    printf("Masukkan teks (maksimal 40 karakter): ");
    fgets(text, sizeof(text), stdin);

    // Menghapus newline di akhir input
    text[strcspn(text, "\n")] = '\0';

    // Input huruf utama dan pasangan-pasangannya
    printf("Masukkan huruf utama: ");
    scanf(" %c", &mainChar);
    printf("Masukkan pasangan huruf pertama: ");
    scanf(" %c", &pair1);
    printf("Masukkan pasangan huruf kedua: ");
    scanf(" %c", &pair2);

    // Normalisasi ke huruf kecil untuk perbandingan tanpa case-sensitive
    mainChar = tolower(mainChar);
    pair1 = tolower(pair1);
    pair2 = tolower(pair2);

    // Loop untuk mencari kombinasi huruf
    for (int i = 0; i < strlen(text) - 2; i++) {
        if (tolower(text[i]) == mainChar &&
            tolower(text[i + 1]) == pair1 &&
            tolower(text[i + 2]) == pair2) {
            count++;
        }
    }

    // Output hasil
    printf("%d\n", count);

    return 0;
}

