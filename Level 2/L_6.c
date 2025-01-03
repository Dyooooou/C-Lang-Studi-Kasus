// Seorang programmer menulis suatu teks pada sebuah kertas dan sekarang dia ingin mengetahui berapa banyak "lubang" yang terdapat pada teks tersebut.

// Apa yang dimaksud dengan “lubang”?

// Huruf ‘A’, ‘D’, ‘O’, dan ‘P’ mempunyai satu lubang. Huruf ‘B’ mempunyai 2 lubang. Sedangkan huruf ‘C’, ‘E’, ‘F’, dan lainnya tidak memiliki lubang.

//  Jadi, dapat dikatakan bahwa jumlah lubang pada teks tersebut sama dengan jumlah total lubang dari setiap huruf yang ada.

//  Bantulah programmer tersebut untuk menghitung berapa banyak lubang yang terdapat pada sebuah teks dengan membuat sebuah program!

//  (Sumber: http://www.codechef.com/problems/HOLES)

// Spesifikasi Input

// Satu baris berisi string/array karakter dengan panjang maksimal 50 karakter, hanya terdiri dari huruf-huruf alfabet, dan hanya berupa huruf kapital.

// Spesifikasi Output

// Satu baris berisi bilangan bulat yang menyatakan jumlah lubang pada string tersebut.

// For example:

// Input	Result
// BANDUNG
// 4
// JUARA
// 3
#include<stdio.h>
#include<string.h>

int main(){
    char kata[51];
    int count = 0;
    
    fgets(kata, 51, stdin);
    for (int i = 0; i < strlen(kata); i=i+1){
        char huruf = kata[i];
        if (huruf == 'A' || huruf == 'D' || huruf == 'O' || huruf == 'P' || huruf == 'R' || huruf == 'Q'){
            count = count + 1;
        }else if (huruf == 'B'){
            count = count + 2;
        }       else { 
            count = count;
        }
    }
    printf("%d", count);
    return 0;
    
}