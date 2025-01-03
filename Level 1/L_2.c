// Buatlah sebuah program untuk menentukan apakah suatu bilangan termasuk bilangan ganjil atau genap.


// Spesifikasi Input
// Satu baris berisi bilangan bulat X (0 < X < 100).

// Spesifikasi Output
// Satu baris berisi “ganjil” (tanpa tanda petik) jika X merupakan bilangan ganjil, atau “genap” jika X merupakan bilangan genap.


// For example:

// Input	Result
// 5
// ganjil
// 2
// genap
#include <stdio.h>

int main() {
	/* Kamus data */
	int angka;

	/* Algoritma */
	scanf("%d", &angka);

	if (angka%2==1 ) {
		printf("ganjil\n");
	} else {
		printf("genap\n");
	}

	return 0;
}