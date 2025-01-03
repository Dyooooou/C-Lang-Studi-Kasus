// Lengkapilah prototipe program berikut untuk menentukan apakah suatu bilangan merupakan kelipatan 3 dan 4 atau tidak

// Variabel cek menyimpan nilai kebenaran dari kondisi di atas. Variabel cek bernilai 1 jika bilangan yang dimasukkan merupakan kelipatan 3 dan 4. Jika tidak, variabel cek bernilai 0.
// Spesifikasi Input

// Satu baris berisi bilangan bulat X (0 < X < 100).

// Spesifikasi Output

// Satu baris berisi nilai variabel cek.

// For example:

// Input	Result
// 12
// 1
// 9
// 0
#include <stdio.h>

int main() {
	/* Kamus data */
	int bilangan;
	int cek; // berisi 1 jika bilangan merupakan kelipatan 3 dan 4
	         // berisi 0 jika sebaliknya

	/* Algoritma */
	cek = 0;
	scanf("%d", &bilangan);

	if (bilangan%3==0 && bilangan%4==0 ) {
		cek = 1;
	}

	printf("%d\n", cek);

	return 0;
}

