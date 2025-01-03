// Pada kata “Politeknik”, ada delapan ragam jenis huruf, yaitu ‘p’, ‘o’, ‘l’, ‘i’ (yang muncul dua kali), ‘t’, ‘e’, ‘k’ (yang muncul dua kali), dan ‘n’.

// Buatlah sebuah program untuk menghitung ragam jenis huruf dari sebuah string yang dibaca. (Huruf kecil dan huruf besar dianggap sama.)
// Spesifikasi Input

// Satu baris berisi string/array karakter dengan panjang maksimal 26 elemen. String dijamin hanya berisi karakter alfabet.

// Spesifikasi Output

// Satu baris berisi bilangan bulat yang menyatakan jumlah ragam jenis huruf pada string yang dibaca.

// For example:

// Input	Result
// Politeknik
// 8
// Momon
// 3

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char huruf[27];
    int count;
    int ragam[26] = {0};
    
    fgets(huruf, 27, stdin);
    for (int i= 0; i < strlen(huruf);i= i + 1){
        char baru = tolower(huruf[i]); //toupper malah gabisa
        if (isalpha(baru) && ragam[baru - 'a'] == 0){
            ragam[baru - 'a'] = 1;
            count = count + 1;
        }
    }
    
    printf("%d\n", count);
    return 0;
//    int panjang = strlen(huruf);
//    for ()
}

