// Suatu benda dikatakan berwujud cair jika suhunya berada di kisaran 0 s.d. 100 °C. Selain itu, benda dikatakan berwujud non cair.

// Buatlah sebuah program untuk menentukan wujud suatu benda jika diketahui suhunya.


// Spesifikasi Input
// Satu baris berisi bilangan riil yang menunjukkan suhu benda (-150 ≤ suhu ≤ 150).

// Spesifikasi Output
// Satu baris berisi “berwujud cair” (tanpa tanda petik) jika benda berwujud cair, atau berisi “berwujud non cair” jika benda berwujud non cair.



// For example:

// Input	Result
// 5
// berwujud cair
// 150
// berwujud non cair

#include <stdio.h>

int main() {
	/* Kamus data */
	float suhu;

	/* Algoritma */
	scanf("%f", &suhu);

	if (suhu >= 0 && suhu <=100) {
		printf("berwujud cair\n");
	} else {
		printf("berwujud non cair\n");
	}

	return 0;
}
