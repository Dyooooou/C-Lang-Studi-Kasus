// Buatlah sebuah program untuk menghitung volume limas dengan alas segi empat.

// Rumus: V = 1 / 3 × P × L × T, dengan V menunjukkan volume, P menunjukkan panjang alas limas, L menunjukkan lebar alas limas, dan T menunjukkan tinggi limas.


// Spesifikasi Input
// Baris pertama berisi bilangan riil P. Baris kedua berisi bilangan riil L. Baris ketiga berisi bilangan riil T.

// Jangkauan nilai ketiga variabel tersebut adalah 0 < P, L, T < 20.

// Spesifikasi Output
// Satu baris berisi volume limas dengan enam angka di belakang koma.



// For example:

// Input	Result
// 3
// 4
// 7
// 28.000000
// 10
// 1
// 15
// 50.000000

#include <stdio.h>

int main() {
	/* Kamus data */
	float volume;
	float panjang, lebar, tinggi;

	/* Algoritma */
	scanf("%f\n %f\n %f", &panjang, &lebar, &tinggi);
	volume=(panjang*lebar*tinggi)/3;


	printf("%f", volume);
	return 0;
}
