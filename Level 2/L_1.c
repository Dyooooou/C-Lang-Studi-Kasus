// Buatlah sebuah program untuk mengubah suatu kalimat ke dalam bentuk “alay”.

// Ketentuannya adalah:

// Huruf

// Diubah menjadi

// A atau a

// 4

// I atau i

// 1

// Z atau z

// 2

// E atau e

// 3

// G atau g

// 6

// J atau j

// 7

// B atau b

// 8



// Spesifikasi Input

// Satu baris berisi string/array karakter dengan panjang maksimal 50 karakter.

// Spesifikasi Output
// Satu baris berisi string yang sudah berada dalam bentuk “alay”.
// For example:

// Input	Result
// Karya teknologi Indonesia telah mendunia
// K4ry4 t3knolo61 1ndon3s14 t3l4h m3ndun14
// Aku ganteng
// 4ku 64nt3n6
#include <stdio.h>
#include <string.h>

void ubahKeAlay(char str[]) {
    for (int i = 0; i < strlen(str);i=i+1) {
        // Ubah karakter sesuai ketentuan
        switch (str[i]) {
            case 'A': case 'a': str[i] = '4'; 
            break;
            case 'I': case 'i': str[i] = '1'; 
            break;
            case 'Z': case 'z': str[i] = '2'; 
            break;
            case 'E': case 'e': str[i] = '3'; 
            break;
            case 'G': case 'g': str[i] = '6'; 
            break;
            case 'J': case 'j': str[i] = '7'; 
            break;
            case 'B': case 'b': str[i] = '8'; 
            break;
        }
    }
}

int main() {
    char kalimat[51];

    fgets(kalimat, sizeof(kalimat), stdin);

    
    ubahKeAlay(kalimat);
    printf("%s", kalimat);
    
    return 0;
}

