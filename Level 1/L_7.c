// Buatlah sebuah program untuk menentukan bilangan terbesar dari tiga bilangan yang dimasukkan.



// Spesifikasi Input

// Tiga baris, masing-masing berisi satu bilangan bulat Xi (-30 ≤ Xi ≤ 30).

// Spesifikasi Output

// Satu baris berisi bilangan bulat terbesar dari tiga bilangan bulat input.

// For example:

// Input	Result
// 12
// 5
// 3
// 12
// 9
// 6
// 10
// 10

 #include<stdio.h>
 
 int main(){
    int x, y, z, maks;
    scanf("%d %d %d", &x,&y,&z);
    
    if (x >= y && x >= z){
        maks = x;
    }
    if (y >= x && y >= z){
        maks = y;
    }
    if (z >= x && z >= y){
        maks = z;
    }
    printf("%d", maks);
}
