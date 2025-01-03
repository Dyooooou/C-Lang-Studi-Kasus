// Diketahui sebuah array satu dimensi bertipe char bernama X dengan 10 elemen berisi sebagai berikut:

// J	T	K	P	o	l	b	a	n

// Buatlah program untuk memeriksa apakah suatu huruf berada di array X atau tidak. (Dalam melakukan pencarian, huruf kecil dan besar dianggap sama.)

// Spesifikasi Input
// Satu baris berisi sebuah huruf yang ingin dicari di array X.

// Spesifikasi Output
// Satu baris berisi “ada” jika huruf yang dicari ditemukan, atau “tidak ada” jika huruf yang dicari tidak ditemukan.

// For example:

// Input	Result
// t
// ada
// X
// tidak ada

#include <stdio.h>
#include<ctype.h>

int main() {
	/* Kamus data */
	char X[10] = "JTKPolban";
	char huruf;
	int ketemu = 0;

	/* Algoritma */
	scanf("%c", &huruf);
	huruf = toupper(huruf);
	for (int i = 0; i < 10; i++){
	    if (toupper(X[i]) == huruf){
	        ketemu = 1;
	    }
	}
    if (ketemu){
        printf("ada");
    } else {
        printf("tidak ada");
    }
	return 0;
}
