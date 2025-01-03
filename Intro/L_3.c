// Tampilkan semua bilangan bulat dari X hingga  Y, masing-masing dalam satu baris.

// Spesifikasi Input
// Satu baris berisi dua buah bilangan bulat X dan Y (0 ≤ X ≤ Y ≤ 100).

// Spesifikasi Output
// Seluruh bilangan bulat dari X hingga  Y, masing-masing dalam satu baris.
//Tulis header file disini

//Tulis pre processor disini

//Tulis main program disini

#include<stdio.h>

int main(){
    int X, Y, i;
    scanf("%d %d", &X, &Y);
    for(i=X;i<=Y;i=i+1){
    printf("%d \n", i);
    } 
    return 0;
}