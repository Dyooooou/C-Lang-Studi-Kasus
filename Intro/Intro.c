// Dibaca sebuah bilangan bulat X dan Y. 

// Jumlahkan bilangan X dan Y.

// Spesifikasi Input
// Satu baris berisi dua buah bilangan bulat X dan Y (0 ≤ X ≤ Y ≤ 100), dipisahkan oleh 1 spasi.

// Spesifikasi Output
// Satu baris berisi hasil penjumlahan X dan Y

/* 
Deskripsi : menampilkan bilangan dua kali lipat
Nama /Author : Julian Dio Saputra
Tanggal/versi : 21 Oktober 2024
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    int X, Y, result;
    
    scanf("%d %d", &X, &Y);
    result = X+Y;
    printf("%d", result);
    return 0;
}