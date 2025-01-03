// Dibaca sebuah bilangan bulat X dan Y. 

// Tampilkan  semua bilangan bulat dari X  hingga  Y dalam satu baris (dipisahkan oleh 1 spasi).

// Spesifikasi Input
// Satu baris berisi dua buah bilangan bulat X dan Y (0 ≤ X ≤ Y ≤ 100), dipisahkan oleh 1 spasi.

// Spesifikasi Output
// Satu baris berisi seluruh bilangan bulat dari X hingga Y, dipisahkan oleh spasi kecuali sebelum bilangan pertama

/* 
Deskripsi : menampilkan bilangan dua kali lipat
Nama /Author : Julian Dio Saputra
Tanggal/versi : 21 Oktober 2024
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    int X, Y;
    
    scanf("%d %d", &X, &Y);
    for(int i=X; i <=Y; i++){
        printf("%d ", i);
    }
    return 0;
}