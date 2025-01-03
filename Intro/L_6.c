// Lengkapilah prototipe di bawah ini untuk menghitung luas lingkaran jika diketahui jari-jarinya

// Rumus: L = π ×  R2, dengan L menunjukkan luas lingkaran,  R  menunjukkan jari-jari lingkaran, dan πbernilai 3.14.


// Spesifikasi Input
// Satu baris berisi bilangan riil,  R (0 < R ≤ 100).

// Spesifikasi Output
// Satu baris berisi luas lingkaran dengan jari-jari R, dengan dua angka di belakang koma.



// For example:

// Input	Result
// 2
// 12.56
// 10
// 314.00

/*Program : LuasLingkaran.c
* Deskripsi : Menghitung Luas Lingkaran dari Jari-Jarinya
* Nama : 
* tanggal/ versi :
*/

#include<stdio.h>
#include<math.h>

int main(){
    /* Kamus Data */
    float luas; // variable luas lingkaran
    float r;    // variable jari-jari lingkaran
    
    /* Algoritma */
    scanf("%f", &r);
    luas=3.14*r*r;
    
    
    printf("%.2f", luas);
    return 0;
}