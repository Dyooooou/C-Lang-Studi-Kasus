// Buatlah sebuah program untuk menampilkan N buah karakter terkanan dari sebuah array karakter.

// Spesifikasi Input


// Baris pertama berisi sebuah string/array karakter S dengan panjang maksimal 30 karakter.

// Baris kedua berisi sebuah bilangan bulat N (0 < N ≤ panjang karakter S).
// Spesifikasi Output

// Satu baris berisi N buah karakter terkanan dari string S.

// For example:

// Input	Result
// Politeknik
// 10
// Politeknik
// S O S
// 3
// O S

#include<stdio.h>
#include<string.h>

int main(){
    char S[31];
    int N;
    
    fgets(S, 31, stdin);
    S[strcspn(S, "\n")]=0;
    scanf("%d", &N);
    int panjang = strlen(S);
    if (N > 0 && N <= panjang){
        for (int i = panjang - N; i < panjang; i=i+1){
            printf("%c", S[i]);
        }
    }
    return 0;
}
