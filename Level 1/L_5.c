// Buatlah sebuah program untuk menentukan apakah suatu bilangan termasuk bilangan ganjil atau genap.

// Spesifikasi Input

// Satu baris berisi bilangan bulat X (0 ≤ X ≤ 100).

// Spesifikasi Output

// Satu baris berisi “ganjil” (tanpa tanda petik) jika X merupakan bilangan ganjil, “genap” jika X merupakan bilangan genap, atau “nol” jika X merupakan bilangan nol.

// For example:

// Input	Result
// 14
// genap
// 75
// ganjil

#include <stdio.h>

int main() {
	/* Kamus data */
	int bilangan;

	/* Algoritma */
	scanf("%d", &bilangan);
	if (bilangan != 0){
	    if (bilangan % 2 == 1){
	        printf("ganjil");
	        }else{
	            printf("genap");
	        }
	    }else{
	        printf("nol");
	    }

	return 0;
}