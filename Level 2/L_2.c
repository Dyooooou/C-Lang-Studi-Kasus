// Buatlah sebuah program untuk menentukan apakah suatu karakter merupakan huruf vokal atau bukan.

// Spesifikasi Input

// Satu baris berisi satu buah karakter yang akan diperiksa.

// Spesifikasi Output

// Satu baris berisi “true” jika karakter yang dimasukkan merupakan huruf vokal, atau “false” jika sebaliknya.

// For example:

// Input	Result
// a
// true
// D
// false
int main() {
    char karakter; 

    
    scanf(" %c", &karakter); 


    if (karakter == 'a' || karakter == 'i' ||karakter =='o' || karakter == 'e' || karakter == 'u' || karakter == 'A' || karakter == 'E' || karakter == 'U' || karakter == 'O' || karakter == 'I') {
        printf("true");
    } else{
       printf("false");

    }
    
    return 0;
}