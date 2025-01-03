// Buatlah (lengkapilah)  program untuk mengonversi suhu dalam satuan Celcius menjadi suhu dalam satuan Fahrenheit.

// Rumus : Suhu °F = °C × 1,8 + 32

// Spesifikasi Input
// Satu baris berisi suhu dalam satuan Celcius dengan format bilangan riil, dengan jangkauan -100 < suhu dalam Celcius < 100.

// Spesifikasi Output
// // Satu baris berisi nilai suhu dalam satuan Fahrenheit dengan dua angka di belakang koma.

/*Program : CelciusToFahrenheit.c
* Deskripsi : Mengonversi suhu dalam celcius ke fahrenheit
* Nama : 
* tanggal/ versi :
* Catatan: °F = °C × 1,8 + 32
*/

#include<stdio.h>
#include<math.h>

int main(){
    /* Kamus Data */
    float celcius, fahrenheit;
    
    /* Algoritma */
    scanf("%f", &celcius);
    fahrenheit = celcius*1.8+32;
    
    printf("%.2f", fahrenheit);
    
}