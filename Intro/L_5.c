// Buatlah (lengkapilah) program di bawah ini, untuk menghitung total biaya yang harus dibayar, jika diketahui biaya awal dan persen bunga pembayarannya.


// Spesifikasi Input
// Baris pertama berisi sebuah bilangan riil yang menyatakan biaya awal, di mana biaya awal selalu positif dan kurang dari 150000 (0 < biaya awal < 150000).

// Baris kedua berisi sebuah bilangan riil yang menyatakan bunga dalam persen (0 ≤ bunga ≤ 100) .



// Spesifikasi Output
// Satu baris berisi total biaya yang harus dibayar dengan dua angka di belakang koma.


// For example:

// Input	Result
// 100000
// 2
// 102000.00
// 50000
// 4
// 52000.00

/*Program : BiayaSetelahBunga.c
* Deskripsi : Menentukan Biaya yang harus dibayar
* Nama : Julian Dio Saputra
* tanggal/ versi : 28 Oktober 2024
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    float x, b, totalBiaya;
    
    /* Algoritma */
    scanf("%f %f", &x, &b);
    totalBiaya= x + (x*b/100);
    
    printf("%.2f", totalBiaya);
    return 0;
}